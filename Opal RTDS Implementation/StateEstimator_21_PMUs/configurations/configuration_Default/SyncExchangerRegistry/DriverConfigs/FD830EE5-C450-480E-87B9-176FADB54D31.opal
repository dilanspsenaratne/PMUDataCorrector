OPAL-1.0 Object
C37118::Slave::Configuration {
  m00_useExternalClock=1
  m00_v_clockAutoDetect=0
  m01_useRTCore=1
  m02_queueMonitoring=1
  m03_verbose=0
  nbFIFOConnections=0
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F
  pmuClockOffsets {
  }
  pmuDataOffsets {
  }
  pmuList=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
  parent=/
}
IOConfigListMap<C37118::Slave::PmuConfiguration> {
  resizable=1
  uiName=OPALRT-PMU_
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
  items {
    item {
      IOConfigItem_id=PMU100
      isDeletable=1
      listParent=C8362767-6B5A-4CAB-90CF-F5917A09E278-default/SyncExchangerRegistry/134F8797-DA1C-4F71-BE0C-B142B4589B50/FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
      instance {
        guid=C12ADCAF-6F43-46E9-AC96-B57A28C0D670
        m00_pmu_id=1
        m02_pmu_protocol=TCP
        m03_pmu_tcp_port=4712
        m04_pmu_udp_port=4713
        m05_0_pmu_nic_name=eth0
        m06_pmu_ip_address=any
        m07_pmu_freq=_60_Hz
        m095_custom_pmu_data_rate=60
        m09_pmu_phasors_rep=POLAR
        m10_pmu_phasors_format=FLOAT
        m11_pmu_analogs_format=INT16
        m12_pmu_freq_format=INT16
        m13_pmu_header=Default header
        m14_pmu_roundTimestamp=0
        m08_pmu_data_rate {
          mAttemptedVal=-1
          mValue=5
        }
        m15_pmu_phasors=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/AD531E33-EB71-49DC-B6CE-68167B52CB1E
        m16_pmu_analogs=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/0E385CA6-4DEA-42ED-B9E2-16270A779AC1
        m17_pmu_digitals=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/FE24D5A4-6062-4596-9E06-30A60D9367A5
      }
    }
    item {
      IOConfigItem_id=PMU200
      isDeletable=1
      listParent=C8362767-6B5A-4CAB-90CF-F5917A09E278-default/SyncExchangerRegistry/134F8797-DA1C-4F71-BE0C-B142B4589B50/FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
      instance {
        guid=ABA4DDE7-DAB8-4C51-967B-D522B15219D8
        m00_pmu_id=2
        m02_pmu_protocol=TCP
        m03_pmu_tcp_port=4713
        m04_pmu_udp_port=4715
        m05_0_pmu_nic_name=eth0
        m06_pmu_ip_address=any
        m07_pmu_freq=_60_Hz
        m095_custom_pmu_data_rate=60
        m09_pmu_phasors_rep=POLAR
        m10_pmu_phasors_format=FLOAT
        m11_pmu_analogs_format=INT16
        m12_pmu_freq_format=INT16
        m13_pmu_header=Default header
        m14_pmu_roundTimestamp=0
        m08_pmu_data_rate {
          mAttemptedVal=-1
          mValue=5
        }
        m15_pmu_phasors=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/08FFAAD3-A70A-481A-8A23-55F6C7E734F1
        m16_pmu_analogs=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/CA494C23-7433-4B95-9A17-FBF14B934BEC
        m17_pmu_digitals=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/92C14B6F-3ED0-4168-B32D-5E13A142CD34
      }
    }
    item {
      IOConfigItem_id=PMU300
      isDeletable=1
      listParent=C8362767-6B5A-4CAB-90CF-F5917A09E278-default/SyncExchangerRegistry/134F8797-DA1C-4F71-BE0C-B142B4589B50/FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
      instance {
        guid=32910533-12E3-49CC-AB9B-EB80787EB444
        m00_pmu_id=3
        m02_pmu_protocol=TCP
        m03_pmu_tcp_port=4714
        m04_pmu_udp_port=4717
        m05_0_pmu_nic_name=eth0
        m06_pmu_ip_address=any
        m07_pmu_freq=_60_Hz
        m095_custom_pmu_data_rate=60
        m09_pmu_phasors_rep=POLAR
        m10_pmu_phasors_format=FLOAT
        m11_pmu_analogs_format=INT16
        m12_pmu_freq_format=INT16
        m13_pmu_header=Default header
        m14_pmu_roundTimestamp=0
        m08_pmu_data_rate {
          mAttemptedVal=-1
          mValue=5
        }
        m15_pmu_phasors=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/FBBCAAA9-CD69-4F01-BDF7-B327AAD954E2
        m16_pmu_analogs=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/B79B8519-7631-437A-92BD-9908C82F6FB6
        m17_pmu_digitals=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/5B0BB26F-3439-4530-9BA8-2579F62269CB
      }
    }
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F
}
IOConfigList<C37118::Slave::PmuPhasor> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/AD531E33-EB71-49DC-B6CE-68167B52CB1E
  items {
    item {
      guid=12958EA4-24B1-406E-A258-4340A2255D80
      m00_name=B102_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=914111F6-2FF4-4F78-A28B-62C8B923054B
      m00_name=B102_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=8DC0E6A0-BB04-4924-A713-752B2B5A6AE0
      m00_name=B102_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=C7AD09FC-2510-4111-8DF8-9884592F2568
      m00_name=B102_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=685DEC8A-917E-404A-B9AF-80D71191E6B6
      m00_name=B103_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=9189CD63-3292-42C0-9EFC-8C947124769D
      m00_name=B103_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=32E5A01B-29BF-4A40-A3BA-23C92B0A4486
      m00_name=B103_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=864C3563-2E0F-482D-A492-964BE3C20C49
      m00_name=B103_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=7F584C43-B29C-4CEE-8CF9-455F459723F8
      m00_name=B107_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=18433BD0-E507-4A84-B615-1CF587F22549
      m00_name=B107_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=38500195-F2F7-47A5-BF6F-41F122455BCF
      m00_name=B107_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=8A4BF18C-6858-4457-9535-2DE7D54BAF10
      m00_name=B110_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=2D258A0E-15B0-4482-A1EE-78F8EE0F9556
      m00_name=B110_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=71C09E63-00F0-489A-83C2-D8C9D22B8344
      m00_name=B110_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=2618F5DD-943D-41BA-BCC6-60E49B93D7CC
      m00_name=B110_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=9341218F-8CB1-4EBC-A6BD-52DC9AA097A0
      m00_name=B110_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=AFCA0A14-00D2-494C-B9BD-225A23A1C21C
      m00_name=B110_I5
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=E8B14BE2-E860-400F-83F3-63683BFBD548
      m00_name=B116_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=D7D0CEB3-43EC-4539-8144-3D58EEAD0F7E
      m00_name=B116_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=235FC9A5-2D24-4D36-9AAF-1125A8F8588D
      m00_name=B116_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=3BECDE8E-D1AE-4D13-B68F-D2EF888D6C62
      m00_name=B116_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=906C8E85-CBE0-4863-8DF4-ABDA3B946323
      m00_name=B116_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=62A49792-252B-4AC8-A842-D4F208869ADB
      m00_name=B121_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=197D3122-3DCE-4DE6-9DB6-6E8F5932CB36
      m00_name=B121_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=BF894150-86E6-4D74-B883-6158C3D68266
      m00_name=B121_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=643D45BE-6EFD-46F2-B7E6-74548FA11DF3
      m00_name=B121_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=41C1B292-9FC7-4178-87A7-32E14CD479EC
      m00_name=B121_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=44D886F7-0105-4FF9-9C97-182DD993A917
      m00_name=B121_I5
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=E165B069-6B47-4523-91E6-D32042CE956B
      m00_name=B121_I6
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=55EB92BF-9A7E-4119-9E09-7D638F8F9B62
      m00_name=B123_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=3474DF02-ECE9-45C8-9B64-1C51823C76F1
      m00_name=B123_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=C0359422-68EE-45EB-95D3-7E5154084A36
      m00_name=B123_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=C756E5E5-5990-423A-9C03-60D16F9F739B
      m00_name=B123_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=364BC067-0066-4AE9-81CB-36A6F2A945E7
      m00_name=B123_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=B8C46A64-491B-4CBB-A494-3B3C05EAFF53
      m00_name=B123_I5
      m01_type=CURRENT
      m02_unit=100
    }
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}
IOConfigList<C37118::Slave::PmuAnalog> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/0E385CA6-4DEA-42ED-B9E2-16270A779AC1
  items {
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}
IOConfigList<C37118::Slave::PmuDigital> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/FE24D5A4-6062-4596-9E06-30A60D9367A5
  items {
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}
IOConfigList<C37118::Slave::PmuPhasor> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/08FFAAD3-A70A-481A-8A23-55F6C7E734F1
  items {
    item {
      guid=86F0FA9C-8E45-42D9-898B-B79153A69A46
      m00_name=B202_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=E4599211-CE8B-497A-8E79-3E93BEEB767A
      m00_name=B202_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=05152893-06F7-4FCF-B17A-336E05FC2893
      m00_name=B202_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=09F76F6B-88A3-4AF5-A0D7-C0FFE3381FEC
      m00_name=B202_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=4B4C9A20-CF9A-4817-8FB9-3964505292DC
      m00_name=B203_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=118B7356-A1F5-436D-898E-E428BE42DAB9
      m00_name=B203_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=983D84EB-7715-423F-A322-9DA5E081A8D0
      m00_name=B203_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=5D8606EC-821F-47F4-AE17-0F8F31DE9499
      m00_name=B203_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=AAC85CDE-3FAD-4952-8649-5B9C9ECF8EE9
      m00_name=B203_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=5E45AE10-6693-4F53-96B8-A9A69CC4795B
      m00_name=B207_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=D223560A-E8AC-4CCD-A404-D20D06097CF4
      m00_name=B207_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=8AFA9A4B-44B2-4286-A2E6-9A8DA7B79311
      m00_name=B210_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=34F3085F-F0A8-42F4-99DD-4263DB572045
      m00_name=B210_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=EBDB1718-9DA6-4694-AA27-6A86CAE1C92C
      m00_name=B210_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=D3309C34-D1CA-4BFB-9B56-CFEB52DE9C9A
      m00_name=B210_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=0FD2454C-019E-4150-8928-F249D53B41A5
      m00_name=B210_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=62DCD18C-40C5-4FAE-A853-8C8DCA0351C6
      m00_name=B210_I5
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=5D76F7F9-8413-4093-86B4-434E2DC745FE
      m00_name=B216_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=664B1FB1-403F-4577-B6A7-348014452F95
      m00_name=B216_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=EBB882CD-790D-408B-9179-7C6652DAF9CF
      m00_name=B216_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=4E6E3CCF-705F-47BC-A935-335540300097
      m00_name=B216_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=88AA154E-0EF5-4D42-B5EE-EFE4D0AE3244
      m00_name=B216_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=101CB7CF-4F9D-47DE-8BDE-EA652F571694
      m00_name=B221_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=3D3C93B9-6419-4717-9717-D25E76E43B08
      m00_name=B221_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=D6707977-CDC1-497E-96DB-A04A79A45D8E
      m00_name=B221_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=B0012B08-397D-40A2-B144-B7051B73ACAC
      m00_name=B221_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=63FA6526-00F9-495A-8858-51345C357582
      m00_name=B221_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=A1B3E250-EC50-42F6-87BA-3775B16988BE
      m00_name=B221_I5
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=FD85F235-4B09-40C6-A8F5-9B93AFFC9800
      m00_name=B223_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=6D3C83CA-237C-472D-AB87-F5C01B2D4089
      m00_name=B223_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=432F72CC-3699-4FB0-9C00-47639032F82A
      m00_name=B223_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=3565C0C6-697E-4FA4-9A12-4F52F0404936
      m00_name=B223_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=4DD65E8D-0768-42B9-B800-3211B140A50D
      m00_name=B223_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=34902613-9EE1-4EB7-B67A-864A3033B9CB
      m00_name=B223_I5
      m01_type=CURRENT
      m02_unit=100
    }
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}
IOConfigList<C37118::Slave::PmuAnalog> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/CA494C23-7433-4B95-9A17-FBF14B934BEC
  items {
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}
IOConfigList<C37118::Slave::PmuDigital> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/92C14B6F-3ED0-4168-B32D-5E13A142CD34
  items {
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}
IOConfigList<C37118::Slave::PmuPhasor> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/FBBCAAA9-CD69-4F01-BDF7-B327AAD954E2
  items {
    item {
      guid=BDCEEB20-500F-4192-ABE3-2180DC3868AC
      m00_name=B302_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=05938151-1DD4-4F79-8683-64B1B96454CB
      m00_name=B302_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=B19DDAEF-1690-44AD-B3DC-99B46A7EF385
      m00_name=B302_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=F0EF27C4-CC5C-4C42-91E8-64E9AC17D8C0
      m00_name=B302_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=239B6EAD-F50B-4A32-9080-1429A94DCC4A
      m00_name=B303_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=9878B0C0-C6B6-4572-8242-56D660A0606D
      m00_name=B303_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=96802377-4551-4259-AAEC-7D4FC3708134
      m00_name=B303_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=66482280-5094-46C1-A330-F12AE1782762
      m00_name=B303_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=0250DEF1-D8AE-4197-A90F-B793733D002A
      m00_name=B307_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=EBF396EF-533B-49B2-A527-40BB330D8637
      m00_name=B307_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=3081C2D1-08C7-4402-A643-0D1928D45712
      m00_name=B310_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=BC4F5C93-5964-4B34-9478-C31B5FF3CCC6
      m00_name=B310_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=0356EE1F-EA37-4A4E-9382-0FF8FB85F3BF
      m00_name=B310_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=E74D64AC-E7A3-492B-A12A-D6F1E3EECD7B
      m00_name=B310_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=8D87DD4C-F113-400F-825A-20645C567D75
      m00_name=B310_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=9CE2D322-4D48-48D3-A745-F53F20EC31DC
      m00_name=B310_I5
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=926CC4C9-DA21-4195-B5E8-25474CB63F72
      m00_name=B316_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=DAD1FE67-81D2-4986-9D5A-7A65645B59E8
      m00_name=B316_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=F50FDD48-7952-4035-8A18-63342F6A7A92
      m00_name=B316_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=9664CA0C-6625-4107-AEAF-283F6981CF9F
      m00_name=B316_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=5021C03E-858D-4EEE-A161-5B93085D9D9F
      m00_name=B316_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=A2DA1110-5CBF-46AF-881B-E929FDFD794B
      m00_name=B321_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=CE220677-68C2-4A0F-8296-9E148269367B
      m00_name=B321_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=E3868E39-14D2-47B6-956E-E265F72B8716
      m00_name=B321_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=31899514-EC53-44A7-8CBA-088301EA393A
      m00_name=B321_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=304F025A-4961-48B9-A5DC-1F40BBA8D02A
      m00_name=B321_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=7239DC0A-C966-4149-81AA-9D34DDF1742C
      m00_name=B321_I5
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=610541E8-3645-45BC-AF75-D9101E386364
      m00_name=B323_V
      m01_type=VOLTAGE
      m02_unit=100
    }
    item {
      guid=8C418BC7-1020-4385-AE25-C360EA43F6B8
      m00_name=B323_I1
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=D4CFE51D-D84C-4118-ACFB-CC56A433E67D
      m00_name=B323_I2
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=3449B6DC-C034-4B50-A3B0-37C1F298E78F
      m00_name=B323_I3
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=85A1D011-A759-413B-B332-B539C1A937F8
      m00_name=B323_I4
      m01_type=CURRENT
      m02_unit=100
    }
    item {
      guid=042F41A4-A436-475E-8035-EAB5F77EBB4B
      m00_name=B323_I5
      m01_type=CURRENT
      m02_unit=100
    }
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}
IOConfigList<C37118::Slave::PmuAnalog> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/B79B8519-7631-437A-92BD-9908C82F6FB6
  items {
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}
IOConfigList<C37118::Slave::PmuDigital> {
  resizable=1
  name=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList/5B0BB26F-3439-4530-9BA8-2579F62269CB
  items {
  }
  parent=FD830EE5-C450-480E-87B9-176FADB54D31_Config74E96B5D-A2DD-4B2B-B4E6-9E433BB0B88F/pmuList
}