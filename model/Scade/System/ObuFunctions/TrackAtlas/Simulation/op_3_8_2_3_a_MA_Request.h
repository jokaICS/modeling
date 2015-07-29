/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _op_3_8_2_3_a_MA_Request_H_
#define _op_3_8_2_3_a_MA_Request_H_

#include "kcg_types.h"
#include "Safe_DIV_real.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MA_Request::op_3_8_2_3_a::triggerMA */ triggerMA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Safe_DIV_real /* 2 */ Context_2;
  outC_Safe_DIV_real /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* MA_Request::op_3_8_2_3_a::_L4 */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::op_3_8_2_3_a::_L3 */ _L3;
  T_MAR /* MA_Request::op_3_8_2_3_a::_L2 */ _L2;
  trainPosition_T_TrainPosition_Types_Pck /* MA_Request::op_3_8_2_3_a::_L1 */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* MA_Request::op_3_8_2_3_a::_L5 */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::op_3_8_2_3_a::_L7 */ _L7;
  kcg_int /* MA_Request::op_3_8_2_3_a::_L8 */ _L8;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* MA_Request::op_3_8_2_3_a::_L9 */ _L9;
  kcg_real /* MA_Request::op_3_8_2_3_a::_L10 */ _L10;
  kcg_real /* MA_Request::op_3_8_2_3_a::_L11 */ _L11;
  kcg_real /* MA_Request::op_3_8_2_3_a::_L12 */ _L12;
  kcg_real /* MA_Request::op_3_8_2_3_a::_L13 */ _L13;
  kcg_real /* MA_Request::op_3_8_2_3_a::_L14 */ _L14;
  kcg_real /* MA_Request::op_3_8_2_3_a::_L15 */ _L15;
  kcg_real /* MA_Request::op_3_8_2_3_a::_L16 */ _L16;
  kcg_real /* MA_Request::op_3_8_2_3_a::_L17 */ _L17;
  kcg_bool /* MA_Request::op_3_8_2_3_a::_L18 */ _L18;
  V_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::op_3_8_2_3_a::_L19 */ _L19;
} outC_op_3_8_2_3_a_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::op_3_8_2_3_a */
extern void op_3_8_2_3_a_MA_Request(
  /* MA_Request::op_3_8_2_3_a::t_mar */T_MAR t_mar,
  /* MA_Request::op_3_8_2_3_a::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::op_3_8_2_3_a::preindicationLoc */L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  /* MA_Request::op_3_8_2_3_a::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_8_2_3_a_MA_Request *outC);

extern void op_3_8_2_3_a_reset_MA_Request(outC_op_3_8_2_3_a_MA_Request *outC);

#endif /* _op_3_8_2_3_a_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_8_2_3_a_MA_Request.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
