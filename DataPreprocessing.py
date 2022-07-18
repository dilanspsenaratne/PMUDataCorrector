"""
Author: Dilan Senaratne
Date: 07/11/2022
Python Version: 3.7
Objective: Preprocessing power network information

This script reads the network information saved as .csv files as given in INPUTS. Then it creates the System Y bus and H matrices.
Next step is to decompose the network based on PMU placement and topology.
Finally it saves the useful information as given in OUTPUTS

INPUTS :
BaseMVA : The system MVA base used for converting power into per unit quantities
DigitalTAG : The tag name in RTAC that used to send Boolean output of the presence of the attack
BusMatrix : The network bus information
BranchMatrix : The network branch information
PMUBuses : PMU locations
PMUBranches : Branches that measured by PMUs

OUTPUTS :
RTACCode : RTAC code portion to use in main program
RTACTAGProcessor : RTAC Tag processor destination tag names and Source expression
Nzones : Number of identified zones in the network
Nmeasurements : Number of measurements in reach zone
Npmus : Number of PMUs in each zone
Thresholds : Threshold values for each zone
Zonenames : File names of PMU indices and OrthoH matrices
Zone_pmus_indexi : Set of indices in zone i measurement vector
Zone_OrthoH_matrixi : Model matrix of zone
"""

import pandas as pd
import numpy as np

### change the bus number into consecrative values
## INPUTS : data - data fram to change, filed - which column to change, total_buses - Array with all the buses
## OUTPUTS : data - data fram after chnaging bus numbers
def changeBusNumber(data, filed, total_buses):
    for i in range(0, data.shape[0]):
        actual_val = data[filed][i]
        actual_val_index = total_buses.index(actual_val)        ## Find the index of the bus number in total_buses
        data[filed][i] = actual_val_index                       ## Change the bus number

    return data


### Generate Y bus matrix
## INPUTS : baseMVA - base MVA value, data_bus - Bus matrix, data_branch - Branch matrix
## OUTPUTS : Power network Y bus
def makeYbus(baseMVA, data_bus, data_branch):
    resis = data_branch['BR R']             ## Extract useful quantities
    react = data_branch['BR X']
    tap_val = data_branch['TAP']
    tap_shift = data_branch['SHIFT']
    Bc = stat * data_branch['BR B']

    Ys = stat / (resis + 1j * react)            ## Admittance value
    tap_nnz_index = tap_val.nonzero()[0].tolist()       ## Non zero tap locations
    tap = np.ones((numBranch))
    tap[tap_nnz_index] = tap_val[tap_nnz_index]         ## All zero tap locations are converted to 1

    shift_val = np.exp(1j * np.pi / 180 * tap_shift)  ## element wise product
    tap = tap * shift_val  ## add phase shifters

    ## Please refer MATPOWER user manual
    Ytt = Ys + 1j * Bc / 2                          ## Calculate four element for the Y matrix for each branch
    Yff = Ytt / (tap * np.conj(tap))
    Yft = - Ys / np.conj(tap)
    Ytf = - Ys / tap

    Ysh = (data_bus['GS'] + 1j * data_bus['BS']) / baseMVA      ## Shunt element

    zero_temp = np.zeros((numBus, numBus))
    Ybus = zero_temp + 1j * zero_temp
    Cf = np.zeros((numBranch, numBus))
    Ct = np.zeros((numBranch, numBus))

    # Get the ones in each  from bus and tobus
    for ii in range(0, numBranch):
        f_val = FromBus[ii]
        t_val = ToBus[ii]
        Cf[ii, f_val] = 1
        Ct[ii, t_val] = 1

    ## Diagonal entries
    Yff_repeat = np.tile(np.array(Yff)[:, np.newaxis], (1, numBus))
    temp_total_Yff = Yff_repeat * Cf  # Put all  Yff in  from bus position
    total_Yff = np.matmul(Cf.transpose(),
                          temp_total_Yff)  # Sum all the Yff. This contain all the from bus entries correspond to diagonal

    Ytt_repeat = np.tile(np.array(Ytt)[:, np.newaxis], (1, numBus))
    temp_total_Ytt = Ytt_repeat * Ct  # Put  all Ytt in  to bus positions
    total_Ytt = np.matmul(Ct.transpose(), temp_total_Ytt)  # Sum all the Ytt. same as above

    # Off diagonal entries
    Yft_repeat = np.tile(np.array(Yft)[:, np.newaxis], (1, numBus))
    Y_frombus_temp = Cf * Yft_repeat  # Get the matrix contain from bus values (g12 etc)
    Y_frombus = np.matmul(Ct.transpose(), Y_frombus_temp)  # Added all the values (Fill lower triangle)

    Ytf_repeat = np.tile(np.array(Ytf)[:, np.newaxis], (1, numBus))
    Y_tobus_temp = Ct * Ytf_repeat
    Y_tobus = np.matmul(Cf.transpose(), Y_tobus_temp)  # Added all the values (Fill upper triangle)

    # Shunt values
    Yshunt = zero_temp + 1j * zero_temp
    for ii in range(0, numBus):
        Yshunt[ii, ii] = Ysh[ii]

    Y = Ybus + total_Yff + total_Ytt + Y_frombus + Y_tobus + Yshunt  # Total Ybus

    return Y


### Generate total H matrix
## INPUTS : data - branch matrix, Y - Y matrix, FromBus - From bus numbers of the branches, ToBus - To bus numbers of the branches,
## stat - Branches Status , numBus - # buses, numBranch - # branches, parallel_list - list of parallel branches,
## OUTPUTS : H matrix for entier network
def linearOperator(data, Y, FromBus, ToBus, stat, numBus, numBranch, parallel_list):
    data['TAP'].replace(0, 1, inplace=True)         ## Replace 0 tap values to 1
    tapValue = data['TAP']
    g_val = []
    b_val = []

    for ii in range(0, numBranch):
        Y_val = -Y[FromBus[ii], ToBus[ii]]
        g_val.append(np.real(Y_val))            ## Array with conductance values
        b_val.append(np.imag(Y_val))            ## Array with susceptance values

    bs = (data['BR B'] / 2) * stat              ## Array with line charging susceptance

    #### combine parallel lines
    for ii in parallel_list:
        g_val[ii] = g_val[ii] / 2
        b_val[ii] = b_val[ii] / 2

    Y_vec = np.array(g_val) + 1j * np.array(b_val)      ## In complex form

    Iflow = np.zeros((2 * numBranch, numBus), dtype=np.complex_)
    for br in range(0, numBranch):
        Iflow[br, FromBus[br]] = (Y_vec[br] + 1j * bs[br]) / tapValue[br]   ##Current flow in positive direction
        Iflow[br, ToBus[br]] = -(Y_vec[br])

        Iflow[numBranch + br, ToBus[br]] = Y_vec[br] * tapValue[br] + 1j * bs[br]       ## Current flow in negative direction
        Iflow[numBranch + br, FromBus[br]] = -(Y_vec[br])

    H = np.identity(numBus, dtype=np.complex_)          ## Corresponding to voltage phasors
    HH = np.append(H, Iflow, axis=0)

    return HH


### Partition the total network into zones
## INPUTS : pmuBuses_ori - PMUBuses.csv , pmuBranches - PMUBranches.csv , numBus - # buses, numBranch - # branches,
## FromBus - From bus numbers of the branches, ToBus - To bus numbers of the branches

## OUTPUTS : zone_bus_pmu - In each zone measurement vector, index of the pmu voltage phasor corresponding to the measurement vector in the zone
## zone_meas_infor - index set of each pmu measurement in each zone corresponding to the total measurement vector
## zone_Nbuses - number of buses in each zone with a pmu
## zone_bus_infor - Bus number in each zone
## YTagsRTAC - The client tag names that we need to use in RTAC Y vector creation.
## YzoneMes - The number of measurements in each zone
## YTagsRTACProcessor - The server tags to be used in RTAC TAG processor
## YTagBias - The angle bias source tags to be used on RTAC TAG processor
## zone_measurements - The set of measurements in each zone in correct order
def findZone(pmuBuses_ori, pmuBranches, numBus, numBranch, FromBus, ToBus):
    fromBranch = pmuBranches['PMU BUS']             ## From bus of the PMU measured branch
    toBranch = pmuBranches['Connecting BUS']        ## To bus of the PMU measured branch
    PMUMatrix = pmuBuses_ori['PMU BUS']             ## Buses with PMUs

    pmuBuses = PMUMatrix.to_list()
    pmuBuses = sorted(set(pmuBuses))
    df_length = pmuBranches.shape[1]  ## How much data has been given to calculate threshold

    zones = 0  ## number of zones
    visitedBuses = np.zeros((numBus, 1))  ## if visited this is 1

    zone_Nbuses = []        ### number of buses in each zone with a pmu
    zone_bus_infor = []     ### Bus number of each zone
    zone_meas_infor = []    ### index set of each pmu measurement in each zone corresponding to the total measurement vector
    zone_bus_pmu = []       ### In each zone measurement vector, index of the pmu voltage phasor corresponding to the measurement vector in the zone
    YTagsRTAC = []  ### The tag names that we need to use in RTAC Y vector creation. This is the total vector.
    YzoneMes = []  ### this list contain the number of measurements in each zone. so we can extract the measurements for a particular zone
    YTagsRTACProcessor = []         ### the server tags to be used in RTAC TAG processor
    YTagBias = []               ## The angle bias source tags to be used on RTAC TAG processor
    zone_measurements = []      ### The set of measurements in each zone in correct order

    for bu in range(0, numBus):  ## go through each buses and add to a zone if not visited
        zoneBuses = []
        tempZoneBuses = []  ## tempary adding each bus
        if (visitedBuses[bu] == 0):  ### not visited
            zones += 1
            visitedBuses[bu] = 1  ## mark as visited

            zoneBuses.append(bu)            ## added to the list of buses for this zone

            fromIndex = fromBranch[fromBranch == bu].index.to_list()  ## index set of measured branches and bu is the from bus
            toIndex = toBranch[toBranch == bu].index.to_list()          ## index set of measured branches and bu is the to bus

            tempZoneBuses = tempZoneBuses + toBranch[fromIndex].values.tolist()  ## append all neighbouring buses
            tempZoneBuses = tempZoneBuses + fromBranch[toIndex].values.tolist()

            while tempZoneBuses:  ## go through all neighbours and add all their neighbours
                v = tempZoneBuses[0]

                if (visitedBuses[v] == 0):
                    zoneBuses.append(v)
                    visitedBuses[v] = 1

                    fromIndex = fromBranch[fromBranch == v].index.to_list()  ## index set of measured branches and v is a from bus
                    toIndex = toBranch[toBranch == v].index.to_list()

                    tempZoneBuses = tempZoneBuses + toBranch[fromIndex].values.tolist()
                    tempZoneBuses = tempZoneBuses + fromBranch[toIndex].values.tolist()

                tempZoneBuses.pop(0)            ## Remove the visited bus

            zoneBuses = sorted(zoneBuses)           ## This is the end of finding the zone


            ## After finding the zones, gather necessary information for each zone
            pmuMeas = []                            ## Store the index of each pmu measurement in this zone corresponding to the total measurement vector
            pmu_loc_inmesaurement = []              ## Store the index of voltage phasor in the measurement vector for this zone
            temp_zone_measurement = np.zeros([1, df_length - 4]) +1j*np.zeros([1, df_length - 4])             ## to save data given for threshold calculation
            zonePmus = np.intersect1d(pmuBuses, zoneBuses)  ### buses with PMU in this zone

            ## Going through each bus with PMUs
            for ii in zonePmus:
                pmu_loc_inmesaurement = pmu_loc_inmesaurement + [len(pmuMeas)]  ### The index of the voltage phasor in the measurement vector
                pmuMeas = pmuMeas + [ii]

                ### Following are just index (row) of the pmu branches where this pmu is listed. Did not use the fact that these are from and to bus according to the branch matrix
                fromIndex = fromBranch[fromBranch == ii].index.to_list()  ## index of measured branches that this bus is a from bus
                total_index = fromIndex  ## need to assume that pmu bus is in first column. Otherwise could not distinguish the branch wth two pmus and the parallel lines

                #### Need to identify correct order (i.e. from and to) of the above branche according to the branch matrix
                temp_from_index = []
                temp_to_index = []
                temp_location = []
                temp_tag_names = []
                temp_tag_namesD = []
                temp_measurement = np.zeros([1,df_length-4])            ## To concaternate measurement arrays

                ## Going through each row of PMU measured branch data frame
                for tt in total_index:
                    ### check the PMU is in from side
                    temp_f_bus = fromBranch[tt]  # get the bus number in first column  105
                    temp_t_bus = toBranch[tt]  ## this is the connecting bus  102

                    temp_ori_f_bus_index = FromBus[
                        FromBus == temp_f_bus].index.to_list()  ### the indices in the branch matrix where this pmu bus is from bus
                    ## Going though rows in branch matrix df in which this pmu is from bus
                    for jj in temp_ori_f_bus_index:
                        temp_ori_t_bus = ToBus[jj]  ### the to bus in the branch matrix
                        if temp_t_bus == temp_ori_t_bus:  ### the actual to bus in branch matrix == to bus listed in pmu branches. then they are in correct order as in branch matrix
                            temp_from_index = temp_from_index + [temp_f_bus]        # This is the from bus in branch matrix
                            temp_to_index = temp_to_index + [temp_t_bus]            # This is the to bus in branch matrix
                            temp_location = temp_location + [jj]                    # This is the location in branch matrix

                            temp_tag_names = temp_tag_names + [pmuBranches['TAG NAMES'][tt]]    # create tag name list
                            temp_tag_namesD = temp_tag_namesD + [pmuBranches['DTAG NAMES'][tt]] # create destnation tag name list
                            temp_mes = pmuBranches.iloc[tt, 4:df_length].to_numpy()             # Get the corresponding sample measurements
                            temp_mes = temp_mes[np.newaxis,:]
                            temp_measurement = np.append(temp_measurement,temp_mes,axis=0)

                    temp_ori_t_bus_index = ToBus[
                        ToBus == temp_f_bus].index.to_list()  ### the indices in the branch matrix where this f bus is to bus  102
                    ## Going though rows in branch matrix df in which this pmu is to bus
                    for jj in temp_ori_t_bus_index:
                        temp_ori_f_bus = FromBus[jj]  ### the from bus in the branch matrix  105
                        if temp_t_bus == temp_ori_f_bus:  ### the actual to bus in branch matrix == to bus listed in pmu branches. then they are in correct order as in branch matrix
                            temp_from_index = temp_from_index + [temp_t_bus]        # This is the from bus in branch matrix
                            temp_to_index = temp_to_index + [temp_f_bus]            # This is the to bus in branch matrix
                            temp_location = temp_location + [jj]                    # This is the location in branch matrix

                            temp_tag_names = temp_tag_names + [pmuBranches['TAG NAMES'][tt]]
                            temp_tag_namesD = temp_tag_namesD + [pmuBranches['DTAG NAMES'][tt]]
                            temp_mes = pmuBranches.iloc[tt, 4:df_length].to_numpy()
                            temp_mes = temp_mes[np.newaxis,:]
                            temp_measurement = np.append(temp_measurement, temp_mes, axis=0)

                temp_measurement2 = temp_measurement[1:temp_measurement.shape[0],:]         ## remove the first row

                # At the end we get six list of correct from bus, to bus, locations in branch matrix, the tag names and destination tag names
                # for this particular pmu measurement, and sample measurements for this pmu. However if there are parallel lines, then
                # there are duplicate entries. these entries can identify the index location on branch matrix.

                # Create a data fram
                list_of_tuples = list(zip(temp_from_index, temp_to_index, temp_location, temp_tag_names,temp_tag_namesD))
                temp_df = pd.DataFrame(list_of_tuples, columns=['frombus', 'tobus', 'locindex', 'tagnames','tagnamesD'])
                temp_df = pd.concat([temp_df, pd.DataFrame(temp_measurement2)], axis=1)
                temp_df = temp_df.sort_values('locindex')  ### we need tag names in the order of branch matrix

                # After that we need to handle parallel branches. For example if there is a parallel line, then we have total of 4 rows.
                # 1 row is correct, 2nd row locindex is correct but use same previous tag name
                # because tt is same. Then 3rd row tag name is correct but same previous locindex

                ### solution: go through each locindex. if there is a row with same locindex OR tagnames remove throse rows
                index_temp = temp_df['locindex'].values             # Index of the
                index_temp = np.unique(index_temp).tolist()  ## unique locindex
                for kk in index_temp:
                    dup_index = temp_df.loc[
                        temp_df['locindex'] == kk].index.to_list()  ### get all row indices with this locindex
                    temp_tagnames = temp_df['tagnames'][dup_index[0]]  ## get the tagname of the first selected row
                    del_index = dup_index[1:len(dup_index)]  ## remove all other rows
                    temp_df.drop(del_index, inplace=True)

                    dup_index = temp_df.loc[
                        temp_df['tagnames'] == temp_tagnames].index.to_list()  ## select rows of this same tag name
                    del_index = dup_index[1:len(dup_index)]  ## except first remove all
                    temp_df.drop(del_index, inplace=True)

                #### now construct the index location of the H according to the brnaches measured by this pmu
                fVal = temp_df.loc[temp_df['frombus'] == ii].index.to_list()  ### row index of from bus
                tVal = temp_df.loc[temp_df['tobus'] == ii].index.to_list()
                pmuBranchIndex = temp_df['locindex']

                # Positive direction
                temp = pmuBranchIndex[fVal].values + numBus * np.ones((len(
                    fVal)))  ## the values in pmuBranchIndex corresponding to fromIndex is the actual location in the measurement vector
                pmuMeas = pmuMeas + temp.astype(int).tolist()

                # Negative direction
                temp = pmuBranchIndex[tVal].values + numBus * np.ones(len(tVal)) + numBranch * np.ones(len(tVal))
                pmuMeas = pmuMeas + temp.astype(int).tolist()

                # get the row index in PMUbus where this pmu is
                pmu_loc_inmatrix = PMUMatrix[PMUMatrix == ii].index.to_list()

                ### get the given tag names
                YTagsRTAC = YTagsRTAC + pmuBuses_ori['TAG NAMES'][pmu_loc_inmatrix].to_list() + temp_df['tagnames'][fVal].to_list() + temp_df['tagnames'][tVal].to_list() # order incoming tag names
                YTagsRTACProcessor = YTagsRTACProcessor + pmuBuses_ori['DTAG NAMES'][pmu_loc_inmatrix].to_list() + temp_df['tagnamesD'][fVal].to_list() + temp_df['tagnamesD'][tVal].to_list()  #order outgoing tag names
                YTagBias = YTagBias + pmuBuses_ori['BTAG NAMES'][pmu_loc_inmatrix].to_list()    # order solution tag names


                ## Get the sample voltage phasor measurements
                temp_mes = pmuBuses_ori.iloc[pmu_loc_inmatrix, 4:df_length].to_numpy()
                temp_mes = stringToComplex(temp_mes)        ## convert to complex number
                temp_zone_measurement = np.append(temp_zone_measurement, temp_mes, axis=0)

                ## Get the sample current phasor measurements
                temp_index_list = np.arange(0,df_length-4,1).tolist()

                temp_mes = temp_df.loc[fVal, temp_index_list].to_numpy()
                temp_mes = stringToComplex(temp_mes)
                temp_zone_measurement = np.append(temp_zone_measurement, temp_mes, axis=0)

                temp_mes = temp_df.loc[tVal, temp_index_list].to_numpy()
                temp_mes = stringToComplex(temp_mes)
                temp_zone_measurement = np.append(temp_zone_measurement, temp_mes, axis=0)

            temp_zone_measurement2 = temp_zone_measurement[1:temp_zone_measurement.shape[0], :]  ## remove the first row
            pmu_loc_inmesaurement = pmu_loc_inmesaurement + [len(pmuMeas)]
            YzoneMes = YzoneMes + [len(pmuMeas)]
            zone_bus_infor.append(zoneBuses)
            zone_meas_infor.append(pmuMeas)
            zone_bus_pmu.append(pmu_loc_inmesaurement)
            zone_Nbuses.append(len(zonePmus))
            zone_measurements.append(temp_zone_measurement2)

    return zone_Nbuses, zone_bus_infor, zone_meas_infor, zone_bus_pmu, YTagsRTAC, YzoneMes, YTagsRTACProcessor, YTagBias,zone_measurements

## Convert string to a complex number
def stringToComplex(temp_mes):
    temp_mes2 = np.zeros(temp_mes.shape) + 1j * np.zeros(temp_mes.shape)
    for ii in range(0, temp_mes.shape[0]):
        for jj in range(0, temp_mes.shape[1]):
            string_val = temp_mes[ii, jj]
            string_val = string_val.replace(" ", "")  # will do nothing if unneeded
            string_val = string_val.replace('i', 'j')  ## change i to j
            temp_mes2[ii, jj] = complex(string_val)

    return temp_mes2


if __name__ == "__main__":

    threshold_lim = 0.999                   ## Detection probability

    ### reading csv files
    ## Read BusMatrix.csv
    data_bus = pd.read_csv('BusMatrix.csv', sep=",")
    total_buses = data_bus['BUS I'].to_list()
    total_buses = sorted(set(total_buses))                  ## array with bus numbers

    data_bus = changeBusNumber(data_bus, 'BUS I', total_buses)  ##  Chnage to internal indexing

    ## Read BranchMatrix.csv
    data_branch = pd.read_csv('BranchMatrix.csv', sep=",")

    data_branch = changeBusNumber(data_branch, 'F BUS', total_buses)        ##  Chnage to internal indexing
    data_branch = changeBusNumber(data_branch, 'T BUS', total_buses)        ##  Chnage to internal indexing

    ## Read BaseMVA.csv
    baseMVA = pd.read_csv('BaseMVA.csv', sep=",")
    baseMVA = baseMVA['Base'].values[0]

    ## Read DigitalTAG.csv
    DigitalTag = pd.read_csv('DigitalTAG.csv', sep=",")
    DigitalTag = DigitalTag['DTAG'].values[0]

    ## Read PMUBuses.csv
    pmuBuses_ori = pd.read_csv('PMUBuses.csv', sep=",")
    pmuBuses_ori = changeBusNumber(pmuBuses_ori, 'PMU BUS', total_buses)

    ## Read PMUBranches.csv
    pmuBranches = pd.read_csv('PMUBranches.csv', sep=",")  ## Branches with PMU measure
    pmuBranches = changeBusNumber(pmuBranches, 'PMU BUS', total_buses)
    pmuBranches = changeBusNumber(pmuBranches, 'Connecting BUS', total_buses)

    FromBus = data_branch['F BUS']                  ### From bus numbers of the branches
    ToBus = data_branch['T BUS']                    ### To bus numbers of the branches
    stat = data_branch['BR STATUS']                 ### Branches Status

    numBus = np.shape(data_bus)[0]                  ### Number of buses
    numBranch = np.shape(data_branch)[0]            ### Number of branches
    numPmus = len(pmuBuses_ori)                     ### Number of buses with PMUs
    numPmuBranches = len(pmuBranches)               ### Number of measured branches

    ## get the list of parallel branches
    parallel_list = []
    for ii in range(0, numBranch - 1):
        if (FromBus[ii] == FromBus[ii + 1]) and (ToBus[ii] == ToBus[ii + 1]):  ## parallel
            parallel_list.append(ii)
            parallel_list.append(ii + 1)

    ## Generate Y bus
    Y = makeYbus(baseMVA, data_bus, data_branch)

    ## H matrix for entire network
    H = linearOperator(data_branch, Y, FromBus, ToBus, stat, numBus, numBranch,parallel_list)

    ## Decompose into zones
    zone_Nbuses, zone_bus_infor, zone_pmu_meas, zone_pmu_indices, YTag, YzoneMes,YTagsRTACProcessor,YTagBias,zone_measurements = findZone(pmuBuses_ori, pmuBranches, numBus, numBranch,
                                                                           FromBus, ToBus)

    num_zone = len(zone_bus_infor)      ## number of zones
    NzonePmusIndices = []               ### Number of pmus in each zone
    NzoneMeas = []                      ### number of measurement in each zone
    zone_names = []                     ### name of the files to be read
    zone_thresholds = []                ### threshold values for each zones

    ### if need to save the values
    for zone_number in range(0, num_zone):
        zoneBuses = zone_bus_infor[zone_number]         #Bus number in each zone
        zonePmusIndices = zone_pmu_indices[zone_number]     #In each zone measurement vector, index of the pmu voltage phasor corresponding to the measurement vector in the zone
        zoneMeas = zone_pmu_meas[zone_number]           #index set of each pmu measurement in each zone corresponding to the total measurement vector

        zonePmusIndices1 = np.array(zonePmusIndices)[:, np.newaxis]
        NzoneBuses1 = np.array([len(zoneBuses)])        # Number of buses in the zone
        NzonePmusIndices = NzonePmusIndices + [(len(zonePmusIndices) - 1)]      # Number of PMUs in the zone
        NzoneMeas = NzoneMeas + [len(zoneMeas)]         # Number of measurements in the zone


        pd.DataFrame(zonePmusIndices1).to_csv('Zone_pmus_index' + str(zone_number + 1) + '.csv', index=False, line_terminator='\n')

        ### compute orthogonal model matrix
        HH = H[np.ix_(zoneMeas, zoneBuses)]  ### H matrix only for particular zone that we are interested in

        UU, SS, VV = np.linalg.svd(HH, full_matrices=True)
        HH_rank = np.linalg.matrix_rank(HH)
        UU = UU[:, 0:HH_rank]
        Hinv = np.matmul(UU, UU.conj().T)
        OrthoH = np.identity(np.shape(HH)[0]) - Hinv

        ### reshape to use in RTAC
        OrthoH_real = np.real(OrthoH)
        OrthoH_imag = np.imag(OrthoH)

        ## Save the modal matrix into two columns
        OrthoH_real_reshape = np.reshape(OrthoH_real, (OrthoH.shape[0] * OrthoH.shape[1], 1), order='C')
        OrthoH_imag_reshape = np.reshape(OrthoH_imag, (OrthoH.shape[0] * OrthoH.shape[1], 1), order='C')

        OrthoH_RTAC = pd.DataFrame(columns=['Re', 'Im'])

        real_list = []
        imag_list = []
        for ii in range(0, OrthoH_real_reshape.shape[0]):
            real_list.append(OrthoH_real_reshape[ii][0])
            imag_list.append(OrthoH_imag_reshape[ii][0])

        OrthoH_RTAC['Re'] = real_list
        OrthoH_RTAC['Im'] = imag_list
        OrthoH_RTAC.to_csv('Zone_OrthoH_matrix' + str(zone_number + 1) + '.csv', index=False,line_terminator='\n')  ## This is send to RTAC

        ## Save the file name of PMU indices and modal matrix
        zone_names = zone_names + ['Zone_pmus_index' + str(zone_number + 1) + '.csv']+ ['Zone_OrthoH_matrix' + str(zone_number + 1) + '.csv']

        ### Get the corresponding measurements subset and calculate threshold value for each zone
        Y_zone = zone_measurements[zone_number]
        residue_vals = np.matmul(OrthoH,Y_zone)         ## Calculate residue
        termination_vals = np.linalg.norm(residue_vals,axis=0)**2       # take sqaure norm
        termination_vals = np.sort(termination_vals)        ## Sort in ascending order
        threshold_index = round(termination_vals.size*threshold_lim)    # Index based on the probability
        zone_threshold = termination_vals[threshold_index]

        zone_thresholds = zone_thresholds + [zone_threshold]        ## Threshold value for this zone

    ##Generate the RTAC measurement vector creation code and total TAG processor code
    finalTagNames = []
    finalTagProcessorD = [DigitalTag]
    finalTagProcessorS = ['isAttack']
    for ii in range(0, len(YTag)):
        tempTagNames = 'y_values[' + str(ii) + '] := vector_t_TO_struct_ComplexRect(' + YTag[ii] + '.cVal);'
        finalTagNames.append(tempTagNames)          ## RTAC measurement vector creation code

        ### get the TAG processor destination and source code for corrected measurements
        temp_val = YTagsRTACProcessor[ii]
        if not pd.isnull(temp_val):
            finalTagProcessorD.append(temp_val)         ## Server tag name
            tempTagNames2 = 'y_hat_send[' + str(ii) + ']'   ## Corresponding corrected measurement
            finalTagProcessorS.append(tempTagNames2)

    ### get the TAG processor destination and source code for bias
    for ii in range(0, len(YTagBias)):
        temp_val = YTagBias[ii]
        if not pd.isnull(temp_val):
            temp_val = temp_val + '.mag'
            finalTagProcessorD.append(temp_val)     ## Server tag name
            tempTagNames2 = 'solution_deg_final[' + str(ii) + ']'   ## Corresponding estimated bias
            finalTagProcessorS.append(tempTagNames2)

    zoneTagNamesfinal = np.array(finalTagNames)[:, np.newaxis]
    pd.DataFrame(zoneTagNamesfinal).to_csv('RTACCode.csv', index=False, line_terminator='\n',header=False)

    list_of_tuples = list(zip(finalTagProcessorD, finalTagProcessorS))
    temp_df = pd.DataFrame(list_of_tuples, columns=['Destination Tag Name', 'Source Expression'])
    temp_df.to_csv('RTACTAGProcessor.csv', index=False, line_terminator='\n',header=False)

    ### Save other useful data
    Nzones = np.array([num_zone])[:, np.newaxis]        # Number of zones
    pd.DataFrame(Nzones).to_csv('Nzones.csv', index=False,line_terminator='\n')

    Npmus = np.array(NzonePmusIndices)[:, np.newaxis]   # Number of PMUs in each zone
    pd.DataFrame(Npmus).to_csv('Npmus.csv', index=False, line_terminator='\n')

    Nmeasurements = np.array(NzoneMeas)[:, np.newaxis]  # Number of measurements in each zone
    pd.DataFrame(Nmeasurements).to_csv('Nmeasurements.csv', index=False, line_terminator='\n')

    Zonenames = np.array(zone_names)[:, np.newaxis]     # PMU indices and modal matrix file name for each zone
    pd.DataFrame(Zonenames).to_csv('Zonenames.csv', index=False, line_terminator='\n')

    threshold_RTAC = pd.DataFrame(columns=['Re', 'Im'])     # Threshold value
    threshold_RTAC['Re'] = zone_thresholds
    threshold_RTAC['Im'] = np.zeros(num_zone).tolist()
    threshold_RTAC.to_csv('Thresholds.csv', index=False, line_terminator='\n')