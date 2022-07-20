/*
 * system_20220515_1_sm_master.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "system_20220515_1_sm_master".
 *
 * Model version              : 11.30
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Jun 29 12:36:26 2022
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_system_20220515_1_sm_master_h_
#define RTW_HEADER_system_20220515_1_sm_master_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef system_20220515_1_sm_master_COMMON_INCLUDES_
#define system_20220515_1_sm_master_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                        /* system_20220515_1_sm_master_COMMON_INCLUDES_ */

#include "system_20220515_1_sm_master_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->ModelData.CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->ModelData.CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define system_20220515_1_sm_master_rtModel RT_MODEL_system_20220515_1_sm_master_T

/* user code (top of header file) */
/* System '<Root>' */
/* Opal-RT Technologies */
extern int opalSizeDwork;
extern unsigned int opalSizeBlockIO;
extern unsigned int opalSizeRTP;
extern void * pRtModel;                //pointer on the RTmodel struc
int_T Opal_rtmGetNumBlockParams(void *ptr);
int_T Opal_rtmGetNumBlockIO(void *ptr);

/* Block signals for system '<S47>/OpOutput' */
typedef struct {
  real_T DataTypeConversion;      /* '<S49>/Data Type Conversion' (Output 1)  */
} B_OpOutput_system_20220515_1__T;

/* Block signals for system '<S38>/MATLAB Function' */
typedef struct {
  real_T y[104];                       /* '<S38>/MATLAB Function' (Output 1)  */
} B_MATLABFunction_system_20220_T;

/* Block signals for system '<S43>/MATLAB Function' */
typedef struct {
  real_T y[16];                        /* '<S43>/MATLAB Function' (Output 1)  */
} B_MATLABFunction_system_202_j_T;

/* Block signals (default storage) */
typedef struct {
  real_T SFunction;                    /* '<S1>/S-Function' (Output 1)  */
  real_T Sum;                          /* '<S1>/Sum' (Output 1)  */
  real_T Constant;                     /* '<S2>/Constant' (Output 1)  */
  real_T Step;                         /* '<S2>/Step' (Output 1)  */
  real_T Step1;                        /* '<S2>/Step1' (Output 1)  */
  real_T Add;                          /* '<S2>/Add' (Output 1)  */
  real_T TmpSignalConversionAtSolverInpo[2];
                                /* '<S2>/TmpSignal ConversionAtSolverInport2' */
  real_T TmpSignalConversionAtSolverIn_k[7];
                                /* '<S2>/TmpSignal ConversionAtSolverInport3' */
  real_T TmpSignalConversionAtSolverIn_e[3];
                                /* '<S2>/TmpSignal ConversionAtSolverInport4' */
  real_T Solver_o1[73];                /* '<S2>/Solver' (Output 1)  */
  real_T Solver_o2[73];                /* '<S2>/Solver' (Output 2)  */
  real_T Solver_o3[104];               /* '<S2>/Solver' (Output 3)  */
  real_T Solver_o4[104];               /* '<S2>/Solver' (Output 4)  */
  real_T Solver_o5[104];               /* '<S2>/Solver' (Output 5)  */
  real_T Solver_o6[104];               /* '<S2>/Solver' (Output 6)  */
  real_T Solver_o7[104];               /* '<S2>/Solver' (Output 7)  */
  real_T Solver_o8[104];               /* '<S2>/Solver' (Output 8)  */
  real_T Solver_o9[104];               /* '<S2>/Solver' (Output 9)  */
  real_T Solver_o10[104];              /* '<S2>/Solver' (Output 10)  */
  real_T Solver_o11[16];               /* '<S2>/Solver' (Output 11)  */
  real_T Solver_o12[16];               /* '<S2>/Solver' (Output 12)  */
  real_T Solver_o13[16];               /* '<S2>/Solver' (Output 13)  */
  real_T Solver_o14[16];               /* '<S2>/Solver' (Output 14)  */
  real_T RandomNumber[73];             /* '<S37>/Random Number' (Output 1)  */
  real_T Add1[73];                     /* '<S37>/Add1' (Output 1)  */
  real_T RandomNumber_b[73];           /* '<S36>/Random Number' (Output 1)  */
  real_T Add1_k[73];                   /* '<S36>/Add1' (Output 1)  */
  real_T Constant3;                    /* '<S2>/Constant3' (Output 1)  */
  real_T TSyncPCIeCtrl[8];             /* '<S2>/TSync PCIe Ctrl' (Output 1)  */
  real_T Step_o;                       /* '<S68>/Step' (Output 1)  */
  real_T Clock;                        /* '<S68>/Clock' (Output 1)  */
  real_T Sum_c;                        /* '<S68>/Sum' (Output 1)  */
  real_T Product;                      /* '<S68>/Product' (Output 1)  */
  real_T Output;                       /* '<S68>/Output' (Output 1)  */
  real_T Saturation;                   /* '<S59>/Saturation' (Output 1)  */
  real_T Multiply;                     /* '<S59>/Multiply' (Output 1)  */
  real_T Gain[73];                     /* '<S2>/Gain' (Output 1)  */
  real_T RandomNumber_l[104];          /* '<S39>/Random Number' (Output 1)  */
  real_T Add1_f[104];                  /* '<S39>/Add1' (Output 1)  */
  real_T Gain2[104];                   /* '<S2>/Gain2' (Output 1)  */
  real_T RandomNumber_n[104];          /* '<S38>/Random Number' (Output 1)  */
  real_T Add1_o[104];                  /* '<S38>/Add1' (Output 1)  */
  real_T Gain1[104];                   /* '<S2>/Gain1' (Output 1)  */
  real_T Add_p[4];                     /* '<S59>/Add' (Output 1)  */
  real_T RandomNumber_c[104];          /* '<S41>/Random Number' (Output 1)  */
  real_T Add1_f3[104];                 /* '<S41>/Add1' (Output 1)  */
  real_T RandomNumber_a[104];          /* '<S40>/Random Number' (Output 1)  */
  real_T Add1_ov[104];                 /* '<S40>/Add1' (Output 1)  */
  real_T Step_p;                       /* '<S86>/Step' (Output 1)  */
  real_T Clock_f;                      /* '<S86>/Clock' (Output 1)  */
  real_T Sum_e;                        /* '<S86>/Sum' (Output 1)  */
  real_T Product_o;                    /* '<S86>/Product' (Output 1)  */
  real_T Output_c;                     /* '<S86>/Output' (Output 1)  */
  real_T Saturation_f;                 /* '<S77>/Saturation' (Output 1)  */
  real_T Multiply_e;                   /* '<S77>/Multiply' (Output 1)  */
  real_T RandomNumber_p[16];           /* '<S43>/Random Number' (Output 1)  */
  real_T Add1_e[16];                   /* '<S43>/Add1' (Output 1)  */
  real_T Gain3[16];                    /* '<S2>/Gain3' (Output 1)  */
  real_T Add_d[4];                     /* '<S77>/Add' (Output 1)  */
  real_T RandomNumber_o[16];           /* '<S45>/Random Number' (Output 1)  */
  real_T Add1_m[16];                   /* '<S45>/Add1' (Output 1)  */
  real_T Step_m;                       /* '<S100>/Step' (Output 1)  */
  real_T Clock_d;                      /* '<S100>/Clock' (Output 1)  */
  real_T Sum_h;                        /* '<S100>/Sum' (Output 1)  */
  real_T Product_f;                    /* '<S100>/Product' (Output 1)  */
  real_T Output_m;                     /* '<S100>/Output' (Output 1)  */
  real_T Saturation_h;                 /* '<S93>/Saturation' (Output 1)  */
  real_T Multiply_b;                   /* '<S93>/Multiply' (Output 1)  */
  real_T Add_e[3];                     /* '<S93>/Add' (Output 1)  */
  real_T Step_i;                       /* '<S126>/Step' (Output 1)  */
  real_T Clock_n;                      /* '<S126>/Clock' (Output 1)  */
  real_T Sum_p;                        /* '<S126>/Sum' (Output 1)  */
  real_T Product_m;                    /* '<S126>/Product' (Output 1)  */
  real_T Output_b;                     /* '<S126>/Output' (Output 1)  */
  real_T Saturation_a;                 /* '<S113>/Saturation' (Output 1)  */
  real_T Multiply_o;                   /* '<S113>/Multiply' (Output 1)  */
  real_T Add_b[6];                     /* '<S113>/Add' (Output 1)  */
  real_T Step_c;                       /* '<S148>/Step' (Output 1)  */
  real_T Clock_i;                      /* '<S148>/Clock' (Output 1)  */
  real_T Sum_i;                        /* '<S148>/Sum' (Output 1)  */
  real_T Product_i;                    /* '<S148>/Product' (Output 1)  */
  real_T Output_j;                     /* '<S148>/Output' (Output 1)  */
  real_T Saturation_af;                /* '<S137>/Saturation' (Output 1)  */
  real_T Multiply_a;                   /* '<S137>/Multiply' (Output 1)  */
  real_T Add_h[5];                     /* '<S137>/Add' (Output 1)  */
  real_T Step_h;                       /* '<S178>/Step' (Output 1)  */
  real_T Clock_ng;                     /* '<S178>/Clock' (Output 1)  */
  real_T Sum_n;                        /* '<S178>/Sum' (Output 1)  */
  real_T Product_h;                    /* '<S178>/Product' (Output 1)  */
  real_T Output_n;                     /* '<S178>/Output' (Output 1)  */
  real_T Saturation_e;                 /* '<S163>/Saturation' (Output 1)  */
  real_T Multiply_p;                   /* '<S163>/Multiply' (Output 1)  */
  real_T Add_o[7];                     /* '<S163>/Add' (Output 1)  */
  real_T Step_e;                       /* '<S204>/Step' (Output 1)  */
  real_T Clock_p;                      /* '<S204>/Clock' (Output 1)  */
  real_T Sum_ps;                       /* '<S204>/Sum' (Output 1)  */
  real_T Product_d;                    /* '<S204>/Product' (Output 1)  */
  real_T Output_bt;                    /* '<S204>/Output' (Output 1)  */
  real_T Saturation_m;                 /* '<S191>/Saturation' (Output 1)  */
  real_T Multiply_l;                   /* '<S191>/Multiply' (Output 1)  */
  real_T Add_f[6];                     /* '<S191>/Add' (Output 1)  */
  real_T Step_ps;                      /* '<S222>/Step' (Output 1)  */
  real_T Clock_fi;                     /* '<S222>/Clock' (Output 1)  */
  real_T Sum_ct;                       /* '<S222>/Sum' (Output 1)  */
  real_T Product_l;                    /* '<S222>/Product' (Output 1)  */
  real_T Output_i;                     /* '<S222>/Output' (Output 1)  */
  real_T Saturation_g;                 /* '<S213>/Saturation' (Output 1)  */
  real_T Multiply_by;                  /* '<S213>/Multiply' (Output 1)  */
  real_T Add_ph[4];                    /* '<S213>/Add' (Output 1)  */
  real_T Step_l;                       /* '<S244>/Step' (Output 1)  */
  real_T Clock_k;                      /* '<S244>/Clock' (Output 1)  */
  real_T Sum_g;                        /* '<S244>/Sum' (Output 1)  */
  real_T Product_b;                    /* '<S244>/Product' (Output 1)  */
  real_T Output_p;                     /* '<S244>/Output' (Output 1)  */
  real_T Saturation_h4;                /* '<S233>/Saturation' (Output 1)  */
  real_T Multiply_h;                   /* '<S233>/Multiply' (Output 1)  */
  real_T Add_k[5];                     /* '<S233>/Add' (Output 1)  */
  real_T Step_n;                       /* '<S254>/Step' (Output 1)  */
  real_T Clock_fz;                     /* '<S254>/Clock' (Output 1)  */
  real_T Sum_m;                        /* '<S254>/Sum' (Output 1)  */
  real_T Product_fb;                   /* '<S254>/Product' (Output 1)  */
  real_T Output_h;                     /* '<S254>/Output' (Output 1)  */
  real_T Saturation_l;                 /* '<S249>/Saturation' (Output 1)  */
  real_T Multiply_m;                   /* '<S249>/Multiply' (Output 1)  */
  real_T Add_i[2];                     /* '<S249>/Add' (Output 1)  */
  real_T Step_pu;                      /* '<S280>/Step' (Output 1)  */
  real_T Clock_l;                      /* '<S280>/Clock' (Output 1)  */
  real_T Sum_k;                        /* '<S280>/Sum' (Output 1)  */
  real_T Product_g;                    /* '<S280>/Product' (Output 1)  */
  real_T Output_l;                     /* '<S280>/Output' (Output 1)  */
  real_T Saturation_go;                /* '<S267>/Saturation' (Output 1)  */
  real_T Multiply_k;                   /* '<S267>/Multiply' (Output 1)  */
  real_T Add_og[6];                    /* '<S267>/Add' (Output 1)  */
  real_T Step_a;                       /* '<S302>/Step' (Output 1)  */
  real_T Clock_nv;                     /* '<S302>/Clock' (Output 1)  */
  real_T Sum_l;                        /* '<S302>/Sum' (Output 1)  */
  real_T Product_hx;                   /* '<S302>/Product' (Output 1)  */
  real_T Output_jl;                    /* '<S302>/Output' (Output 1)  */
  real_T Saturation_eq;                /* '<S291>/Saturation' (Output 1)  */
  real_T Multiply_ao;                  /* '<S291>/Multiply' (Output 1)  */
  real_T Add_ek[5];                    /* '<S291>/Add' (Output 1)  */
  real_T Step_iu;                      /* '<S328>/Step' (Output 1)  */
  real_T Clock_a;                      /* '<S328>/Clock' (Output 1)  */
  real_T Sum_gf;                       /* '<S328>/Sum' (Output 1)  */
  real_T Product_bb;                   /* '<S328>/Product' (Output 1)  */
  real_T Output_bi;                    /* '<S328>/Output' (Output 1)  */
  real_T Saturation_n;                 /* '<S315>/Saturation' (Output 1)  */
  real_T Multiply_lr;                  /* '<S315>/Multiply' (Output 1)  */
  real_T Add_n[6];                     /* '<S315>/Add' (Output 1)  */
  real_T Step_ec;                      /* '<S354>/Step' (Output 1)  */
  real_T Clock_dg;                     /* '<S354>/Clock' (Output 1)  */
  real_T Sum_hz;                       /* '<S354>/Sum' (Output 1)  */
  real_T Product_k;                    /* '<S354>/Product' (Output 1)  */
  real_T Output_f;                     /* '<S354>/Output' (Output 1)  */
  real_T Saturation_c;                 /* '<S341>/Saturation' (Output 1)  */
  real_T Multiply_hx;                  /* '<S341>/Multiply' (Output 1)  */
  real_T Add_f2[6];                    /* '<S341>/Add' (Output 1)  */
  real_T Step_j;                       /* '<S372>/Step' (Output 1)  */
  real_T Clock_h;                      /* '<S372>/Clock' (Output 1)  */
  real_T Sum_hj;                       /* '<S372>/Sum' (Output 1)  */
  real_T Product_fx;                   /* '<S372>/Product' (Output 1)  */
  real_T Output_a;                     /* '<S372>/Output' (Output 1)  */
  real_T Saturation_ls;                /* '<S363>/Saturation' (Output 1)  */
  real_T Multiply_c;                   /* '<S363>/Multiply' (Output 1)  */
  real_T Add_ib[4];                    /* '<S363>/Add' (Output 1)  */
  real_T Step_e5;                      /* '<S390>/Step' (Output 1)  */
  real_T Clock_dl;                     /* '<S390>/Clock' (Output 1)  */
  real_T Sum_eh;                       /* '<S390>/Sum' (Output 1)  */
  real_T Product_mg;                   /* '<S390>/Product' (Output 1)  */
  real_T Output_ji;                    /* '<S390>/Output' (Output 1)  */
  real_T Saturation_b;                 /* '<S381>/Saturation' (Output 1)  */
  real_T Multiply_g;                   /* '<S381>/Multiply' (Output 1)  */
  real_T Add_od[4];                    /* '<S381>/Add' (Output 1)  */
  real_T Step_pg;                      /* '<S400>/Step' (Output 1)  */
  real_T Clock_fw;                     /* '<S400>/Clock' (Output 1)  */
  real_T Sum_f;                        /* '<S400>/Sum' (Output 1)  */
  real_T Product_a;                    /* '<S400>/Product' (Output 1)  */
  real_T Output_ba;                    /* '<S400>/Output' (Output 1)  */
  real_T Saturation_h1;                /* '<S395>/Saturation' (Output 1)  */
  real_T Multiply_lrk;                 /* '<S395>/Multiply' (Output 1)  */
  real_T Add_fz[2];                    /* '<S395>/Add' (Output 1)  */
  real_T Step_p1;                      /* '<S426>/Step' (Output 1)  */
  real_T Clock_m;                      /* '<S426>/Clock' (Output 1)  */
  real_T Sum_mb;                       /* '<S426>/Sum' (Output 1)  */
  real_T Product_n;                    /* '<S426>/Product' (Output 1)  */
  real_T Output_fr;                    /* '<S426>/Output' (Output 1)  */
  real_T Saturation_gh;                /* '<S413>/Saturation' (Output 1)  */
  real_T Multiply_ci;                  /* '<S413>/Multiply' (Output 1)  */
  real_T Add_m[6];                     /* '<S413>/Add' (Output 1)  */
  real_T Step_n1;                      /* '<S448>/Step' (Output 1)  */
  real_T Clock_io;                     /* '<S448>/Clock' (Output 1)  */
  real_T Sum_b;                        /* '<S448>/Sum' (Output 1)  */
  real_T Product_e;                    /* '<S448>/Product' (Output 1)  */
  real_T Output_fx;                    /* '<S448>/Output' (Output 1)  */
  real_T Saturation_mz;                /* '<S437>/Saturation' (Output 1)  */
  real_T Multiply_d;                   /* '<S437>/Multiply' (Output 1)  */
  real_T Add_c[5];                     /* '<S437>/Add' (Output 1)  */
  real_T Step_j2;                      /* '<S474>/Step' (Output 1)  */
  real_T Clock_d4;                     /* '<S474>/Clock' (Output 1)  */
  real_T Sum_p0;                       /* '<S474>/Sum' (Output 1)  */
  real_T Product_hb;                   /* '<S474>/Product' (Output 1)  */
  real_T Output_o;                     /* '<S474>/Output' (Output 1)  */
  real_T Saturation_p;                 /* '<S461>/Saturation' (Output 1)  */
  real_T Multiply_ag;                  /* '<S461>/Multiply' (Output 1)  */
  real_T Add_l[6];                     /* '<S461>/Add' (Output 1)  */
  real_T Step_d;                       /* '<S500>/Step' (Output 1)  */
  real_T Clock_o;                      /* '<S500>/Clock' (Output 1)  */
  real_T Sum_o;                        /* '<S500>/Sum' (Output 1)  */
  real_T Product_gg;                   /* '<S500>/Product' (Output 1)  */
  real_T Output_f1;                    /* '<S500>/Output' (Output 1)  */
  real_T Saturation_lg;                /* '<S487>/Saturation' (Output 1)  */
  real_T Multiply_ab;                  /* '<S487>/Multiply' (Output 1)  */
  real_T Add_nv[6];                    /* '<S487>/Add' (Output 1)  */
  real_T RandomNumber_j[16];           /* '<S44>/Random Number' (Output 1)  */
  real_T Add1_mg[16];                  /* '<S44>/Add1' (Output 1)  */
  real_T Gain4[16];                    /* '<S2>/Gain4' (Output 1)  */
  real_T RandomNumber_ab[16];          /* '<S46>/Random Number' (Output 1)  */
  real_T Add1_h[16];                   /* '<S46>/Add1' (Output 1)  */
  real_T y[73];                        /* '<S36>/MATLAB Function' (Output 1)  */
  B_MATLABFunction_system_202_j_T sf_MATLABFunction_p;/* '<S44>/MATLAB Function' */
  B_MATLABFunction_system_202_j_T sf_MATLABFunction_lg;/* '<S43>/MATLAB Function' */
  B_MATLABFunction_system_20220_T sf_MATLABFunction_h;/* '<S39>/MATLAB Function' */
  B_MATLABFunction_system_20220_T sf_MATLABFunction_l;/* '<S38>/MATLAB Function' */
  B_OpOutput_system_20220515_1__T OpOutput_fr;/* '<S503>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_j2;/* '<S502>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bqq;/* '<S501>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ns3;/* '<S486>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ppb;/* '<S485>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_mfk;/* '<S484>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ne;/* '<S483>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_dh;/* '<S482>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_h0j;/* '<S481>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bdr;/* '<S480>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_iz;/* '<S479>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bn;/* '<S478>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_og;/* '<S477>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b40;/* '<S476>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_h03;/* '<S475>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_e3;/* '<S460>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_fu;/* '<S459>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_cr;/* '<S458>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ec;/* '<S457>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ox;/* '<S456>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_mx;/* '<S455>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_a1k;/* '<S454>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ja;/* '<S453>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ij;/* '<S452>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_g1;/* '<S451>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ko;/* '<S450>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b5o;/* '<S449>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bfz;/* '<S436>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_id;/* '<S435>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ik;/* '<S434>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_cd;/* '<S433>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ct;/* '<S432>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jv;/* '<S431>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_o3;/* '<S430>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_g5;/* '<S429>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_g3;/* '<S428>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_dc;/* '<S427>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ft;/* '<S412>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_mf;/* '<S411>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_iu;/* '<S410>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_hu;/* '<S409>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_a0m;/* '<S408>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_kse;/* '<S407>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_e5;/* '<S406>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_h0;/* '<S405>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ha;/* '<S404>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_c1;/* '<S403>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_co;/* '<S402>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ip;/* '<S401>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_js;/* '<S394>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_owt;/* '<S393>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_aj;/* '<S392>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_d3d;/* '<S391>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_pw;/* '<S380>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_oo;/* '<S379>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_dy;/* '<S378>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_oa;/* '<S377>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bu;/* '<S376>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jt;/* '<S375>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_pp;/* '<S374>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_d3;/* '<S373>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_le;/* '<S362>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ni;/* '<S361>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bc;/* '<S360>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_j3;/* '<S359>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_m0;/* '<S358>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_j1;/* '<S357>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_aa;/* '<S356>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_f2;/* '<S355>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_no;/* '<S340>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_nz;/* '<S339>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_oh;/* '<S338>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_pi;/* '<S337>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_na;/* '<S336>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gy;/* '<S335>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_hoo;/* '<S334>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_dw;/* '<S333>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jb5;/* '<S332>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_i2j;/* '<S331>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_lf;/* '<S330>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_km;/* '<S329>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_iyx;/* '<S314>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bre;/* '<S313>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_lm;/* '<S312>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_fd;/* '<S311>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_er;/* '<S310>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_md;/* '<S309>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b5;/* '<S308>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_py;/* '<S307>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gav;/* '<S306>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b0;/* '<S305>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_a1;/* '<S304>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_kk;/* '<S303>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ar0;/* '<S290>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_l5;/* '<S289>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_kx;/* '<S288>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bf;/* '<S287>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_dt;/* '<S286>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b4;/* '<S285>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_br;/* '<S284>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_kv;/* '<S283>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_l0;/* '<S282>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_hy;/* '<S281>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ho;/* '<S266>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_hz;/* '<S265>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gpq;/* '<S264>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_od;/* '<S263>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jfw;/* '<S262>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jf;/* '<S261>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_a5;/* '<S260>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gay;/* '<S259>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gw;/* '<S258>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ln;/* '<S257>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jb;/* '<S256>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_i3;/* '<S255>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_pd;/* '<S248>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ib;/* '<S247>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_pf;/* '<S246>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_kg;/* '<S245>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_oba;/* '<S232>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_is;/* '<S231>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ns;/* '<S230>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_hx;/* '<S229>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gh;/* '<S228>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_p3;/* '<S227>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ol;/* '<S226>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jo;/* '<S225>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_i4;/* '<S224>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jz;/* '<S223>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bq;/* '<S212>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b12;/* '<S211>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_j0;/* '<S210>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ad;/* '<S209>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_dx;/* '<S208>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_okg;/* '<S207>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gn;/* '<S206>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_p0;/* '<S205>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_lu;/* '<S190>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_h4;/* '<S189>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_pn;/* '<S188>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_dq;/* '<S187>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ku;/* '<S186>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ok;/* '<S185>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ej;/* '<S184>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bd;/* '<S183>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_mg;/* '<S182>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_kj;/* '<S181>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ic;/* '<S180>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ia;/* '<S179>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gp;/* '<S162>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ga;/* '<S161>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bbp;/* '<S160>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_fq;/* '<S159>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ap;/* '<S158>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_mh;/* '<S157>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_aw;/* '<S156>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_jy;/* '<S155>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_d;/* '<S154>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_eb;/* '<S153>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_j;/* '<S152>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_i2s;/* '<S151>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_gi;/* '<S150>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_hf;/* '<S149>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_cc;/* '<S136>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ar;/* '<S135>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_kf;/* '<S134>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ez;/* '<S133>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bp;/* '<S132>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_hl;/* '<S131>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_be;/* '<S130>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ow;/* '<S129>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_a0;/* '<S128>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ie;/* '<S127>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_k4;/* '<S112>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_kq;/* '<S111>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_en;/* '<S110>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_iy;/* '<S109>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ir;/* '<S108>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_nh;/* '<S107>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_cy;/* '<S106>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b3b;/* '<S105>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_p;/* '<S104>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_a;/* '<S103>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ek;/* '<S102>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_fn;/* '<S101>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_c;/* '<S92>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_h;/* '<S91>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_nu;/* '<S90>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_m;/* '<S89>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bh;/* '<S88>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b3;/* '<S87>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_o1;/* '<S76>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_i2;/* '<S75>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_iw;/* '<S74>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_l1;/* '<S73>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ks;/* '<S72>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_g;/* '<S71>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_l;/* '<S70>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_ob;/* '<S69>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_e;/* '<S58>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_bb;/* '<S57>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b1;/* '<S56>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_f;/* '<S55>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_b;/* '<S54>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_n;/* '<S53>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_k;/* '<S52>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_o;/* '<S51>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput_i;/* '<S48>/OpOutput' */
  B_OpOutput_system_20220515_1__T OpOutput;/* '<S47>/OpOutput' */
} B_system_20220515_1_sm_master_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T SFunction_PreviousInput;      /* '<S1>/S-Function' (DWork 1)  */
  real_T NextOutput[73];               /* '<S37>/Random Number' (DWork 1)  */
  real_T NextOutput_j[73];             /* '<S36>/Random Number' (DWork 1)  */
  real_T NextOutput_k[104];            /* '<S39>/Random Number' (DWork 1)  */
  real_T NextOutput_i[104];            /* '<S38>/Random Number' (DWork 1)  */
  real_T NextOutput_a[104];            /* '<S41>/Random Number' (DWork 1)  */
  real_T NextOutput_c[104];            /* '<S40>/Random Number' (DWork 1)  */
  real_T NextOutput_a1[16];            /* '<S43>/Random Number' (DWork 1)  */
  real_T NextOutput_cx[16];            /* '<S45>/Random Number' (DWork 1)  */
  real_T NextOutput_h[16];             /* '<S44>/Random Number' (DWork 1)  */
  real_T NextOutput_k1[16];            /* '<S46>/Random Number' (DWork 1)  */
  void *TSyncPCIeCtrl_PWORK;           /* '<S2>/TSync PCIe Ctrl' (DWork 1)  */
  uint32_T RandSeed[73];               /* '<S37>/Random Number' (DWork 2)  */
  uint32_T RandSeed_b[73];             /* '<S36>/Random Number' (DWork 2)  */
  uint32_T RandSeed_l[104];            /* '<S39>/Random Number' (DWork 2)  */
  uint32_T RandSeed_p[104];            /* '<S38>/Random Number' (DWork 2)  */
  uint32_T RandSeed_h[104];            /* '<S41>/Random Number' (DWork 2)  */
  uint32_T RandSeed_n[104];            /* '<S40>/Random Number' (DWork 2)  */
  uint32_T RandSeed_i[16];             /* '<S43>/Random Number' (DWork 2)  */
  uint32_T RandSeed_nt[16];            /* '<S45>/Random Number' (DWork 2)  */
  uint32_T RandSeed_a[16];             /* '<S44>/Random Number' (DWork 2)  */
  uint32_T RandSeed_m[16];             /* '<S46>/Random Number' (DWork 2)  */
  int_T SFunction_IWORK[5];            /* '<S511>/S-Function' (DWork 1)  */
} DW_system_20220515_1_sm_master_T;

/* Backward compatible GRT Identifiers */
#define rtB                            system_20220515_1_sm_master_B
#define BlockIO                        B_system_20220515_1_sm_master_T
#define rtP                            system_20220515_1_sm_master_P
#define Parameters                     P_system_20220515_1_sm_master_T
#define rtDWork                        system_20220515_1_sm_master_DW
#define D_Work                         DW_system_20220515_1_sm_master_T

/* Parameters (default storage) */
struct P_system_20220515_1_sm_master_T_ {
  struct_HCZWR9cFGNbJTdkXp4xdNE en_spoofing_attack;/* Variable: en_spoofing_attack
                                                    * Referenced by:
                                                    *   '<S59>/Constant' (Parameter: Value)
                                                    *   '<S77>/Constant' (Parameter: Value)
                                                    *   '<S93>/Constant' (Parameter: Value)
                                                    *   '<S113>/Constant' (Parameter: Value)
                                                    *   '<S137>/Constant' (Parameter: Value)
                                                    *   '<S163>/Constant' (Parameter: Value)
                                                    *   '<S191>/Constant' (Parameter: Value)
                                                    *   '<S213>/Constant' (Parameter: Value)
                                                    *   '<S233>/Constant' (Parameter: Value)
                                                    *   '<S249>/Constant' (Parameter: Value)
                                                    *   '<S267>/Constant' (Parameter: Value)
                                                    *   '<S291>/Constant' (Parameter: Value)
                                                    *   '<S315>/Constant' (Parameter: Value)
                                                    *   '<S341>/Constant' (Parameter: Value)
                                                    *   '<S363>/Constant' (Parameter: Value)
                                                    *   '<S381>/Constant' (Parameter: Value)
                                                    *   '<S395>/Constant' (Parameter: Value)
                                                    *   '<S413>/Constant' (Parameter: Value)
                                                    *   '<S437>/Constant' (Parameter: Value)
                                                    *   '<S461>/Constant' (Parameter: Value)
                                                    *   '<S487>/Constant' (Parameter: Value)
                                                    */
  struct_HCZWR9cFGNbJTdkXp4xdNE spoof_st;/* Variable: spoof_st
                                          * Referenced by:
                                          *   '<S68>/Constant' (Parameter: Value)
                                          *   '<S68>/Step' (Parameter: Time)
                                          *   '<S86>/Constant' (Parameter: Value)
                                          *   '<S86>/Step' (Parameter: Time)
                                          *   '<S100>/Constant' (Parameter: Value)
                                          *   '<S100>/Step' (Parameter: Time)
                                          *   '<S126>/Constant' (Parameter: Value)
                                          *   '<S126>/Step' (Parameter: Time)
                                          *   '<S148>/Constant' (Parameter: Value)
                                          *   '<S148>/Step' (Parameter: Time)
                                          *   '<S178>/Constant' (Parameter: Value)
                                          *   '<S178>/Step' (Parameter: Time)
                                          *   '<S204>/Constant' (Parameter: Value)
                                          *   '<S204>/Step' (Parameter: Time)
                                          *   '<S222>/Constant' (Parameter: Value)
                                          *   '<S222>/Step' (Parameter: Time)
                                          *   '<S244>/Constant' (Parameter: Value)
                                          *   '<S244>/Step' (Parameter: Time)
                                          *   '<S254>/Constant' (Parameter: Value)
                                          *   '<S254>/Step' (Parameter: Time)
                                          *   '<S280>/Constant' (Parameter: Value)
                                          *   '<S280>/Step' (Parameter: Time)
                                          *   '<S302>/Constant' (Parameter: Value)
                                          *   '<S302>/Step' (Parameter: Time)
                                          *   '<S328>/Constant' (Parameter: Value)
                                          *   '<S328>/Step' (Parameter: Time)
                                          *   '<S354>/Constant' (Parameter: Value)
                                          *   '<S354>/Step' (Parameter: Time)
                                          *   '<S372>/Constant' (Parameter: Value)
                                          *   '<S372>/Step' (Parameter: Time)
                                          *   '<S390>/Constant' (Parameter: Value)
                                          *   '<S390>/Step' (Parameter: Time)
                                          *   '<S400>/Constant' (Parameter: Value)
                                          *   '<S400>/Step' (Parameter: Time)
                                          *   '<S426>/Constant' (Parameter: Value)
                                          *   '<S426>/Step' (Parameter: Time)
                                          *   '<S448>/Constant' (Parameter: Value)
                                          *   '<S448>/Step' (Parameter: Time)
                                          *   '<S474>/Constant' (Parameter: Value)
                                          *   '<S474>/Step' (Parameter: Time)
                                          *   '<S500>/Constant' (Parameter: Value)
                                          *   '<S500>/Step' (Parameter: Time)
                                          */
  real_T Solver_P2_Size[2];            /* Computed Parameter: Solver_P2_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P2Size)
                                        */
  real_T Ts;                           /* Variable: Ts
                                        * Referenced by: '<S2>/Solver' (Parameter: P2)
                                        */
  real_T ang_variance;                 /* Variable: ang_variance
                                        * Referenced by:
                                        *   '<S36>/Random Number' (Parameter: Variance)
                                        *   '<S38>/Random Number' (Parameter: Variance)
                                        *   '<S39>/Random Number' (Parameter: Variance)
                                        *   '<S43>/Random Number' (Parameter: Variance)
                                        *   '<S44>/Random Number' (Parameter: Variance)
                                        */
  real_T bus_va_seed[73];              /* Variable: bus_va_seed
                                        * Referenced by: '<S36>/Random Number' (Parameter: Seed)
                                        */
  real_T bus_vm_seed[73];              /* Variable: bus_vm_seed
                                        * Referenced by: '<S37>/Random Number' (Parameter: Seed)
                                        */
  real_T event_time_end;               /* Variable: event_time_end
                                        * Referenced by: '<S2>/Step1' (Parameter: Time)
                                        */
  real_T event_time_start;             /* Variable: event_time_start
                                        * Referenced by: '<S2>/Step' (Parameter: Time)
                                        */
  real_T line_iang0_seed[104];         /* Variable: line_iang0_seed
                                        * Referenced by: '<S38>/Random Number' (Parameter: Seed)
                                        */
  real_T line_iang1_seed[104];         /* Variable: line_iang1_seed
                                        * Referenced by: '<S39>/Random Number' (Parameter: Seed)
                                        */
  real_T line_imag0_seed[104];         /* Variable: line_imag0_seed
                                        * Referenced by: '<S40>/Random Number' (Parameter: Seed)
                                        */
  real_T line_imag1_seed[104];         /* Variable: line_imag1_seed
                                        * Referenced by: '<S41>/Random Number' (Parameter: Seed)
                                        */
  real_T mag_variance;                 /* Variable: mag_variance
                                        * Referenced by:
                                        *   '<S37>/Random Number' (Parameter: Variance)
                                        *   '<S40>/Random Number' (Parameter: Variance)
                                        *   '<S41>/Random Number' (Parameter: Variance)
                                        *   '<S45>/Random Number' (Parameter: Variance)
                                        *   '<S46>/Random Number' (Parameter: Variance)
                                        */
  real_T spoof_lower_limit;            /* Variable: spoof_lower_limit
                                        * Referenced by:
                                        *   '<S59>/Saturation' (Parameter: LowerLimit)
                                        *   '<S77>/Saturation' (Parameter: LowerLimit)
                                        *   '<S93>/Saturation' (Parameter: LowerLimit)
                                        *   '<S113>/Saturation' (Parameter: LowerLimit)
                                        *   '<S137>/Saturation' (Parameter: LowerLimit)
                                        *   '<S163>/Saturation' (Parameter: LowerLimit)
                                        *   '<S191>/Saturation' (Parameter: LowerLimit)
                                        *   '<S213>/Saturation' (Parameter: LowerLimit)
                                        *   '<S233>/Saturation' (Parameter: LowerLimit)
                                        *   '<S249>/Saturation' (Parameter: LowerLimit)
                                        *   '<S267>/Saturation' (Parameter: LowerLimit)
                                        *   '<S291>/Saturation' (Parameter: LowerLimit)
                                        *   '<S315>/Saturation' (Parameter: LowerLimit)
                                        *   '<S341>/Saturation' (Parameter: LowerLimit)
                                        *   '<S363>/Saturation' (Parameter: LowerLimit)
                                        *   '<S381>/Saturation' (Parameter: LowerLimit)
                                        *   '<S395>/Saturation' (Parameter: LowerLimit)
                                        *   '<S413>/Saturation' (Parameter: LowerLimit)
                                        *   '<S437>/Saturation' (Parameter: LowerLimit)
                                        *   '<S461>/Saturation' (Parameter: LowerLimit)
                                        *   '<S487>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T spoof_upper_limit;            /* Variable: spoof_upper_limit
                                        * Referenced by:
                                        *   '<S59>/Saturation' (Parameter: UpperLimit)
                                        *   '<S77>/Saturation' (Parameter: UpperLimit)
                                        *   '<S93>/Saturation' (Parameter: UpperLimit)
                                        *   '<S113>/Saturation' (Parameter: UpperLimit)
                                        *   '<S137>/Saturation' (Parameter: UpperLimit)
                                        *   '<S163>/Saturation' (Parameter: UpperLimit)
                                        *   '<S191>/Saturation' (Parameter: UpperLimit)
                                        *   '<S213>/Saturation' (Parameter: UpperLimit)
                                        *   '<S233>/Saturation' (Parameter: UpperLimit)
                                        *   '<S249>/Saturation' (Parameter: UpperLimit)
                                        *   '<S267>/Saturation' (Parameter: UpperLimit)
                                        *   '<S291>/Saturation' (Parameter: UpperLimit)
                                        *   '<S315>/Saturation' (Parameter: UpperLimit)
                                        *   '<S341>/Saturation' (Parameter: UpperLimit)
                                        *   '<S363>/Saturation' (Parameter: UpperLimit)
                                        *   '<S381>/Saturation' (Parameter: UpperLimit)
                                        *   '<S395>/Saturation' (Parameter: UpperLimit)
                                        *   '<S413>/Saturation' (Parameter: UpperLimit)
                                        *   '<S437>/Saturation' (Parameter: UpperLimit)
                                        *   '<S461>/Saturation' (Parameter: UpperLimit)
                                        *   '<S487>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T xf_iang0_seed[16];            /* Variable: xf_iang0_seed
                                        * Referenced by: '<S43>/Random Number' (Parameter: Seed)
                                        */
  real_T xf_iang1_seed[16];            /* Variable: xf_iang1_seed
                                        * Referenced by: '<S44>/Random Number' (Parameter: Seed)
                                        */
  real_T xf_imag0_seed[16];            /* Variable: xf_imag0_seed
                                        * Referenced by: '<S45>/Random Number' (Parameter: Seed)
                                        */
  real_T xf_imag1_seed[16];            /* Variable: xf_imag1_seed
                                        * Referenced by: '<S46>/Random Number' (Parameter: Seed)
                                        */
  real_T Ramp_InitialOutput;           /* Mask Parameter: Ramp_InitialOutput
                                        * Referenced by: '<S68>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_b;         /* Mask Parameter: Ramp_InitialOutput_b
                                        * Referenced by: '<S86>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_l;         /* Mask Parameter: Ramp_InitialOutput_l
                                        * Referenced by: '<S100>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_n;         /* Mask Parameter: Ramp_InitialOutput_n
                                        * Referenced by: '<S126>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_p;         /* Mask Parameter: Ramp_InitialOutput_p
                                        * Referenced by: '<S148>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_d;         /* Mask Parameter: Ramp_InitialOutput_d
                                        * Referenced by: '<S178>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_h;         /* Mask Parameter: Ramp_InitialOutput_h
                                        * Referenced by: '<S204>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_pu;        /* Mask Parameter: Ramp_InitialOutput_pu
                                        * Referenced by: '<S222>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_k;         /* Mask Parameter: Ramp_InitialOutput_k
                                        * Referenced by: '<S244>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_a;         /* Mask Parameter: Ramp_InitialOutput_a
                                        * Referenced by: '<S254>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_ha;        /* Mask Parameter: Ramp_InitialOutput_ha
                                        * Referenced by: '<S280>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_kd;        /* Mask Parameter: Ramp_InitialOutput_kd
                                        * Referenced by: '<S302>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_m;         /* Mask Parameter: Ramp_InitialOutput_m
                                        * Referenced by: '<S328>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_e;         /* Mask Parameter: Ramp_InitialOutput_e
                                        * Referenced by: '<S354>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_h0;        /* Mask Parameter: Ramp_InitialOutput_h0
                                        * Referenced by: '<S372>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_ki;        /* Mask Parameter: Ramp_InitialOutput_ki
                                        * Referenced by: '<S390>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_mw;        /* Mask Parameter: Ramp_InitialOutput_mw
                                        * Referenced by: '<S400>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_nh;        /* Mask Parameter: Ramp_InitialOutput_nh
                                        * Referenced by: '<S426>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_n0;        /* Mask Parameter: Ramp_InitialOutput_n0
                                        * Referenced by: '<S448>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_kdz;       /* Mask Parameter: Ramp_InitialOutput_kdz
                                        * Referenced by: '<S474>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_InitialOutput_ap;        /* Mask Parameter: Ramp_InitialOutput_ap
                                        * Referenced by: '<S500>/Constant1' (Parameter: Value)
                                        */
  real_T Ramp_slope;                   /* Mask Parameter: Ramp_slope
                                        * Referenced by: '<S68>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_c;                 /* Mask Parameter: Ramp_slope_c
                                        * Referenced by: '<S86>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_n;                 /* Mask Parameter: Ramp_slope_n
                                        * Referenced by: '<S100>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_k;                 /* Mask Parameter: Ramp_slope_k
                                        * Referenced by: '<S126>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_nm;                /* Mask Parameter: Ramp_slope_nm
                                        * Referenced by: '<S148>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_h;                 /* Mask Parameter: Ramp_slope_h
                                        * Referenced by: '<S178>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_kc;                /* Mask Parameter: Ramp_slope_kc
                                        * Referenced by: '<S204>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_g;                 /* Mask Parameter: Ramp_slope_g
                                        * Referenced by: '<S222>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_e;                 /* Mask Parameter: Ramp_slope_e
                                        * Referenced by: '<S244>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_p;                 /* Mask Parameter: Ramp_slope_p
                                        * Referenced by: '<S254>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_cq;                /* Mask Parameter: Ramp_slope_cq
                                        * Referenced by: '<S280>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_d;                 /* Mask Parameter: Ramp_slope_d
                                        * Referenced by: '<S302>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_nmj;               /* Mask Parameter: Ramp_slope_nmj
                                        * Referenced by: '<S328>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_j;                 /* Mask Parameter: Ramp_slope_j
                                        * Referenced by: '<S354>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_a;                 /* Mask Parameter: Ramp_slope_a
                                        * Referenced by: '<S372>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_l;                 /* Mask Parameter: Ramp_slope_l
                                        * Referenced by: '<S390>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_kl;                /* Mask Parameter: Ramp_slope_kl
                                        * Referenced by: '<S400>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_n1;                /* Mask Parameter: Ramp_slope_n1
                                        * Referenced by: '<S426>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_pr;                /* Mask Parameter: Ramp_slope_pr
                                        * Referenced by: '<S448>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_gb;                /* Mask Parameter: Ramp_slope_gb
                                        * Referenced by: '<S474>/Step' (Parameter: After)
                                        */
  real_T Ramp_slope_gl;                /* Mask Parameter: Ramp_slope_gl
                                        * Referenced by: '<S500>/Step' (Parameter: After)
                                        */
  real_T SFunction1_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/S-Function1' (Parameter: Value)
                                        */
  real_T SFunction_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S2>/Constant' (Parameter: Value)
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S2>/Step' (Parameter: Before)
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S2>/Step' (Parameter: After)
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S2>/Step1' (Parameter: Before)
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S2>/Step1' (Parameter: After)
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S2>/Constant2' (Parameter: Value)
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S2>/Constant1' (Parameter: Value)
                                        */
  real_T Solver_P1_Size[2];            /* Computed Parameter: Solver_P1_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P1Size)
                                        */
  real_T Solver_P1[6];                 /* Computed Parameter: Solver_P1
                                        * Referenced by: '<S2>/Solver' (Parameter: P1)
                                        */
  real_T Solver_P3_Size[2];            /* Computed Parameter: Solver_P3_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P3Size)
                                        */
  real_T Solver_P3[24];                /* Computed Parameter: Solver_P3
                                        * Referenced by: '<S2>/Solver' (Parameter: P3)
                                        */
  real_T Solver_P4_Size[2];            /* Computed Parameter: Solver_P4_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P4Size)
                                        */
  real_T Solver_P4;                    /* Expression: np
                                        * Referenced by: '<S2>/Solver' (Parameter: P4)
                                        */
  real_T Solver_P5_Size[2];            /* Computed Parameter: Solver_P5_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P5Size)
                                        */
  real_T Solver_P5[4];                 /* Computed Parameter: Solver_P5
                                        * Referenced by: '<S2>/Solver' (Parameter: P5)
                                        */
  real_T Solver_P6_Size[2];            /* Computed Parameter: Solver_P6_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P6Size)
                                        */
  real_T Solver_P6[3];                 /* Computed Parameter: Solver_P6
                                        * Referenced by: '<S2>/Solver' (Parameter: P6)
                                        */
  real_T Solver_P7_Size[2];            /* Computed Parameter: Solver_P7_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P7Size)
                                        */
  real_T Solver_P7[9];                 /* Computed Parameter: Solver_P7
                                        * Referenced by: '<S2>/Solver' (Parameter: P7)
                                        */
  real_T Solver_P8_Size[2];            /* Computed Parameter: Solver_P8_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P8Size)
                                        */
  real_T Solver_P8[8];                 /* Computed Parameter: Solver_P8
                                        * Referenced by: '<S2>/Solver' (Parameter: P8)
                                        */
  real_T Solver_P9_Size[2];            /* Computed Parameter: Solver_P9_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P9Size)
                                        */
  real_T Solver_P9;                    /* Expression: exporty
                                        * Referenced by: '<S2>/Solver' (Parameter: P9)
                                        */
  real_T Solver_P10_Size[2];           /* Computed Parameter: Solver_P10_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P10Size)
                                        */
  real_T Solver_P10;                   /* Expression: builtin
                                        * Referenced by: '<S2>/Solver' (Parameter: P10)
                                        */
  real_T Solver_P11_Size[2];           /* Computed Parameter: Solver_P11_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P11Size)
                                        */
  real_T Solver_P11;                   /* Expression: logging
                                        * Referenced by: '<S2>/Solver' (Parameter: P11)
                                        */
  real_T Solver_P12_Size[2];           /* Computed Parameter: Solver_P12_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P12Size)
                                        */
  real_T Solver_P12;                   /* Expression: sim_mode
                                        * Referenced by: '<S2>/Solver' (Parameter: P12)
                                        */
  real_T Solver_P13_Size[2];           /* Computed Parameter: Solver_P13_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P13Size)
                                        */
  real_T Solver_P13;                   /* Expression: pf_max_it
                                        * Referenced by: '<S2>/Solver' (Parameter: P13)
                                        */
  real_T Solver_P14_Size[2];           /* Computed Parameter: Solver_P14_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P14Size)
                                        */
  real_T Solver_P14;                   /* Expression: pf_tol_v
                                        * Referenced by: '<S2>/Solver' (Parameter: P14)
                                        */
  real_T Solver_P15_Size[2];           /* Computed Parameter: Solver_P15_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P15Size)
                                        */
  real_T Solver_P15;                   /* Expression: pf_flat_start
                                        * Referenced by: '<S2>/Solver' (Parameter: P15)
                                        */
  real_T Solver_P16_Size[2];           /* Computed Parameter: Solver_P16_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P16Size)
                                        */
  real_T Solver_P16;                   /* Expression: pf_smart_start
                                        * Referenced by: '<S2>/Solver' (Parameter: P16)
                                        */
  real_T Solver_P17_Size[2];           /* Computed Parameter: Solver_P17_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P17Size)
                                        */
  real_T Solver_P17;                   /* Expression: pf_export
                                        * Referenced by: '<S2>/Solver' (Parameter: P17)
                                        */
  real_T Solver_P18_Size[2];           /* Computed Parameter: Solver_P18_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P18Size)
                                        */
  real_T Solver_P18;                   /* Expression: optim_threads
                                        * Referenced by: '<S2>/Solver' (Parameter: P18)
                                        */
  real_T Solver_P19_Size[2];           /* Computed Parameter: Solver_P19_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P19Size)
                                        */
  real_T Solver_P19;                   /* Expression: script_activate_postinit
                                        * Referenced by: '<S2>/Solver' (Parameter: P19)
                                        */
  real_T Solver_P20_Size[2];           /* Computed Parameter: Solver_P20_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P20Size)
                                        */
  real_T Solver_P21_Size[2];           /* Computed Parameter: Solver_P21_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P21Size)
                                        */
  real_T Solver_P21;                   /* Expression: perflog_on
                                        * Referenced by: '<S2>/Solver' (Parameter: P21)
                                        */
  real_T Solver_P22_Size[2];           /* Computed Parameter: Solver_P22_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P22Size)
                                        */
  real_T RandomNumber_Mean;            /* Expression: 0
                                        * Referenced by: '<S37>/Random Number' (Parameter: Mean)
                                        */
  real_T RandomNumber_Mean_n;          /* Expression: 0
                                        * Referenced by: '<S36>/Random Number' (Parameter: Mean)
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S2>/Constant3' (Parameter: Value)
                                        */
  real_T TSyncPCIeCtrl_P1_Size[2];  /* Computed Parameter: TSyncPCIeCtrl_P1_Size
                                     * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P1Size)
                                     */
  real_T TSyncPCIeCtrl_P1;             /* Expression: devIx
                                        * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P1)
                                        */
  real_T TSyncPCIeCtrl_P2_Size[2];  /* Computed Parameter: TSyncPCIeCtrl_P2_Size
                                     * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P2Size)
                                     */
  real_T TSyncPCIeCtrl_P2;             /* Expression: holdover_timeout
                                        * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P2)
                                        */
  real_T TSyncPCIeCtrl_P3_Size[2];  /* Computed Parameter: TSyncPCIeCtrl_P3_Size
                                     * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P3Size)
                                     */
  real_T TSyncPCIeCtrl_P3;             /* Expression: timestamp_en
                                        * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P3)
                                        */
  real_T TSyncPCIeCtrl_P4_Size[2];  /* Computed Parameter: TSyncPCIeCtrl_P4_Size
                                     * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P4Size)
                                     */
  real_T TSyncPCIeCtrl_P4;             /* Expression: set_time_en
                                        * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P4)
                                        */
  real_T TSyncPCIeCtrl_P5_Size[2];  /* Computed Parameter: TSyncPCIeCtrl_P5_Size
                                     * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P5Size)
                                     */
  real_T TSyncPCIeCtrl_P5;             /* Expression: ts_wo_sync_opt
                                        * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P5)
                                        */
  real_T Step_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<S68>/Step' (Parameter: Before)
                                        */
  real_T Gain_Gain;                    /* Expression: pi()/180
                                        * Referenced by: '<S2>/Gain' (Parameter: Gain)
                                        */
  real_T RandomNumber_Mean_c;          /* Expression: 0
                                        * Referenced by: '<S39>/Random Number' (Parameter: Mean)
                                        */
  real_T Gain2_Gain;                   /* Expression: pi()/180
                                        * Referenced by: '<S2>/Gain2' (Parameter: Gain)
                                        */
  real_T RandomNumber_Mean_cs;         /* Expression: 0
                                        * Referenced by: '<S38>/Random Number' (Parameter: Mean)
                                        */
  real_T Gain1_Gain;                   /* Expression: pi()/180
                                        * Referenced by: '<S2>/Gain1' (Parameter: Gain)
                                        */
  real_T RandomNumber_Mean_d;          /* Expression: 0
                                        * Referenced by: '<S41>/Random Number' (Parameter: Mean)
                                        */
  real_T RandomNumber_Mean_do;         /* Expression: 0
                                        * Referenced by: '<S40>/Random Number' (Parameter: Mean)
                                        */
  real_T Step_Y0_a;                    /* Expression: 0
                                        * Referenced by: '<S86>/Step' (Parameter: Before)
                                        */
  real_T RandomNumber_Mean_nw;         /* Expression: 0
                                        * Referenced by: '<S43>/Random Number' (Parameter: Mean)
                                        */
  real_T Gain3_Gain;                   /* Expression: pi()/180
                                        * Referenced by: '<S2>/Gain3' (Parameter: Gain)
                                        */
  real_T RandomNumber_Mean_l;          /* Expression: 0
                                        * Referenced by: '<S45>/Random Number' (Parameter: Mean)
                                        */
  real_T Step_Y0_o;                    /* Expression: 0
                                        * Referenced by: '<S100>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_k;                    /* Expression: 0
                                        * Referenced by: '<S126>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_oa;                   /* Expression: 0
                                        * Referenced by: '<S148>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_kd;                   /* Expression: 0
                                        * Referenced by: '<S178>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_m;                    /* Expression: 0
                                        * Referenced by: '<S204>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_p;                    /* Expression: 0
                                        * Referenced by: '<S222>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_f2;                   /* Expression: 0
                                        * Referenced by: '<S244>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_l;                    /* Expression: 0
                                        * Referenced by: '<S254>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_n;                    /* Expression: 0
                                        * Referenced by: '<S280>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_fl;                   /* Expression: 0
                                        * Referenced by: '<S302>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_ff;                   /* Expression: 0
                                        * Referenced by: '<S328>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_i;                    /* Expression: 0
                                        * Referenced by: '<S354>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_fv;                   /* Expression: 0
                                        * Referenced by: '<S372>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_ia;                   /* Expression: 0
                                        * Referenced by: '<S390>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_oj;                   /* Expression: 0
                                        * Referenced by: '<S400>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_mk;                   /* Expression: 0
                                        * Referenced by: '<S426>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_lv;                   /* Expression: 0
                                        * Referenced by: '<S448>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_h;                    /* Expression: 0
                                        * Referenced by: '<S474>/Step' (Parameter: Before)
                                        */
  real_T Step_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S500>/Step' (Parameter: Before)
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S511>/S-Function' (Parameter: P1Size)
                                        */
  real_T SFunction_P1;                 /* Expression: Acqu_group
                                        * Referenced by: '<S511>/S-Function' (Parameter: P1)
                                        */
  real_T RandomNumber_Mean_k;          /* Expression: 0
                                        * Referenced by: '<S44>/Random Number' (Parameter: Mean)
                                        */
  real_T Gain4_Gain;                   /* Expression: pi()/180
                                        * Referenced by: '<S2>/Gain4' (Parameter: Gain)
                                        */
  real_T RandomNumber_Mean_p;          /* Expression: 0
                                        * Referenced by: '<S46>/Random Number' (Parameter: Mean)
                                        */
  real_T FREQDEVIATION_Value;          /* Expression: 0
                                        * Referenced by: '<S3>/FREQ DEVIATION' (Parameter: Value)
                                        */
  real_T FREQROC_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/FREQ ROC' (Parameter: Value)
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_system_20220515_1_sm_master_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[3];
    SimStruct *childSFunctionPtrs[3];
    struct _ssBlkInfo2 blkInfo2[3];
    struct _ssSFcnModelMethods2 methods2[3];
    struct _ssSFcnModelMethods3 methods3[3];
    struct _ssSFcnModelMethods4 methods4[3];
    struct _ssStatesInfo2 statesInfo2[3];
    ssPeriodicStatesInfo periodicStatesInfo[3];
    struct _ssPortInfo2 inputOutputPortInfo2[3];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[4];
      struct _ssInPortUnit inputPortUnits[4];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[4];
      struct _ssPortOutputs outputPortInfo[14];
      struct _ssOutPortUnit outputPortUnits[14];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[14];
      uint_T attribs[22];
      mxArray *params[22];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[358];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;
  } NonInlinedSFcns;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T CTOutputIncnstWithState;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_system_20220515_1_sm_master_T system_20220515_1_sm_master_P;

/* Block signals (default storage) */
extern B_system_20220515_1_sm_master_T system_20220515_1_sm_master_B;

/* Block states (default storage) */
extern DW_system_20220515_1_sm_master_T system_20220515_1_sm_master_DW;

/*====================*
 * External functions *
 *====================*/
extern system_20220515_1_sm_master_rtModel *system_20220515_1_sm_master(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_system_20220515_1_sm_master_T *const
  system_20220515_1_sm_master_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'system_20220515_1_sm_master'
 * '<S1>'   : 'system_20220515_1_sm_master/OpCCode_do_not_touch'
 * '<S2>'   : 'system_20220515_1_sm_master/sm_master'
 * '<S3>'   : 'system_20220515_1_sm_master/sm_master/Frequency_signals'
 * '<S4>'   : 'system_20220515_1_sm_master/sm_master/PMU102_signals'
 * '<S5>'   : 'system_20220515_1_sm_master/sm_master/PMU103_signals'
 * '<S6>'   : 'system_20220515_1_sm_master/sm_master/PMU107_signals'
 * '<S7>'   : 'system_20220515_1_sm_master/sm_master/PMU110_signals'
 * '<S8>'   : 'system_20220515_1_sm_master/sm_master/PMU116_signals'
 * '<S9>'   : 'system_20220515_1_sm_master/sm_master/PMU121_signals'
 * '<S10>'  : 'system_20220515_1_sm_master/sm_master/PMU123_signals'
 * '<S11>'  : 'system_20220515_1_sm_master/sm_master/PMU202_signals'
 * '<S12>'  : 'system_20220515_1_sm_master/sm_master/PMU203_signals'
 * '<S13>'  : 'system_20220515_1_sm_master/sm_master/PMU207_signals'
 * '<S14>'  : 'system_20220515_1_sm_master/sm_master/PMU210_signals'
 * '<S15>'  : 'system_20220515_1_sm_master/sm_master/PMU216_signals'
 * '<S16>'  : 'system_20220515_1_sm_master/sm_master/PMU221_signals'
 * '<S17>'  : 'system_20220515_1_sm_master/sm_master/PMU223_signals'
 * '<S18>'  : 'system_20220515_1_sm_master/sm_master/PMU302_signals'
 * '<S19>'  : 'system_20220515_1_sm_master/sm_master/PMU303_signals'
 * '<S20>'  : 'system_20220515_1_sm_master/sm_master/PMU307_signals'
 * '<S21>'  : 'system_20220515_1_sm_master/sm_master/PMU310_signals'
 * '<S22>'  : 'system_20220515_1_sm_master/sm_master/PMU316_signals'
 * '<S23>'  : 'system_20220515_1_sm_master/sm_master/PMU321_signals'
 * '<S24>'  : 'system_20220515_1_sm_master/sm_master/PMU323_signals'
 * '<S25>'  : 'system_20220515_1_sm_master/sm_master/Subsystem1'
 * '<S26>'  : 'system_20220515_1_sm_master/sm_master/Subsystem10'
 * '<S27>'  : 'system_20220515_1_sm_master/sm_master/Subsystem2'
 * '<S28>'  : 'system_20220515_1_sm_master/sm_master/Subsystem3'
 * '<S29>'  : 'system_20220515_1_sm_master/sm_master/Subsystem4'
 * '<S30>'  : 'system_20220515_1_sm_master/sm_master/Subsystem5'
 * '<S31>'  : 'system_20220515_1_sm_master/sm_master/Subsystem6'
 * '<S32>'  : 'system_20220515_1_sm_master/sm_master/Subsystem7'
 * '<S33>'  : 'system_20220515_1_sm_master/sm_master/Subsystem8'
 * '<S34>'  : 'system_20220515_1_sm_master/sm_master/Subsystem9'
 * '<S35>'  : 'system_20220515_1_sm_master/sm_master/Timestamp selector'
 * '<S36>'  : 'system_20220515_1_sm_master/sm_master/bus_va_noise'
 * '<S37>'  : 'system_20220515_1_sm_master/sm_master/bus_vm_noise'
 * '<S38>'  : 'system_20220515_1_sm_master/sm_master/line_iang0_noise'
 * '<S39>'  : 'system_20220515_1_sm_master/sm_master/line_iang1_noise'
 * '<S40>'  : 'system_20220515_1_sm_master/sm_master/line_imag0_noise'
 * '<S41>'  : 'system_20220515_1_sm_master/sm_master/line_imag1_noise'
 * '<S42>'  : 'system_20220515_1_sm_master/sm_master/rtlab_send_subsystem'
 * '<S43>'  : 'system_20220515_1_sm_master/sm_master/xf_iang0_noise'
 * '<S44>'  : 'system_20220515_1_sm_master/sm_master/xf_iang1_noise'
 * '<S45>'  : 'system_20220515_1_sm_master/sm_master/xf_imag0_noise'
 * '<S46>'  : 'system_20220515_1_sm_master/sm_master/xf_imag1_noise'
 * '<S47>'  : 'system_20220515_1_sm_master/sm_master/Frequency_signals/FREQ_DEV'
 * '<S48>'  : 'system_20220515_1_sm_master/sm_master/Frequency_signals/ROCOF'
 * '<S49>'  : 'system_20220515_1_sm_master/sm_master/Frequency_signals/FREQ_DEV/OpOutput'
 * '<S50>'  : 'system_20220515_1_sm_master/sm_master/Frequency_signals/ROCOF/OpOutput'
 * '<S51>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I1a'
 * '<S52>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I1m'
 * '<S53>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I2a'
 * '<S54>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I2m'
 * '<S55>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I3a'
 * '<S56>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I3m'
 * '<S57>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_Va'
 * '<S58>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_Vm'
 * '<S59>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/Spoofing attack'
 * '<S60>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I1a/OpOutput'
 * '<S61>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I1m/OpOutput'
 * '<S62>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I2a/OpOutput'
 * '<S63>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I2m/OpOutput'
 * '<S64>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I3a/OpOutput'
 * '<S65>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_I3m/OpOutput'
 * '<S66>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_Va/OpOutput'
 * '<S67>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/PMU102_Vm/OpOutput'
 * '<S68>'  : 'system_20220515_1_sm_master/sm_master/PMU102_signals/Spoofing attack/Ramp'
 * '<S69>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I1a'
 * '<S70>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I1m'
 * '<S71>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I2a'
 * '<S72>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I2m'
 * '<S73>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I3a'
 * '<S74>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I3m'
 * '<S75>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_Va'
 * '<S76>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_Vm'
 * '<S77>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/Spoofing attack'
 * '<S78>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I1a/OpOutput'
 * '<S79>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I1m/OpOutput'
 * '<S80>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I2a/OpOutput'
 * '<S81>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I2m/OpOutput'
 * '<S82>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I3a/OpOutput'
 * '<S83>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_I3m/OpOutput'
 * '<S84>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_Va/OpOutput'
 * '<S85>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/PMU103_Vm/OpOutput'
 * '<S86>'  : 'system_20220515_1_sm_master/sm_master/PMU103_signals/Spoofing attack/Ramp'
 * '<S87>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_I1a'
 * '<S88>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_I1m'
 * '<S89>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_I2a'
 * '<S90>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_I2m'
 * '<S91>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_Va'
 * '<S92>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_Vm'
 * '<S93>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/Spoofing attack'
 * '<S94>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_I1a/OpOutput'
 * '<S95>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_I1m/OpOutput'
 * '<S96>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_I2a/OpOutput'
 * '<S97>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_I2m/OpOutput'
 * '<S98>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_Va/OpOutput'
 * '<S99>'  : 'system_20220515_1_sm_master/sm_master/PMU107_signals/PMU107_Vm/OpOutput'
 * '<S100>' : 'system_20220515_1_sm_master/sm_master/PMU107_signals/Spoofing attack/Ramp'
 * '<S101>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I1a'
 * '<S102>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I1m'
 * '<S103>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I2a'
 * '<S104>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I2m'
 * '<S105>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I3a'
 * '<S106>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I3m'
 * '<S107>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I4a'
 * '<S108>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I4m'
 * '<S109>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I5a'
 * '<S110>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I5m'
 * '<S111>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_Va'
 * '<S112>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_Vm'
 * '<S113>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/Spoofing attack'
 * '<S114>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I1a/OpOutput'
 * '<S115>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I1m/OpOutput'
 * '<S116>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I2a/OpOutput'
 * '<S117>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I2m/OpOutput'
 * '<S118>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I3a/OpOutput'
 * '<S119>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I3m/OpOutput'
 * '<S120>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I4a/OpOutput'
 * '<S121>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I4m/OpOutput'
 * '<S122>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I5a/OpOutput'
 * '<S123>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_I5m/OpOutput'
 * '<S124>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_Va/OpOutput'
 * '<S125>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/PMU110_Vm/OpOutput'
 * '<S126>' : 'system_20220515_1_sm_master/sm_master/PMU110_signals/Spoofing attack/Ramp'
 * '<S127>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I1a'
 * '<S128>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I1m'
 * '<S129>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I2a'
 * '<S130>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I2m'
 * '<S131>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I3a'
 * '<S132>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I3m'
 * '<S133>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I4a'
 * '<S134>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I4m'
 * '<S135>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_Va'
 * '<S136>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_Vm'
 * '<S137>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/Spoofing attack'
 * '<S138>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I1a/OpOutput'
 * '<S139>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I1m/OpOutput'
 * '<S140>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I2a/OpOutput'
 * '<S141>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I2m/OpOutput'
 * '<S142>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I3a/OpOutput'
 * '<S143>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I3m/OpOutput'
 * '<S144>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I4a/OpOutput'
 * '<S145>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_I4m/OpOutput'
 * '<S146>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_Va/OpOutput'
 * '<S147>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/PMU116_Vm/OpOutput'
 * '<S148>' : 'system_20220515_1_sm_master/sm_master/PMU116_signals/Spoofing attack/Ramp'
 * '<S149>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I1a'
 * '<S150>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I1m'
 * '<S151>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I2a'
 * '<S152>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I2m'
 * '<S153>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I3a'
 * '<S154>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I3m'
 * '<S155>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I4a'
 * '<S156>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I4m'
 * '<S157>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I5a'
 * '<S158>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I5m'
 * '<S159>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I6a'
 * '<S160>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I6m'
 * '<S161>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_Va'
 * '<S162>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_Vm'
 * '<S163>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/Spoofing attack'
 * '<S164>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I1a/OpOutput'
 * '<S165>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I1m/OpOutput'
 * '<S166>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I2a/OpOutput'
 * '<S167>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I2m/OpOutput'
 * '<S168>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I3a/OpOutput'
 * '<S169>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I3m/OpOutput'
 * '<S170>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I4a/OpOutput'
 * '<S171>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I4m/OpOutput'
 * '<S172>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I5a/OpOutput'
 * '<S173>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I5m/OpOutput'
 * '<S174>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I6a/OpOutput'
 * '<S175>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_I6m/OpOutput'
 * '<S176>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_Va/OpOutput'
 * '<S177>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/PMU121_Vm/OpOutput'
 * '<S178>' : 'system_20220515_1_sm_master/sm_master/PMU121_signals/Spoofing attack/Ramp'
 * '<S179>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I1a'
 * '<S180>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I1m'
 * '<S181>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I2a'
 * '<S182>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I2m'
 * '<S183>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I3a'
 * '<S184>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I3m'
 * '<S185>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I4a'
 * '<S186>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I4m'
 * '<S187>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I5a'
 * '<S188>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I5m'
 * '<S189>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_Va'
 * '<S190>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_Vm'
 * '<S191>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/Spoofing attack'
 * '<S192>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I1a/OpOutput'
 * '<S193>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I1m/OpOutput'
 * '<S194>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I2a/OpOutput'
 * '<S195>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I2m/OpOutput'
 * '<S196>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I3a/OpOutput'
 * '<S197>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I3m/OpOutput'
 * '<S198>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I4a/OpOutput'
 * '<S199>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I4m/OpOutput'
 * '<S200>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I5a/OpOutput'
 * '<S201>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_I5m/OpOutput'
 * '<S202>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_Va/OpOutput'
 * '<S203>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/PMU123_Vm/OpOutput'
 * '<S204>' : 'system_20220515_1_sm_master/sm_master/PMU123_signals/Spoofing attack/Ramp'
 * '<S205>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I1a'
 * '<S206>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I1m'
 * '<S207>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I2a'
 * '<S208>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I2m'
 * '<S209>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I3a'
 * '<S210>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I3m'
 * '<S211>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_Va'
 * '<S212>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_Vm'
 * '<S213>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/Spoofing attack'
 * '<S214>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I1a/OpOutput'
 * '<S215>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I1m/OpOutput'
 * '<S216>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I2a/OpOutput'
 * '<S217>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I2m/OpOutput'
 * '<S218>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I3a/OpOutput'
 * '<S219>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_I3m/OpOutput'
 * '<S220>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_Va/OpOutput'
 * '<S221>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/PMU202_Vm/OpOutput'
 * '<S222>' : 'system_20220515_1_sm_master/sm_master/PMU202_signals/Spoofing attack/Ramp'
 * '<S223>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I1a'
 * '<S224>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I1m'
 * '<S225>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I2a'
 * '<S226>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I2m'
 * '<S227>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I3a'
 * '<S228>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I3m'
 * '<S229>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I4a'
 * '<S230>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I4m'
 * '<S231>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_Va'
 * '<S232>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_Vm'
 * '<S233>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/Spoofing attack'
 * '<S234>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I1a/OpOutput'
 * '<S235>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I1m/OpOutput'
 * '<S236>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I2a/OpOutput'
 * '<S237>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I2m/OpOutput'
 * '<S238>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I3a/OpOutput'
 * '<S239>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I3m/OpOutput'
 * '<S240>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I4a/OpOutput'
 * '<S241>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_I4m/OpOutput'
 * '<S242>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_Va/OpOutput'
 * '<S243>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/PMU203_Vm/OpOutput'
 * '<S244>' : 'system_20220515_1_sm_master/sm_master/PMU203_signals/Spoofing attack/Ramp'
 * '<S245>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/PMU207_I1a'
 * '<S246>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/PMU207_I1m'
 * '<S247>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/PMU207_Va'
 * '<S248>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/PMU207_Vm'
 * '<S249>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/Spoofing attack'
 * '<S250>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/PMU207_I1a/OpOutput'
 * '<S251>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/PMU207_I1m/OpOutput'
 * '<S252>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/PMU207_Va/OpOutput'
 * '<S253>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/PMU207_Vm/OpOutput'
 * '<S254>' : 'system_20220515_1_sm_master/sm_master/PMU207_signals/Spoofing attack/Ramp'
 * '<S255>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I1a'
 * '<S256>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I1m'
 * '<S257>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I2a'
 * '<S258>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I2m'
 * '<S259>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I3a'
 * '<S260>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I3m'
 * '<S261>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I4a'
 * '<S262>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I4m'
 * '<S263>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I5a'
 * '<S264>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I5m'
 * '<S265>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_Va'
 * '<S266>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_Vm'
 * '<S267>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/Spoofing attack'
 * '<S268>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I1a/OpOutput'
 * '<S269>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I1m/OpOutput'
 * '<S270>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I2a/OpOutput'
 * '<S271>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I2m/OpOutput'
 * '<S272>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I3a/OpOutput'
 * '<S273>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I3m/OpOutput'
 * '<S274>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I4a/OpOutput'
 * '<S275>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I4m/OpOutput'
 * '<S276>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I5a/OpOutput'
 * '<S277>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_I5m/OpOutput'
 * '<S278>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_Va/OpOutput'
 * '<S279>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/PMU210_Vm/OpOutput'
 * '<S280>' : 'system_20220515_1_sm_master/sm_master/PMU210_signals/Spoofing attack/Ramp'
 * '<S281>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I1a'
 * '<S282>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I1m'
 * '<S283>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I2a'
 * '<S284>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I2m'
 * '<S285>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I3a'
 * '<S286>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I3m'
 * '<S287>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I4a'
 * '<S288>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I4m'
 * '<S289>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_Va'
 * '<S290>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_Vm'
 * '<S291>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/Spoofing attack'
 * '<S292>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I1a/OpOutput'
 * '<S293>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I1m/OpOutput'
 * '<S294>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I2a/OpOutput'
 * '<S295>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I2m/OpOutput'
 * '<S296>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I3a/OpOutput'
 * '<S297>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I3m/OpOutput'
 * '<S298>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I4a/OpOutput'
 * '<S299>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_I4m/OpOutput'
 * '<S300>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_Va/OpOutput'
 * '<S301>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/PMU216_Vm/OpOutput'
 * '<S302>' : 'system_20220515_1_sm_master/sm_master/PMU216_signals/Spoofing attack/Ramp'
 * '<S303>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I1a'
 * '<S304>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I1m'
 * '<S305>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I2a'
 * '<S306>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I2m'
 * '<S307>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I3a'
 * '<S308>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I3m'
 * '<S309>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I4a'
 * '<S310>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I4m'
 * '<S311>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I5a'
 * '<S312>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I5m'
 * '<S313>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_Va'
 * '<S314>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_Vm'
 * '<S315>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/Spoofing attack'
 * '<S316>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I1a/OpOutput'
 * '<S317>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I1m/OpOutput'
 * '<S318>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I2a/OpOutput'
 * '<S319>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I2m/OpOutput'
 * '<S320>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I3a/OpOutput'
 * '<S321>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I3m/OpOutput'
 * '<S322>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I4a/OpOutput'
 * '<S323>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I4m/OpOutput'
 * '<S324>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I5a/OpOutput'
 * '<S325>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_I5m/OpOutput'
 * '<S326>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_Va/OpOutput'
 * '<S327>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/PMU221_Vm/OpOutput'
 * '<S328>' : 'system_20220515_1_sm_master/sm_master/PMU221_signals/Spoofing attack/Ramp'
 * '<S329>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I1a'
 * '<S330>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I1m'
 * '<S331>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I2a'
 * '<S332>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I2m'
 * '<S333>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I3a'
 * '<S334>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I3m'
 * '<S335>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I4a'
 * '<S336>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I4m'
 * '<S337>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I5a'
 * '<S338>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I5m'
 * '<S339>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_Va'
 * '<S340>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_Vm'
 * '<S341>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/Spoofing attack'
 * '<S342>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I1a/OpOutput'
 * '<S343>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I1m/OpOutput'
 * '<S344>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I2a/OpOutput'
 * '<S345>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I2m/OpOutput'
 * '<S346>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I3a/OpOutput'
 * '<S347>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I3m/OpOutput'
 * '<S348>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I4a/OpOutput'
 * '<S349>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I4m/OpOutput'
 * '<S350>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I5a/OpOutput'
 * '<S351>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_I5m/OpOutput'
 * '<S352>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_Va/OpOutput'
 * '<S353>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/PMU223_Vm/OpOutput'
 * '<S354>' : 'system_20220515_1_sm_master/sm_master/PMU223_signals/Spoofing attack/Ramp'
 * '<S355>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I1a'
 * '<S356>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I1m'
 * '<S357>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I2a'
 * '<S358>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I2m'
 * '<S359>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I3a'
 * '<S360>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I3m'
 * '<S361>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_Va'
 * '<S362>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_Vm'
 * '<S363>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/Spoofing attack'
 * '<S364>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I1a/OpOutput'
 * '<S365>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I1m/OpOutput'
 * '<S366>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I2a/OpOutput'
 * '<S367>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I2m/OpOutput'
 * '<S368>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I3a/OpOutput'
 * '<S369>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_I3m/OpOutput'
 * '<S370>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_Va/OpOutput'
 * '<S371>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/PMU302_Vm/OpOutput'
 * '<S372>' : 'system_20220515_1_sm_master/sm_master/PMU302_signals/Spoofing attack/Ramp'
 * '<S373>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I1a'
 * '<S374>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I1m'
 * '<S375>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I2a'
 * '<S376>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I2m'
 * '<S377>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I3a'
 * '<S378>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I3m'
 * '<S379>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_Va'
 * '<S380>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_Vm'
 * '<S381>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/Spoofing attack'
 * '<S382>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I1a/OpOutput'
 * '<S383>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I1m/OpOutput'
 * '<S384>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I2a/OpOutput'
 * '<S385>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I2m/OpOutput'
 * '<S386>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I3a/OpOutput'
 * '<S387>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_I3m/OpOutput'
 * '<S388>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_Va/OpOutput'
 * '<S389>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/PMU303_Vm/OpOutput'
 * '<S390>' : 'system_20220515_1_sm_master/sm_master/PMU303_signals/Spoofing attack/Ramp'
 * '<S391>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/PMU307_I1a'
 * '<S392>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/PMU307_I1m'
 * '<S393>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/PMU307_Va'
 * '<S394>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/PMU307_Vm'
 * '<S395>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/Spoofing attack'
 * '<S396>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/PMU307_I1a/OpOutput'
 * '<S397>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/PMU307_I1m/OpOutput'
 * '<S398>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/PMU307_Va/OpOutput'
 * '<S399>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/PMU307_Vm/OpOutput'
 * '<S400>' : 'system_20220515_1_sm_master/sm_master/PMU307_signals/Spoofing attack/Ramp'
 * '<S401>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I1a'
 * '<S402>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I1m'
 * '<S403>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I2a'
 * '<S404>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I2m'
 * '<S405>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I3a'
 * '<S406>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I3m'
 * '<S407>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I4a'
 * '<S408>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I4m'
 * '<S409>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I5a'
 * '<S410>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I5m'
 * '<S411>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_Va'
 * '<S412>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_Vm'
 * '<S413>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/Spoofing attack'
 * '<S414>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I1a/OpOutput'
 * '<S415>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I1m/OpOutput'
 * '<S416>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I2a/OpOutput'
 * '<S417>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I2m/OpOutput'
 * '<S418>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I3a/OpOutput'
 * '<S419>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I3m/OpOutput'
 * '<S420>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I4a/OpOutput'
 * '<S421>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I4m/OpOutput'
 * '<S422>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I5a/OpOutput'
 * '<S423>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_I5m/OpOutput'
 * '<S424>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_Va/OpOutput'
 * '<S425>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/PMU310_Vm/OpOutput'
 * '<S426>' : 'system_20220515_1_sm_master/sm_master/PMU310_signals/Spoofing attack/Ramp'
 * '<S427>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I1a'
 * '<S428>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I1m'
 * '<S429>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I2a'
 * '<S430>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I2m'
 * '<S431>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I3a'
 * '<S432>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I3m'
 * '<S433>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I4a'
 * '<S434>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I4m'
 * '<S435>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_Va'
 * '<S436>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_Vm'
 * '<S437>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/Spoofing attack'
 * '<S438>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I1a/OpOutput'
 * '<S439>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I1m/OpOutput'
 * '<S440>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I2a/OpOutput'
 * '<S441>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I2m/OpOutput'
 * '<S442>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I3a/OpOutput'
 * '<S443>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I3m/OpOutput'
 * '<S444>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I4a/OpOutput'
 * '<S445>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_I4m/OpOutput'
 * '<S446>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_Va/OpOutput'
 * '<S447>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/PMU316_Vm/OpOutput'
 * '<S448>' : 'system_20220515_1_sm_master/sm_master/PMU316_signals/Spoofing attack/Ramp'
 * '<S449>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I1a'
 * '<S450>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I1m'
 * '<S451>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I2a'
 * '<S452>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I2m'
 * '<S453>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I3a'
 * '<S454>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I3m'
 * '<S455>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I4a'
 * '<S456>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I4m'
 * '<S457>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I5a'
 * '<S458>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I5m'
 * '<S459>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_Va'
 * '<S460>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_Vm'
 * '<S461>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/Spoofing attack'
 * '<S462>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I1a/OpOutput'
 * '<S463>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I1m/OpOutput'
 * '<S464>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I2a/OpOutput'
 * '<S465>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I2m/OpOutput'
 * '<S466>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I3a/OpOutput'
 * '<S467>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I3m/OpOutput'
 * '<S468>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I4a/OpOutput'
 * '<S469>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I4m/OpOutput'
 * '<S470>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I5a/OpOutput'
 * '<S471>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_I5m/OpOutput'
 * '<S472>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_Va/OpOutput'
 * '<S473>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/PMU321_Vm/OpOutput'
 * '<S474>' : 'system_20220515_1_sm_master/sm_master/PMU321_signals/Spoofing attack/Ramp'
 * '<S475>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I1a'
 * '<S476>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I1m'
 * '<S477>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I2a'
 * '<S478>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I2m'
 * '<S479>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I3a'
 * '<S480>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I3m'
 * '<S481>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I4a'
 * '<S482>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I4m'
 * '<S483>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I5a'
 * '<S484>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I5m'
 * '<S485>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_Va'
 * '<S486>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_Vm'
 * '<S487>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/Spoofing attack'
 * '<S488>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I1a/OpOutput'
 * '<S489>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I1m/OpOutput'
 * '<S490>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I2a/OpOutput'
 * '<S491>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I2m/OpOutput'
 * '<S492>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I3a/OpOutput'
 * '<S493>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I3m/OpOutput'
 * '<S494>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I4a/OpOutput'
 * '<S495>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I4m/OpOutput'
 * '<S496>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I5a/OpOutput'
 * '<S497>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_I5m/OpOutput'
 * '<S498>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_Va/OpOutput'
 * '<S499>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/PMU323_Vm/OpOutput'
 * '<S500>' : 'system_20220515_1_sm_master/sm_master/PMU323_signals/Spoofing attack/Ramp'
 * '<S501>' : 'system_20220515_1_sm_master/sm_master/Timestamp selector/clock_epoch'
 * '<S502>' : 'system_20220515_1_sm_master/sm_master/Timestamp selector/clock_ns'
 * '<S503>' : 'system_20220515_1_sm_master/sm_master/Timestamp selector/clock_sync'
 * '<S504>' : 'system_20220515_1_sm_master/sm_master/Timestamp selector/clock_epoch/OpOutput'
 * '<S505>' : 'system_20220515_1_sm_master/sm_master/Timestamp selector/clock_ns/OpOutput'
 * '<S506>' : 'system_20220515_1_sm_master/sm_master/Timestamp selector/clock_sync/OpOutput'
 * '<S507>' : 'system_20220515_1_sm_master/sm_master/bus_va_noise/MATLAB Function'
 * '<S508>' : 'system_20220515_1_sm_master/sm_master/line_iang0_noise/MATLAB Function'
 * '<S509>' : 'system_20220515_1_sm_master/sm_master/line_iang1_noise/MATLAB Function'
 * '<S510>' : 'system_20220515_1_sm_master/sm_master/rtlab_send_subsystem/Subsystem1'
 * '<S511>' : 'system_20220515_1_sm_master/sm_master/rtlab_send_subsystem/Subsystem1/Send1'
 * '<S512>' : 'system_20220515_1_sm_master/sm_master/xf_iang0_noise/MATLAB Function'
 * '<S513>' : 'system_20220515_1_sm_master/sm_master/xf_iang1_noise/MATLAB Function'
 */
#endif                           /* RTW_HEADER_system_20220515_1_sm_master_h_ */
