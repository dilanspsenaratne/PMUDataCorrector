/*
 * system_20220515_1_sm_master.c
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

/* Named constants for MATLAB Function: '<S38>/MATLAB Function' */
#define system_20220515_1_sm_CALL_EVENT (-1)

/* Named constants for MATLAB Function: '<S43>/MATLAB Function' */
#define system_20220515_1__CALL_EVENT_m (-1)

/* Named constants for MATLAB Function: '<S36>/MATLAB Function' */
#define system_20220515_1__CALL_EVENT_p (-1)

/* Block signals (default storage) */
B_system_20220515_1_sm_master_T system_20220515_1_sm_master_B;

/* Block states (default storage) */
DW_system_20220515_1_sm_master_T system_20220515_1_sm_master_DW;

/* Real-time model */
static RT_MODEL_system_20220515_1_sm_master_T system_20220515_1_sm_master_M_;
RT_MODEL_system_20220515_1_sm_master_T *const system_20220515_1_sm_master_M =
  &system_20220515_1_sm_master_M_;

/*
 * Output and update for atomic system:
 *    '<S47>/OpOutput'
 *    '<S48>/OpOutput'
 *    '<S51>/OpOutput'
 *    '<S52>/OpOutput'
 *    '<S53>/OpOutput'
 *    '<S54>/OpOutput'
 *    '<S55>/OpOutput'
 *    '<S56>/OpOutput'
 *    '<S57>/OpOutput'
 *    '<S58>/OpOutput'
 *    ...
 */
void system_20220515_1_sm_m_OpOutput(real_T rtu_In1,
  B_OpOutput_system_20220515_1__T *localB)
{
  /* DataTypeConversion: '<S49>/Data Type Conversion' */
  localB->DataTypeConversion = rtu_In1;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Output and update for atomic system:
 *    '<S38>/MATLAB Function'
 *    '<S39>/MATLAB Function'
 */
void system_20220515__MATLABFunction(const real_T rtu_u[104],
  B_MATLABFunction_system_20220_T *localB)
{
  real_T c_y[104];
  real_T c_y_0;
  real_T c_y_1;
  int32_T c_k;
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  memcpy(&localB->y[0], &rtu_u[0], 104U * sizeof(real_T));

  /* MATLAB Function 'sm_master/line_iang0_noise/MATLAB Function': '<S508>:1' */
  /* '<S508>:1:3' */
  /* '<S508>:1:4' */
  y = true;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 104)) {
    if ((rtu_u[(1 + k) - 1] > 180.0) == false) {
      y = false;
      exitg1 = true;
    } else {
      k = k + 1;
    }
  }

  if (y) {
    /* '<S508>:1:7' */
    for (i = 0; i < 104; i = i + 1) {
      localB->y[i] = rtu_u[i] / 360.0;
    }

    for (k = 0; k < 104; k = k + 1) {
      c_k = 1 + k;
      localB->y[c_k - 1] = rt_roundd_snf(localB->y[c_k - 1]);
    }

    for (i_0 = 0; i_0 < 104; i_0 = i_0 + 1) {
      localB->y[i_0] = rtu_u[i_0] - localB->y[i_0] * 180.0 * 2.0;
    }
  }

  y = true;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 104)) {
    if ((localB->y[(1 + k) - 1] < -179.99) == false) {
      y = false;
      exitg1 = true;
    } else {
      k = k + 1;
    }
  }

  if (y) {
    /* '<S508>:1:11' */
    for (k = 0; k < 104; k = k + 1) {
      c_k = 1 + k;
      c_y[c_k - 1] = fabs(localB->y[c_k - 1]);
    }

    for (i_1 = 0; i_1 < 104; i_1 = i_1 + 1) {
      c_y_1 = c_y[i_1];
      c_y_0 = c_y_1;
      c_y_0 = c_y_0 / 360.0;
      c_y_1 = c_y_0;
      c_y[i_1] = c_y_1;
    }

    for (k = 0; k < 104; k = k + 1) {
      c_k = 1 + k;
      c_y[c_k - 1] = rt_roundd_snf(c_y[c_k - 1]);
    }

    for (i_2 = 0; i_2 < 104; i_2 = i_2 + 1) {
      localB->y[i_2] = localB->y[i_2] + c_y[i_2] * 180.0 * 2.0;
    }
  }

  /* '<S508>:1:14' */
}

/*
 * Output and update for atomic system:
 *    '<S43>/MATLAB Function'
 *    '<S44>/MATLAB Function'
 */
void system_2022051_MATLABFunction_l(const real_T rtu_u[16],
  B_MATLABFunction_system_202_j_T *localB)
{
  real_T c_y[16];
  real_T c_y_0;
  real_T c_y_1;
  int32_T c_k;
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  memcpy(&localB->y[0], &rtu_u[0], 16U * sizeof(real_T));

  /* MATLAB Function 'sm_master/xf_iang0_noise/MATLAB Function': '<S512>:1' */
  /* '<S512>:1:3' */
  /* '<S512>:1:4' */
  y = true;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 16)) {
    if ((rtu_u[(1 + k) - 1] > 180.0) == false) {
      y = false;
      exitg1 = true;
    } else {
      k = k + 1;
    }
  }

  if (y) {
    /* '<S512>:1:7' */
    for (i = 0; i < 16; i = i + 1) {
      localB->y[i] = rtu_u[i] / 360.0;
    }

    for (k = 0; k < 16; k = k + 1) {
      c_k = 1 + k;
      localB->y[c_k - 1] = rt_roundd_snf(localB->y[c_k - 1]);
    }

    for (i_0 = 0; i_0 < 16; i_0 = i_0 + 1) {
      localB->y[i_0] = rtu_u[i_0] - localB->y[i_0] * 180.0 * 2.0;
    }
  }

  y = true;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 16)) {
    if ((localB->y[(1 + k) - 1] < -179.99) == false) {
      y = false;
      exitg1 = true;
    } else {
      k = k + 1;
    }
  }

  if (y) {
    /* '<S512>:1:11' */
    for (k = 0; k < 16; k = k + 1) {
      c_k = 1 + k;
      c_y[c_k - 1] = fabs(localB->y[c_k - 1]);
    }

    for (i_1 = 0; i_1 < 16; i_1 = i_1 + 1) {
      c_y_1 = c_y[i_1];
      c_y_0 = c_y_1;
      c_y_0 = c_y_0 / 360.0;
      c_y_1 = c_y_0;
      c_y[i_1] = c_y_1;
    }

    for (k = 0; k < 16; k = k + 1) {
      c_k = 1 + k;
      c_y[c_k - 1] = rt_roundd_snf(c_y[c_k - 1]);
    }

    for (i_2 = 0; i_2 < 16; i_2 = i_2 + 1) {
      localB->y[i_2] = localB->y[i_2] + c_y[i_2] * 180.0 * 2.0;
    }
  }

  /* '<S512>:1:14' */
}

real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  uint32_T hi;
  uint32_T lo;

  /* Uniform random number generator (random number between 0 and 1)

     #define IA      16807                      magic multiplier = 7^5
     #define IM      2147483647                 modulus = 2^31-1
     #define IQ      127773                     IM div IA
     #define IR      2836                       IM modulo IA
     #define S       4.656612875245797e-10      reciprocal of 2^31-1
     test = IA * (seed % IQ) - IR * (seed/IQ)
     seed = test < 0 ? (test + IM) : test
     return (seed*S)
   */
  lo = 16807U * (*u % 127773U);
  hi = 2836U * (*u / 127773U);
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return (real_T)*u * 4.6566128752457969E-10;
}

real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T si;
  real_T sr;
  real_T y;

  /* Normal (Gaussian) random number generator */
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = sr * sqrt(-2.0 * log(si) / si);
  return y;
}

/* Model output function */
static void system_20220515_1_sm_master_output(void)
{
  real_T u_0[104];
  real_T u[73];
  real_T u_1[16];
  real_T currentTime;
  real_T u0;
  real_T u0_0;
  real_T u0_1;
  real_T u0_2;
  real_T u0_3;
  real_T u0_4;
  real_T u0_5;
  real_T u0_6;
  real_T u0_7;
  real_T u0_8;
  real_T u0_9;
  real_T u0_a;
  real_T u0_b;
  real_T u0_c;
  real_T u0_d;
  real_T u0_e;
  real_T u0_f;
  real_T u0_g;
  real_T u0_h;
  real_T u0_i;
  real_T u0_j;
  real_T u1;
  real_T u1_0;
  real_T u1_1;
  real_T u1_2;
  real_T u1_3;
  real_T u1_4;
  real_T u1_5;
  real_T u1_6;
  real_T u1_7;
  real_T u1_8;
  real_T u1_9;
  real_T u1_a;
  real_T u1_b;
  real_T u1_c;
  real_T u1_d;
  real_T u1_e;
  real_T u1_f;
  real_T u1_g;
  real_T u1_h;
  real_T u1_i;
  real_T u1_j;
  real_T u2;
  real_T u2_0;
  real_T u2_1;
  real_T u2_2;
  real_T u2_3;
  real_T u2_4;
  real_T u2_5;
  real_T u2_6;
  real_T u2_7;
  real_T u2_8;
  real_T u2_9;
  real_T u2_a;
  real_T u2_b;
  real_T u2_c;
  real_T u2_d;
  real_T u2_e;
  real_T u2_f;
  real_T u2_g;
  real_T u2_h;
  real_T u2_i;
  real_T u2_j;
  real_T u_2;
  real_T u_3;
  int32_T c_k;
  int32_T i;
  int32_T iU;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
  int32_T i_3;
  int32_T i_4;
  int32_T i_5;
  int32_T i_6;
  int32_T i_7;
  int32_T i_8;
  int32_T i_9;
  int32_T i_a;
  int32_T i_b;
  int32_T i_c;
  int32_T i_d;
  int32_T i_e;
  int32_T i_f;
  int32_T i_g;
  int32_T i_h;
  boolean_T exitg1;
  boolean_T y;

  /* Memory: '<S1>/S-Function' */
  system_20220515_1_sm_master_B.SFunction =
    system_20220515_1_sm_master_DW.SFunction_PreviousInput;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/S-Function1'
   */
  system_20220515_1_sm_master_B.Sum =
    system_20220515_1_sm_master_P.SFunction1_Value +
    system_20220515_1_sm_master_B.SFunction;

  /* Stop: '<S1>/Stop Simulation' */
  if (system_20220515_1_sm_master_B.Sum != 0.0) {
    rtmSetStopRequested(system_20220515_1_sm_master_M, 1);
  }

  /* End of Stop: '<S1>/Stop Simulation' */

  /* Constant: '<S2>/Constant' */
  system_20220515_1_sm_master_B.Constant =
    system_20220515_1_sm_master_P.Constant_Value;

  /* Step: '<S2>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.event_time_start) {
    /* Step: '<S2>/Step' */
    system_20220515_1_sm_master_B.Step = system_20220515_1_sm_master_P.Step_Y0;
  } else {
    /* Step: '<S2>/Step' */
    system_20220515_1_sm_master_B.Step =
      system_20220515_1_sm_master_P.Step_YFinal;
  }

  /* End of Step: '<S2>/Step' */

  /* Step: '<S2>/Step1' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.event_time_end) {
    /* Step: '<S2>/Step1' */
    system_20220515_1_sm_master_B.Step1 = system_20220515_1_sm_master_P.Step1_Y0;
  } else {
    /* Step: '<S2>/Step1' */
    system_20220515_1_sm_master_B.Step1 =
      system_20220515_1_sm_master_P.Step1_YFinal;
  }

  /* End of Step: '<S2>/Step1' */

  /* Sum: '<S2>/Add' */
  system_20220515_1_sm_master_B.Add = system_20220515_1_sm_master_B.Step -
    system_20220515_1_sm_master_B.Step1;

  /* SignalConversion generated from: '<S2>/Solver' */
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverInpo[0] =
    system_20220515_1_sm_master_B.Add;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverInpo[1] =
    system_20220515_1_sm_master_B.Add;

  /* SignalConversion generated from: '<S2>/Solver' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k[0] =
    system_20220515_1_sm_master_P.Constant2_Value;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k[1] =
    system_20220515_1_sm_master_P.Constant2_Value;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k[2] =
    system_20220515_1_sm_master_P.Constant2_Value;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k[3] =
    system_20220515_1_sm_master_P.Constant2_Value;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k[4] =
    system_20220515_1_sm_master_P.Constant2_Value;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k[5] =
    system_20220515_1_sm_master_P.Constant2_Value;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k[6] =
    system_20220515_1_sm_master_P.Constant2_Value;

  /* SignalConversion generated from: '<S2>/Solver' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_e[0] =
    system_20220515_1_sm_master_P.Constant1_Value;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_e[1] =
    system_20220515_1_sm_master_P.Constant1_Value;
  system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_e[2] =
    system_20220515_1_sm_master_P.Constant1_Value;

  /* S-Function (OpIRTS): '<S2>/Solver' */

  /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
  {
    SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* RandomNumber: '<S37>/Random Number' */
  memcpy(&u[0], &system_20220515_1_sm_master_DW.NextOutput[0], 73U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber[0], &u[0], 73U * sizeof
         (real_T));
  for (i_5 = 0; i_5 < 73; i_5 = i_5 + 1) {
    /* Sum: '<S37>/Add1' */
    system_20220515_1_sm_master_B.Add1[i_5] =
      system_20220515_1_sm_master_B.Solver_o1[i_5] +
      system_20220515_1_sm_master_B.RandomNumber[i_5];
  }

  /* RandomNumber: '<S36>/Random Number' */
  memcpy(&u[0], &system_20220515_1_sm_master_DW.NextOutput_j[0], 73U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_b[0], &u[0], 73U * sizeof
         (real_T));
  for (i_6 = 0; i_6 < 73; i_6 = i_6 + 1) {
    /* Sum: '<S36>/Add1' */
    system_20220515_1_sm_master_B.Add1_k[i_6] =
      system_20220515_1_sm_master_B.Solver_o2[i_6] +
      system_20220515_1_sm_master_B.RandomNumber_b[i_6];
  }

  /* MATLAB Function: '<S36>/MATLAB Function' */
  memcpy(&system_20220515_1_sm_master_B.y[0],
         &system_20220515_1_sm_master_B.Add1_k[0], 73U * sizeof(real_T));

  /* MATLAB Function 'sm_master/bus_va_noise/MATLAB Function': '<S507>:1' */
  /* '<S507>:1:3' */
  /* '<S507>:1:4' */
  y = true;
  iU = 0;
  exitg1 = false;
  while ((exitg1 == false) && (iU < 73)) {
    if ((system_20220515_1_sm_master_B.Add1_k[(1 + iU) - 1] > 180.0) == false) {
      y = false;
      exitg1 = true;
    } else {
      iU = iU + 1;
    }
  }

  if (y) {
    /* '<S507>:1:7' */
    for (i_4 = 0; i_4 < 73; i_4 = i_4 + 1) {
      system_20220515_1_sm_master_B.y[i_4] =
        system_20220515_1_sm_master_B.Add1_k[i_4] / 360.0;
    }

    for (iU = 0; iU < 73; iU = iU + 1) {
      c_k = 1 + iU;
      system_20220515_1_sm_master_B.y[c_k - 1] = rt_roundd_snf
        (system_20220515_1_sm_master_B.y[c_k - 1]);
    }

    for (i_f = 0; i_f < 73; i_f = i_f + 1) {
      system_20220515_1_sm_master_B.y[i_f] =
        system_20220515_1_sm_master_B.Add1_k[i_f] -
        system_20220515_1_sm_master_B.y[i_f] * 180.0 * 2.0;
    }
  }

  y = true;
  iU = 0;
  exitg1 = false;
  while ((exitg1 == false) && (iU < 73)) {
    if ((system_20220515_1_sm_master_B.y[(1 + iU) - 1] < -179.99) == false) {
      y = false;
      exitg1 = true;
    } else {
      iU = iU + 1;
    }
  }

  if (y) {
    /* '<S507>:1:11' */
    for (iU = 0; iU < 73; iU = iU + 1) {
      c_k = 1 + iU;
      u[c_k - 1] = fabs(system_20220515_1_sm_master_B.y[c_k - 1]);
    }

    for (i_g = 0; i_g < 73; i_g = i_g + 1) {
      u_3 = u[i_g];
      u_2 = u_3;
      u_2 = u_2 / 360.0;
      u_3 = u_2;
      u[i_g] = u_3;
    }

    for (iU = 0; iU < 73; iU = iU + 1) {
      c_k = 1 + iU;
      u[c_k - 1] = rt_roundd_snf(u[c_k - 1]);
    }

    for (i_h = 0; i_h < 73; i_h = i_h + 1) {
      system_20220515_1_sm_master_B.y[i_h] = system_20220515_1_sm_master_B.y[i_h]
        + u[i_h] * 180.0 * 2.0;
    }
  }

  /* End of MATLAB Function: '<S36>/MATLAB Function' */

  /* Constant: '<S2>/Constant3' */
  /* '<S507>:1:14' */
  system_20220515_1_sm_master_B.Constant3 =
    system_20220515_1_sm_master_P.Constant3_Value;

  /* S-Function (sfun_tsync_pcie_ctrl): '<S2>/TSync PCIe Ctrl' */

  /* Level2 S-Function Block: '<S2>/TSync PCIe Ctrl' (sfun_tsync_pcie_ctrl) */
  {
    SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* Step: '<S68>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_102) {
    /* Step: '<S68>/Step' */
    system_20220515_1_sm_master_B.Step_o =
      system_20220515_1_sm_master_P.Step_Y0_f;
  } else {
    /* Step: '<S68>/Step' */
    system_20220515_1_sm_master_B.Step_o =
      system_20220515_1_sm_master_P.Ramp_slope;
  }

  /* End of Step: '<S68>/Step' */

  /* Clock: '<S68>/Clock' */
  system_20220515_1_sm_master_B.Clock = system_20220515_1_sm_master_M->Timing.t
    [0];

  /* Sum: '<S68>/Sum' incorporates:
   *  Constant: '<S68>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_c = system_20220515_1_sm_master_B.Clock -
    system_20220515_1_sm_master_P.spoof_st.pmu_102;

  /* Product: '<S68>/Product' */
  system_20220515_1_sm_master_B.Product = system_20220515_1_sm_master_B.Step_o *
    system_20220515_1_sm_master_B.Sum_c;

  /* Sum: '<S68>/Output' incorporates:
   *  Constant: '<S68>/Constant1'
   */
  system_20220515_1_sm_master_B.Output = system_20220515_1_sm_master_B.Product +
    system_20220515_1_sm_master_P.Ramp_InitialOutput;

  /* Saturate: '<S59>/Saturation' */
  u0 = system_20220515_1_sm_master_B.Output;
  u1 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0 > u2) {
    /* Saturate: '<S59>/Saturation' */
    system_20220515_1_sm_master_B.Saturation = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S59>/Saturation' */
    system_20220515_1_sm_master_B.Saturation = u1;
  } else {
    /* Saturate: '<S59>/Saturation' */
    system_20220515_1_sm_master_B.Saturation = u0;
  }

  /* End of Saturate: '<S59>/Saturation' */

  /* Product: '<S59>/Multiply' incorporates:
   *  Constant: '<S59>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply =
    system_20220515_1_sm_master_B.Saturation *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_102;
  for (i = 0; i < 73; i = i + 1) {
    /* Gain: '<S2>/Gain' */
    system_20220515_1_sm_master_B.Gain[i] =
      system_20220515_1_sm_master_P.Gain_Gain *
      system_20220515_1_sm_master_B.y[i];
  }

  /* RandomNumber: '<S39>/Random Number' */
  memcpy(&u_0[0], &system_20220515_1_sm_master_DW.NextOutput_k[0], 104U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_l[0], &u_0[0], 104U *
         sizeof(real_T));
  for (i_7 = 0; i_7 < 104; i_7 = i_7 + 1) {
    /* Sum: '<S39>/Add1' */
    system_20220515_1_sm_master_B.Add1_f[i_7] =
      system_20220515_1_sm_master_B.Solver_o10[i_7] +
      system_20220515_1_sm_master_B.RandomNumber_l[i_7];
  }

  /* MATLAB Function: '<S39>/MATLAB Function' */
  system_20220515__MATLABFunction(system_20220515_1_sm_master_B.Add1_f,
    &system_20220515_1_sm_master_B.sf_MATLABFunction_h);
  for (i_0 = 0; i_0 < 104; i_0 = i_0 + 1) {
    /* Gain: '<S2>/Gain2' */
    system_20220515_1_sm_master_B.Gain2[i_0] =
      system_20220515_1_sm_master_P.Gain2_Gain *
      system_20220515_1_sm_master_B.sf_MATLABFunction_h.y[i_0];
  }

  /* RandomNumber: '<S38>/Random Number' */
  memcpy(&u_0[0], &system_20220515_1_sm_master_DW.NextOutput_i[0], 104U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_n[0], &u_0[0], 104U *
         sizeof(real_T));
  for (i_8 = 0; i_8 < 104; i_8 = i_8 + 1) {
    /* Sum: '<S38>/Add1' */
    system_20220515_1_sm_master_B.Add1_o[i_8] =
      system_20220515_1_sm_master_B.Solver_o8[i_8] +
      system_20220515_1_sm_master_B.RandomNumber_n[i_8];
  }

  /* MATLAB Function: '<S38>/MATLAB Function' */
  system_20220515__MATLABFunction(system_20220515_1_sm_master_B.Add1_o,
    &system_20220515_1_sm_master_B.sf_MATLABFunction_l);
  for (i_1 = 0; i_1 < 104; i_1 = i_1 + 1) {
    /* Gain: '<S2>/Gain1' */
    system_20220515_1_sm_master_B.Gain1[i_1] =
      system_20220515_1_sm_master_P.Gain1_Gain *
      system_20220515_1_sm_master_B.sf_MATLABFunction_l.y[i_1];
  }

  /* Sum: '<S59>/Add' */
  system_20220515_1_sm_master_B.Add_p[0] =
    system_20220515_1_sm_master_B.Multiply + system_20220515_1_sm_master_B.Gain
    [1];
  system_20220515_1_sm_master_B.Add_p[1] =
    system_20220515_1_sm_master_B.Multiply +
    system_20220515_1_sm_master_B.Gain2[0];
  system_20220515_1_sm_master_B.Add_p[2] =
    system_20220515_1_sm_master_B.Multiply +
    system_20220515_1_sm_master_B.Gain1[3];
  system_20220515_1_sm_master_B.Add_p[3] =
    system_20220515_1_sm_master_B.Multiply +
    system_20220515_1_sm_master_B.Gain1[4];

  /* RandomNumber: '<S41>/Random Number' */
  memcpy(&u_0[0], &system_20220515_1_sm_master_DW.NextOutput_a[0], 104U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_c[0], &u_0[0], 104U *
         sizeof(real_T));
  for (i_9 = 0; i_9 < 104; i_9 = i_9 + 1) {
    /* Sum: '<S41>/Add1' */
    system_20220515_1_sm_master_B.Add1_f3[i_9] =
      system_20220515_1_sm_master_B.Solver_o9[i_9] +
      system_20220515_1_sm_master_B.RandomNumber_c[i_9];
  }

  /* RandomNumber: '<S40>/Random Number' */
  memcpy(&u_0[0], &system_20220515_1_sm_master_DW.NextOutput_c[0], 104U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_a[0], &u_0[0], 104U *
         sizeof(real_T));
  for (i_a = 0; i_a < 104; i_a = i_a + 1) {
    /* Sum: '<S40>/Add1' */
    system_20220515_1_sm_master_B.Add1_ov[i_a] =
      system_20220515_1_sm_master_B.Solver_o7[i_a] +
      system_20220515_1_sm_master_B.RandomNumber_a[i_a];
  }

  /* Step: '<S86>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_103) {
    /* Step: '<S86>/Step' */
    system_20220515_1_sm_master_B.Step_p =
      system_20220515_1_sm_master_P.Step_Y0_a;
  } else {
    /* Step: '<S86>/Step' */
    system_20220515_1_sm_master_B.Step_p =
      system_20220515_1_sm_master_P.Ramp_slope_c;
  }

  /* End of Step: '<S86>/Step' */

  /* Clock: '<S86>/Clock' */
  system_20220515_1_sm_master_B.Clock_f =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S86>/Sum' incorporates:
   *  Constant: '<S86>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_e = system_20220515_1_sm_master_B.Clock_f -
    system_20220515_1_sm_master_P.spoof_st.pmu_103;

  /* Product: '<S86>/Product' */
  system_20220515_1_sm_master_B.Product_o = system_20220515_1_sm_master_B.Step_p
    * system_20220515_1_sm_master_B.Sum_e;

  /* Sum: '<S86>/Output' incorporates:
   *  Constant: '<S86>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_c =
    system_20220515_1_sm_master_B.Product_o +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_b;

  /* Saturate: '<S77>/Saturation' */
  u0_0 = system_20220515_1_sm_master_B.Output_c;
  u1_0 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_0 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_0 > u2_0) {
    /* Saturate: '<S77>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_f = u2_0;
  } else if (u0_0 < u1_0) {
    /* Saturate: '<S77>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_f = u1_0;
  } else {
    /* Saturate: '<S77>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_f = u0_0;
  }

  /* End of Saturate: '<S77>/Saturation' */

  /* Product: '<S77>/Multiply' incorporates:
   *  Constant: '<S77>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_e =
    system_20220515_1_sm_master_B.Saturation_f *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_103;

  /* RandomNumber: '<S43>/Random Number' */
  memcpy(&u_1[0], &system_20220515_1_sm_master_DW.NextOutput_a1[0], 16U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_p[0], &u_1[0], 16U * sizeof
         (real_T));
  for (i_b = 0; i_b < 16; i_b = i_b + 1) {
    /* Sum: '<S43>/Add1' */
    system_20220515_1_sm_master_B.Add1_e[i_b] =
      system_20220515_1_sm_master_B.Solver_o12[i_b] +
      system_20220515_1_sm_master_B.RandomNumber_p[i_b];
  }

  /* MATLAB Function: '<S43>/MATLAB Function' */
  system_2022051_MATLABFunction_l(system_20220515_1_sm_master_B.Add1_e,
    &system_20220515_1_sm_master_B.sf_MATLABFunction_lg);
  for (i_2 = 0; i_2 < 16; i_2 = i_2 + 1) {
    /* Gain: '<S2>/Gain3' */
    system_20220515_1_sm_master_B.Gain3[i_2] =
      system_20220515_1_sm_master_P.Gain3_Gain *
      system_20220515_1_sm_master_B.sf_MATLABFunction_lg.y[i_2];
  }

  /* Sum: '<S77>/Add' */
  system_20220515_1_sm_master_B.Add_d[0] =
    system_20220515_1_sm_master_B.Multiply_e +
    system_20220515_1_sm_master_B.Gain[2];
  system_20220515_1_sm_master_B.Add_d[1] =
    system_20220515_1_sm_master_B.Multiply_e +
    system_20220515_1_sm_master_B.Gain2[1];
  system_20220515_1_sm_master_B.Add_d[2] =
    system_20220515_1_sm_master_B.Multiply_e +
    system_20220515_1_sm_master_B.Gain1[5];
  system_20220515_1_sm_master_B.Add_d[3] =
    system_20220515_1_sm_master_B.Multiply_e +
    system_20220515_1_sm_master_B.Gain3[0];

  /* RandomNumber: '<S45>/Random Number' */
  memcpy(&u_1[0], &system_20220515_1_sm_master_DW.NextOutput_cx[0], 16U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_o[0], &u_1[0], 16U * sizeof
         (real_T));
  for (i_c = 0; i_c < 16; i_c = i_c + 1) {
    /* Sum: '<S45>/Add1' */
    system_20220515_1_sm_master_B.Add1_m[i_c] =
      system_20220515_1_sm_master_B.Solver_o11[i_c] +
      system_20220515_1_sm_master_B.RandomNumber_o[i_c];
  }

  /* Step: '<S100>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_107) {
    /* Step: '<S100>/Step' */
    system_20220515_1_sm_master_B.Step_m =
      system_20220515_1_sm_master_P.Step_Y0_o;
  } else {
    /* Step: '<S100>/Step' */
    system_20220515_1_sm_master_B.Step_m =
      system_20220515_1_sm_master_P.Ramp_slope_n;
  }

  /* End of Step: '<S100>/Step' */

  /* Clock: '<S100>/Clock' */
  system_20220515_1_sm_master_B.Clock_d =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S100>/Sum' incorporates:
   *  Constant: '<S100>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_h = system_20220515_1_sm_master_B.Clock_d -
    system_20220515_1_sm_master_P.spoof_st.pmu_107;

  /* Product: '<S100>/Product' */
  system_20220515_1_sm_master_B.Product_f = system_20220515_1_sm_master_B.Step_m
    * system_20220515_1_sm_master_B.Sum_h;

  /* Sum: '<S100>/Output' incorporates:
   *  Constant: '<S100>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_m =
    system_20220515_1_sm_master_B.Product_f +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_l;

  /* Saturate: '<S93>/Saturation' */
  u0_1 = system_20220515_1_sm_master_B.Output_m;
  u1_1 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_1 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_1 > u2_1) {
    /* Saturate: '<S93>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h = u2_1;
  } else if (u0_1 < u1_1) {
    /* Saturate: '<S93>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h = u1_1;
  } else {
    /* Saturate: '<S93>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h = u0_1;
  }

  /* End of Saturate: '<S93>/Saturation' */

  /* Product: '<S93>/Multiply' incorporates:
   *  Constant: '<S93>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_b =
    system_20220515_1_sm_master_B.Saturation_h *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_107;

  /* Sum: '<S93>/Add' */
  system_20220515_1_sm_master_B.Add_e[0] =
    system_20220515_1_sm_master_B.Multiply_b +
    system_20220515_1_sm_master_B.Gain[6];
  system_20220515_1_sm_master_B.Add_e[1] =
    system_20220515_1_sm_master_B.Multiply_b +
    system_20220515_1_sm_master_B.Gain1[9];
  system_20220515_1_sm_master_B.Add_e[2] =
    system_20220515_1_sm_master_B.Multiply_b +
    system_20220515_1_sm_master_B.Gain1[10];

  /* Step: '<S126>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_110) {
    /* Step: '<S126>/Step' */
    system_20220515_1_sm_master_B.Step_i =
      system_20220515_1_sm_master_P.Step_Y0_k;
  } else {
    /* Step: '<S126>/Step' */
    system_20220515_1_sm_master_B.Step_i =
      system_20220515_1_sm_master_P.Ramp_slope_k;
  }

  /* End of Step: '<S126>/Step' */

  /* Clock: '<S126>/Clock' */
  system_20220515_1_sm_master_B.Clock_n =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S126>/Sum' incorporates:
   *  Constant: '<S126>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_p = system_20220515_1_sm_master_B.Clock_n -
    system_20220515_1_sm_master_P.spoof_st.pmu_110;

  /* Product: '<S126>/Product' */
  system_20220515_1_sm_master_B.Product_m = system_20220515_1_sm_master_B.Step_i
    * system_20220515_1_sm_master_B.Sum_p;

  /* Sum: '<S126>/Output' incorporates:
   *  Constant: '<S126>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_b =
    system_20220515_1_sm_master_B.Product_m +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_n;

  /* Saturate: '<S113>/Saturation' */
  u0_2 = system_20220515_1_sm_master_B.Output_b;
  u1_2 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_2 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_2 > u2_2) {
    /* Saturate: '<S113>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_a = u2_2;
  } else if (u0_2 < u1_2) {
    /* Saturate: '<S113>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_a = u1_2;
  } else {
    /* Saturate: '<S113>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_a = u0_2;
  }

  /* End of Saturate: '<S113>/Saturation' */

  /* Product: '<S113>/Multiply' incorporates:
   *  Constant: '<S113>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_o =
    system_20220515_1_sm_master_B.Saturation_a *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_110;

  /* Sum: '<S113>/Add' */
  system_20220515_1_sm_master_B.Add_b[0] =
    system_20220515_1_sm_master_B.Multiply_o +
    system_20220515_1_sm_master_B.Gain[9];
  system_20220515_1_sm_master_B.Add_b[1] =
    system_20220515_1_sm_master_B.Multiply_o +
    system_20220515_1_sm_master_B.Gain2[7];
  system_20220515_1_sm_master_B.Add_b[2] =
    system_20220515_1_sm_master_B.Multiply_o +
    system_20220515_1_sm_master_B.Gain2[8];
  system_20220515_1_sm_master_B.Add_b[3] =
    system_20220515_1_sm_master_B.Multiply_o +
    system_20220515_1_sm_master_B.Gain2[12];
  system_20220515_1_sm_master_B.Add_b[4] =
    system_20220515_1_sm_master_B.Multiply_o +
    system_20220515_1_sm_master_B.Gain3[3];
  system_20220515_1_sm_master_B.Add_b[5] =
    system_20220515_1_sm_master_B.Multiply_o +
    system_20220515_1_sm_master_B.Gain3[4];

  /* Step: '<S148>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_116) {
    /* Step: '<S148>/Step' */
    system_20220515_1_sm_master_B.Step_c =
      system_20220515_1_sm_master_P.Step_Y0_oa;
  } else {
    /* Step: '<S148>/Step' */
    system_20220515_1_sm_master_B.Step_c =
      system_20220515_1_sm_master_P.Ramp_slope_nm;
  }

  /* End of Step: '<S148>/Step' */

  /* Clock: '<S148>/Clock' */
  system_20220515_1_sm_master_B.Clock_i =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S148>/Sum' incorporates:
   *  Constant: '<S148>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_i = system_20220515_1_sm_master_B.Clock_i -
    system_20220515_1_sm_master_P.spoof_st.pmu_116;

  /* Product: '<S148>/Product' */
  system_20220515_1_sm_master_B.Product_i = system_20220515_1_sm_master_B.Step_c
    * system_20220515_1_sm_master_B.Sum_i;

  /* Sum: '<S148>/Output' incorporates:
   *  Constant: '<S148>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_j =
    system_20220515_1_sm_master_B.Product_i +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_p;

  /* Saturate: '<S137>/Saturation' */
  u0_3 = system_20220515_1_sm_master_B.Output_j;
  u1_3 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_3 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_3 > u2_3) {
    /* Saturate: '<S137>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_af = u2_3;
  } else if (u0_3 < u1_3) {
    /* Saturate: '<S137>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_af = u1_3;
  } else {
    /* Saturate: '<S137>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_af = u0_3;
  }

  /* End of Saturate: '<S137>/Saturation' */

  /* Product: '<S137>/Multiply' incorporates:
   *  Constant: '<S137>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_a =
    system_20220515_1_sm_master_B.Saturation_af *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_116;

  /* Sum: '<S137>/Add' */
  system_20220515_1_sm_master_B.Add_h[0] =
    system_20220515_1_sm_master_B.Multiply_a +
    system_20220515_1_sm_master_B.Gain[15];
  system_20220515_1_sm_master_B.Add_h[1] =
    system_20220515_1_sm_master_B.Multiply_a +
    system_20220515_1_sm_master_B.Gain2[19];
  system_20220515_1_sm_master_B.Add_h[2] =
    system_20220515_1_sm_master_B.Multiply_a +
    system_20220515_1_sm_master_B.Gain2[20];
  system_20220515_1_sm_master_B.Add_h[3] =
    system_20220515_1_sm_master_B.Multiply_a +
    system_20220515_1_sm_master_B.Gain1[24];
  system_20220515_1_sm_master_B.Add_h[4] =
    system_20220515_1_sm_master_B.Multiply_a +
    system_20220515_1_sm_master_B.Gain1[25];

  /* Step: '<S178>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_121) {
    /* Step: '<S178>/Step' */
    system_20220515_1_sm_master_B.Step_h =
      system_20220515_1_sm_master_P.Step_Y0_kd;
  } else {
    /* Step: '<S178>/Step' */
    system_20220515_1_sm_master_B.Step_h =
      system_20220515_1_sm_master_P.Ramp_slope_h;
  }

  /* End of Step: '<S178>/Step' */

  /* Clock: '<S178>/Clock' */
  system_20220515_1_sm_master_B.Clock_ng =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S178>/Sum' incorporates:
   *  Constant: '<S178>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_n = system_20220515_1_sm_master_B.Clock_ng -
    system_20220515_1_sm_master_P.spoof_st.pmu_121;

  /* Product: '<S178>/Product' */
  system_20220515_1_sm_master_B.Product_h = system_20220515_1_sm_master_B.Step_h
    * system_20220515_1_sm_master_B.Sum_n;

  /* Sum: '<S178>/Output' incorporates:
   *  Constant: '<S178>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_n =
    system_20220515_1_sm_master_B.Product_h +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_d;

  /* Saturate: '<S163>/Saturation' */
  u0_4 = system_20220515_1_sm_master_B.Output_n;
  u1_4 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_4 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_4 > u2_4) {
    /* Saturate: '<S163>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_e = u2_4;
  } else if (u0_4 < u1_4) {
    /* Saturate: '<S163>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_e = u1_4;
  } else {
    /* Saturate: '<S163>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_e = u0_4;
  }

  /* End of Saturate: '<S163>/Saturation' */

  /* Product: '<S163>/Multiply' incorporates:
   *  Constant: '<S163>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_p =
    system_20220515_1_sm_master_B.Saturation_e *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_121;

  /* Sum: '<S163>/Add' */
  system_20220515_1_sm_master_B.Add_o[0] =
    system_20220515_1_sm_master_B.Multiply_p +
    system_20220515_1_sm_master_B.Gain[20];
  system_20220515_1_sm_master_B.Add_o[1] =
    system_20220515_1_sm_master_B.Multiply_p +
    system_20220515_1_sm_master_B.Gain2[21];
  system_20220515_1_sm_master_B.Add_o[2] =
    system_20220515_1_sm_master_B.Multiply_p +
    system_20220515_1_sm_master_B.Gain2[22];
  system_20220515_1_sm_master_B.Add_o[3] =
    system_20220515_1_sm_master_B.Multiply_p +
    system_20220515_1_sm_master_B.Gain2[28];
  system_20220515_1_sm_master_B.Add_o[4] =
    system_20220515_1_sm_master_B.Multiply_p +
    system_20220515_1_sm_master_B.Gain2[29];
  system_20220515_1_sm_master_B.Add_o[5] =
    system_20220515_1_sm_master_B.Multiply_p +
    system_20220515_1_sm_master_B.Gain1[34];
  system_20220515_1_sm_master_B.Add_o[6] =
    system_20220515_1_sm_master_B.Multiply_p +
    system_20220515_1_sm_master_B.Gain1[35];

  /* Step: '<S204>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_123) {
    /* Step: '<S204>/Step' */
    system_20220515_1_sm_master_B.Step_e =
      system_20220515_1_sm_master_P.Step_Y0_m;
  } else {
    /* Step: '<S204>/Step' */
    system_20220515_1_sm_master_B.Step_e =
      system_20220515_1_sm_master_P.Ramp_slope_kc;
  }

  /* End of Step: '<S204>/Step' */

  /* Clock: '<S204>/Clock' */
  system_20220515_1_sm_master_B.Clock_p =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S204>/Sum' incorporates:
   *  Constant: '<S204>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_ps = system_20220515_1_sm_master_B.Clock_p -
    system_20220515_1_sm_master_P.spoof_st.pmu_123;

  /* Product: '<S204>/Product' */
  system_20220515_1_sm_master_B.Product_d = system_20220515_1_sm_master_B.Step_e
    * system_20220515_1_sm_master_B.Sum_ps;

  /* Sum: '<S204>/Output' incorporates:
   *  Constant: '<S204>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_bt =
    system_20220515_1_sm_master_B.Product_d +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_h;

  /* Saturate: '<S191>/Saturation' */
  u0_5 = system_20220515_1_sm_master_B.Output_bt;
  u1_5 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_5 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_5 > u2_5) {
    /* Saturate: '<S191>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_m = u2_5;
  } else if (u0_5 < u1_5) {
    /* Saturate: '<S191>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_m = u1_5;
  } else {
    /* Saturate: '<S191>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_m = u0_5;
  }

  /* End of Saturate: '<S191>/Saturation' */

  /* Product: '<S191>/Multiply' incorporates:
   *  Constant: '<S191>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_l =
    system_20220515_1_sm_master_B.Saturation_m *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_123;

  /* Sum: '<S191>/Add' */
  system_20220515_1_sm_master_B.Add_f[0] =
    system_20220515_1_sm_master_B.Multiply_l +
    system_20220515_1_sm_master_B.Gain[22];
  system_20220515_1_sm_master_B.Add_f[1] =
    system_20220515_1_sm_master_B.Multiply_l +
    system_20220515_1_sm_master_B.Gain2[16];
  system_20220515_1_sm_master_B.Add_f[2] =
    system_20220515_1_sm_master_B.Multiply_l +
    system_20220515_1_sm_master_B.Gain2[17];
  system_20220515_1_sm_master_B.Add_f[3] =
    system_20220515_1_sm_master_B.Multiply_l +
    system_20220515_1_sm_master_B.Gain2[32];
  system_20220515_1_sm_master_B.Add_f[4] =
    system_20220515_1_sm_master_B.Multiply_l +
    system_20220515_1_sm_master_B.Gain2[33];
  system_20220515_1_sm_master_B.Add_f[5] =
    system_20220515_1_sm_master_B.Multiply_l +
    system_20220515_1_sm_master_B.Gain1[36];

  /* Step: '<S222>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_202) {
    /* Step: '<S222>/Step' */
    system_20220515_1_sm_master_B.Step_ps =
      system_20220515_1_sm_master_P.Step_Y0_p;
  } else {
    /* Step: '<S222>/Step' */
    system_20220515_1_sm_master_B.Step_ps =
      system_20220515_1_sm_master_P.Ramp_slope_g;
  }

  /* End of Step: '<S222>/Step' */

  /* Clock: '<S222>/Clock' */
  system_20220515_1_sm_master_B.Clock_fi =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S222>/Sum' incorporates:
   *  Constant: '<S222>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_ct = system_20220515_1_sm_master_B.Clock_fi
    - system_20220515_1_sm_master_P.spoof_st.pmu_202;

  /* Product: '<S222>/Product' */
  system_20220515_1_sm_master_B.Product_l =
    system_20220515_1_sm_master_B.Step_ps * system_20220515_1_sm_master_B.Sum_ct;

  /* Sum: '<S222>/Output' incorporates:
   *  Constant: '<S222>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_i =
    system_20220515_1_sm_master_B.Product_l +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_pu;

  /* Saturate: '<S213>/Saturation' */
  u0_6 = system_20220515_1_sm_master_B.Output_i;
  u1_6 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_6 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_6 > u2_6) {
    /* Saturate: '<S213>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_g = u2_6;
  } else if (u0_6 < u1_6) {
    /* Saturate: '<S213>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_g = u1_6;
  } else {
    /* Saturate: '<S213>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_g = u0_6;
  }

  /* End of Saturate: '<S213>/Saturation' */

  /* Product: '<S213>/Multiply' incorporates:
   *  Constant: '<S213>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_by =
    system_20220515_1_sm_master_B.Saturation_g *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_202;

  /* Sum: '<S213>/Add' */
  system_20220515_1_sm_master_B.Add_ph[0] =
    system_20220515_1_sm_master_B.Multiply_by +
    system_20220515_1_sm_master_B.Gain[25];
  system_20220515_1_sm_master_B.Add_ph[1] =
    system_20220515_1_sm_master_B.Multiply_by +
    system_20220515_1_sm_master_B.Gain2[37];
  system_20220515_1_sm_master_B.Add_ph[2] =
    system_20220515_1_sm_master_B.Multiply_by +
    system_20220515_1_sm_master_B.Gain1[40];
  system_20220515_1_sm_master_B.Add_ph[3] =
    system_20220515_1_sm_master_B.Multiply_by +
    system_20220515_1_sm_master_B.Gain1[41];

  /* Step: '<S244>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_203) {
    /* Step: '<S244>/Step' */
    system_20220515_1_sm_master_B.Step_l =
      system_20220515_1_sm_master_P.Step_Y0_f2;
  } else {
    /* Step: '<S244>/Step' */
    system_20220515_1_sm_master_B.Step_l =
      system_20220515_1_sm_master_P.Ramp_slope_e;
  }

  /* End of Step: '<S244>/Step' */

  /* Clock: '<S244>/Clock' */
  system_20220515_1_sm_master_B.Clock_k =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S244>/Sum' incorporates:
   *  Constant: '<S244>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_g = system_20220515_1_sm_master_B.Clock_k -
    system_20220515_1_sm_master_P.spoof_st.pmu_203;

  /* Product: '<S244>/Product' */
  system_20220515_1_sm_master_B.Product_b = system_20220515_1_sm_master_B.Step_l
    * system_20220515_1_sm_master_B.Sum_g;

  /* Sum: '<S244>/Output' incorporates:
   *  Constant: '<S244>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_p =
    system_20220515_1_sm_master_B.Product_b +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_k;

  /* Saturate: '<S233>/Saturation' */
  u0_7 = system_20220515_1_sm_master_B.Output_p;
  u1_7 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_7 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_7 > u2_7) {
    /* Saturate: '<S233>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h4 = u2_7;
  } else if (u0_7 < u1_7) {
    /* Saturate: '<S233>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h4 = u1_7;
  } else {
    /* Saturate: '<S233>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h4 = u0_7;
  }

  /* End of Saturate: '<S233>/Saturation' */

  /* Product: '<S233>/Multiply' incorporates:
   *  Constant: '<S233>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_h =
    system_20220515_1_sm_master_B.Saturation_h4 *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_203;

  /* Sum: '<S233>/Add' */
  system_20220515_1_sm_master_B.Add_k[0] =
    system_20220515_1_sm_master_B.Multiply_h +
    system_20220515_1_sm_master_B.Gain[26];
  system_20220515_1_sm_master_B.Add_k[1] =
    system_20220515_1_sm_master_B.Multiply_h +
    system_20220515_1_sm_master_B.Gain2[10];
  system_20220515_1_sm_master_B.Add_k[2] =
    system_20220515_1_sm_master_B.Multiply_h +
    system_20220515_1_sm_master_B.Gain2[38];
  system_20220515_1_sm_master_B.Add_k[3] =
    system_20220515_1_sm_master_B.Multiply_h +
    system_20220515_1_sm_master_B.Gain1[42];
  system_20220515_1_sm_master_B.Add_k[4] =
    system_20220515_1_sm_master_B.Multiply_h +
    system_20220515_1_sm_master_B.Gain3[5];

  /* Step: '<S254>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_207) {
    /* Step: '<S254>/Step' */
    system_20220515_1_sm_master_B.Step_n =
      system_20220515_1_sm_master_P.Step_Y0_l;
  } else {
    /* Step: '<S254>/Step' */
    system_20220515_1_sm_master_B.Step_n =
      system_20220515_1_sm_master_P.Ramp_slope_p;
  }

  /* End of Step: '<S254>/Step' */

  /* Clock: '<S254>/Clock' */
  system_20220515_1_sm_master_B.Clock_fz =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S254>/Sum' incorporates:
   *  Constant: '<S254>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_m = system_20220515_1_sm_master_B.Clock_fz -
    system_20220515_1_sm_master_P.spoof_st.pmu_207;

  /* Product: '<S254>/Product' */
  system_20220515_1_sm_master_B.Product_fb =
    system_20220515_1_sm_master_B.Step_n * system_20220515_1_sm_master_B.Sum_m;

  /* Sum: '<S254>/Output' incorporates:
   *  Constant: '<S254>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_h =
    system_20220515_1_sm_master_B.Product_fb +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_a;

  /* Saturate: '<S249>/Saturation' */
  u0_8 = system_20220515_1_sm_master_B.Output_h;
  u1_8 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_8 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_8 > u2_8) {
    /* Saturate: '<S249>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_l = u2_8;
  } else if (u0_8 < u1_8) {
    /* Saturate: '<S249>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_l = u1_8;
  } else {
    /* Saturate: '<S249>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_l = u0_8;
  }

  /* End of Saturate: '<S249>/Saturation' */

  /* Product: '<S249>/Multiply' incorporates:
   *  Constant: '<S249>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_m =
    system_20220515_1_sm_master_B.Saturation_l *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_207;

  /* Sum: '<S249>/Add' */
  system_20220515_1_sm_master_B.Add_i[0] =
    system_20220515_1_sm_master_B.Multiply_m +
    system_20220515_1_sm_master_B.Gain[30];
  system_20220515_1_sm_master_B.Add_i[1] =
    system_20220515_1_sm_master_B.Multiply_m +
    system_20220515_1_sm_master_B.Gain1[46];

  /* Step: '<S280>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_210) {
    /* Step: '<S280>/Step' */
    system_20220515_1_sm_master_B.Step_pu =
      system_20220515_1_sm_master_P.Step_Y0_n;
  } else {
    /* Step: '<S280>/Step' */
    system_20220515_1_sm_master_B.Step_pu =
      system_20220515_1_sm_master_P.Ramp_slope_cq;
  }

  /* End of Step: '<S280>/Step' */

  /* Clock: '<S280>/Clock' */
  system_20220515_1_sm_master_B.Clock_l =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S280>/Sum' incorporates:
   *  Constant: '<S280>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_k = system_20220515_1_sm_master_B.Clock_l -
    system_20220515_1_sm_master_P.spoof_st.pmu_210;

  /* Product: '<S280>/Product' */
  system_20220515_1_sm_master_B.Product_g =
    system_20220515_1_sm_master_B.Step_pu * system_20220515_1_sm_master_B.Sum_k;

  /* Sum: '<S280>/Output' incorporates:
   *  Constant: '<S280>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_l =
    system_20220515_1_sm_master_B.Product_g +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_ha;

  /* Saturate: '<S267>/Saturation' */
  u0_9 = system_20220515_1_sm_master_B.Output_l;
  u1_9 = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_9 = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_9 > u2_9) {
    /* Saturate: '<S267>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_go = u2_9;
  } else if (u0_9 < u1_9) {
    /* Saturate: '<S267>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_go = u1_9;
  } else {
    /* Saturate: '<S267>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_go = u0_9;
  }

  /* End of Saturate: '<S267>/Saturation' */

  /* Product: '<S267>/Multiply' incorporates:
   *  Constant: '<S267>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_k =
    system_20220515_1_sm_master_B.Saturation_go *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_210;

  /* Sum: '<S267>/Add' */
  system_20220515_1_sm_master_B.Add_og[0] =
    system_20220515_1_sm_master_B.Multiply_k +
    system_20220515_1_sm_master_B.Gain[33];
  system_20220515_1_sm_master_B.Add_og[1] =
    system_20220515_1_sm_master_B.Multiply_k +
    system_20220515_1_sm_master_B.Gain2[44];
  system_20220515_1_sm_master_B.Add_og[2] =
    system_20220515_1_sm_master_B.Multiply_k +
    system_20220515_1_sm_master_B.Gain2[45];
  system_20220515_1_sm_master_B.Add_og[3] =
    system_20220515_1_sm_master_B.Multiply_k +
    system_20220515_1_sm_master_B.Gain2[48];
  system_20220515_1_sm_master_B.Add_og[4] =
    system_20220515_1_sm_master_B.Multiply_k +
    system_20220515_1_sm_master_B.Gain3[8];
  system_20220515_1_sm_master_B.Add_og[5] =
    system_20220515_1_sm_master_B.Multiply_k +
    system_20220515_1_sm_master_B.Gain3[9];

  /* Step: '<S302>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_216) {
    /* Step: '<S302>/Step' */
    system_20220515_1_sm_master_B.Step_a =
      system_20220515_1_sm_master_P.Step_Y0_fl;
  } else {
    /* Step: '<S302>/Step' */
    system_20220515_1_sm_master_B.Step_a =
      system_20220515_1_sm_master_P.Ramp_slope_d;
  }

  /* End of Step: '<S302>/Step' */

  /* Clock: '<S302>/Clock' */
  system_20220515_1_sm_master_B.Clock_nv =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S302>/Sum' incorporates:
   *  Constant: '<S302>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_l = system_20220515_1_sm_master_B.Clock_nv -
    system_20220515_1_sm_master_P.spoof_st.pmu_216;

  /* Product: '<S302>/Product' */
  system_20220515_1_sm_master_B.Product_hx =
    system_20220515_1_sm_master_B.Step_a * system_20220515_1_sm_master_B.Sum_l;

  /* Sum: '<S302>/Output' incorporates:
   *  Constant: '<S302>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_jl =
    system_20220515_1_sm_master_B.Product_hx +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_kd;

  /* Saturate: '<S291>/Saturation' */
  u0_a = system_20220515_1_sm_master_B.Output_jl;
  u1_a = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_a = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_a > u2_a) {
    /* Saturate: '<S291>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_eq = u2_a;
  } else if (u0_a < u1_a) {
    /* Saturate: '<S291>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_eq = u1_a;
  } else {
    /* Saturate: '<S291>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_eq = u0_a;
  }

  /* End of Saturate: '<S291>/Saturation' */

  /* Product: '<S291>/Multiply' incorporates:
   *  Constant: '<S291>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_ao =
    system_20220515_1_sm_master_B.Saturation_eq *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_216;

  /* Sum: '<S291>/Add' */
  system_20220515_1_sm_master_B.Add_ek[0] =
    system_20220515_1_sm_master_B.Multiply_ao +
    system_20220515_1_sm_master_B.Gain[39];
  system_20220515_1_sm_master_B.Add_ek[1] =
    system_20220515_1_sm_master_B.Multiply_ao +
    system_20220515_1_sm_master_B.Gain2[54];
  system_20220515_1_sm_master_B.Add_ek[2] =
    system_20220515_1_sm_master_B.Multiply_ao +
    system_20220515_1_sm_master_B.Gain2[55];
  system_20220515_1_sm_master_B.Add_ek[3] =
    system_20220515_1_sm_master_B.Multiply_ao +
    system_20220515_1_sm_master_B.Gain1[59];
  system_20220515_1_sm_master_B.Add_ek[4] =
    system_20220515_1_sm_master_B.Multiply_ao +
    system_20220515_1_sm_master_B.Gain1[60];

  /* Step: '<S328>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_221) {
    /* Step: '<S328>/Step' */
    system_20220515_1_sm_master_B.Step_iu =
      system_20220515_1_sm_master_P.Step_Y0_ff;
  } else {
    /* Step: '<S328>/Step' */
    system_20220515_1_sm_master_B.Step_iu =
      system_20220515_1_sm_master_P.Ramp_slope_nmj;
  }

  /* End of Step: '<S328>/Step' */

  /* Clock: '<S328>/Clock' */
  system_20220515_1_sm_master_B.Clock_a =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S328>/Sum' incorporates:
   *  Constant: '<S328>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_gf = system_20220515_1_sm_master_B.Clock_a -
    system_20220515_1_sm_master_P.spoof_st.pmu_221;

  /* Product: '<S328>/Product' */
  system_20220515_1_sm_master_B.Product_bb =
    system_20220515_1_sm_master_B.Step_iu * system_20220515_1_sm_master_B.Sum_gf;

  /* Sum: '<S328>/Output' incorporates:
   *  Constant: '<S328>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_bi =
    system_20220515_1_sm_master_B.Product_bb +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_m;

  /* Saturate: '<S315>/Saturation' */
  u0_b = system_20220515_1_sm_master_B.Output_bi;
  u1_b = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_b = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_b > u2_b) {
    /* Saturate: '<S315>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_n = u2_b;
  } else if (u0_b < u1_b) {
    /* Saturate: '<S315>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_n = u1_b;
  } else {
    /* Saturate: '<S315>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_n = u0_b;
  }

  /* End of Saturate: '<S315>/Saturation' */

  /* Product: '<S315>/Multiply' incorporates:
   *  Constant: '<S315>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_lr =
    system_20220515_1_sm_master_B.Saturation_n *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_221;

  /* Sum: '<S315>/Add' */
  system_20220515_1_sm_master_B.Add_n[0] =
    system_20220515_1_sm_master_B.Multiply_lr +
    system_20220515_1_sm_master_B.Gain[44];
  system_20220515_1_sm_master_B.Add_n[1] =
    system_20220515_1_sm_master_B.Multiply_lr +
    system_20220515_1_sm_master_B.Gain2[56];
  system_20220515_1_sm_master_B.Add_n[2] =
    system_20220515_1_sm_master_B.Multiply_lr +
    system_20220515_1_sm_master_B.Gain2[57];
  system_20220515_1_sm_master_B.Add_n[3] =
    system_20220515_1_sm_master_B.Multiply_lr +
    system_20220515_1_sm_master_B.Gain2[63];
  system_20220515_1_sm_master_B.Add_n[4] =
    system_20220515_1_sm_master_B.Multiply_lr +
    system_20220515_1_sm_master_B.Gain2[64];
  system_20220515_1_sm_master_B.Add_n[5] =
    system_20220515_1_sm_master_B.Multiply_lr +
    system_20220515_1_sm_master_B.Gain1[69];

  /* Step: '<S354>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_223) {
    /* Step: '<S354>/Step' */
    system_20220515_1_sm_master_B.Step_ec =
      system_20220515_1_sm_master_P.Step_Y0_i;
  } else {
    /* Step: '<S354>/Step' */
    system_20220515_1_sm_master_B.Step_ec =
      system_20220515_1_sm_master_P.Ramp_slope_j;
  }

  /* End of Step: '<S354>/Step' */

  /* Clock: '<S354>/Clock' */
  system_20220515_1_sm_master_B.Clock_dg =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S354>/Sum' incorporates:
   *  Constant: '<S354>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_hz = system_20220515_1_sm_master_B.Clock_dg
    - system_20220515_1_sm_master_P.spoof_st.pmu_223;

  /* Product: '<S354>/Product' */
  system_20220515_1_sm_master_B.Product_k =
    system_20220515_1_sm_master_B.Step_ec * system_20220515_1_sm_master_B.Sum_hz;

  /* Sum: '<S354>/Output' incorporates:
   *  Constant: '<S354>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_f =
    system_20220515_1_sm_master_B.Product_k +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_e;

  /* Saturate: '<S341>/Saturation' */
  u0_c = system_20220515_1_sm_master_B.Output_f;
  u1_c = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_c = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_c > u2_c) {
    /* Saturate: '<S341>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_c = u2_c;
  } else if (u0_c < u1_c) {
    /* Saturate: '<S341>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_c = u1_c;
  } else {
    /* Saturate: '<S341>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_c = u0_c;
  }

  /* End of Saturate: '<S341>/Saturation' */

  /* Product: '<S341>/Multiply' incorporates:
   *  Constant: '<S341>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_hx =
    system_20220515_1_sm_master_B.Saturation_c *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_223;

  /* Sum: '<S341>/Add' */
  system_20220515_1_sm_master_B.Add_f2[0] =
    system_20220515_1_sm_master_B.Multiply_hx +
    system_20220515_1_sm_master_B.Gain[46];
  system_20220515_1_sm_master_B.Add_f2[1] =
    system_20220515_1_sm_master_B.Multiply_hx +
    system_20220515_1_sm_master_B.Gain2[52];
  system_20220515_1_sm_master_B.Add_f2[2] =
    system_20220515_1_sm_master_B.Multiply_hx +
    system_20220515_1_sm_master_B.Gain2[53];
  system_20220515_1_sm_master_B.Add_f2[3] =
    system_20220515_1_sm_master_B.Multiply_hx +
    system_20220515_1_sm_master_B.Gain2[67];
  system_20220515_1_sm_master_B.Add_f2[4] =
    system_20220515_1_sm_master_B.Multiply_hx +
    system_20220515_1_sm_master_B.Gain2[68];
  system_20220515_1_sm_master_B.Add_f2[5] =
    system_20220515_1_sm_master_B.Multiply_hx +
    system_20220515_1_sm_master_B.Gain1[70];

  /* Step: '<S372>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_302) {
    /* Step: '<S372>/Step' */
    system_20220515_1_sm_master_B.Step_j =
      system_20220515_1_sm_master_P.Step_Y0_fv;
  } else {
    /* Step: '<S372>/Step' */
    system_20220515_1_sm_master_B.Step_j =
      system_20220515_1_sm_master_P.Ramp_slope_a;
  }

  /* End of Step: '<S372>/Step' */

  /* Clock: '<S372>/Clock' */
  system_20220515_1_sm_master_B.Clock_h =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S372>/Sum' incorporates:
   *  Constant: '<S372>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_hj = system_20220515_1_sm_master_B.Clock_h -
    system_20220515_1_sm_master_P.spoof_st.pmu_302;

  /* Product: '<S372>/Product' */
  system_20220515_1_sm_master_B.Product_fx =
    system_20220515_1_sm_master_B.Step_j * system_20220515_1_sm_master_B.Sum_hj;

  /* Sum: '<S372>/Output' incorporates:
   *  Constant: '<S372>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_a =
    system_20220515_1_sm_master_B.Product_fx +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_h0;

  /* Saturate: '<S363>/Saturation' */
  u0_d = system_20220515_1_sm_master_B.Output_a;
  u1_d = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_d = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_d > u2_d) {
    /* Saturate: '<S363>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_ls = u2_d;
  } else if (u0_d < u1_d) {
    /* Saturate: '<S363>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_ls = u1_d;
  } else {
    /* Saturate: '<S363>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_ls = u0_d;
  }

  /* End of Saturate: '<S363>/Saturation' */

  /* Product: '<S363>/Multiply' incorporates:
   *  Constant: '<S363>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_c =
    system_20220515_1_sm_master_B.Saturation_ls *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_302;

  /* Sum: '<S363>/Add' */
  system_20220515_1_sm_master_B.Add_ib[0] =
    system_20220515_1_sm_master_B.Multiply_c +
    system_20220515_1_sm_master_B.Gain[49];
  system_20220515_1_sm_master_B.Add_ib[1] =
    system_20220515_1_sm_master_B.Multiply_c +
    system_20220515_1_sm_master_B.Gain2[71];
  system_20220515_1_sm_master_B.Add_ib[2] =
    system_20220515_1_sm_master_B.Multiply_c +
    system_20220515_1_sm_master_B.Gain1[74];
  system_20220515_1_sm_master_B.Add_ib[3] =
    system_20220515_1_sm_master_B.Multiply_c +
    system_20220515_1_sm_master_B.Gain1[75];

  /* Step: '<S390>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_303) {
    /* Step: '<S390>/Step' */
    system_20220515_1_sm_master_B.Step_e5 =
      system_20220515_1_sm_master_P.Step_Y0_ia;
  } else {
    /* Step: '<S390>/Step' */
    system_20220515_1_sm_master_B.Step_e5 =
      system_20220515_1_sm_master_P.Ramp_slope_l;
  }

  /* End of Step: '<S390>/Step' */

  /* Clock: '<S390>/Clock' */
  system_20220515_1_sm_master_B.Clock_dl =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S390>/Sum' incorporates:
   *  Constant: '<S390>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_eh = system_20220515_1_sm_master_B.Clock_dl
    - system_20220515_1_sm_master_P.spoof_st.pmu_303;

  /* Product: '<S390>/Product' */
  system_20220515_1_sm_master_B.Product_mg =
    system_20220515_1_sm_master_B.Step_e5 * system_20220515_1_sm_master_B.Sum_eh;

  /* Sum: '<S390>/Output' incorporates:
   *  Constant: '<S390>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_ji =
    system_20220515_1_sm_master_B.Product_mg +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_ki;

  /* Saturate: '<S381>/Saturation' */
  u0_e = system_20220515_1_sm_master_B.Output_ji;
  u1_e = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_e = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_e > u2_e) {
    /* Saturate: '<S381>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_b = u2_e;
  } else if (u0_e < u1_e) {
    /* Saturate: '<S381>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_b = u1_e;
  } else {
    /* Saturate: '<S381>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_b = u0_e;
  }

  /* End of Saturate: '<S381>/Saturation' */

  /* Product: '<S381>/Multiply' incorporates:
   *  Constant: '<S381>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_g =
    system_20220515_1_sm_master_B.Saturation_b *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_303;

  /* Sum: '<S381>/Add' */
  system_20220515_1_sm_master_B.Add_od[0] =
    system_20220515_1_sm_master_B.Multiply_g +
    system_20220515_1_sm_master_B.Gain[50];
  system_20220515_1_sm_master_B.Add_od[1] =
    system_20220515_1_sm_master_B.Multiply_g +
    system_20220515_1_sm_master_B.Gain2[72];
  system_20220515_1_sm_master_B.Add_od[2] =
    system_20220515_1_sm_master_B.Multiply_g +
    system_20220515_1_sm_master_B.Gain1[76];
  system_20220515_1_sm_master_B.Add_od[3] =
    system_20220515_1_sm_master_B.Multiply_g +
    system_20220515_1_sm_master_B.Gain3[10];

  /* Step: '<S400>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_307) {
    /* Step: '<S400>/Step' */
    system_20220515_1_sm_master_B.Step_pg =
      system_20220515_1_sm_master_P.Step_Y0_oj;
  } else {
    /* Step: '<S400>/Step' */
    system_20220515_1_sm_master_B.Step_pg =
      system_20220515_1_sm_master_P.Ramp_slope_kl;
  }

  /* End of Step: '<S400>/Step' */

  /* Clock: '<S400>/Clock' */
  system_20220515_1_sm_master_B.Clock_fw =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S400>/Sum' incorporates:
   *  Constant: '<S400>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_f = system_20220515_1_sm_master_B.Clock_fw -
    system_20220515_1_sm_master_P.spoof_st.pmu_307;

  /* Product: '<S400>/Product' */
  system_20220515_1_sm_master_B.Product_a =
    system_20220515_1_sm_master_B.Step_pg * system_20220515_1_sm_master_B.Sum_f;

  /* Sum: '<S400>/Output' incorporates:
   *  Constant: '<S400>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_ba =
    system_20220515_1_sm_master_B.Product_a +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_mw;

  /* Saturate: '<S395>/Saturation' */
  u0_f = system_20220515_1_sm_master_B.Output_ba;
  u1_f = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_f = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_f > u2_f) {
    /* Saturate: '<S395>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h1 = u2_f;
  } else if (u0_f < u1_f) {
    /* Saturate: '<S395>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h1 = u1_f;
  } else {
    /* Saturate: '<S395>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_h1 = u0_f;
  }

  /* End of Saturate: '<S395>/Saturation' */

  /* Product: '<S395>/Multiply' incorporates:
   *  Constant: '<S395>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_lrk =
    system_20220515_1_sm_master_B.Saturation_h1 *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_307;

  /* Sum: '<S395>/Add' */
  system_20220515_1_sm_master_B.Add_fz[0] =
    system_20220515_1_sm_master_B.Multiply_lrk +
    system_20220515_1_sm_master_B.Gain[54];
  system_20220515_1_sm_master_B.Add_fz[1] =
    system_20220515_1_sm_master_B.Multiply_lrk +
    system_20220515_1_sm_master_B.Gain1[80];

  /* Step: '<S426>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_310) {
    /* Step: '<S426>/Step' */
    system_20220515_1_sm_master_B.Step_p1 =
      system_20220515_1_sm_master_P.Step_Y0_mk;
  } else {
    /* Step: '<S426>/Step' */
    system_20220515_1_sm_master_B.Step_p1 =
      system_20220515_1_sm_master_P.Ramp_slope_n1;
  }

  /* End of Step: '<S426>/Step' */

  /* Clock: '<S426>/Clock' */
  system_20220515_1_sm_master_B.Clock_m =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S426>/Sum' incorporates:
   *  Constant: '<S426>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_mb = system_20220515_1_sm_master_B.Clock_m -
    system_20220515_1_sm_master_P.spoof_st.pmu_310;

  /* Product: '<S426>/Product' */
  system_20220515_1_sm_master_B.Product_n =
    system_20220515_1_sm_master_B.Step_p1 * system_20220515_1_sm_master_B.Sum_mb;

  /* Sum: '<S426>/Output' incorporates:
   *  Constant: '<S426>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_fr =
    system_20220515_1_sm_master_B.Product_n +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_nh;

  /* Saturate: '<S413>/Saturation' */
  u0_g = system_20220515_1_sm_master_B.Output_fr;
  u1_g = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_g = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_g > u2_g) {
    /* Saturate: '<S413>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_gh = u2_g;
  } else if (u0_g < u1_g) {
    /* Saturate: '<S413>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_gh = u1_g;
  } else {
    /* Saturate: '<S413>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_gh = u0_g;
  }

  /* End of Saturate: '<S413>/Saturation' */

  /* Product: '<S413>/Multiply' incorporates:
   *  Constant: '<S413>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_ci =
    system_20220515_1_sm_master_B.Saturation_gh *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_310;

  /* Sum: '<S413>/Add' */
  system_20220515_1_sm_master_B.Add_m[0] =
    system_20220515_1_sm_master_B.Multiply_ci +
    system_20220515_1_sm_master_B.Gain[57];
  system_20220515_1_sm_master_B.Add_m[1] =
    system_20220515_1_sm_master_B.Multiply_ci +
    system_20220515_1_sm_master_B.Gain2[78];
  system_20220515_1_sm_master_B.Add_m[2] =
    system_20220515_1_sm_master_B.Multiply_ci +
    system_20220515_1_sm_master_B.Gain2[79];
  system_20220515_1_sm_master_B.Add_m[3] =
    system_20220515_1_sm_master_B.Multiply_ci +
    system_20220515_1_sm_master_B.Gain2[82];
  system_20220515_1_sm_master_B.Add_m[4] =
    system_20220515_1_sm_master_B.Multiply_ci +
    system_20220515_1_sm_master_B.Gain3[13];
  system_20220515_1_sm_master_B.Add_m[5] =
    system_20220515_1_sm_master_B.Multiply_ci +
    system_20220515_1_sm_master_B.Gain3[14];

  /* Step: '<S448>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_316) {
    /* Step: '<S448>/Step' */
    system_20220515_1_sm_master_B.Step_n1 =
      system_20220515_1_sm_master_P.Step_Y0_lv;
  } else {
    /* Step: '<S448>/Step' */
    system_20220515_1_sm_master_B.Step_n1 =
      system_20220515_1_sm_master_P.Ramp_slope_pr;
  }

  /* End of Step: '<S448>/Step' */

  /* Clock: '<S448>/Clock' */
  system_20220515_1_sm_master_B.Clock_io =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S448>/Sum' incorporates:
   *  Constant: '<S448>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_b = system_20220515_1_sm_master_B.Clock_io -
    system_20220515_1_sm_master_P.spoof_st.pmu_316;

  /* Product: '<S448>/Product' */
  system_20220515_1_sm_master_B.Product_e =
    system_20220515_1_sm_master_B.Step_n1 * system_20220515_1_sm_master_B.Sum_b;

  /* Sum: '<S448>/Output' incorporates:
   *  Constant: '<S448>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_fx =
    system_20220515_1_sm_master_B.Product_e +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_n0;

  /* Saturate: '<S437>/Saturation' */
  u0_h = system_20220515_1_sm_master_B.Output_fx;
  u1_h = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_h = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_h > u2_h) {
    /* Saturate: '<S437>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_mz = u2_h;
  } else if (u0_h < u1_h) {
    /* Saturate: '<S437>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_mz = u1_h;
  } else {
    /* Saturate: '<S437>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_mz = u0_h;
  }

  /* End of Saturate: '<S437>/Saturation' */

  /* Product: '<S437>/Multiply' incorporates:
   *  Constant: '<S437>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_d =
    system_20220515_1_sm_master_B.Saturation_mz *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_316;

  /* Sum: '<S437>/Add' */
  system_20220515_1_sm_master_B.Add_c[0] =
    system_20220515_1_sm_master_B.Multiply_d +
    system_20220515_1_sm_master_B.Gain[63];
  system_20220515_1_sm_master_B.Add_c[1] =
    system_20220515_1_sm_master_B.Multiply_d +
    system_20220515_1_sm_master_B.Gain2[88];
  system_20220515_1_sm_master_B.Add_c[2] =
    system_20220515_1_sm_master_B.Multiply_d +
    system_20220515_1_sm_master_B.Gain2[89];
  system_20220515_1_sm_master_B.Add_c[3] =
    system_20220515_1_sm_master_B.Multiply_d +
    system_20220515_1_sm_master_B.Gain1[93];
  system_20220515_1_sm_master_B.Add_c[4] =
    system_20220515_1_sm_master_B.Multiply_d +
    system_20220515_1_sm_master_B.Gain1[94];

  /* Step: '<S474>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_321) {
    /* Step: '<S474>/Step' */
    system_20220515_1_sm_master_B.Step_j2 =
      system_20220515_1_sm_master_P.Step_Y0_h;
  } else {
    /* Step: '<S474>/Step' */
    system_20220515_1_sm_master_B.Step_j2 =
      system_20220515_1_sm_master_P.Ramp_slope_gb;
  }

  /* End of Step: '<S474>/Step' */

  /* Clock: '<S474>/Clock' */
  system_20220515_1_sm_master_B.Clock_d4 =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S474>/Sum' incorporates:
   *  Constant: '<S474>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_p0 = system_20220515_1_sm_master_B.Clock_d4
    - system_20220515_1_sm_master_P.spoof_st.pmu_321;

  /* Product: '<S474>/Product' */
  system_20220515_1_sm_master_B.Product_hb =
    system_20220515_1_sm_master_B.Step_j2 * system_20220515_1_sm_master_B.Sum_p0;

  /* Sum: '<S474>/Output' incorporates:
   *  Constant: '<S474>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_o =
    system_20220515_1_sm_master_B.Product_hb +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_kdz;

  /* Saturate: '<S461>/Saturation' */
  u0_i = system_20220515_1_sm_master_B.Output_o;
  u1_i = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_i = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_i > u2_i) {
    /* Saturate: '<S461>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_p = u2_i;
  } else if (u0_i < u1_i) {
    /* Saturate: '<S461>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_p = u1_i;
  } else {
    /* Saturate: '<S461>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_p = u0_i;
  }

  /* End of Saturate: '<S461>/Saturation' */

  /* Product: '<S461>/Multiply' incorporates:
   *  Constant: '<S461>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_ag =
    system_20220515_1_sm_master_B.Saturation_p *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_321;

  /* Sum: '<S461>/Add' */
  system_20220515_1_sm_master_B.Add_l[0] =
    system_20220515_1_sm_master_B.Multiply_ag +
    system_20220515_1_sm_master_B.Gain[68];
  system_20220515_1_sm_master_B.Add_l[1] =
    system_20220515_1_sm_master_B.Multiply_ag +
    system_20220515_1_sm_master_B.Gain2[90];
  system_20220515_1_sm_master_B.Add_l[2] =
    system_20220515_1_sm_master_B.Multiply_ag +
    system_20220515_1_sm_master_B.Gain2[91];
  system_20220515_1_sm_master_B.Add_l[3] =
    system_20220515_1_sm_master_B.Multiply_ag +
    system_20220515_1_sm_master_B.Gain2[97];
  system_20220515_1_sm_master_B.Add_l[4] =
    system_20220515_1_sm_master_B.Multiply_ag +
    system_20220515_1_sm_master_B.Gain2[98];
  system_20220515_1_sm_master_B.Add_l[5] =
    system_20220515_1_sm_master_B.Multiply_ag +
    system_20220515_1_sm_master_B.Gain1[103];

  /* Step: '<S500>/Step' */
  currentTime = system_20220515_1_sm_master_M->Timing.t[0];
  if (currentTime < system_20220515_1_sm_master_P.spoof_st.pmu_323) {
    /* Step: '<S500>/Step' */
    system_20220515_1_sm_master_B.Step_d =
      system_20220515_1_sm_master_P.Step_Y0_g;
  } else {
    /* Step: '<S500>/Step' */
    system_20220515_1_sm_master_B.Step_d =
      system_20220515_1_sm_master_P.Ramp_slope_gl;
  }

  /* End of Step: '<S500>/Step' */

  /* Clock: '<S500>/Clock' */
  system_20220515_1_sm_master_B.Clock_o =
    system_20220515_1_sm_master_M->Timing.t[0];

  /* Sum: '<S500>/Sum' incorporates:
   *  Constant: '<S500>/Constant'
   */
  system_20220515_1_sm_master_B.Sum_o = system_20220515_1_sm_master_B.Clock_o -
    system_20220515_1_sm_master_P.spoof_st.pmu_323;

  /* Product: '<S500>/Product' */
  system_20220515_1_sm_master_B.Product_gg =
    system_20220515_1_sm_master_B.Step_d * system_20220515_1_sm_master_B.Sum_o;

  /* Sum: '<S500>/Output' incorporates:
   *  Constant: '<S500>/Constant1'
   */
  system_20220515_1_sm_master_B.Output_f1 =
    system_20220515_1_sm_master_B.Product_gg +
    system_20220515_1_sm_master_P.Ramp_InitialOutput_ap;

  /* Saturate: '<S487>/Saturation' */
  u0_j = system_20220515_1_sm_master_B.Output_f1;
  u1_j = system_20220515_1_sm_master_P.spoof_lower_limit;
  u2_j = system_20220515_1_sm_master_P.spoof_upper_limit;
  if (u0_j > u2_j) {
    /* Saturate: '<S487>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_lg = u2_j;
  } else if (u0_j < u1_j) {
    /* Saturate: '<S487>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_lg = u1_j;
  } else {
    /* Saturate: '<S487>/Saturation' */
    system_20220515_1_sm_master_B.Saturation_lg = u0_j;
  }

  /* End of Saturate: '<S487>/Saturation' */

  /* Product: '<S487>/Multiply' incorporates:
   *  Constant: '<S487>/Constant'
   */
  system_20220515_1_sm_master_B.Multiply_ab =
    system_20220515_1_sm_master_B.Saturation_lg *
    system_20220515_1_sm_master_P.en_spoofing_attack.pmu_323;

  /* Sum: '<S487>/Add' */
  system_20220515_1_sm_master_B.Add_nv[0] =
    system_20220515_1_sm_master_B.Multiply_ab +
    system_20220515_1_sm_master_B.Gain[70];
  system_20220515_1_sm_master_B.Add_nv[1] =
    system_20220515_1_sm_master_B.Multiply_ab +
    system_20220515_1_sm_master_B.Gain2[86];
  system_20220515_1_sm_master_B.Add_nv[2] =
    system_20220515_1_sm_master_B.Multiply_ab +
    system_20220515_1_sm_master_B.Gain2[87];
  system_20220515_1_sm_master_B.Add_nv[3] =
    system_20220515_1_sm_master_B.Multiply_ab +
    system_20220515_1_sm_master_B.Gain2[101];
  system_20220515_1_sm_master_B.Add_nv[4] =
    system_20220515_1_sm_master_B.Multiply_ab +
    system_20220515_1_sm_master_B.Gain2[102];
  system_20220515_1_sm_master_B.Add_nv[5] =
    system_20220515_1_sm_master_B.Multiply_ab +
    system_20220515_1_sm_master_B.Gain3[15];

  /* S-Function (OP_SEND): '<S511>/S-Function' */

  /* Level2 S-Function Block: '<S511>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* RandomNumber: '<S44>/Random Number' */
  memcpy(&u_1[0], &system_20220515_1_sm_master_DW.NextOutput_h[0], 16U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_j[0], &u_1[0], 16U * sizeof
         (real_T));
  for (i_d = 0; i_d < 16; i_d = i_d + 1) {
    /* Sum: '<S44>/Add1' */
    system_20220515_1_sm_master_B.Add1_mg[i_d] =
      system_20220515_1_sm_master_B.Solver_o14[i_d] +
      system_20220515_1_sm_master_B.RandomNumber_j[i_d];
  }

  /* MATLAB Function: '<S44>/MATLAB Function' */
  system_2022051_MATLABFunction_l(system_20220515_1_sm_master_B.Add1_mg,
    &system_20220515_1_sm_master_B.sf_MATLABFunction_p);
  for (i_3 = 0; i_3 < 16; i_3 = i_3 + 1) {
    /* Gain: '<S2>/Gain4' */
    system_20220515_1_sm_master_B.Gain4[i_3] =
      system_20220515_1_sm_master_P.Gain4_Gain *
      system_20220515_1_sm_master_B.sf_MATLABFunction_p.y[i_3];
  }

  /* Outputs for Atomic SubSystem: '<S51>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_p[1],
    &system_20220515_1_sm_master_B.OpOutput_o);

  /* End of Outputs for SubSystem: '<S51>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S52>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[0],
    &system_20220515_1_sm_master_B.OpOutput_k);

  /* End of Outputs for SubSystem: '<S52>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S53>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_p[2],
    &system_20220515_1_sm_master_B.OpOutput_n);

  /* End of Outputs for SubSystem: '<S53>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S54>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[3],
    &system_20220515_1_sm_master_B.OpOutput_b);

  /* End of Outputs for SubSystem: '<S54>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S55>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_p[3],
    &system_20220515_1_sm_master_B.OpOutput_f);

  /* End of Outputs for SubSystem: '<S55>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S56>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[4],
    &system_20220515_1_sm_master_B.OpOutput_b1);

  /* End of Outputs for SubSystem: '<S56>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S57>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_p[0],
    &system_20220515_1_sm_master_B.OpOutput_bb);

  /* End of Outputs for SubSystem: '<S57>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S58>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[1],
    &system_20220515_1_sm_master_B.OpOutput_e);

  /* End of Outputs for SubSystem: '<S58>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S69>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_d[1],
    &system_20220515_1_sm_master_B.OpOutput_ob);

  /* End of Outputs for SubSystem: '<S69>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S70>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[1],
    &system_20220515_1_sm_master_B.OpOutput_l);

  /* End of Outputs for SubSystem: '<S70>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S71>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_d[2],
    &system_20220515_1_sm_master_B.OpOutput_g);

  /* End of Outputs for SubSystem: '<S71>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S72>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[5],
    &system_20220515_1_sm_master_B.OpOutput_ks);

  /* End of Outputs for SubSystem: '<S72>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S73>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_d[3],
    &system_20220515_1_sm_master_B.OpOutput_l1);

  /* End of Outputs for SubSystem: '<S73>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S74>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[0],
    &system_20220515_1_sm_master_B.OpOutput_iw);

  /* End of Outputs for SubSystem: '<S74>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S75>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_d[0],
    &system_20220515_1_sm_master_B.OpOutput_i2);

  /* End of Outputs for SubSystem: '<S75>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S76>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[2],
    &system_20220515_1_sm_master_B.OpOutput_o1);

  /* End of Outputs for SubSystem: '<S76>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S87>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_e[1],
    &system_20220515_1_sm_master_B.OpOutput_b3);

  /* End of Outputs for SubSystem: '<S87>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S88>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[9],
    &system_20220515_1_sm_master_B.OpOutput_bh);

  /* End of Outputs for SubSystem: '<S88>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S89>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_e[2],
    &system_20220515_1_sm_master_B.OpOutput_m);

  /* End of Outputs for SubSystem: '<S89>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S90>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[10],
    &system_20220515_1_sm_master_B.OpOutput_nu);

  /* End of Outputs for SubSystem: '<S90>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S91>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_e[0],
    &system_20220515_1_sm_master_B.OpOutput_h);

  /* End of Outputs for SubSystem: '<S91>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S92>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[6],
    &system_20220515_1_sm_master_B.OpOutput_c);

  /* End of Outputs for SubSystem: '<S92>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S101>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_b[1],
    &system_20220515_1_sm_master_B.OpOutput_fn);

  /* End of Outputs for SubSystem: '<S101>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S102>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[7],
    &system_20220515_1_sm_master_B.OpOutput_ek);

  /* End of Outputs for SubSystem: '<S102>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S103>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_b[2],
    &system_20220515_1_sm_master_B.OpOutput_a);

  /* End of Outputs for SubSystem: '<S103>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S104>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[8],
    &system_20220515_1_sm_master_B.OpOutput_p);

  /* End of Outputs for SubSystem: '<S104>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S105>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_b[3],
    &system_20220515_1_sm_master_B.OpOutput_b3b);

  /* End of Outputs for SubSystem: '<S105>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S106>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[12],
    &system_20220515_1_sm_master_B.OpOutput_cy);

  /* End of Outputs for SubSystem: '<S106>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S107>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_b[4],
    &system_20220515_1_sm_master_B.OpOutput_nh);

  /* End of Outputs for SubSystem: '<S107>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S108>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[3],
    &system_20220515_1_sm_master_B.OpOutput_ir);

  /* End of Outputs for SubSystem: '<S108>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S109>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_b[5],
    &system_20220515_1_sm_master_B.OpOutput_iy);

  /* End of Outputs for SubSystem: '<S109>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S110>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[4],
    &system_20220515_1_sm_master_B.OpOutput_en);

  /* End of Outputs for SubSystem: '<S110>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S111>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_b[0],
    &system_20220515_1_sm_master_B.OpOutput_kq);

  /* End of Outputs for SubSystem: '<S111>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S112>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[9],
    &system_20220515_1_sm_master_B.OpOutput_k4);

  /* End of Outputs for SubSystem: '<S112>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S127>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_h[1],
    &system_20220515_1_sm_master_B.OpOutput_ie);

  /* End of Outputs for SubSystem: '<S127>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S128>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[19],
    &system_20220515_1_sm_master_B.OpOutput_a0);

  /* End of Outputs for SubSystem: '<S128>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S129>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_h[2],
    &system_20220515_1_sm_master_B.OpOutput_ow);

  /* End of Outputs for SubSystem: '<S129>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S130>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[20],
    &system_20220515_1_sm_master_B.OpOutput_be);

  /* End of Outputs for SubSystem: '<S130>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S131>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_h[3],
    &system_20220515_1_sm_master_B.OpOutput_hl);

  /* End of Outputs for SubSystem: '<S131>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S132>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[24],
    &system_20220515_1_sm_master_B.OpOutput_bp);

  /* End of Outputs for SubSystem: '<S132>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S133>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_h[4],
    &system_20220515_1_sm_master_B.OpOutput_ez);

  /* End of Outputs for SubSystem: '<S133>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S134>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[25],
    &system_20220515_1_sm_master_B.OpOutput_kf);

  /* End of Outputs for SubSystem: '<S134>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S135>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_h[0],
    &system_20220515_1_sm_master_B.OpOutput_ar);

  /* End of Outputs for SubSystem: '<S135>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S136>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[15],
    &system_20220515_1_sm_master_B.OpOutput_cc);

  /* End of Outputs for SubSystem: '<S136>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S149>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_o[1],
    &system_20220515_1_sm_master_B.OpOutput_hf);

  /* End of Outputs for SubSystem: '<S149>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S150>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[21],
    &system_20220515_1_sm_master_B.OpOutput_gi);

  /* End of Outputs for SubSystem: '<S150>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S151>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_o[2],
    &system_20220515_1_sm_master_B.OpOutput_i2s);

  /* End of Outputs for SubSystem: '<S151>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S152>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[22],
    &system_20220515_1_sm_master_B.OpOutput_j);

  /* End of Outputs for SubSystem: '<S152>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S153>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_o[3],
    &system_20220515_1_sm_master_B.OpOutput_eb);

  /* End of Outputs for SubSystem: '<S153>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S154>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[28],
    &system_20220515_1_sm_master_B.OpOutput_d);

  /* End of Outputs for SubSystem: '<S154>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S155>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_o[4],
    &system_20220515_1_sm_master_B.OpOutput_jy);

  /* End of Outputs for SubSystem: '<S155>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S156>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[29],
    &system_20220515_1_sm_master_B.OpOutput_aw);

  /* End of Outputs for SubSystem: '<S156>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S157>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_o[5],
    &system_20220515_1_sm_master_B.OpOutput_mh);

  /* End of Outputs for SubSystem: '<S157>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S158>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[34],
    &system_20220515_1_sm_master_B.OpOutput_ap);

  /* End of Outputs for SubSystem: '<S158>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S159>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_o[6],
    &system_20220515_1_sm_master_B.OpOutput_fq);

  /* End of Outputs for SubSystem: '<S159>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S160>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[35],
    &system_20220515_1_sm_master_B.OpOutput_bbp);

  /* End of Outputs for SubSystem: '<S160>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S161>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_o[0],
    &system_20220515_1_sm_master_B.OpOutput_ga);

  /* End of Outputs for SubSystem: '<S161>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S162>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[20],
    &system_20220515_1_sm_master_B.OpOutput_gp);

  /* End of Outputs for SubSystem: '<S162>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S179>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f[1],
    &system_20220515_1_sm_master_B.OpOutput_ia);

  /* End of Outputs for SubSystem: '<S179>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S180>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[16],
    &system_20220515_1_sm_master_B.OpOutput_ic);

  /* End of Outputs for SubSystem: '<S180>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S181>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f[2],
    &system_20220515_1_sm_master_B.OpOutput_kj);

  /* End of Outputs for SubSystem: '<S181>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S182>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[17],
    &system_20220515_1_sm_master_B.OpOutput_mg);

  /* End of Outputs for SubSystem: '<S182>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S183>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f[3],
    &system_20220515_1_sm_master_B.OpOutput_bd);

  /* End of Outputs for SubSystem: '<S183>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S184>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[32],
    &system_20220515_1_sm_master_B.OpOutput_ej);

  /* End of Outputs for SubSystem: '<S184>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S185>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f[4],
    &system_20220515_1_sm_master_B.OpOutput_ok);

  /* End of Outputs for SubSystem: '<S185>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S186>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[33],
    &system_20220515_1_sm_master_B.OpOutput_ku);

  /* End of Outputs for SubSystem: '<S186>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S187>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f[5],
    &system_20220515_1_sm_master_B.OpOutput_dq);

  /* End of Outputs for SubSystem: '<S187>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S188>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[36],
    &system_20220515_1_sm_master_B.OpOutput_pn);

  /* End of Outputs for SubSystem: '<S188>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S189>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f[0],
    &system_20220515_1_sm_master_B.OpOutput_h4);

  /* End of Outputs for SubSystem: '<S189>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S190>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[22],
    &system_20220515_1_sm_master_B.OpOutput_lu);

  /* End of Outputs for SubSystem: '<S190>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S205>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ph[1],
    &system_20220515_1_sm_master_B.OpOutput_p0);

  /* End of Outputs for SubSystem: '<S205>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S206>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[37],
    &system_20220515_1_sm_master_B.OpOutput_gn);

  /* End of Outputs for SubSystem: '<S206>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S207>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ph[2],
    &system_20220515_1_sm_master_B.OpOutput_okg);

  /* End of Outputs for SubSystem: '<S207>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S208>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[40],
    &system_20220515_1_sm_master_B.OpOutput_dx);

  /* End of Outputs for SubSystem: '<S208>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S209>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ph[3],
    &system_20220515_1_sm_master_B.OpOutput_ad);

  /* End of Outputs for SubSystem: '<S209>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S210>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[41],
    &system_20220515_1_sm_master_B.OpOutput_j0);

  /* End of Outputs for SubSystem: '<S210>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S211>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ph[0],
    &system_20220515_1_sm_master_B.OpOutput_b12);

  /* End of Outputs for SubSystem: '<S211>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S212>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[25],
    &system_20220515_1_sm_master_B.OpOutput_bq);

  /* End of Outputs for SubSystem: '<S212>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S223>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_k[1],
    &system_20220515_1_sm_master_B.OpOutput_jz);

  /* End of Outputs for SubSystem: '<S223>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S224>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[10],
    &system_20220515_1_sm_master_B.OpOutput_i4);

  /* End of Outputs for SubSystem: '<S224>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S225>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_k[2],
    &system_20220515_1_sm_master_B.OpOutput_jo);

  /* End of Outputs for SubSystem: '<S225>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S226>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[38],
    &system_20220515_1_sm_master_B.OpOutput_ol);

  /* End of Outputs for SubSystem: '<S226>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S227>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_k[3],
    &system_20220515_1_sm_master_B.OpOutput_p3);

  /* End of Outputs for SubSystem: '<S227>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S228>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[42],
    &system_20220515_1_sm_master_B.OpOutput_gh);

  /* End of Outputs for SubSystem: '<S228>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S229>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_k[4],
    &system_20220515_1_sm_master_B.OpOutput_hx);

  /* End of Outputs for SubSystem: '<S229>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S230>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[5],
    &system_20220515_1_sm_master_B.OpOutput_ns);

  /* End of Outputs for SubSystem: '<S230>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S231>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_k[0],
    &system_20220515_1_sm_master_B.OpOutput_is);

  /* End of Outputs for SubSystem: '<S231>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S232>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[26],
    &system_20220515_1_sm_master_B.OpOutput_oba);

  /* End of Outputs for SubSystem: '<S232>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S245>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_i[1],
    &system_20220515_1_sm_master_B.OpOutput_kg);

  /* End of Outputs for SubSystem: '<S245>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S246>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[46],
    &system_20220515_1_sm_master_B.OpOutput_pf);

  /* End of Outputs for SubSystem: '<S246>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S247>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_i[0],
    &system_20220515_1_sm_master_B.OpOutput_ib);

  /* End of Outputs for SubSystem: '<S247>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S248>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[30],
    &system_20220515_1_sm_master_B.OpOutput_pd);

  /* End of Outputs for SubSystem: '<S248>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S255>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_og[1],
    &system_20220515_1_sm_master_B.OpOutput_i3);

  /* End of Outputs for SubSystem: '<S255>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S256>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[44],
    &system_20220515_1_sm_master_B.OpOutput_jb);

  /* End of Outputs for SubSystem: '<S256>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S257>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_og[2],
    &system_20220515_1_sm_master_B.OpOutput_ln);

  /* End of Outputs for SubSystem: '<S257>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S258>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[45],
    &system_20220515_1_sm_master_B.OpOutput_gw);

  /* End of Outputs for SubSystem: '<S258>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S259>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_og[3],
    &system_20220515_1_sm_master_B.OpOutput_gay);

  /* End of Outputs for SubSystem: '<S259>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S260>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[48],
    &system_20220515_1_sm_master_B.OpOutput_a5);

  /* End of Outputs for SubSystem: '<S260>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S261>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_og[4],
    &system_20220515_1_sm_master_B.OpOutput_jf);

  /* End of Outputs for SubSystem: '<S261>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S262>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[8],
    &system_20220515_1_sm_master_B.OpOutput_jfw);

  /* End of Outputs for SubSystem: '<S262>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S263>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_og[5],
    &system_20220515_1_sm_master_B.OpOutput_od);

  /* End of Outputs for SubSystem: '<S263>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S264>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[9],
    &system_20220515_1_sm_master_B.OpOutput_gpq);

  /* End of Outputs for SubSystem: '<S264>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S265>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_og[0],
    &system_20220515_1_sm_master_B.OpOutput_hz);

  /* End of Outputs for SubSystem: '<S265>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S266>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[33],
    &system_20220515_1_sm_master_B.OpOutput_ho);

  /* End of Outputs for SubSystem: '<S266>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S281>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ek[1],
    &system_20220515_1_sm_master_B.OpOutput_hy);

  /* End of Outputs for SubSystem: '<S281>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S282>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[54],
    &system_20220515_1_sm_master_B.OpOutput_l0);

  /* End of Outputs for SubSystem: '<S282>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S283>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ek[2],
    &system_20220515_1_sm_master_B.OpOutput_kv);

  /* End of Outputs for SubSystem: '<S283>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S284>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[55],
    &system_20220515_1_sm_master_B.OpOutput_br);

  /* End of Outputs for SubSystem: '<S284>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S285>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ek[3],
    &system_20220515_1_sm_master_B.OpOutput_b4);

  /* End of Outputs for SubSystem: '<S285>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S286>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[59],
    &system_20220515_1_sm_master_B.OpOutput_dt);

  /* End of Outputs for SubSystem: '<S286>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S287>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ek[4],
    &system_20220515_1_sm_master_B.OpOutput_bf);

  /* End of Outputs for SubSystem: '<S287>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S288>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[60],
    &system_20220515_1_sm_master_B.OpOutput_kx);

  /* End of Outputs for SubSystem: '<S288>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S289>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ek[0],
    &system_20220515_1_sm_master_B.OpOutput_l5);

  /* End of Outputs for SubSystem: '<S289>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S290>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[39],
    &system_20220515_1_sm_master_B.OpOutput_ar0);

  /* End of Outputs for SubSystem: '<S290>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S303>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_n[1],
    &system_20220515_1_sm_master_B.OpOutput_kk);

  /* End of Outputs for SubSystem: '<S303>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S304>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[56],
    &system_20220515_1_sm_master_B.OpOutput_a1);

  /* End of Outputs for SubSystem: '<S304>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S305>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_n[2],
    &system_20220515_1_sm_master_B.OpOutput_b0);

  /* End of Outputs for SubSystem: '<S305>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S306>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[57],
    &system_20220515_1_sm_master_B.OpOutput_gav);

  /* End of Outputs for SubSystem: '<S306>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S307>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_n[3],
    &system_20220515_1_sm_master_B.OpOutput_py);

  /* End of Outputs for SubSystem: '<S307>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S308>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[63],
    &system_20220515_1_sm_master_B.OpOutput_b5);

  /* End of Outputs for SubSystem: '<S308>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S309>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_n[4],
    &system_20220515_1_sm_master_B.OpOutput_md);

  /* End of Outputs for SubSystem: '<S309>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S310>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[64],
    &system_20220515_1_sm_master_B.OpOutput_er);

  /* End of Outputs for SubSystem: '<S310>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S311>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_n[5],
    &system_20220515_1_sm_master_B.OpOutput_fd);

  /* End of Outputs for SubSystem: '<S311>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S312>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[69],
    &system_20220515_1_sm_master_B.OpOutput_lm);

  /* End of Outputs for SubSystem: '<S312>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S313>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_n[0],
    &system_20220515_1_sm_master_B.OpOutput_bre);

  /* End of Outputs for SubSystem: '<S313>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S314>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[44],
    &system_20220515_1_sm_master_B.OpOutput_iyx);

  /* End of Outputs for SubSystem: '<S314>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S329>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f2[1],
    &system_20220515_1_sm_master_B.OpOutput_km);

  /* End of Outputs for SubSystem: '<S329>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S330>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[52],
    &system_20220515_1_sm_master_B.OpOutput_lf);

  /* End of Outputs for SubSystem: '<S330>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S331>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f2[2],
    &system_20220515_1_sm_master_B.OpOutput_i2j);

  /* End of Outputs for SubSystem: '<S331>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S332>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[53],
    &system_20220515_1_sm_master_B.OpOutput_jb5);

  /* End of Outputs for SubSystem: '<S332>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S333>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f2[3],
    &system_20220515_1_sm_master_B.OpOutput_dw);

  /* End of Outputs for SubSystem: '<S333>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S334>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[67],
    &system_20220515_1_sm_master_B.OpOutput_hoo);

  /* End of Outputs for SubSystem: '<S334>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S335>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f2[4],
    &system_20220515_1_sm_master_B.OpOutput_gy);

  /* End of Outputs for SubSystem: '<S335>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S336>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[68],
    &system_20220515_1_sm_master_B.OpOutput_na);

  /* End of Outputs for SubSystem: '<S336>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S337>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f2[5],
    &system_20220515_1_sm_master_B.OpOutput_pi);

  /* End of Outputs for SubSystem: '<S337>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S338>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[70],
    &system_20220515_1_sm_master_B.OpOutput_oh);

  /* End of Outputs for SubSystem: '<S338>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S339>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_f2[0],
    &system_20220515_1_sm_master_B.OpOutput_nz);

  /* End of Outputs for SubSystem: '<S339>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S340>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[46],
    &system_20220515_1_sm_master_B.OpOutput_no);

  /* End of Outputs for SubSystem: '<S340>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S355>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ib[1],
    &system_20220515_1_sm_master_B.OpOutput_f2);

  /* End of Outputs for SubSystem: '<S355>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S356>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[71],
    &system_20220515_1_sm_master_B.OpOutput_aa);

  /* End of Outputs for SubSystem: '<S356>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S357>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ib[2],
    &system_20220515_1_sm_master_B.OpOutput_j1);

  /* End of Outputs for SubSystem: '<S357>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S358>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[74],
    &system_20220515_1_sm_master_B.OpOutput_m0);

  /* End of Outputs for SubSystem: '<S358>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S359>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ib[3],
    &system_20220515_1_sm_master_B.OpOutput_j3);

  /* End of Outputs for SubSystem: '<S359>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S360>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[75],
    &system_20220515_1_sm_master_B.OpOutput_bc);

  /* End of Outputs for SubSystem: '<S360>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S361>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_ib[0],
    &system_20220515_1_sm_master_B.OpOutput_ni);

  /* End of Outputs for SubSystem: '<S361>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S362>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[49],
    &system_20220515_1_sm_master_B.OpOutput_le);

  /* End of Outputs for SubSystem: '<S362>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S373>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_od[1],
    &system_20220515_1_sm_master_B.OpOutput_d3);

  /* End of Outputs for SubSystem: '<S373>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S374>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[72],
    &system_20220515_1_sm_master_B.OpOutput_pp);

  /* End of Outputs for SubSystem: '<S374>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S375>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_od[2],
    &system_20220515_1_sm_master_B.OpOutput_jt);

  /* End of Outputs for SubSystem: '<S375>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S376>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[76],
    &system_20220515_1_sm_master_B.OpOutput_bu);

  /* End of Outputs for SubSystem: '<S376>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S377>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_od[3],
    &system_20220515_1_sm_master_B.OpOutput_oa);

  /* End of Outputs for SubSystem: '<S377>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S378>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[10],
    &system_20220515_1_sm_master_B.OpOutput_dy);

  /* End of Outputs for SubSystem: '<S378>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S379>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_od[0],
    &system_20220515_1_sm_master_B.OpOutput_oo);

  /* End of Outputs for SubSystem: '<S379>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S380>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[50],
    &system_20220515_1_sm_master_B.OpOutput_pw);

  /* End of Outputs for SubSystem: '<S380>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S391>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_fz[1],
    &system_20220515_1_sm_master_B.OpOutput_d3d);

  /* End of Outputs for SubSystem: '<S391>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S392>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[80],
    &system_20220515_1_sm_master_B.OpOutput_aj);

  /* End of Outputs for SubSystem: '<S392>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S393>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_fz[0],
    &system_20220515_1_sm_master_B.OpOutput_owt);

  /* End of Outputs for SubSystem: '<S393>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S394>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[54],
    &system_20220515_1_sm_master_B.OpOutput_js);

  /* End of Outputs for SubSystem: '<S394>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S401>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_m[1],
    &system_20220515_1_sm_master_B.OpOutput_ip);

  /* End of Outputs for SubSystem: '<S401>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S402>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[78],
    &system_20220515_1_sm_master_B.OpOutput_co);

  /* End of Outputs for SubSystem: '<S402>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S403>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_m[2],
    &system_20220515_1_sm_master_B.OpOutput_c1);

  /* End of Outputs for SubSystem: '<S403>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S404>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[79],
    &system_20220515_1_sm_master_B.OpOutput_ha);

  /* End of Outputs for SubSystem: '<S404>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S405>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_m[3],
    &system_20220515_1_sm_master_B.OpOutput_h0);

  /* End of Outputs for SubSystem: '<S405>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S406>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[82],
    &system_20220515_1_sm_master_B.OpOutput_e5);

  /* End of Outputs for SubSystem: '<S406>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S407>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_m[4],
    &system_20220515_1_sm_master_B.OpOutput_kse);

  /* End of Outputs for SubSystem: '<S407>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S408>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[13],
    &system_20220515_1_sm_master_B.OpOutput_a0m);

  /* End of Outputs for SubSystem: '<S408>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S409>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_m[5],
    &system_20220515_1_sm_master_B.OpOutput_hu);

  /* End of Outputs for SubSystem: '<S409>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S410>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[14],
    &system_20220515_1_sm_master_B.OpOutput_iu);

  /* End of Outputs for SubSystem: '<S410>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S411>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_m[0],
    &system_20220515_1_sm_master_B.OpOutput_mf);

  /* End of Outputs for SubSystem: '<S411>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S412>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[57],
    &system_20220515_1_sm_master_B.OpOutput_ft);

  /* End of Outputs for SubSystem: '<S412>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S427>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_c[1],
    &system_20220515_1_sm_master_B.OpOutput_dc);

  /* End of Outputs for SubSystem: '<S427>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S428>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[88],
    &system_20220515_1_sm_master_B.OpOutput_g3);

  /* End of Outputs for SubSystem: '<S428>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S429>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_c[2],
    &system_20220515_1_sm_master_B.OpOutput_g5);

  /* End of Outputs for SubSystem: '<S429>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S430>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[89],
    &system_20220515_1_sm_master_B.OpOutput_o3);

  /* End of Outputs for SubSystem: '<S430>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S431>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_c[3],
    &system_20220515_1_sm_master_B.OpOutput_jv);

  /* End of Outputs for SubSystem: '<S431>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S432>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[93],
    &system_20220515_1_sm_master_B.OpOutput_ct);

  /* End of Outputs for SubSystem: '<S432>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S433>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_c[4],
    &system_20220515_1_sm_master_B.OpOutput_cd);

  /* End of Outputs for SubSystem: '<S433>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S434>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[94],
    &system_20220515_1_sm_master_B.OpOutput_ik);

  /* End of Outputs for SubSystem: '<S434>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S435>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_c[0],
    &system_20220515_1_sm_master_B.OpOutput_id);

  /* End of Outputs for SubSystem: '<S435>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S436>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[63],
    &system_20220515_1_sm_master_B.OpOutput_bfz);

  /* End of Outputs for SubSystem: '<S436>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S449>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_l[1],
    &system_20220515_1_sm_master_B.OpOutput_b5o);

  /* End of Outputs for SubSystem: '<S449>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S450>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[90],
    &system_20220515_1_sm_master_B.OpOutput_ko);

  /* End of Outputs for SubSystem: '<S450>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S451>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_l[2],
    &system_20220515_1_sm_master_B.OpOutput_g1);

  /* End of Outputs for SubSystem: '<S451>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S452>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[91],
    &system_20220515_1_sm_master_B.OpOutput_ij);

  /* End of Outputs for SubSystem: '<S452>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S453>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_l[3],
    &system_20220515_1_sm_master_B.OpOutput_ja);

  /* End of Outputs for SubSystem: '<S453>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S454>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[97],
    &system_20220515_1_sm_master_B.OpOutput_a1k);

  /* End of Outputs for SubSystem: '<S454>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S455>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_l[4],
    &system_20220515_1_sm_master_B.OpOutput_mx);

  /* End of Outputs for SubSystem: '<S455>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S456>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[98],
    &system_20220515_1_sm_master_B.OpOutput_ox);

  /* End of Outputs for SubSystem: '<S456>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S457>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_l[5],
    &system_20220515_1_sm_master_B.OpOutput_ec);

  /* End of Outputs for SubSystem: '<S457>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S458>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_ov[103],
    &system_20220515_1_sm_master_B.OpOutput_cr);

  /* End of Outputs for SubSystem: '<S458>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S459>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_l[0],
    &system_20220515_1_sm_master_B.OpOutput_fu);

  /* End of Outputs for SubSystem: '<S459>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S460>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[68],
    &system_20220515_1_sm_master_B.OpOutput_e3);

  /* End of Outputs for SubSystem: '<S460>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S475>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_nv[1],
    &system_20220515_1_sm_master_B.OpOutput_h03);

  /* End of Outputs for SubSystem: '<S475>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S476>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[86],
    &system_20220515_1_sm_master_B.OpOutput_b40);

  /* End of Outputs for SubSystem: '<S476>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S477>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_nv[2],
    &system_20220515_1_sm_master_B.OpOutput_og);

  /* End of Outputs for SubSystem: '<S477>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S478>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[87],
    &system_20220515_1_sm_master_B.OpOutput_bn);

  /* End of Outputs for SubSystem: '<S478>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S479>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_nv[3],
    &system_20220515_1_sm_master_B.OpOutput_iz);

  /* End of Outputs for SubSystem: '<S479>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S480>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[101],
    &system_20220515_1_sm_master_B.OpOutput_bdr);

  /* End of Outputs for SubSystem: '<S480>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S481>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_nv[4],
    &system_20220515_1_sm_master_B.OpOutput_h0j);

  /* End of Outputs for SubSystem: '<S481>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S482>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_f3[102],
    &system_20220515_1_sm_master_B.OpOutput_dh);

  /* End of Outputs for SubSystem: '<S482>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S483>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_nv[5],
    &system_20220515_1_sm_master_B.OpOutput_ne);

  /* End of Outputs for SubSystem: '<S483>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S484>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1_m[15],
    &system_20220515_1_sm_master_B.OpOutput_mfk);

  /* End of Outputs for SubSystem: '<S484>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S485>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add_nv[0],
    &system_20220515_1_sm_master_B.OpOutput_ppb);

  /* End of Outputs for SubSystem: '<S485>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S486>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.Add1[70],
    &system_20220515_1_sm_master_B.OpOutput_ns3);

  /* End of Outputs for SubSystem: '<S486>/OpOutput' */

  /* RandomNumber: '<S46>/Random Number' */
  memcpy(&u_1[0], &system_20220515_1_sm_master_DW.NextOutput_k1[0], 16U * sizeof
         (real_T));
  memcpy(&system_20220515_1_sm_master_B.RandomNumber_ab[0], &u_1[0], 16U *
         sizeof(real_T));
  for (i_e = 0; i_e < 16; i_e = i_e + 1) {
    /* Sum: '<S46>/Add1' */
    system_20220515_1_sm_master_B.Add1_h[i_e] =
      system_20220515_1_sm_master_B.Solver_o13[i_e] +
      system_20220515_1_sm_master_B.RandomNumber_ab[i_e];
  }

  /* Outputs for Atomic SubSystem: '<S501>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.TSyncPCIeCtrl[6],
    &system_20220515_1_sm_master_B.OpOutput_bqq);

  /* End of Outputs for SubSystem: '<S501>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S502>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.TSyncPCIeCtrl[5],
    &system_20220515_1_sm_master_B.OpOutput_j2);

  /* End of Outputs for SubSystem: '<S502>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S503>/OpOutput' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_B.TSyncPCIeCtrl[7],
    &system_20220515_1_sm_master_B.OpOutput_fr);

  /* End of Outputs for SubSystem: '<S503>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S47>/OpOutput' */
  /* Constant: '<S3>/FREQ DEVIATION' */
  system_20220515_1_sm_m_OpOutput
    (system_20220515_1_sm_master_P.FREQDEVIATION_Value,
     &system_20220515_1_sm_master_B.OpOutput);

  /* End of Outputs for SubSystem: '<S47>/OpOutput' */

  /* Outputs for Atomic SubSystem: '<S48>/OpOutput' */
  /* Constant: '<S3>/FREQ ROC' */
  system_20220515_1_sm_m_OpOutput(system_20220515_1_sm_master_P.FREQROC_Value,
    &system_20220515_1_sm_master_B.OpOutput_i);

  /* End of Outputs for SubSystem: '<S48>/OpOutput' */
}

/* Model update function */
static void system_20220515_1_sm_master_update(void)
{
  int32_T iU;

  /* Update for Memory: '<S1>/S-Function' */
  system_20220515_1_sm_master_DW.SFunction_PreviousInput =
    system_20220515_1_sm_master_B.Sum;

  /* Update for S-Function (OpIRTS): '<S2>/Solver' */
  /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
  {
    SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[0];
    sfcnUpdate(rts,0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Update for RandomNumber: '<S37>/Random Number' */
  for (iU = 0; iU < 73; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput[iU] = rt_nrand_Upu32_Yd_f_pw_snf
      (&system_20220515_1_sm_master_DW.RandSeed[iU]) * sqrt
      (system_20220515_1_sm_master_P.mag_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean;
  }

  /* End of Update for RandomNumber: '<S37>/Random Number' */

  /* Update for RandomNumber: '<S36>/Random Number' */
  for (iU = 0; iU < 73; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_j[iU] = rt_nrand_Upu32_Yd_f_pw_snf
      (&system_20220515_1_sm_master_DW.RandSeed_b[iU]) * sqrt
      (system_20220515_1_sm_master_P.ang_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_n;
  }

  /* End of Update for RandomNumber: '<S36>/Random Number' */

  /* Update for RandomNumber: '<S39>/Random Number' */
  for (iU = 0; iU < 104; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_k[iU] = rt_nrand_Upu32_Yd_f_pw_snf
      (&system_20220515_1_sm_master_DW.RandSeed_l[iU]) * sqrt
      (system_20220515_1_sm_master_P.ang_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_c;
  }

  /* End of Update for RandomNumber: '<S39>/Random Number' */

  /* Update for RandomNumber: '<S38>/Random Number' */
  for (iU = 0; iU < 104; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_i[iU] = rt_nrand_Upu32_Yd_f_pw_snf
      (&system_20220515_1_sm_master_DW.RandSeed_p[iU]) * sqrt
      (system_20220515_1_sm_master_P.ang_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_cs;
  }

  /* End of Update for RandomNumber: '<S38>/Random Number' */

  /* Update for RandomNumber: '<S41>/Random Number' */
  for (iU = 0; iU < 104; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_a[iU] = rt_nrand_Upu32_Yd_f_pw_snf
      (&system_20220515_1_sm_master_DW.RandSeed_h[iU]) * sqrt
      (system_20220515_1_sm_master_P.mag_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_d;
  }

  /* End of Update for RandomNumber: '<S41>/Random Number' */

  /* Update for RandomNumber: '<S40>/Random Number' */
  for (iU = 0; iU < 104; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_c[iU] = rt_nrand_Upu32_Yd_f_pw_snf
      (&system_20220515_1_sm_master_DW.RandSeed_n[iU]) * sqrt
      (system_20220515_1_sm_master_P.mag_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_do;
  }

  /* End of Update for RandomNumber: '<S40>/Random Number' */

  /* Update for RandomNumber: '<S43>/Random Number' */
  for (iU = 0; iU < 16; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_a1[iU] =
      rt_nrand_Upu32_Yd_f_pw_snf(&system_20220515_1_sm_master_DW.RandSeed_i[iU])
      * sqrt(system_20220515_1_sm_master_P.ang_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_nw;
  }

  /* End of Update for RandomNumber: '<S43>/Random Number' */

  /* Update for RandomNumber: '<S45>/Random Number' */
  for (iU = 0; iU < 16; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_cx[iU] =
      rt_nrand_Upu32_Yd_f_pw_snf(&system_20220515_1_sm_master_DW.RandSeed_nt[iU])
      * sqrt(system_20220515_1_sm_master_P.mag_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_l;
  }

  /* End of Update for RandomNumber: '<S45>/Random Number' */

  /* Update for RandomNumber: '<S44>/Random Number' */
  for (iU = 0; iU < 16; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_h[iU] = rt_nrand_Upu32_Yd_f_pw_snf
      (&system_20220515_1_sm_master_DW.RandSeed_a[iU]) * sqrt
      (system_20220515_1_sm_master_P.ang_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_k;
  }

  /* End of Update for RandomNumber: '<S44>/Random Number' */

  /* Update for RandomNumber: '<S46>/Random Number' */
  for (iU = 0; iU < 16; iU = iU + 1) {
    system_20220515_1_sm_master_DW.NextOutput_k1[iU] =
      rt_nrand_Upu32_Yd_f_pw_snf(&system_20220515_1_sm_master_DW.RandSeed_m[iU])
      * sqrt(system_20220515_1_sm_master_P.mag_variance) +
      system_20220515_1_sm_master_P.RandomNumber_Mean_p;
  }

  /* End of Update for RandomNumber: '<S46>/Random Number' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++system_20220515_1_sm_master_M->Timing.clockTick0)) {
    ++system_20220515_1_sm_master_M->Timing.clockTickH0;
  }

  system_20220515_1_sm_master_M->Timing.t[0] =
    system_20220515_1_sm_master_M->Timing.clockTick0 *
    system_20220515_1_sm_master_M->Timing.stepSize0 +
    system_20220515_1_sm_master_M->Timing.clockTickH0 *
    system_20220515_1_sm_master_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++system_20220515_1_sm_master_M->Timing.clockTick1)) {
      ++system_20220515_1_sm_master_M->Timing.clockTickH1;
    }

    system_20220515_1_sm_master_M->Timing.t[1] =
      system_20220515_1_sm_master_M->Timing.clockTick1 *
      system_20220515_1_sm_master_M->Timing.stepSize1 +
      system_20220515_1_sm_master_M->Timing.clockTickH1 *
      system_20220515_1_sm_master_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void system_20220515_1_sm_master_initialize(void)
{
  /* Start for Constant: '<S2>/Constant' */
  system_20220515_1_sm_master_B.Constant =
    system_20220515_1_sm_master_P.Constant_Value;

  /* Start for S-Function (OpIRTS): '<S2>/Solver' */
  /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
  {
    SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S2>/Constant3' */
  system_20220515_1_sm_master_B.Constant3 =
    system_20220515_1_sm_master_P.Constant3_Value;

  {
    real_T u0_0[104];
    real_T u0[73];
    real_T u0_1[16];
    real_T tmp;
    real_T tmp_0;
    real_T tmp_1;
    real_T tmp_2;
    real_T tmp_3;
    real_T tmp_4;
    real_T tmp_5;
    real_T tmp_6;
    real_T tmp_7;
    real_T tmp_8;
    real_T tmp_9;
    real_T tmp_a;
    real_T tmp_b;
    real_T tmp_c;
    real_T tmp_d;
    real_T tmp_e;
    real_T tmp_f;
    real_T tmp_g;
    real_T tmp_h;
    real_T tmp_i;
    real_T y1;
    int32_T iU;
    uint32_T r;
    uint32_T t;
    uint32_T tseed;

    /* user code (Initialize function Body) */

    /* System '<Root>' */

    /* Opal-RT Technologies */
    opalSizeDwork = sizeof(rtDWork);
    if (Opal_rtmGetNumBlockIO(pRtModel) != 0)
      opalSizeBlockIO = sizeof(rtB);
    else
      opalSizeBlockIO = 0;
    if (Opal_rtmGetNumBlockParams(pRtModel) != 0)
      opalSizeRTP = sizeof(rtP);
    else
      opalSizeRTP = 0;

    /* InitializeConditions for Memory: '<S1>/S-Function' */
    system_20220515_1_sm_master_DW.SFunction_PreviousInput =
      system_20220515_1_sm_master_P.SFunction_InitialCondition;

    /* InitializeConditions for S-Function (OpIRTS): '<S2>/Solver' */
    /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
    {
      SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[0];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* InitializeConditions for RandomNumber: '<S37>/Random Number' */
    memcpy(&u0[0], &system_20220515_1_sm_master_P.bus_vm_seed[0], 73U * sizeof
           (real_T));
    for (iU = 0; iU < 73; iU = iU + 1) {
      tmp_0 = floor(u0[iU]);
      if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
        tmp = 0.0;
      } else {
        tmp = fmod(tmp_0, 4.294967296E+9);
      }

      tseed = tmp < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp : (uint32_T)tmp;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.mag_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean;
      system_20220515_1_sm_master_DW.NextOutput[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S37>/Random Number' */

    /* InitializeConditions for RandomNumber: '<S36>/Random Number' */
    memcpy(&u0[0], &system_20220515_1_sm_master_P.bus_va_seed[0], 73U * sizeof
           (real_T));
    for (iU = 0; iU < 73; iU = iU + 1) {
      tmp_2 = floor(u0[iU]);
      if (rtIsNaN(tmp_2) || rtIsInf(tmp_2)) {
        tmp_1 = 0.0;
      } else {
        tmp_1 = fmod(tmp_2, 4.294967296E+9);
      }

      tseed = tmp_1 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_1 : (uint32_T)
        tmp_1;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.ang_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_n;
      system_20220515_1_sm_master_DW.NextOutput_j[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_b[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S36>/Random Number' */

    /* InitializeConditions for S-Function (sfun_tsync_pcie_ctrl): '<S2>/TSync PCIe Ctrl' */
    /* Level2 S-Function Block: '<S2>/TSync PCIe Ctrl' (sfun_tsync_pcie_ctrl) */
    {
      SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[1];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* InitializeConditions for RandomNumber: '<S39>/Random Number' */
    memcpy(&u0_0[0], &system_20220515_1_sm_master_P.line_iang1_seed[0], 104U *
           sizeof(real_T));
    for (iU = 0; iU < 104; iU = iU + 1) {
      tmp_4 = floor(u0_0[iU]);
      if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
        tmp_3 = 0.0;
      } else {
        tmp_3 = fmod(tmp_4, 4.294967296E+9);
      }

      tseed = tmp_3 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_3 : (uint32_T)
        tmp_3;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.ang_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_c;
      system_20220515_1_sm_master_DW.NextOutput_k[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_l[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S39>/Random Number' */

    /* InitializeConditions for RandomNumber: '<S38>/Random Number' */
    memcpy(&u0_0[0], &system_20220515_1_sm_master_P.line_iang0_seed[0], 104U *
           sizeof(real_T));
    for (iU = 0; iU < 104; iU = iU + 1) {
      tmp_6 = floor(u0_0[iU]);
      if (rtIsNaN(tmp_6) || rtIsInf(tmp_6)) {
        tmp_5 = 0.0;
      } else {
        tmp_5 = fmod(tmp_6, 4.294967296E+9);
      }

      tseed = tmp_5 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_5 : (uint32_T)
        tmp_5;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.ang_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_cs;
      system_20220515_1_sm_master_DW.NextOutput_i[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_p[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S38>/Random Number' */

    /* InitializeConditions for RandomNumber: '<S41>/Random Number' */
    memcpy(&u0_0[0], &system_20220515_1_sm_master_P.line_imag1_seed[0], 104U *
           sizeof(real_T));
    for (iU = 0; iU < 104; iU = iU + 1) {
      tmp_8 = floor(u0_0[iU]);
      if (rtIsNaN(tmp_8) || rtIsInf(tmp_8)) {
        tmp_7 = 0.0;
      } else {
        tmp_7 = fmod(tmp_8, 4.294967296E+9);
      }

      tseed = tmp_7 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_7 : (uint32_T)
        tmp_7;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.mag_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_d;
      system_20220515_1_sm_master_DW.NextOutput_a[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_h[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S41>/Random Number' */

    /* InitializeConditions for RandomNumber: '<S40>/Random Number' */
    memcpy(&u0_0[0], &system_20220515_1_sm_master_P.line_imag0_seed[0], 104U *
           sizeof(real_T));
    for (iU = 0; iU < 104; iU = iU + 1) {
      tmp_a = floor(u0_0[iU]);
      if (rtIsNaN(tmp_a) || rtIsInf(tmp_a)) {
        tmp_9 = 0.0;
      } else {
        tmp_9 = fmod(tmp_a, 4.294967296E+9);
      }

      tseed = tmp_9 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_9 : (uint32_T)
        tmp_9;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.mag_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_do;
      system_20220515_1_sm_master_DW.NextOutput_c[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_n[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S40>/Random Number' */

    /* InitializeConditions for RandomNumber: '<S43>/Random Number' */
    memcpy(&u0_1[0], &system_20220515_1_sm_master_P.xf_iang0_seed[0], 16U *
           sizeof(real_T));
    for (iU = 0; iU < 16; iU = iU + 1) {
      tmp_c = floor(u0_1[iU]);
      if (rtIsNaN(tmp_c) || rtIsInf(tmp_c)) {
        tmp_b = 0.0;
      } else {
        tmp_b = fmod(tmp_c, 4.294967296E+9);
      }

      tseed = tmp_b < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_b : (uint32_T)
        tmp_b;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.ang_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_nw;
      system_20220515_1_sm_master_DW.NextOutput_a1[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_i[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S43>/Random Number' */

    /* InitializeConditions for RandomNumber: '<S45>/Random Number' */
    memcpy(&u0_1[0], &system_20220515_1_sm_master_P.xf_imag0_seed[0], 16U *
           sizeof(real_T));
    for (iU = 0; iU < 16; iU = iU + 1) {
      tmp_e = floor(u0_1[iU]);
      if (rtIsNaN(tmp_e) || rtIsInf(tmp_e)) {
        tmp_d = 0.0;
      } else {
        tmp_d = fmod(tmp_e, 4.294967296E+9);
      }

      tseed = tmp_d < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_d : (uint32_T)
        tmp_d;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.mag_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_l;
      system_20220515_1_sm_master_DW.NextOutput_cx[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_nt[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S45>/Random Number' */

    /* InitializeConditions for S-Function (OP_SEND): '<S511>/S-Function' */
    /* Level2 S-Function Block: '<S511>/S-Function' (OP_SEND) */
    {
      SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[2];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* InitializeConditions for RandomNumber: '<S44>/Random Number' */
    memcpy(&u0_1[0], &system_20220515_1_sm_master_P.xf_iang1_seed[0], 16U *
           sizeof(real_T));
    for (iU = 0; iU < 16; iU = iU + 1) {
      tmp_g = floor(u0_1[iU]);
      if (rtIsNaN(tmp_g) || rtIsInf(tmp_g)) {
        tmp_f = 0.0;
      } else {
        tmp_f = fmod(tmp_g, 4.294967296E+9);
      }

      tseed = tmp_f < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_f : (uint32_T)
        tmp_f;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.ang_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_k;
      system_20220515_1_sm_master_DW.NextOutput_h[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_a[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S44>/Random Number' */

    /* InitializeConditions for RandomNumber: '<S46>/Random Number' */
    memcpy(&u0_1[0], &system_20220515_1_sm_master_P.xf_imag1_seed[0], 16U *
           sizeof(real_T));
    for (iU = 0; iU < 16; iU = iU + 1) {
      tmp_i = floor(u0_1[iU]);
      if (rtIsNaN(tmp_i) || rtIsInf(tmp_i)) {
        tmp_h = 0.0;
      } else {
        tmp_h = fmod(tmp_i, 4.294967296E+9);
      }

      tseed = tmp_h < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_h : (uint32_T)
        tmp_h;
      r = tseed >> 16U;
      t = tseed & 32768U;
      tseed = (((tseed - ((r << 16U) - t)) << 16U) + t) + r;
      if (tseed < 1U) {
        tseed = 1144108930U;
      } else {
        if (tseed > 2147483646U) {
          tseed = 2147483646U;
        }
      }

      y1 = rt_nrand_Upu32_Yd_f_pw_snf(&tseed) * sqrt
        (system_20220515_1_sm_master_P.mag_variance) +
        system_20220515_1_sm_master_P.RandomNumber_Mean_p;
      system_20220515_1_sm_master_DW.NextOutput_k1[iU] = y1;
      system_20220515_1_sm_master_DW.RandSeed_m[iU] = tseed;
    }

    /* End of InitializeConditions for RandomNumber: '<S46>/Random Number' */
  }
}

/* Model terminate function */
static void system_20220515_1_sm_master_terminate(void)
{
  /* Terminate for S-Function (OpIRTS): '<S2>/Solver' */
  /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
  {
    SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_tsync_pcie_ctrl): '<S2>/TSync PCIe Ctrl' */
  /* Level2 S-Function Block: '<S2>/TSync PCIe Ctrl' (sfun_tsync_pcie_ctrl) */
  {
    SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (OP_SEND): '<S511>/S-Function' */
  /* Level2 S-Function Block: '<S511>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  system_20220515_1_sm_master_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  system_20220515_1_sm_master_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  system_20220515_1_sm_master_initialize();
}

void MdlTerminate(void)
{
  system_20220515_1_sm_master_terminate();
}

/* Registration function */
RT_MODEL_system_20220515_1_sm_master_T *system_20220515_1_sm_master(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)system_20220515_1_sm_master_M, 0,
                sizeof(RT_MODEL_system_20220515_1_sm_master_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&system_20220515_1_sm_master_M->solverInfo,
                          &system_20220515_1_sm_master_M->Timing.simTimeStep);
    rtsiSetTPtr(&system_20220515_1_sm_master_M->solverInfo, &rtmGetTPtr
                (system_20220515_1_sm_master_M));
    rtsiSetStepSizePtr(&system_20220515_1_sm_master_M->solverInfo,
                       &system_20220515_1_sm_master_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&system_20220515_1_sm_master_M->solverInfo,
                          (&rtmGetErrorStatus(system_20220515_1_sm_master_M)));
    rtsiSetRTModelPtr(&system_20220515_1_sm_master_M->solverInfo,
                      system_20220515_1_sm_master_M);
  }

  rtsiSetSimTimeStep(&system_20220515_1_sm_master_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&system_20220515_1_sm_master_M->solverInfo,
                    "FixedStepDiscrete");
  system_20220515_1_sm_master_M->solverInfoPtr =
    (&system_20220515_1_sm_master_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      system_20220515_1_sm_master_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    system_20220515_1_sm_master_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    system_20220515_1_sm_master_M->Timing.sampleTimes =
      (&system_20220515_1_sm_master_M->Timing.sampleTimesArray[0]);
    system_20220515_1_sm_master_M->Timing.offsetTimes =
      (&system_20220515_1_sm_master_M->Timing.offsetTimesArray[0]);

    /* task periods */
    system_20220515_1_sm_master_M->Timing.sampleTimes[0] = (0.0);
    system_20220515_1_sm_master_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    system_20220515_1_sm_master_M->Timing.offsetTimes[0] = (0.0);
    system_20220515_1_sm_master_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(system_20220515_1_sm_master_M,
             &system_20220515_1_sm_master_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = system_20220515_1_sm_master_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    system_20220515_1_sm_master_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(system_20220515_1_sm_master_M, -1);
  system_20220515_1_sm_master_M->Timing.stepSize0 = 0.001;
  system_20220515_1_sm_master_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    system_20220515_1_sm_master_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(system_20220515_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(system_20220515_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogT(system_20220515_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogX(system_20220515_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogXFinal(system_20220515_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(system_20220515_1_sm_master_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(system_20220515_1_sm_master_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(system_20220515_1_sm_master_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(system_20220515_1_sm_master_M->rtwLogInfo, 1);
    rtliSetLogY(system_20220515_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(system_20220515_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(system_20220515_1_sm_master_M->rtwLogInfo, (NULL));
  }

  system_20220515_1_sm_master_M->solverInfoPtr =
    (&system_20220515_1_sm_master_M->solverInfo);
  system_20220515_1_sm_master_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&system_20220515_1_sm_master_M->solverInfo, 0.001);
  rtsiSetSolverMode(&system_20220515_1_sm_master_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  system_20220515_1_sm_master_M->ModelData.blockIO = ((void *)
    &system_20220515_1_sm_master_B);

  {
    int32_T i;
    for (i = 0; i < 7; i++) {
      system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k[i] = 0.0;
    }

    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_B.Solver_o1[i] = 0.0;
    }

    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_B.Solver_o2[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Solver_o3[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Solver_o4[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Solver_o5[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Solver_o6[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Solver_o7[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Solver_o8[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Solver_o9[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Solver_o10[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Solver_o11[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Solver_o12[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Solver_o13[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Solver_o14[i] = 0.0;
    }

    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_B.RandomNumber[i] = 0.0;
    }

    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_B.Add1[i] = 0.0;
    }

    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_B.RandomNumber_b[i] = 0.0;
    }

    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_B.Add1_k[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      system_20220515_1_sm_master_B.TSyncPCIeCtrl[i] = 0.0;
    }

    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_B.Gain[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.RandomNumber_l[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Add1_f[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Gain2[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.RandomNumber_n[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Add1_o[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Gain1[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.RandomNumber_c[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Add1_f3[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.RandomNumber_a[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.Add1_ov[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.RandomNumber_p[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Add1_e[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Gain3[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.RandomNumber_o[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Add1_m[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      system_20220515_1_sm_master_B.Add_b[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      system_20220515_1_sm_master_B.Add_h[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      system_20220515_1_sm_master_B.Add_o[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      system_20220515_1_sm_master_B.Add_f[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      system_20220515_1_sm_master_B.Add_k[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      system_20220515_1_sm_master_B.Add_og[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      system_20220515_1_sm_master_B.Add_ek[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      system_20220515_1_sm_master_B.Add_n[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      system_20220515_1_sm_master_B.Add_f2[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      system_20220515_1_sm_master_B.Add_m[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      system_20220515_1_sm_master_B.Add_c[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      system_20220515_1_sm_master_B.Add_l[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      system_20220515_1_sm_master_B.Add_nv[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.RandomNumber_j[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Add1_mg[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Gain4[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.RandomNumber_ab[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.Add1_h[i] = 0.0;
    }

    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_B.y[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.sf_MATLABFunction_p.y[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_B.sf_MATLABFunction_lg.y[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.sf_MATLABFunction_h.y[i] = 0.0;
    }

    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_B.sf_MATLABFunction_l.y[i] = 0.0;
    }

    system_20220515_1_sm_master_B.SFunction = 0.0;
    system_20220515_1_sm_master_B.Sum = 0.0;
    system_20220515_1_sm_master_B.Constant = 0.0;
    system_20220515_1_sm_master_B.Step = 0.0;
    system_20220515_1_sm_master_B.Step1 = 0.0;
    system_20220515_1_sm_master_B.Add = 0.0;
    system_20220515_1_sm_master_B.TmpSignalConversionAtSolverInpo[0] = 0.0;
    system_20220515_1_sm_master_B.TmpSignalConversionAtSolverInpo[1] = 0.0;
    system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_e[0] = 0.0;
    system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_e[1] = 0.0;
    system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_e[2] = 0.0;
    system_20220515_1_sm_master_B.Constant3 = 0.0;
    system_20220515_1_sm_master_B.Step_o = 0.0;
    system_20220515_1_sm_master_B.Clock = 0.0;
    system_20220515_1_sm_master_B.Sum_c = 0.0;
    system_20220515_1_sm_master_B.Product = 0.0;
    system_20220515_1_sm_master_B.Output = 0.0;
    system_20220515_1_sm_master_B.Saturation = 0.0;
    system_20220515_1_sm_master_B.Multiply = 0.0;
    system_20220515_1_sm_master_B.Add_p[0] = 0.0;
    system_20220515_1_sm_master_B.Add_p[1] = 0.0;
    system_20220515_1_sm_master_B.Add_p[2] = 0.0;
    system_20220515_1_sm_master_B.Add_p[3] = 0.0;
    system_20220515_1_sm_master_B.Step_p = 0.0;
    system_20220515_1_sm_master_B.Clock_f = 0.0;
    system_20220515_1_sm_master_B.Sum_e = 0.0;
    system_20220515_1_sm_master_B.Product_o = 0.0;
    system_20220515_1_sm_master_B.Output_c = 0.0;
    system_20220515_1_sm_master_B.Saturation_f = 0.0;
    system_20220515_1_sm_master_B.Multiply_e = 0.0;
    system_20220515_1_sm_master_B.Add_d[0] = 0.0;
    system_20220515_1_sm_master_B.Add_d[1] = 0.0;
    system_20220515_1_sm_master_B.Add_d[2] = 0.0;
    system_20220515_1_sm_master_B.Add_d[3] = 0.0;
    system_20220515_1_sm_master_B.Step_m = 0.0;
    system_20220515_1_sm_master_B.Clock_d = 0.0;
    system_20220515_1_sm_master_B.Sum_h = 0.0;
    system_20220515_1_sm_master_B.Product_f = 0.0;
    system_20220515_1_sm_master_B.Output_m = 0.0;
    system_20220515_1_sm_master_B.Saturation_h = 0.0;
    system_20220515_1_sm_master_B.Multiply_b = 0.0;
    system_20220515_1_sm_master_B.Add_e[0] = 0.0;
    system_20220515_1_sm_master_B.Add_e[1] = 0.0;
    system_20220515_1_sm_master_B.Add_e[2] = 0.0;
    system_20220515_1_sm_master_B.Step_i = 0.0;
    system_20220515_1_sm_master_B.Clock_n = 0.0;
    system_20220515_1_sm_master_B.Sum_p = 0.0;
    system_20220515_1_sm_master_B.Product_m = 0.0;
    system_20220515_1_sm_master_B.Output_b = 0.0;
    system_20220515_1_sm_master_B.Saturation_a = 0.0;
    system_20220515_1_sm_master_B.Multiply_o = 0.0;
    system_20220515_1_sm_master_B.Step_c = 0.0;
    system_20220515_1_sm_master_B.Clock_i = 0.0;
    system_20220515_1_sm_master_B.Sum_i = 0.0;
    system_20220515_1_sm_master_B.Product_i = 0.0;
    system_20220515_1_sm_master_B.Output_j = 0.0;
    system_20220515_1_sm_master_B.Saturation_af = 0.0;
    system_20220515_1_sm_master_B.Multiply_a = 0.0;
    system_20220515_1_sm_master_B.Step_h = 0.0;
    system_20220515_1_sm_master_B.Clock_ng = 0.0;
    system_20220515_1_sm_master_B.Sum_n = 0.0;
    system_20220515_1_sm_master_B.Product_h = 0.0;
    system_20220515_1_sm_master_B.Output_n = 0.0;
    system_20220515_1_sm_master_B.Saturation_e = 0.0;
    system_20220515_1_sm_master_B.Multiply_p = 0.0;
    system_20220515_1_sm_master_B.Step_e = 0.0;
    system_20220515_1_sm_master_B.Clock_p = 0.0;
    system_20220515_1_sm_master_B.Sum_ps = 0.0;
    system_20220515_1_sm_master_B.Product_d = 0.0;
    system_20220515_1_sm_master_B.Output_bt = 0.0;
    system_20220515_1_sm_master_B.Saturation_m = 0.0;
    system_20220515_1_sm_master_B.Multiply_l = 0.0;
    system_20220515_1_sm_master_B.Step_ps = 0.0;
    system_20220515_1_sm_master_B.Clock_fi = 0.0;
    system_20220515_1_sm_master_B.Sum_ct = 0.0;
    system_20220515_1_sm_master_B.Product_l = 0.0;
    system_20220515_1_sm_master_B.Output_i = 0.0;
    system_20220515_1_sm_master_B.Saturation_g = 0.0;
    system_20220515_1_sm_master_B.Multiply_by = 0.0;
    system_20220515_1_sm_master_B.Add_ph[0] = 0.0;
    system_20220515_1_sm_master_B.Add_ph[1] = 0.0;
    system_20220515_1_sm_master_B.Add_ph[2] = 0.0;
    system_20220515_1_sm_master_B.Add_ph[3] = 0.0;
    system_20220515_1_sm_master_B.Step_l = 0.0;
    system_20220515_1_sm_master_B.Clock_k = 0.0;
    system_20220515_1_sm_master_B.Sum_g = 0.0;
    system_20220515_1_sm_master_B.Product_b = 0.0;
    system_20220515_1_sm_master_B.Output_p = 0.0;
    system_20220515_1_sm_master_B.Saturation_h4 = 0.0;
    system_20220515_1_sm_master_B.Multiply_h = 0.0;
    system_20220515_1_sm_master_B.Step_n = 0.0;
    system_20220515_1_sm_master_B.Clock_fz = 0.0;
    system_20220515_1_sm_master_B.Sum_m = 0.0;
    system_20220515_1_sm_master_B.Product_fb = 0.0;
    system_20220515_1_sm_master_B.Output_h = 0.0;
    system_20220515_1_sm_master_B.Saturation_l = 0.0;
    system_20220515_1_sm_master_B.Multiply_m = 0.0;
    system_20220515_1_sm_master_B.Add_i[0] = 0.0;
    system_20220515_1_sm_master_B.Add_i[1] = 0.0;
    system_20220515_1_sm_master_B.Step_pu = 0.0;
    system_20220515_1_sm_master_B.Clock_l = 0.0;
    system_20220515_1_sm_master_B.Sum_k = 0.0;
    system_20220515_1_sm_master_B.Product_g = 0.0;
    system_20220515_1_sm_master_B.Output_l = 0.0;
    system_20220515_1_sm_master_B.Saturation_go = 0.0;
    system_20220515_1_sm_master_B.Multiply_k = 0.0;
    system_20220515_1_sm_master_B.Step_a = 0.0;
    system_20220515_1_sm_master_B.Clock_nv = 0.0;
    system_20220515_1_sm_master_B.Sum_l = 0.0;
    system_20220515_1_sm_master_B.Product_hx = 0.0;
    system_20220515_1_sm_master_B.Output_jl = 0.0;
    system_20220515_1_sm_master_B.Saturation_eq = 0.0;
    system_20220515_1_sm_master_B.Multiply_ao = 0.0;
    system_20220515_1_sm_master_B.Step_iu = 0.0;
    system_20220515_1_sm_master_B.Clock_a = 0.0;
    system_20220515_1_sm_master_B.Sum_gf = 0.0;
    system_20220515_1_sm_master_B.Product_bb = 0.0;
    system_20220515_1_sm_master_B.Output_bi = 0.0;
    system_20220515_1_sm_master_B.Saturation_n = 0.0;
    system_20220515_1_sm_master_B.Multiply_lr = 0.0;
    system_20220515_1_sm_master_B.Step_ec = 0.0;
    system_20220515_1_sm_master_B.Clock_dg = 0.0;
    system_20220515_1_sm_master_B.Sum_hz = 0.0;
    system_20220515_1_sm_master_B.Product_k = 0.0;
    system_20220515_1_sm_master_B.Output_f = 0.0;
    system_20220515_1_sm_master_B.Saturation_c = 0.0;
    system_20220515_1_sm_master_B.Multiply_hx = 0.0;
    system_20220515_1_sm_master_B.Step_j = 0.0;
    system_20220515_1_sm_master_B.Clock_h = 0.0;
    system_20220515_1_sm_master_B.Sum_hj = 0.0;
    system_20220515_1_sm_master_B.Product_fx = 0.0;
    system_20220515_1_sm_master_B.Output_a = 0.0;
    system_20220515_1_sm_master_B.Saturation_ls = 0.0;
    system_20220515_1_sm_master_B.Multiply_c = 0.0;
    system_20220515_1_sm_master_B.Add_ib[0] = 0.0;
    system_20220515_1_sm_master_B.Add_ib[1] = 0.0;
    system_20220515_1_sm_master_B.Add_ib[2] = 0.0;
    system_20220515_1_sm_master_B.Add_ib[3] = 0.0;
    system_20220515_1_sm_master_B.Step_e5 = 0.0;
    system_20220515_1_sm_master_B.Clock_dl = 0.0;
    system_20220515_1_sm_master_B.Sum_eh = 0.0;
    system_20220515_1_sm_master_B.Product_mg = 0.0;
    system_20220515_1_sm_master_B.Output_ji = 0.0;
    system_20220515_1_sm_master_B.Saturation_b = 0.0;
    system_20220515_1_sm_master_B.Multiply_g = 0.0;
    system_20220515_1_sm_master_B.Add_od[0] = 0.0;
    system_20220515_1_sm_master_B.Add_od[1] = 0.0;
    system_20220515_1_sm_master_B.Add_od[2] = 0.0;
    system_20220515_1_sm_master_B.Add_od[3] = 0.0;
    system_20220515_1_sm_master_B.Step_pg = 0.0;
    system_20220515_1_sm_master_B.Clock_fw = 0.0;
    system_20220515_1_sm_master_B.Sum_f = 0.0;
    system_20220515_1_sm_master_B.Product_a = 0.0;
    system_20220515_1_sm_master_B.Output_ba = 0.0;
    system_20220515_1_sm_master_B.Saturation_h1 = 0.0;
    system_20220515_1_sm_master_B.Multiply_lrk = 0.0;
    system_20220515_1_sm_master_B.Add_fz[0] = 0.0;
    system_20220515_1_sm_master_B.Add_fz[1] = 0.0;
    system_20220515_1_sm_master_B.Step_p1 = 0.0;
    system_20220515_1_sm_master_B.Clock_m = 0.0;
    system_20220515_1_sm_master_B.Sum_mb = 0.0;
    system_20220515_1_sm_master_B.Product_n = 0.0;
    system_20220515_1_sm_master_B.Output_fr = 0.0;
    system_20220515_1_sm_master_B.Saturation_gh = 0.0;
    system_20220515_1_sm_master_B.Multiply_ci = 0.0;
    system_20220515_1_sm_master_B.Step_n1 = 0.0;
    system_20220515_1_sm_master_B.Clock_io = 0.0;
    system_20220515_1_sm_master_B.Sum_b = 0.0;
    system_20220515_1_sm_master_B.Product_e = 0.0;
    system_20220515_1_sm_master_B.Output_fx = 0.0;
    system_20220515_1_sm_master_B.Saturation_mz = 0.0;
    system_20220515_1_sm_master_B.Multiply_d = 0.0;
    system_20220515_1_sm_master_B.Step_j2 = 0.0;
    system_20220515_1_sm_master_B.Clock_d4 = 0.0;
    system_20220515_1_sm_master_B.Sum_p0 = 0.0;
    system_20220515_1_sm_master_B.Product_hb = 0.0;
    system_20220515_1_sm_master_B.Output_o = 0.0;
    system_20220515_1_sm_master_B.Saturation_p = 0.0;
    system_20220515_1_sm_master_B.Multiply_ag = 0.0;
    system_20220515_1_sm_master_B.Step_d = 0.0;
    system_20220515_1_sm_master_B.Clock_o = 0.0;
    system_20220515_1_sm_master_B.Sum_o = 0.0;
    system_20220515_1_sm_master_B.Product_gg = 0.0;
    system_20220515_1_sm_master_B.Output_f1 = 0.0;
    system_20220515_1_sm_master_B.Saturation_lg = 0.0;
    system_20220515_1_sm_master_B.Multiply_ab = 0.0;
    system_20220515_1_sm_master_B.OpOutput_fr.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_j2.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bqq.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ns3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ppb.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_mfk.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ne.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_dh.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_h0j.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bdr.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_iz.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bn.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_og.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b40.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_h03.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_e3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_fu.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_cr.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ec.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ox.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_mx.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_a1k.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ja.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ij.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_g1.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ko.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b5o.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bfz.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_id.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ik.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_cd.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ct.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jv.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_o3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_g5.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_g3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_dc.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ft.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_mf.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_iu.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_hu.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_a0m.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_kse.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_e5.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_h0.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ha.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_c1.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_co.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ip.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_js.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_owt.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_aj.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_d3d.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_pw.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_oo.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_dy.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_oa.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bu.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jt.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_pp.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_d3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_le.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ni.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bc.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_j3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_m0.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_j1.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_aa.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_f2.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_no.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_nz.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_oh.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_pi.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_na.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gy.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_hoo.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_dw.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jb5.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_i2j.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_lf.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_km.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_iyx.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bre.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_lm.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_fd.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_er.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_md.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b5.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_py.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gav.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b0.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_a1.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_kk.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ar0.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_l5.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_kx.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bf.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_dt.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b4.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_br.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_kv.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_l0.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_hy.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ho.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_hz.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gpq.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_od.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jfw.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jf.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_a5.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gay.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gw.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ln.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jb.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_i3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_pd.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ib.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_pf.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_kg.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_oba.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_is.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ns.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_hx.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gh.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_p3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ol.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jo.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_i4.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jz.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bq.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b12.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_j0.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ad.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_dx.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_okg.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gn.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_p0.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_lu.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_h4.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_pn.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_dq.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ku.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ok.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ej.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bd.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_mg.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_kj.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ic.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ia.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gp.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ga.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bbp.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_fq.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ap.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_mh.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_aw.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_jy.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_d.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_eb.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_j.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_i2s.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_gi.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_hf.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_cc.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ar.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_kf.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ez.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bp.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_hl.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_be.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ow.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_a0.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ie.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_k4.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_kq.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_en.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_iy.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ir.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_nh.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_cy.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b3b.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_p.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_a.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ek.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_fn.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_c.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_h.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_nu.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_m.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bh.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b3.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_o1.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_i2.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_iw.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_l1.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ks.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_g.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_l.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_ob.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_e.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_bb.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b1.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_f.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_b.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_n.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_k.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_o.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput_i.DataTypeConversion = 0.0;
    system_20220515_1_sm_master_B.OpOutput.DataTypeConversion = 0.0;
  }

  /* parameters */
  system_20220515_1_sm_master_M->ModelData.defaultParam = ((real_T *)
    &system_20220515_1_sm_master_P);

  /* states (dwork) */
  system_20220515_1_sm_master_M->ModelData.dwork = ((void *)
    &system_20220515_1_sm_master_DW);
  (void) memset((void *)&system_20220515_1_sm_master_DW, 0,
                sizeof(DW_system_20220515_1_sm_master_T));
  system_20220515_1_sm_master_DW.SFunction_PreviousInput = 0.0;

  {
    int32_T i;
    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_DW.NextOutput[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 73; i++) {
      system_20220515_1_sm_master_DW.NextOutput_j[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_DW.NextOutput_k[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_DW.NextOutput_i[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_DW.NextOutput_a[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 104; i++) {
      system_20220515_1_sm_master_DW.NextOutput_c[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_DW.NextOutput_a1[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_DW.NextOutput_cx[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_DW.NextOutput_h[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 16; i++) {
      system_20220515_1_sm_master_DW.NextOutput_k1[i] = 0.0;
    }
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &system_20220515_1_sm_master_M->NonInlinedSFcns.sfcnInfo;
    system_20220515_1_sm_master_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (system_20220515_1_sm_master_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &system_20220515_1_sm_master_M->Sizes.numSampTimes);
    system_20220515_1_sm_master_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(system_20220515_1_sm_master_M)[0]);
    system_20220515_1_sm_master_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(system_20220515_1_sm_master_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   system_20220515_1_sm_master_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(system_20220515_1_sm_master_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(system_20220515_1_sm_master_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (system_20220515_1_sm_master_M));
    rtssSetStepSizePtr(sfcnInfo, &system_20220515_1_sm_master_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (system_20220515_1_sm_master_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &system_20220515_1_sm_master_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &system_20220515_1_sm_master_M->ModelData.zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &system_20220515_1_sm_master_M->ModelData.CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &system_20220515_1_sm_master_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &system_20220515_1_sm_master_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &system_20220515_1_sm_master_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &system_20220515_1_sm_master_M->solverInfoPtr);
  }

  system_20220515_1_sm_master_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)
                  &system_20220515_1_sm_master_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  3*sizeof(SimStruct));
    system_20220515_1_sm_master_M->childSfunctions =
      (&system_20220515_1_sm_master_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    system_20220515_1_sm_master_M->childSfunctions[0] =
      (&system_20220515_1_sm_master_M->NonInlinedSFcns.childSFunctions[0]);
    system_20220515_1_sm_master_M->childSfunctions[1] =
      (&system_20220515_1_sm_master_M->NonInlinedSFcns.childSFunctions[1]);
    system_20220515_1_sm_master_M->childSfunctions[2] =
      (&system_20220515_1_sm_master_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: system_20220515_1_sm_master/<S2>/Solver (OpIRTS) */
    {
      SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &system_20220515_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &system_20220515_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, system_20220515_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &system_20220515_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &system_20220515_1_sm_master_B.Constant);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               system_20220515_1_sm_master_B.TmpSignalConversionAtSolverInpo);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2,
                               system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_k);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 7);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3,
                               system_20220515_1_sm_master_B.TmpSignalConversionAtSolverIn_e);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 3);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 14);
        _ssSetPortInfo2ForOutputUnits(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        ssSetOutputPortUnit(rts, 6, 0);
        ssSetOutputPortUnit(rts, 7, 0);
        ssSetOutputPortUnit(rts, 8, 0);
        ssSetOutputPortUnit(rts, 9, 0);
        ssSetOutputPortUnit(rts, 10, 0);
        ssSetOutputPortUnit(rts, 11, 0);
        ssSetOutputPortUnit(rts, 12, 0);
        ssSetOutputPortUnit(rts, 13, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 6, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 7, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 8, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 9, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 10, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 11, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 12, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 13, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 73);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 73);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 104);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 104);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 104);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 104);
          ssSetOutputPortSignal(rts, 5, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o6));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 104);
          ssSetOutputPortSignal(rts, 6, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o7));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 104);
          ssSetOutputPortSignal(rts, 7, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o8));
        }

        /* port 8 */
        {
          _ssSetOutputPortNumDimensions(rts, 8, 1);
          ssSetOutputPortWidth(rts, 8, 104);
          ssSetOutputPortSignal(rts, 8, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o9));
        }

        /* port 9 */
        {
          _ssSetOutputPortNumDimensions(rts, 9, 1);
          ssSetOutputPortWidth(rts, 9, 104);
          ssSetOutputPortSignal(rts, 9, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o10));
        }

        /* port 10 */
        {
          _ssSetOutputPortNumDimensions(rts, 10, 1);
          ssSetOutputPortWidth(rts, 10, 16);
          ssSetOutputPortSignal(rts, 10, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o11));
        }

        /* port 11 */
        {
          _ssSetOutputPortNumDimensions(rts, 11, 1);
          ssSetOutputPortWidth(rts, 11, 16);
          ssSetOutputPortSignal(rts, 11, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o12));
        }

        /* port 12 */
        {
          _ssSetOutputPortNumDimensions(rts, 12, 1);
          ssSetOutputPortWidth(rts, 12, 16);
          ssSetOutputPortSignal(rts, 12, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o13));
        }

        /* port 13 */
        {
          _ssSetOutputPortNumDimensions(rts, 13, 1);
          ssSetOutputPortWidth(rts, 13, 16);
          ssSetOutputPortSignal(rts, 13, ((real_T *)
            system_20220515_1_sm_master_B.Solver_o14));
        }
      }

      /* path info */
      ssSetModelName(rts, "Solver");
      ssSetPath(rts, "system_20220515_1_sm_master/sm_master/Solver");
      ssSetRTModel(rts,system_20220515_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 22);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       system_20220515_1_sm_master_P.Solver_P22_Size);
      }

      /* registration */
      OpIRTS(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 0);
      _ssSetOutputPortConnected(rts, 3, 0);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortConnected(rts, 5, 0);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 1);
      _ssSetOutputPortConnected(rts, 8, 1);
      _ssSetOutputPortConnected(rts, 9, 1);
      _ssSetOutputPortConnected(rts, 10, 1);
      _ssSetOutputPortConnected(rts, 11, 1);
      _ssSetOutputPortConnected(rts, 12, 1);
      _ssSetOutputPortConnected(rts, 13, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 8, 0);
      _ssSetOutputPortBeingMerged(rts, 9, 0);
      _ssSetOutputPortBeingMerged(rts, 10, 0);
      _ssSetOutputPortBeingMerged(rts, 11, 0);
      _ssSetOutputPortBeingMerged(rts, 12, 0);
      _ssSetOutputPortBeingMerged(rts, 13, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
    }

    /* Level2 S-Function Block: system_20220515_1_sm_master/<S2>/TSync PCIe Ctrl (sfun_tsync_pcie_ctrl) */
    {
      SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &system_20220515_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &system_20220515_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, system_20220515_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &system_20220515_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &system_20220515_1_sm_master_B.Constant3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 8);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            system_20220515_1_sm_master_B.TSyncPCIeCtrl));
        }
      }

      /* path info */
      ssSetModelName(rts, "TSync PCIe Ctrl");
      ssSetPath(rts, "system_20220515_1_sm_master/sm_master/TSync PCIe Ctrl");
      ssSetRTModel(rts,system_20220515_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       system_20220515_1_sm_master_P.TSyncPCIeCtrl_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       system_20220515_1_sm_master_P.TSyncPCIeCtrl_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       system_20220515_1_sm_master_P.TSyncPCIeCtrl_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       system_20220515_1_sm_master_P.TSyncPCIeCtrl_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       system_20220515_1_sm_master_P.TSyncPCIeCtrl_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &system_20220515_1_sm_master_DW.TSyncPCIeCtrl_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &system_20220515_1_sm_master_DW.TSyncPCIeCtrl_PWORK);
      }

      /* registration */
      sfun_tsync_pcie_ctrl(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: system_20220515_1_sm_master/<S511>/S-Function (OP_SEND) */
    {
      SimStruct *rts = system_20220515_1_sm_master_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &system_20220515_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &system_20220515_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, system_20220515_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &system_20220515_1_sm_master_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &system_20220515_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.UPtrs0;

          {
            int_T i1;
            const real_T *u0 = &system_20220515_1_sm_master_B.Add1[0];
            for (i1=0; i1 < 73; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }

            u0 = &system_20220515_1_sm_master_B.y[0];
            for (i1=0; i1 < 73; i1++) {
              sfcnUPtrs[i1+ 73] = &u0[i1];
            }

            u0 = &system_20220515_1_sm_master_B.TSyncPCIeCtrl[0];
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1+ 146] = &u0[i1];
            }

            sfcnUPtrs[154] = &system_20220515_1_sm_master_B.Add1[1];
            sfcnUPtrs[155] = &system_20220515_1_sm_master_B.Add_p[0];
            sfcnUPtrs[156] = &system_20220515_1_sm_master_B.Add1_f3[0];
            sfcnUPtrs[157] = &system_20220515_1_sm_master_B.Add_p[1];
            sfcnUPtrs[158] = &system_20220515_1_sm_master_B.Add1_ov[3];
            sfcnUPtrs[159] = &system_20220515_1_sm_master_B.Add_p[2];
            sfcnUPtrs[160] = &system_20220515_1_sm_master_B.Add1_ov[4];
            sfcnUPtrs[161] = &system_20220515_1_sm_master_B.Add_p[3];
            sfcnUPtrs[162] = &system_20220515_1_sm_master_B.Add1[2];
            sfcnUPtrs[163] = &system_20220515_1_sm_master_B.Add_d[0];
            sfcnUPtrs[164] = &system_20220515_1_sm_master_B.Add1_f3[1];
            sfcnUPtrs[165] = &system_20220515_1_sm_master_B.Add_d[1];
            sfcnUPtrs[166] = &system_20220515_1_sm_master_B.Add1_ov[5];
            sfcnUPtrs[167] = &system_20220515_1_sm_master_B.Add_d[2];
            sfcnUPtrs[168] = &system_20220515_1_sm_master_B.Add1_m[0];
            sfcnUPtrs[169] = &system_20220515_1_sm_master_B.Add_d[3];
            sfcnUPtrs[170] = &system_20220515_1_sm_master_B.Add1[6];
            sfcnUPtrs[171] = &system_20220515_1_sm_master_B.Add_e[0];
            sfcnUPtrs[172] = &system_20220515_1_sm_master_B.Add1_ov[9];
            sfcnUPtrs[173] = &system_20220515_1_sm_master_B.Add_e[1];
            sfcnUPtrs[174] = &system_20220515_1_sm_master_B.Add1_ov[10];
            sfcnUPtrs[175] = &system_20220515_1_sm_master_B.Add_e[2];
            sfcnUPtrs[176] = &system_20220515_1_sm_master_B.Add1[9];
            sfcnUPtrs[177] = &system_20220515_1_sm_master_B.Add_b[0];
            sfcnUPtrs[178] = &system_20220515_1_sm_master_B.Add1_f3[7];
            sfcnUPtrs[179] = &system_20220515_1_sm_master_B.Add_b[1];
            sfcnUPtrs[180] = &system_20220515_1_sm_master_B.Add1_f3[8];
            sfcnUPtrs[181] = &system_20220515_1_sm_master_B.Add_b[2];
            sfcnUPtrs[182] = &system_20220515_1_sm_master_B.Add1_f3[12];
            sfcnUPtrs[183] = &system_20220515_1_sm_master_B.Add_b[3];
            sfcnUPtrs[184] = &system_20220515_1_sm_master_B.Add1_m[3];
            sfcnUPtrs[185] = &system_20220515_1_sm_master_B.Add_b[4];
            sfcnUPtrs[186] = &system_20220515_1_sm_master_B.Add1_m[4];
            sfcnUPtrs[187] = &system_20220515_1_sm_master_B.Add_b[5];
            sfcnUPtrs[188] = &system_20220515_1_sm_master_B.Add1[15];
            sfcnUPtrs[189] = &system_20220515_1_sm_master_B.Add_h[0];
            sfcnUPtrs[190] = &system_20220515_1_sm_master_B.Add1_f3[19];
            sfcnUPtrs[191] = &system_20220515_1_sm_master_B.Add_h[1];
            sfcnUPtrs[192] = &system_20220515_1_sm_master_B.Add1_f3[20];
            sfcnUPtrs[193] = &system_20220515_1_sm_master_B.Add_h[2];
            sfcnUPtrs[194] = &system_20220515_1_sm_master_B.Add1_ov[24];
            sfcnUPtrs[195] = &system_20220515_1_sm_master_B.Add_h[3];
            sfcnUPtrs[196] = &system_20220515_1_sm_master_B.Add1_ov[25];
            sfcnUPtrs[197] = &system_20220515_1_sm_master_B.Add_h[4];
            sfcnUPtrs[198] = &system_20220515_1_sm_master_B.Add1[20];
            sfcnUPtrs[199] = &system_20220515_1_sm_master_B.Add_o[0];
            sfcnUPtrs[200] = &system_20220515_1_sm_master_B.Add1_f3[21];
            sfcnUPtrs[201] = &system_20220515_1_sm_master_B.Add_o[1];
            sfcnUPtrs[202] = &system_20220515_1_sm_master_B.Add1_f3[22];
            sfcnUPtrs[203] = &system_20220515_1_sm_master_B.Add_o[2];
            sfcnUPtrs[204] = &system_20220515_1_sm_master_B.Add1_f3[28];
            sfcnUPtrs[205] = &system_20220515_1_sm_master_B.Add_o[3];
            sfcnUPtrs[206] = &system_20220515_1_sm_master_B.Add1_f3[29];
            sfcnUPtrs[207] = &system_20220515_1_sm_master_B.Add_o[4];
            sfcnUPtrs[208] = &system_20220515_1_sm_master_B.Add1_ov[34];
            sfcnUPtrs[209] = &system_20220515_1_sm_master_B.Add_o[5];
            sfcnUPtrs[210] = &system_20220515_1_sm_master_B.Add1_ov[35];
            sfcnUPtrs[211] = &system_20220515_1_sm_master_B.Add_o[6];
            sfcnUPtrs[212] = &system_20220515_1_sm_master_B.Add1[22];
            sfcnUPtrs[213] = &system_20220515_1_sm_master_B.Add_f[0];
            sfcnUPtrs[214] = &system_20220515_1_sm_master_B.Add1_f3[16];
            sfcnUPtrs[215] = &system_20220515_1_sm_master_B.Add_f[1];
            sfcnUPtrs[216] = &system_20220515_1_sm_master_B.Add1_f3[17];
            sfcnUPtrs[217] = &system_20220515_1_sm_master_B.Add_f[2];
            sfcnUPtrs[218] = &system_20220515_1_sm_master_B.Add1_f3[32];
            sfcnUPtrs[219] = &system_20220515_1_sm_master_B.Add_f[3];
            sfcnUPtrs[220] = &system_20220515_1_sm_master_B.Add1_f3[33];
            sfcnUPtrs[221] = &system_20220515_1_sm_master_B.Add_f[4];
            sfcnUPtrs[222] = &system_20220515_1_sm_master_B.Add1_ov[36];
            sfcnUPtrs[223] = &system_20220515_1_sm_master_B.Add_f[5];
            sfcnUPtrs[224] = &system_20220515_1_sm_master_B.Add1[25];
            sfcnUPtrs[225] = &system_20220515_1_sm_master_B.Add_ph[0];
            sfcnUPtrs[226] = &system_20220515_1_sm_master_B.Add1_f3[37];
            sfcnUPtrs[227] = &system_20220515_1_sm_master_B.Add_ph[1];
            sfcnUPtrs[228] = &system_20220515_1_sm_master_B.Add1_ov[40];
            sfcnUPtrs[229] = &system_20220515_1_sm_master_B.Add_ph[2];
            sfcnUPtrs[230] = &system_20220515_1_sm_master_B.Add1_ov[41];
            sfcnUPtrs[231] = &system_20220515_1_sm_master_B.Add_ph[3];
            sfcnUPtrs[232] = &system_20220515_1_sm_master_B.Add1[26];
            sfcnUPtrs[233] = &system_20220515_1_sm_master_B.Add_k[0];
            sfcnUPtrs[234] = &system_20220515_1_sm_master_B.Add1_f3[10];
            sfcnUPtrs[235] = &system_20220515_1_sm_master_B.Add_k[1];
            sfcnUPtrs[236] = &system_20220515_1_sm_master_B.Add1_f3[38];
            sfcnUPtrs[237] = &system_20220515_1_sm_master_B.Add_k[2];
            sfcnUPtrs[238] = &system_20220515_1_sm_master_B.Add1_ov[42];
            sfcnUPtrs[239] = &system_20220515_1_sm_master_B.Add_k[3];
            sfcnUPtrs[240] = &system_20220515_1_sm_master_B.Add1_m[5];
            sfcnUPtrs[241] = &system_20220515_1_sm_master_B.Add_k[4];
            sfcnUPtrs[242] = &system_20220515_1_sm_master_B.Add1[30];
            sfcnUPtrs[243] = &system_20220515_1_sm_master_B.Add_i[0];
            sfcnUPtrs[244] = &system_20220515_1_sm_master_B.Add1_ov[46];
            sfcnUPtrs[245] = &system_20220515_1_sm_master_B.Add_i[1];
            sfcnUPtrs[246] = &system_20220515_1_sm_master_B.Add1[33];
            sfcnUPtrs[247] = &system_20220515_1_sm_master_B.Add_og[0];
            sfcnUPtrs[248] = &system_20220515_1_sm_master_B.Add1_f3[44];
            sfcnUPtrs[249] = &system_20220515_1_sm_master_B.Add_og[1];
            sfcnUPtrs[250] = &system_20220515_1_sm_master_B.Add1_f3[45];
            sfcnUPtrs[251] = &system_20220515_1_sm_master_B.Add_og[2];
            sfcnUPtrs[252] = &system_20220515_1_sm_master_B.Add1_f3[48];
            sfcnUPtrs[253] = &system_20220515_1_sm_master_B.Add_og[3];
            sfcnUPtrs[254] = &system_20220515_1_sm_master_B.Add1_m[8];
            sfcnUPtrs[255] = &system_20220515_1_sm_master_B.Add_og[4];
            sfcnUPtrs[256] = &system_20220515_1_sm_master_B.Add1_m[9];
            sfcnUPtrs[257] = &system_20220515_1_sm_master_B.Add_og[5];
            sfcnUPtrs[258] = &system_20220515_1_sm_master_B.Add1[39];
            sfcnUPtrs[259] = &system_20220515_1_sm_master_B.Add_ek[0];
            sfcnUPtrs[260] = &system_20220515_1_sm_master_B.Add1_f3[54];
            sfcnUPtrs[261] = &system_20220515_1_sm_master_B.Add_ek[1];
            sfcnUPtrs[262] = &system_20220515_1_sm_master_B.Add1_f3[55];
            sfcnUPtrs[263] = &system_20220515_1_sm_master_B.Add_ek[2];
            sfcnUPtrs[264] = &system_20220515_1_sm_master_B.Add1_ov[59];
            sfcnUPtrs[265] = &system_20220515_1_sm_master_B.Add_ek[3];
            sfcnUPtrs[266] = &system_20220515_1_sm_master_B.Add1_ov[60];
            sfcnUPtrs[267] = &system_20220515_1_sm_master_B.Add_ek[4];
            sfcnUPtrs[268] = &system_20220515_1_sm_master_B.Add1[44];
            sfcnUPtrs[269] = &system_20220515_1_sm_master_B.Add_n[0];
            sfcnUPtrs[270] = &system_20220515_1_sm_master_B.Add1_f3[56];
            sfcnUPtrs[271] = &system_20220515_1_sm_master_B.Add_n[1];
            sfcnUPtrs[272] = &system_20220515_1_sm_master_B.Add1_f3[57];
            sfcnUPtrs[273] = &system_20220515_1_sm_master_B.Add_n[2];
            sfcnUPtrs[274] = &system_20220515_1_sm_master_B.Add1_f3[63];
            sfcnUPtrs[275] = &system_20220515_1_sm_master_B.Add_n[3];
            sfcnUPtrs[276] = &system_20220515_1_sm_master_B.Add1_f3[64];
            sfcnUPtrs[277] = &system_20220515_1_sm_master_B.Add_n[4];
            sfcnUPtrs[278] = &system_20220515_1_sm_master_B.Add1_ov[69];
            sfcnUPtrs[279] = &system_20220515_1_sm_master_B.Add_n[5];
            sfcnUPtrs[280] = &system_20220515_1_sm_master_B.Add1[46];
            sfcnUPtrs[281] = &system_20220515_1_sm_master_B.Add_f2[0];
            sfcnUPtrs[282] = &system_20220515_1_sm_master_B.Add1_f3[52];
            sfcnUPtrs[283] = &system_20220515_1_sm_master_B.Add_f2[1];
            sfcnUPtrs[284] = &system_20220515_1_sm_master_B.Add1_f3[53];
            sfcnUPtrs[285] = &system_20220515_1_sm_master_B.Add_f2[2];
            sfcnUPtrs[286] = &system_20220515_1_sm_master_B.Add1_f3[67];
            sfcnUPtrs[287] = &system_20220515_1_sm_master_B.Add_f2[3];
            sfcnUPtrs[288] = &system_20220515_1_sm_master_B.Add1_f3[68];
            sfcnUPtrs[289] = &system_20220515_1_sm_master_B.Add_f2[4];
            sfcnUPtrs[290] = &system_20220515_1_sm_master_B.Add1_ov[70];
            sfcnUPtrs[291] = &system_20220515_1_sm_master_B.Add_f2[5];
            sfcnUPtrs[292] = &system_20220515_1_sm_master_B.Add1[49];
            sfcnUPtrs[293] = &system_20220515_1_sm_master_B.Add_ib[0];
            sfcnUPtrs[294] = &system_20220515_1_sm_master_B.Add1_f3[71];
            sfcnUPtrs[295] = &system_20220515_1_sm_master_B.Add_ib[1];
            sfcnUPtrs[296] = &system_20220515_1_sm_master_B.Add1_ov[74];
            sfcnUPtrs[297] = &system_20220515_1_sm_master_B.Add_ib[2];
            sfcnUPtrs[298] = &system_20220515_1_sm_master_B.Add1_ov[75];
            sfcnUPtrs[299] = &system_20220515_1_sm_master_B.Add_ib[3];
            sfcnUPtrs[300] = &system_20220515_1_sm_master_B.Add1[50];
            sfcnUPtrs[301] = &system_20220515_1_sm_master_B.Add_od[0];
            sfcnUPtrs[302] = &system_20220515_1_sm_master_B.Add1_f3[72];
            sfcnUPtrs[303] = &system_20220515_1_sm_master_B.Add_od[1];
            sfcnUPtrs[304] = &system_20220515_1_sm_master_B.Add1_ov[76];
            sfcnUPtrs[305] = &system_20220515_1_sm_master_B.Add_od[2];
            sfcnUPtrs[306] = &system_20220515_1_sm_master_B.Add1_m[10];
            sfcnUPtrs[307] = &system_20220515_1_sm_master_B.Add_od[3];
            sfcnUPtrs[308] = &system_20220515_1_sm_master_B.Add1[54];
            sfcnUPtrs[309] = &system_20220515_1_sm_master_B.Add_fz[0];
            sfcnUPtrs[310] = &system_20220515_1_sm_master_B.Add1_ov[80];
            sfcnUPtrs[311] = &system_20220515_1_sm_master_B.Add_fz[1];
            sfcnUPtrs[312] = &system_20220515_1_sm_master_B.Add1[57];
            sfcnUPtrs[313] = &system_20220515_1_sm_master_B.Add_m[0];
            sfcnUPtrs[314] = &system_20220515_1_sm_master_B.Add1_f3[78];
            sfcnUPtrs[315] = &system_20220515_1_sm_master_B.Add_m[1];
            sfcnUPtrs[316] = &system_20220515_1_sm_master_B.Add1_f3[79];
            sfcnUPtrs[317] = &system_20220515_1_sm_master_B.Add_m[2];
            sfcnUPtrs[318] = &system_20220515_1_sm_master_B.Add1_f3[82];
            sfcnUPtrs[319] = &system_20220515_1_sm_master_B.Add_m[3];
            sfcnUPtrs[320] = &system_20220515_1_sm_master_B.Add1_m[13];
            sfcnUPtrs[321] = &system_20220515_1_sm_master_B.Add_m[4];
            sfcnUPtrs[322] = &system_20220515_1_sm_master_B.Add1_m[14];
            sfcnUPtrs[323] = &system_20220515_1_sm_master_B.Add_m[5];
            sfcnUPtrs[324] = &system_20220515_1_sm_master_B.Add1[63];
            sfcnUPtrs[325] = &system_20220515_1_sm_master_B.Add_c[0];
            sfcnUPtrs[326] = &system_20220515_1_sm_master_B.Add1_f3[88];
            sfcnUPtrs[327] = &system_20220515_1_sm_master_B.Add_c[1];
            sfcnUPtrs[328] = &system_20220515_1_sm_master_B.Add1_f3[89];
            sfcnUPtrs[329] = &system_20220515_1_sm_master_B.Add_c[2];
            sfcnUPtrs[330] = &system_20220515_1_sm_master_B.Add1_ov[93];
            sfcnUPtrs[331] = &system_20220515_1_sm_master_B.Add_c[3];
            sfcnUPtrs[332] = &system_20220515_1_sm_master_B.Add1_ov[94];
            sfcnUPtrs[333] = &system_20220515_1_sm_master_B.Add_c[4];
            sfcnUPtrs[334] = &system_20220515_1_sm_master_B.Add1[68];
            sfcnUPtrs[335] = &system_20220515_1_sm_master_B.Add_l[0];
            sfcnUPtrs[336] = &system_20220515_1_sm_master_B.Add1_f3[90];
            sfcnUPtrs[337] = &system_20220515_1_sm_master_B.Add_l[1];
            sfcnUPtrs[338] = &system_20220515_1_sm_master_B.Add1_f3[91];
            sfcnUPtrs[339] = &system_20220515_1_sm_master_B.Add_l[2];
            sfcnUPtrs[340] = &system_20220515_1_sm_master_B.Add1_f3[97];
            sfcnUPtrs[341] = &system_20220515_1_sm_master_B.Add_l[3];
            sfcnUPtrs[342] = &system_20220515_1_sm_master_B.Add1_f3[98];
            sfcnUPtrs[343] = &system_20220515_1_sm_master_B.Add_l[4];
            sfcnUPtrs[344] = &system_20220515_1_sm_master_B.Add1_ov[103];
            sfcnUPtrs[345] = &system_20220515_1_sm_master_B.Add_l[5];
            sfcnUPtrs[346] = &system_20220515_1_sm_master_B.Add1[70];
            sfcnUPtrs[347] = &system_20220515_1_sm_master_B.Add_nv[0];
            sfcnUPtrs[348] = &system_20220515_1_sm_master_B.Add1_f3[86];
            sfcnUPtrs[349] = &system_20220515_1_sm_master_B.Add_nv[1];
            sfcnUPtrs[350] = &system_20220515_1_sm_master_B.Add1_f3[87];
            sfcnUPtrs[351] = &system_20220515_1_sm_master_B.Add_nv[2];
            sfcnUPtrs[352] = &system_20220515_1_sm_master_B.Add1_f3[101];
            sfcnUPtrs[353] = &system_20220515_1_sm_master_B.Add_nv[3];
            sfcnUPtrs[354] = &system_20220515_1_sm_master_B.Add1_f3[102];
            sfcnUPtrs[355] = &system_20220515_1_sm_master_B.Add_nv[4];
            sfcnUPtrs[356] = &system_20220515_1_sm_master_B.Add1_m[15];
            sfcnUPtrs[357] = &system_20220515_1_sm_master_B.Add_nv[5];
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 358);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "system_20220515_1_sm_master/sm_master/rtlab_send_subsystem/Subsystem1/Send1/S-Function");
      ssSetRTModel(rts,system_20220515_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       system_20220515_1_sm_master_P.SFunction_P1_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &system_20220515_1_sm_master_DW.SFunction_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &system_20220515_1_sm_master_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &system_20220515_1_sm_master_DW.SFunction_IWORK[0]);
      }

      /* registration */
      OP_SEND(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 358);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  system_20220515_1_sm_master_M->Sizes.numContStates = (0);/* Number of continuous states */
  system_20220515_1_sm_master_M->Sizes.numY = (0);/* Number of model outputs */
  system_20220515_1_sm_master_M->Sizes.numU = (0);/* Number of model inputs */
  system_20220515_1_sm_master_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  system_20220515_1_sm_master_M->Sizes.numSampTimes = (2);/* Number of sample times */
  system_20220515_1_sm_master_M->Sizes.numBlocks = (493);/* Number of blocks */
  system_20220515_1_sm_master_M->Sizes.numBlockIO = (432);/* Number of block outputs */
  system_20220515_1_sm_master_M->Sizes.numBlockPrms = (854);/* Sum of parameter "widths" */
  return system_20220515_1_sm_master_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
