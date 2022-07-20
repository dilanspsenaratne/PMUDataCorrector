OPAL-1.0 Object
DataLogger::Configuration {
  m01_recordMode=Automatic
  m05_useRTCore=0
  m06_verbose=0
  m09_noDataLoss=0
  m13_usageMode=Basic
  m14_logLevel=Minimal
  m15_toolPriority=NORMAL
  m17_showDLTConsole=0
  name=5E4E7569-E192-4AEE-B3A1-CF2CD32D94F6_Config53CFA58B-DFC2-4483-955B-BF11C88DCBC9
  m10_signalGroupConfigList=5E4E7569-E192-4AEE-B3A1-CF2CD32D94F6_Config53CFA58B-DFC2-4483-955B-BF11C88DCBC9/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=5E4E7569-E192-4AEE-B3A1-CF2CD32D94F6_Config53CFA58B-DFC2-4483-955B-BF11C88DCBC9/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=C8362767-6B5A-4CAB-90CF-F5917A09E278-default/SyncExchangerRegistry/C9859F67-81AA-444C-8A95-50245BE6B43B/5E4E7569-E192-4AEE-B3A1-CF2CD32D94F6_Config53CFA58B-DFC2-4483-955B-BF11C88DCBC9/SignalGroupConfigList
      instance {
        guid=201C4FF0-9ECA-456F-A278-5E227FF99DF4
        m003_recordMode=Inherit
        m006_exportFormat=OPREC
        m007_fileAutoNaming=1
        m010_fileName=data
        m011_decimationFactor=1
        m015_frameLength=1
        m016_frameLengthUnits=Seconds
        m020_nbRecordedFrames=10
        m021_fileLength=10
        m022_fileLengthUnits=Seconds
        m11_showTriggerConfiguration=1
        m12_triggerReferenceValue=0
        m13_triggerMode=Normal
        m14_triggerFunction=Edge
        m15_triggerPolarity=Positive
        m18_preTriggerPercent=0
        m19_triggerHoldoff=0
        m20_triggerSignalPath=
        m35_enableSubFraming=1
        m36_subFrameSizeMillis=10
      }
    }
  }
  parent=5E4E7569-E192-4AEE-B3A1-CF2CD32D94F6_Config53CFA58B-DFC2-4483-955B-BF11C88DCBC9
}