/*
 * system_20220515_1_sm_master_data.c
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

#include "system_20220515_1_sm_master.h"
#include "system_20220515_1_sm_master_private.h"

/* Block parameters (default storage) */
P_system_20220515_1_sm_master_T system_20220515_1_sm_master_P = {
  /* Variable: en_spoofing_attack
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
  {
    1.0,
    0.0,
    0.0,
    0.0,
    1.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    -1.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    -1.0
  },

  /* Variable: spoof_st
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
  {
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0,
    180.0
  },

  /* Computed Parameter: Solver_P2_Size
   * Referenced by: '<S2>/Solver' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Variable: Ts
   * Referenced by: '<S2>/Solver' (Parameter: P2)
   */
  0.001,

  /* Variable: ang_variance
   * Referenced by:
   *   '<S36>/Random Number' (Parameter: Variance)
   *   '<S38>/Random Number' (Parameter: Variance)
   *   '<S39>/Random Number' (Parameter: Variance)
   *   '<S43>/Random Number' (Parameter: Variance)
   *   '<S44>/Random Number' (Parameter: Variance)
   */
  0.06,

  /* Variable: bus_va_seed
   * Referenced by: '<S36>/Random Number' (Parameter: Seed)
   */
  { 787.0, 203.0, 92.0, 90.0, 118.0, 210.0, 1434.0, 1161.0, 373.0, 740.0, 580.0,
    717.0, 122.0, 207.0, 565.0, 1439.0, 800.0, 446.0, 23.0, 585.0, 83.0, 23.0,
    357.0, 549.0, 576.0, 352.0, 607.0, 353.0, 1523.0, 1147.0, 1040.0, 1945.0,
    661.0, 220.0, 1089.0, 1358.0, 464.0, 736.0, 538.0, 727.0, 455.0, 980.0,
    299.0, 552.0, 189.0, 816.0, 413.0, 492.0, 852.0, 2206.0, 471.0, 1738.0,
    555.0, 1439.0, 185.0, 812.0, 83.0, 408.0, 694.0, 859.0, 129.0, 288.0, 127.0,
    287.0, 424.0, 1479.0, 338.0, 946.0, 1114.0, 308.0, 863.0, 1724.0, 339.0 },

  /* Variable: bus_vm_seed
   * Referenced by: '<S37>/Random Number' (Parameter: Seed)
   */
  { 765.0, 354.0, 410.0, 384.0, 2629.0, 360.0, 1080.0, 472.0, 31.0, 1532.0, 99.0,
    226.0, 524.0, 626.0, 1349.0, 76.0, 501.0, 361.0, 661.0, 937.0, 852.0, 669.0,
    617.0, 284.0, 351.0, 1018.0, 678.0, 174.0, 162.0, 2228.0, 1442.0, 449.0,
    1865.0, 392.0, 134.0, 1998.0, 1303.0, 1419.0, 12.0, 392.0, 751.0, 731.0,
    128.0, 556.0, 258.0, 1861.0, 1455.0, 1718.0, 1836.0, 837.0, 574.0, 1110.0,
    863.0, 184.0, 816.0, 1541.0, 1141.0, 481.0, 31.0, 2113.0, 342.0, 26.0, 720.0,
    240.0, 1206.0, 734.0, 8.0, 89.0, 762.0, 196.0, 548.0, 1207.0, 651.0 },

  /* Variable: event_time_end
   * Referenced by: '<S2>/Step1' (Parameter: Time)
   */
  10000.083333333334,

  /* Variable: event_time_start
   * Referenced by: '<S2>/Step' (Parameter: Time)
   */
  10000.0,

  /* Variable: line_iang0_seed
   * Referenced by: '<S38>/Random Number' (Parameter: Seed)
   */
  { 1456.0, 303.0, 1037.0, 1257.0, 1351.0, 600.0, 96.0, 1121.0, 562.0, 82.0,
    844.0, 61.0, 539.0, 722.0, 230.0, 270.0, 1327.0, 1556.0, 1863.0, 1094.0,
    649.0, 1312.0, 606.0, 477.0, 312.0, 216.0, 1352.0, 348.0, 1907.0, 1582.0,
    644.0, 695.0, 667.0, 654.0, 1527.0, 1532.0, 807.0, 120.0, 1063.0, 468.0,
    2927.0, 1085.0, 796.0, 208.0, 1871.0, 347.0, 1793.0, 2483.0, 1073.0, 1460.0,
    221.0, 45.0, 758.0, 1814.0, 947.0, 275.0, 556.0, 857.0, 49.0, 2606.0, 246.0,
    769.0, 541.0, 1557.0, 1127.0, 542.0, 48.0, 47.0, 861.0, 2081.0, 963.0, 335.0,
    301.0, 941.0, 70.0, 1473.0, 1236.0, 599.0, 1556.0, 1196.0, 1009.0, 1048.0,
    26.0, 1901.0, 120.0, 11.0, 224.0, 1284.0, 1054.0, 187.0, 500.0, 375.0, 363.0,
    681.0, 1014.0, 1645.0, 1038.0, 1078.0, 1006.0, 126.0, 709.0, 201.0, 144.0,
    2.0 },

  /* Variable: line_iang1_seed
   * Referenced by: '<S39>/Random Number' (Parameter: Seed)
   */
  { 213.0, 329.0, 2092.0, 1422.0, 963.0, 657.0, 1074.0, 199.0, 289.0, 546.0,
    1195.0, 2405.0, 414.0, 843.0, 853.0, 263.0, 1440.0, 525.0, 626.0, 490.0,
    392.0, 969.0, 60.0, 127.0, 577.0, 305.0, 483.0, 310.0, 862.0, 1220.0, 645.0,
    289.0, 1000.0, 588.0, 1557.0, 1361.0, 1900.0, 178.0, 2167.0, 707.0, 2225.0,
    341.0, 2251.0, 166.0, 487.0, 673.0, 375.0, 820.0, 375.0, 878.0, 998.0, 70.0,
    291.0, 778.0, 89.0, 1474.0, 1640.0, 1453.0, 803.0, 843.0, 50.0, 1248.0,
    987.0, 481.0, 1361.0, 28.0, 348.0, 1224.0, 734.0, 1580.0, 254.0, 464.0,
    715.0, 1016.0, 176.0, 21.0, 1461.0, 110.0, 769.0, 421.0, 976.0, 1891.0,
    726.0, 271.0, 2252.0, 2594.0, 1694.0, 895.0, 1619.0, 638.0, 452.0, 178.0,
    814.0, 880.0, 2506.0, 473.0, 1168.0, 2319.0, 998.0, 705.0, 907.0, 176.0,
    68.0, 6.0 },

  /* Variable: line_imag0_seed
   * Referenced by: '<S40>/Random Number' (Parameter: Seed)
   */
  { 602.0, 1112.0, 317.0, 37.0, 142.0, 739.0, 1050.0, 460.0, 1110.0, 486.0,
    1456.0, 297.0, 3103.0, 183.0, 1260.0, 319.0, 651.0, 449.0, 1464.0, 742.0,
    113.0, 515.0, 518.0, 180.0, 398.0, 13.0, 701.0, 621.0, 1428.0, 547.0, 1231.0,
    96.0, 2278.0, 118.0, 1058.0, 436.0, 1412.0, 15.0, 538.0, 1835.0, 2636.0,
    291.0, 1066.0, 535.0, 387.0, 320.0, 2525.0, 1006.0, 424.0, 661.0, 728.0,
    457.0, 506.0, 1185.0, 782.0, 80.0, 334.0, 346.0, 119.0, 716.0, 228.0, 47.0,
    1065.0, 40.0, 917.0, 409.0, 401.0, 635.0, 3331.0, 718.0, 204.0, 430.0,
    1533.0, 184.0, 325.0, 362.0, 45.0, 102.0, 302.0, 854.0, 719.0, 917.0, 699.0,
    26.0, 328.0, 701.0, 2166.0, 50.0, 626.0, 1144.0, 1822.0, 297.0, 159.0, 46.0,
    111.0, 1945.0, 1158.0, 201.0, 442.0, 1977.0, 439.0, 1458.0, 287.0, 291.0 },

  /* Variable: line_imag1_seed
   * Referenced by: '<S41>/Random Number' (Parameter: Seed)
   */
  { 142.0, 136.0, 445.0, 1233.0, 1447.0, 545.0, 70.0, 1422.0, 369.0, 301.0, 57.0,
    996.0, 102.0, 549.0, 100.0, 223.0, 1978.0, 1397.0, 1007.0, 1060.0, 2475.0,
    1657.0, 59.0, 934.0, 593.0, 414.0, 1174.0, 476.0, 1705.0, 680.0, 340.0,
    194.0, 220.0, 343.0, 558.0, 571.0, 1074.0, 1097.0, 94.0, 453.0, 1035.0,
    1156.0, 1135.0, 176.0, 691.0, 869.0, 752.0, 534.0, 314.0, 557.0, 693.0,
    1045.0, 1737.0, 145.0, 368.0, 1701.0, 93.0, 1067.0, 1521.0, 42.0, 576.0,
    707.0, 1122.0, 1131.0, 1295.0, 482.0, 1370.0, 867.0, 615.0, 120.0, 1322.0,
    7.0, 206.0, 507.0, 912.0, 91.0, 1718.0, 551.0, 106.0, 178.0, 918.0, 362.0,
    212.0, 2377.0, 2216.0, 1375.0, 1211.0, 858.0, 342.0, 1199.0, 470.0, 503.0,
    1911.0, 1002.0, 1868.0, 1052.0, 804.0, 73.0, 1952.0, 2500.0, 1207.0, 707.0,
    451.0, 375.0 },

  /* Variable: mag_variance
   * Referenced by:
   *   '<S37>/Random Number' (Parameter: Variance)
   *   '<S40>/Random Number' (Parameter: Variance)
   *   '<S41>/Random Number' (Parameter: Variance)
   *   '<S45>/Random Number' (Parameter: Variance)
   *   '<S46>/Random Number' (Parameter: Variance)
   */
  0.0005,

  /* Variable: spoof_lower_limit
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
  -0.3490658503988659,

  /* Variable: spoof_upper_limit
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
  0.3490658503988659,

  /* Variable: xf_iang0_seed
   * Referenced by: '<S43>/Random Number' (Parameter: Seed)
   */
  { 510.0, 1643.0, 615.0, 629.0, 177.0, 1161.0, 398.0, 928.0, 736.0, 856.0,
    1813.0, 860.0, 568.0, 7.0, 600.0, 1175.0 },

  /* Variable: xf_iang1_seed
   * Referenced by: '<S44>/Random Number' (Parameter: Seed)
   */
  { 520.0, 1041.0, 592.0, 292.0, 236.0, 877.0, 837.0, 673.0, 920.0, 706.0, 642.0,
    1520.0, 1745.0, 3129.0, 546.0, 975.0 },

  /* Variable: xf_imag0_seed
   * Referenced by: '<S45>/Random Number' (Parameter: Seed)
   */
  { 1340.0, 1285.0, 1677.0, 756.0, 896.0, 1735.0, 477.0, 254.0, 1303.0, 290.0,
    440.0, 503.0, 610.0, 354.0, 432.0, 164.0 },

  /* Variable: xf_imag1_seed
   * Referenced by: '<S46>/Random Number' (Parameter: Seed)
   */
  { 1131.0, 1762.0, 1152.0, 368.0, 1484.0, 391.0, 1308.0, 577.0, 477.0, 622.0,
    1875.0, 308.0, 39.0, 762.0, 550.0, 779.0 },

  /* Mask Parameter: Ramp_InitialOutput
   * Referenced by: '<S68>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_b
   * Referenced by: '<S86>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_l
   * Referenced by: '<S100>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_n
   * Referenced by: '<S126>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_p
   * Referenced by: '<S148>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_d
   * Referenced by: '<S178>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_h
   * Referenced by: '<S204>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_pu
   * Referenced by: '<S222>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_k
   * Referenced by: '<S244>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_a
   * Referenced by: '<S254>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_ha
   * Referenced by: '<S280>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_kd
   * Referenced by: '<S302>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_m
   * Referenced by: '<S328>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_e
   * Referenced by: '<S354>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_h0
   * Referenced by: '<S372>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_ki
   * Referenced by: '<S390>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_mw
   * Referenced by: '<S400>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_nh
   * Referenced by: '<S426>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_n0
   * Referenced by: '<S448>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_kdz
   * Referenced by: '<S474>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput_ap
   * Referenced by: '<S500>/Constant1' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: Ramp_slope
   * Referenced by: '<S68>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_c
   * Referenced by: '<S86>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_n
   * Referenced by: '<S100>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_k
   * Referenced by: '<S126>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_nm
   * Referenced by: '<S148>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_h
   * Referenced by: '<S178>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_kc
   * Referenced by: '<S204>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_g
   * Referenced by: '<S222>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_e
   * Referenced by: '<S244>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_p
   * Referenced by: '<S254>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_cq
   * Referenced by: '<S280>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_d
   * Referenced by: '<S302>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_nmj
   * Referenced by: '<S328>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_j
   * Referenced by: '<S354>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_a
   * Referenced by: '<S372>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_l
   * Referenced by: '<S390>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_kl
   * Referenced by: '<S400>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_n1
   * Referenced by: '<S426>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_pr
   * Referenced by: '<S448>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_gb
   * Referenced by: '<S474>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Mask Parameter: Ramp_slope_gl
   * Referenced by: '<S500>/Step' (Parameter: After)
   */
  0.017453292519943295,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Constant' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/Step' (Parameter: After)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S2>/Step1' (Parameter: Before)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/Step1' (Parameter: After)
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant2' (Parameter: Value)
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant1' (Parameter: Value)
   */
  1.0,

  /* Computed Parameter: Solver_P1_Size
   * Referenced by: '<S2>/Solver' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: Solver_P1
   * Referenced by: '<S2>/Solver' (Parameter: P1)
   */
  { 83.0, 121.0, 115.0, 116.0, 101.0, 109.0 },

  /* Computed Parameter: Solver_P3_Size
   * Referenced by: '<S2>/Solver' (Parameter: P3Size)
   */
  { 1.0, 24.0 },

  /* Computed Parameter: Solver_P3
   * Referenced by: '<S2>/Solver' (Parameter: P3)
   */
  { 82.0, 84.0, 83.0, 57.0, 54.0, 95.0, 112.0, 105.0, 110.0, 115.0, 95.0, 115.0,
    105.0, 109.0, 112.0, 108.0, 101.0, 95.0, 118.0, 50.0, 46.0, 120.0, 108.0,
    115.0 },

  /* Computed Parameter: Solver_P4_Size
   * Referenced by: '<S2>/Solver' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: np
   * Referenced by: '<S2>/Solver' (Parameter: P4)
   */
  1.0,

  /* Computed Parameter: Solver_P5_Size
   * Referenced by: '<S2>/Solver' (Parameter: P5Size)
   */
  { 1.0, 4.0 },

  /* Computed Parameter: Solver_P5
   * Referenced by: '<S2>/Solver' (Parameter: P5)
   */
  { 67.0, 65.0, 80.0, 73.0 },

  /* Computed Parameter: Solver_P6_Size
   * Referenced by: '<S2>/Solver' (Parameter: P6Size)
   */
  { 1.0, 3.0 },

  /* Computed Parameter: Solver_P6
   * Referenced by: '<S2>/Solver' (Parameter: P6)
   */
  { 70.0, 77.0, 85.0 },

  /* Computed Parameter: Solver_P7_Size
   * Referenced by: '<S2>/Solver' (Parameter: P7Size)
   */
  { 1.0, 9.0 },

  /* Computed Parameter: Solver_P7
   * Referenced by: '<S2>/Solver' (Parameter: P7)
   */
  { 99.0, 97.0, 112.0, 105.0, 99.0, 111.0, 109.0, 112.0, 95.0 },

  /* Computed Parameter: Solver_P8_Size
   * Referenced by: '<S2>/Solver' (Parameter: P8Size)
   */
  { 1.0, 8.0 },

  /* Computed Parameter: Solver_P8
   * Referenced by: '<S2>/Solver' (Parameter: P8)
   */
  { 102.0, 109.0, 117.0, 99.0, 111.0, 109.0, 112.0, 95.0 },

  /* Computed Parameter: Solver_P9_Size
   * Referenced by: '<S2>/Solver' (Parameter: P9Size)
   */
  { 1.0, 1.0 },

  /* Expression: exporty
   * Referenced by: '<S2>/Solver' (Parameter: P9)
   */
  0.0,

  /* Computed Parameter: Solver_P10_Size
   * Referenced by: '<S2>/Solver' (Parameter: P10Size)
   */
  { 1.0, 1.0 },

  /* Expression: builtin
   * Referenced by: '<S2>/Solver' (Parameter: P10)
   */
  1.0,

  /* Computed Parameter: Solver_P11_Size
   * Referenced by: '<S2>/Solver' (Parameter: P11Size)
   */
  { 1.0, 1.0 },

  /* Expression: logging
   * Referenced by: '<S2>/Solver' (Parameter: P11)
   */
  0.0,

  /* Computed Parameter: Solver_P12_Size
   * Referenced by: '<S2>/Solver' (Parameter: P12Size)
   */
  { 1.0, 1.0 },

  /* Expression: sim_mode
   * Referenced by: '<S2>/Solver' (Parameter: P12)
   */
  3.0,

  /* Computed Parameter: Solver_P13_Size
   * Referenced by: '<S2>/Solver' (Parameter: P13Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_max_it
   * Referenced by: '<S2>/Solver' (Parameter: P13)
   */
  100.0,

  /* Computed Parameter: Solver_P14_Size
   * Referenced by: '<S2>/Solver' (Parameter: P14Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_tol_v
   * Referenced by: '<S2>/Solver' (Parameter: P14)
   */
  1.0E-8,

  /* Computed Parameter: Solver_P15_Size
   * Referenced by: '<S2>/Solver' (Parameter: P15Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_flat_start
   * Referenced by: '<S2>/Solver' (Parameter: P15)
   */
  0.0,

  /* Computed Parameter: Solver_P16_Size
   * Referenced by: '<S2>/Solver' (Parameter: P16Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_smart_start
   * Referenced by: '<S2>/Solver' (Parameter: P16)
   */
  0.0,

  /* Computed Parameter: Solver_P17_Size
   * Referenced by: '<S2>/Solver' (Parameter: P17Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_export
   * Referenced by: '<S2>/Solver' (Parameter: P17)
   */
  0.0,

  /* Computed Parameter: Solver_P18_Size
   * Referenced by: '<S2>/Solver' (Parameter: P18Size)
   */
  { 1.0, 1.0 },

  /* Expression: optim_threads
   * Referenced by: '<S2>/Solver' (Parameter: P18)
   */
  1.0,

  /* Computed Parameter: Solver_P19_Size
   * Referenced by: '<S2>/Solver' (Parameter: P19Size)
   */
  { 1.0, 1.0 },

  /* Expression: script_activate_postinit
   * Referenced by: '<S2>/Solver' (Parameter: P19)
   */
  0.0,

  /* Computed Parameter: Solver_P20_Size
   * Referenced by: '<S2>/Solver' (Parameter: P20Size)
   */
  { 0.0, 0.0 },

  /* Computed Parameter: Solver_P21_Size
   * Referenced by: '<S2>/Solver' (Parameter: P21Size)
   */
  { 1.0, 1.0 },

  /* Expression: perflog_on
   * Referenced by: '<S2>/Solver' (Parameter: P21)
   */
  0.0,

  /* Computed Parameter: Solver_P22_Size
   * Referenced by: '<S2>/Solver' (Parameter: P22Size)
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S37>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S36>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant3' (Parameter: Value)
   */
  1.0,

  /* Computed Parameter: TSyncPCIeCtrl_P1_Size
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: devIx
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P1)
   */
  0.0,

  /* Computed Parameter: TSyncPCIeCtrl_P2_Size
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: holdover_timeout
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P2)
   */
  5.0,

  /* Computed Parameter: TSyncPCIeCtrl_P3_Size
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P3Size)
   */
  { 1.0, 1.0 },

  /* Expression: timestamp_en
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P3)
   */
  1.0,

  /* Computed Parameter: TSyncPCIeCtrl_P4_Size
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: set_time_en
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P4)
   */
  0.0,

  /* Computed Parameter: TSyncPCIeCtrl_P5_Size
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P5Size)
   */
  { 1.0, 1.0 },

  /* Expression: ts_wo_sync_opt
   * Referenced by: '<S2>/TSync PCIe Ctrl' (Parameter: P5)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S68>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: pi()/180
   * Referenced by: '<S2>/Gain' (Parameter: Gain)
   */
  0.017453292519943295,

  /* Expression: 0
   * Referenced by: '<S39>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: pi()/180
   * Referenced by: '<S2>/Gain2' (Parameter: Gain)
   */
  0.017453292519943295,

  /* Expression: 0
   * Referenced by: '<S38>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: pi()/180
   * Referenced by: '<S2>/Gain1' (Parameter: Gain)
   */
  0.017453292519943295,

  /* Expression: 0
   * Referenced by: '<S41>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S40>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S86>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S43>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: pi()/180
   * Referenced by: '<S2>/Gain3' (Parameter: Gain)
   */
  0.017453292519943295,

  /* Expression: 0
   * Referenced by: '<S45>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S100>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S126>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S148>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S178>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S204>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S222>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S244>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S254>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S280>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S302>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S328>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S354>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S372>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S390>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S400>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S426>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S448>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S474>/Step' (Parameter: Before)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S500>/Step' (Parameter: Before)
   */
  0.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S511>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Acqu_group
   * Referenced by: '<S511>/S-Function' (Parameter: P1)
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S44>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: pi()/180
   * Referenced by: '<S2>/Gain4' (Parameter: Gain)
   */
  0.017453292519943295,

  /* Expression: 0
   * Referenced by: '<S46>/Random Number' (Parameter: Mean)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/FREQ DEVIATION' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/FREQ ROC' (Parameter: Value)
   */
  0.0
};
