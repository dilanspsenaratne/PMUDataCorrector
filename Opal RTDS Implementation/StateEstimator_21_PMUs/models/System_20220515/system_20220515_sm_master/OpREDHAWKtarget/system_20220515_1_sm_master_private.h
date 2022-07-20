/*
 * system_20220515_1_sm_master_private.h
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

#ifndef RTW_HEADER_system_20220515_1_sm_master_private_h_
#define RTW_HEADER_system_20220515_1_sm_master_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "system_20220515_1_sm_master.h"

extern real_T rt_roundd_snf(real_T u);
extern real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern void OpIRTS(SimStruct *rts);
extern void sfun_tsync_pcie_ctrl(SimStruct *rts);
extern void OP_SEND(SimStruct *rts);
extern void system_20220515_1_sm_m_OpOutput(real_T rtu_In1,
  B_OpOutput_system_20220515_1__T *localB);
extern void system_20220515__MATLABFunction(const real_T rtu_u[104],
  B_MATLABFunction_system_20220_T *localB);
extern void system_2022051_MATLABFunction_l(const real_T rtu_u[16],
  B_MATLABFunction_system_202_j_T *localB);

#endif                   /* RTW_HEADER_system_20220515_1_sm_master_private_h_ */
