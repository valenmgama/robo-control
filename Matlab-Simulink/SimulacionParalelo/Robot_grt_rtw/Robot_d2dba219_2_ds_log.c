/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Robot/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Robot_d2dba219_2_ds_log.h"
#include "Robot_d2dba219_2_ds_sys_struct.h"
#include "Robot_d2dba219_2_ds_externals.h"
#include "Robot_d2dba219_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Robot_d2dba219_2_ds_log(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t65, NeDsMethodOutput *t66)
{
  PmRealVector out;
  real_T BLDC_phase_splitter_i_a;
  real_T BLDC_pm_dq0_Xabc_i_n;
  real_T Gate_driver_G_V[12];
  real_T Inverter_converter_Xabc_Q1_diode_i;
  real_T Inverter_converter_Xabc_Q3_diode_i;
  real_T Inverter_converter_Xabc_Q5_diode_i;
  real_T t7[353];
  real_T t10[12];
  size_t t33;
  real_T t43;
  real_T t58;
  real_T t59;
  real_T t60;
  real_T t61;
  real_T t62;
  real_T t63;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T X_idx_10;
  real_T U_idx_0;
  real_T X_idx_0;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_16;
  real_T X_idx_18;
  real_T X_idx_20;
  real_T X_idx_15;
  real_T X_idx_17;
  real_T X_idx_19;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T X_idx_21;
  real_T X_idx_22;
  real_T X_idx_23;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_12;
  int32_T M_idx_20;
  int32_T M_idx_21;
  int32_T M_idx_22;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_1;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  M_idx_0 = t65->mM.mX[0];
  M_idx_1 = t65->mM.mX[1];
  M_idx_12 = t65->mM.mX[12];
  M_idx_20 = t65->mM.mX[20];
  M_idx_21 = t65->mM.mX[21];
  M_idx_22 = t65->mM.mX[22];
  U_idx_0 = t65->mU.mX[0];
  U_idx_1 = t65->mU.mX[1];
  U_idx_2 = t65->mU.mX[2];
  U_idx_3 = t65->mU.mX[3];
  U_idx_4 = t65->mU.mX[4];
  U_idx_5 = t65->mU.mX[5];
  U_idx_6 = t65->mU.mX[6];
  X_idx_0 = t65->mX.mX[0];
  X_idx_1 = t65->mX.mX[1];
  X_idx_2 = t65->mX.mX[2];
  X_idx_3 = t65->mX.mX[3];
  X_idx_4 = t65->mX.mX[4];
  X_idx_5 = t65->mX.mX[5];
  X_idx_6 = t65->mX.mX[6];
  X_idx_7 = t65->mX.mX[7];
  X_idx_8 = t65->mX.mX[8];
  X_idx_9 = t65->mX.mX[9];
  X_idx_10 = t65->mX.mX[10];
  X_idx_11 = t65->mX.mX[11];
  X_idx_12 = t65->mX.mX[12];
  X_idx_13 = t65->mX.mX[13];
  X_idx_14 = t65->mX.mX[14];
  X_idx_15 = t65->mX.mX[15];
  X_idx_16 = t65->mX.mX[16];
  X_idx_17 = t65->mX.mX[17];
  X_idx_18 = t65->mX.mX[18];
  X_idx_19 = t65->mX.mX[19];
  X_idx_20 = t65->mX.mX[20];
  X_idx_21 = t65->mX.mX[21];
  X_idx_22 = t65->mX.mX[22];
  X_idx_23 = t65->mX.mX[23];
  out = t66->mLOG;
  t43 = (X_idx_11 * 1.0010000000000002E-9 + X_idx_12) + X_idx_13;
  BLDC_phase_splitter_i_a = (X_idx_11 * -1.0010000000000002E-9 + -X_idx_12) +
    -X_idx_13;
  BLDC_pm_dq0_Xabc_i_n = X_idx_11 * -1.0E-9;
  t10[0ULL] = U_idx_1;
  t10[1ULL] = 0.0;
  t10[2ULL] = U_idx_2;
  t10[3ULL] = 0.0;
  t10[4ULL] = U_idx_3;
  t10[5ULL] = 0.0;
  t10[6ULL] = U_idx_4;
  t10[7ULL] = 0.0;
  t10[8ULL] = U_idx_5;
  t10[9ULL] = 0.0;
  t10[10ULL] = U_idx_6;
  t10[11ULL] = 0.0;
  for (t33 = 0ULL; t33 < 12ULL; t33++) {
    Gate_driver_G_V[t33] = t10[t33];
  }

  Inverter_converter_Xabc_Q1_diode_i = ((((X_idx_11 * -1.0010000000000002E-9 +
    -X_idx_12) + -X_idx_13) + -X_idx_16) + X_idx_21) + X_idx_15;
  Inverter_converter_Xabc_Q3_diode_i = ((-X_idx_18 + X_idx_12) + X_idx_22) +
    X_idx_17;
  Inverter_converter_Xabc_Q5_diode_i = ((-X_idx_20 + X_idx_13) + X_idx_23) +
    X_idx_19;
  if (M_idx_0 != 0) {
    t58 = (-X_idx_8 + 24.0) - 0.8;
  } else {
    t58 = U_idx_1 - 0.5;
  }

  t58 = -t58 / -1.0;
  if (M_idx_1 != 0) {
    t59 = X_idx_8 - 0.8;
  } else {
    t59 = U_idx_2 - 0.5;
  }

  t59 = -t59 / -1.0;
  if (M_idx_12 != 0) {
    t60 = (-X_idx_9 + 24.0) - 0.8;
  } else {
    t60 = U_idx_3 - 0.5;
  }

  t60 = -t60 / -1.0;
  if (M_idx_20 != 0) {
    t61 = X_idx_9 - 0.8;
  } else {
    t61 = U_idx_4 - 0.5;
  }

  t61 = -t61 / -1.0;
  if (M_idx_21 != 0) {
    t62 = (-X_idx_10 + 24.0) - 0.8;
  } else {
    t62 = U_idx_5 - 0.5;
  }

  t62 = -t62 / -1.0;
  if (M_idx_22 != 0) {
    t63 = X_idx_10 - 0.8;
  } else {
    t63 = U_idx_6 - 0.5;
  }

  t7[0ULL] = 0.0;
  t7[1ULL] = X_idx_8;
  t7[2ULL] = X_idx_9;
  t7[3ULL] = X_idx_10;
  t7[4ULL] = U_idx_0;
  t7[5ULL] = X_idx_0 * 57.295779513082323;
  t7[6ULL] = U_idx_0 * 9.5492965855137211;
  t7[7ULL] = X_idx_2;
  t7[8ULL] = X_idx_3;
  t7[9ULL] = X_idx_11;
  t7[10ULL] = t43;
  t7[11ULL] = -X_idx_12;
  t7[12ULL] = -X_idx_13;
  t7[13ULL] = X_idx_8;
  t7[14ULL] = X_idx_9;
  t7[15ULL] = X_idx_10;
  t7[16ULL] = X_idx_8;
  t7[17ULL] = X_idx_9;
  t7[18ULL] = X_idx_10;
  t7[19ULL] = BLDC_phase_splitter_i_a;
  t7[20ULL] = X_idx_12;
  t7[21ULL] = X_idx_13;
  t7[22ULL] = 0.0;
  t7[23ULL] = U_idx_0;
  t7[24ULL] = X_idx_8;
  t7[25ULL] = X_idx_0 * 57.295779513082323;
  t7[26ULL] = X_idx_0;
  t7[27ULL] = U_idx_0 * 9.5492965855137211;
  t7[28ULL] = X_idx_9;
  t7[29ULL] = X_idx_10;
  t7[30ULL] = X_idx_14;
  t7[31ULL] = X_idx_1;
  t7[32ULL] = -BLDC_phase_splitter_i_a;
  t7[33ULL] = -X_idx_12;
  t7[34ULL] = -X_idx_13;
  t7[35ULL] = X_idx_2;
  t7[36ULL] = BLDC_pm_dq0_Xabc_i_n;
  t7[37ULL] = X_idx_3;
  t7[38ULL] = X_idx_11;
  t7[39ULL] = X_idx_4;
  t7[40ULL] = X_idx_5;
  t7[41ULL] = X_idx_6;
  t7[42ULL] = -(((BLDC_phase_splitter_i_a * BLDC_phase_splitter_i_a + X_idx_12 *
                  X_idx_12) + X_idx_13 * X_idx_13) * 3.9E-5) / -1.0 * 1000.0;
  t7[43ULL] = -X_idx_14;
  t7[44ULL] = -X_idx_11 + X_idx_8;
  t7[45ULL] = -X_idx_11 + X_idx_9;
  t7[46ULL] = -X_idx_11 + X_idx_10;
  t7[47ULL] = 3.0200000000000002E-5;
  t7[48ULL] = 3.0200000000000002E-5;
  t7[49ULL] = -X_idx_14;
  t7[50ULL] = (((((X_idx_11 * -1.0010000000000002E-9 + -X_idx_16) + -X_idx_18) +
                 -X_idx_20) + X_idx_15) + X_idx_17) + X_idx_19;
  t7[51ULL] = 0.0;
  t7[52ULL] = 24.0;
  t7[53ULL] = 24.0;
  t7[54ULL] = 0.0;
  t7[55ULL] = 0.0;
  for (t33 = 0ULL; t33 < 12ULL; t33++) {
    t7[t33 + 56ULL] = Gate_driver_G_V[t33];
  }

  t7[68ULL] = U_idx_1;
  t7[69ULL] = U_idx_2;
  t7[70ULL] = U_idx_3;
  t7[71ULL] = U_idx_4;
  t7[72ULL] = U_idx_5;
  t7[73ULL] = U_idx_6;
  for (t33 = 0ULL; t33 < 12ULL; t33++) {
    t7[t33 + 74ULL] = ((_NeDynamicSystem*)(t0))->mTable0[t33];
  }

  for (t33 = 0ULL; t33 < 12ULL; t33++) {
    t7[t33 + 86ULL] = Gate_driver_G_V[t33];
  }

  t7[98ULL] = BLDC_pm_dq0_Xabc_i_n;
  t7[99ULL] = X_idx_11;
  t7[100ULL] = 0.0;
  t7[101ULL] = BLDC_pm_dq0_Xabc_i_n * 1.0E+9;
  t7[102ULL] = 0.0;
  t7[103ULL] = U_idx_0;
  t7[104ULL] = U_idx_0;
  t7[105ULL] = X_idx_14;
  t7[106ULL] = U_idx_0;
  for (t33 = 0ULL; t33 < 12ULL; t33++) {
    t7[t33 + 107ULL] = Gate_driver_G_V[t33];
  }

  t7[119ULL] = X_idx_8;
  t7[120ULL] = X_idx_9;
  t7[121ULL] = X_idx_10;
  for (t33 = 0ULL; t33 < 12ULL; t33++) {
    t7[t33 + 122ULL] = Gate_driver_G_V[t33];
  }

  t7[134ULL] = 24.0;
  t7[135ULL] = X_idx_8;
  t7[136ULL] = U_idx_1;
  t7[137ULL] = 298.15;
  t7[138ULL] = Inverter_converter_Xabc_Q1_diode_i;
  t7[139ULL] = 0.0;
  t7[140ULL] = 24.0;
  t7[141ULL] = X_idx_8;
  t7[142ULL] = -(Inverter_converter_Xabc_Q1_diode_i * (X_idx_8 + -24.0) * 0.001)
    / -1.0 * 1000.0;
  t7[143ULL] = X_idx_8 + -24.0;
  t7[144ULL] = 0.0;
  t7[145ULL] = U_idx_1;
  t7[146ULL] = X_idx_21;
  t7[147ULL] = t58;
  t7[148ULL] = X_idx_8;
  t7[149ULL] = 24.0;
  t7[150ULL] = -(X_idx_21 * (-X_idx_8 + 24.0) * 0.001) / -1.0 * 1000.0;
  t7[151ULL] = -X_idx_8 + 24.0;
  t7[152ULL] = X_idx_8;
  t7[153ULL] = 0.0;
  t7[154ULL] = U_idx_2;
  t7[155ULL] = 298.15;
  t7[156ULL] = X_idx_15;
  t7[157ULL] = 0.0;
  t7[158ULL] = X_idx_8;
  t7[159ULL] = 0.0;
  t7[160ULL] = -(X_idx_15 * -X_idx_8 * 0.001) / -1.0 * 1000.0;
  t7[161ULL] = -X_idx_8;
  t7[162ULL] = 0.0;
  t7[163ULL] = U_idx_2;
  t7[164ULL] = X_idx_16;
  t7[165ULL] = t59;
  t7[166ULL] = 0.0;
  t7[167ULL] = X_idx_8;
  t7[168ULL] = -(X_idx_8 * X_idx_16 * 0.001) / -1.0 * 1000.0;
  t7[169ULL] = X_idx_8;
  t7[170ULL] = 24.0;
  t7[171ULL] = X_idx_9;
  t7[172ULL] = U_idx_3;
  t7[173ULL] = 298.15;
  t7[174ULL] = Inverter_converter_Xabc_Q3_diode_i;
  t7[175ULL] = 0.0;
  t7[176ULL] = 24.0;
  t7[177ULL] = X_idx_9;
  t7[178ULL] = -(Inverter_converter_Xabc_Q3_diode_i * (X_idx_9 + -24.0) * 0.001)
    / -1.0 * 1000.0;
  t7[179ULL] = X_idx_9 + -24.0;
  t7[180ULL] = 0.0;
  t7[181ULL] = U_idx_3;
  t7[182ULL] = X_idx_22;
  t7[183ULL] = t60;
  t7[184ULL] = X_idx_9;
  t7[185ULL] = 24.0;
  t7[186ULL] = -(X_idx_22 * (-X_idx_9 + 24.0) * 0.001) / -1.0 * 1000.0;
  t7[187ULL] = -X_idx_9 + 24.0;
  t7[188ULL] = X_idx_9;
  t7[189ULL] = 0.0;
  t7[190ULL] = U_idx_4;
  t7[191ULL] = 298.15;
  t7[192ULL] = X_idx_17;
  t7[193ULL] = 0.0;
  t7[194ULL] = X_idx_9;
  t7[195ULL] = 0.0;
  t7[196ULL] = -(X_idx_17 * -X_idx_9 * 0.001) / -1.0 * 1000.0;
  t7[197ULL] = -X_idx_9;
  t7[198ULL] = 0.0;
  t7[199ULL] = U_idx_4;
  t7[200ULL] = X_idx_18;
  t7[201ULL] = t61;
  t7[202ULL] = 0.0;
  t7[203ULL] = X_idx_9;
  t7[204ULL] = -(X_idx_9 * X_idx_18 * 0.001) / -1.0 * 1000.0;
  t7[205ULL] = X_idx_9;
  t7[206ULL] = 24.0;
  t7[207ULL] = X_idx_10;
  t7[208ULL] = U_idx_5;
  t7[209ULL] = 298.15;
  t7[210ULL] = Inverter_converter_Xabc_Q5_diode_i;
  t7[211ULL] = 0.0;
  t7[212ULL] = 24.0;
  t7[213ULL] = X_idx_10;
  t7[214ULL] = -(Inverter_converter_Xabc_Q5_diode_i * (X_idx_10 + -24.0) * 0.001)
    / -1.0 * 1000.0;
  t7[215ULL] = X_idx_10 + -24.0;
  t7[216ULL] = 0.0;
  t7[217ULL] = U_idx_5;
  t7[218ULL] = X_idx_23;
  t7[219ULL] = t62;
  t7[220ULL] = X_idx_10;
  t7[221ULL] = 24.0;
  t7[222ULL] = -(X_idx_23 * (-X_idx_10 + 24.0) * 0.001) / -1.0 * 1000.0;
  t7[223ULL] = -X_idx_10 + 24.0;
  t7[224ULL] = X_idx_10;
  t7[225ULL] = 0.0;
  t7[226ULL] = U_idx_6;
  t7[227ULL] = 298.15;
  t7[228ULL] = X_idx_19;
  t7[229ULL] = 0.0;
  t7[230ULL] = X_idx_10;
  t7[231ULL] = 0.0;
  t7[232ULL] = -(X_idx_19 * -X_idx_10 * 0.001) / -1.0 * 1000.0;
  t7[233ULL] = -X_idx_10;
  t7[234ULL] = 0.0;
  t7[235ULL] = U_idx_6;
  t7[236ULL] = X_idx_20;
  t7[237ULL] = -t63 / -1.0;
  t7[238ULL] = 0.0;
  t7[239ULL] = X_idx_10;
  t7[240ULL] = -(X_idx_10 * X_idx_20 * 0.001) / -1.0 * 1000.0;
  t7[241ULL] = X_idx_10;
  t7[242ULL] = X_idx_8;
  t7[243ULL] = X_idx_9;
  t7[244ULL] = X_idx_10;
  t7[245ULL] = U_idx_1;
  t7[246ULL] = 0.0;
  t7[247ULL] = U_idx_1;
  t7[248ULL] = U_idx_2;
  t7[249ULL] = 0.0;
  t7[250ULL] = U_idx_2;
  t7[251ULL] = U_idx_3;
  t7[252ULL] = 0.0;
  t7[253ULL] = U_idx_3;
  t7[254ULL] = U_idx_4;
  t7[255ULL] = 0.0;
  t7[256ULL] = U_idx_4;
  t7[257ULL] = U_idx_5;
  t7[258ULL] = 0.0;
  t7[259ULL] = U_idx_5;
  t7[260ULL] = U_idx_6;
  t7[261ULL] = 0.0;
  t7[262ULL] = U_idx_6;
  for (t33 = 0ULL; t33 < 12ULL; t33++) {
    t7[t33 + 263ULL] = -((_NeDynamicSystem*)(t0))->mTable0[t33];
  }

  t7[275ULL] = 0.0;
  t7[276ULL] = 0.0;
  t7[277ULL] = 0.0;
  t7[278ULL] = 0.0;
  t7[279ULL] = 0.0;
  t7[280ULL] = 0.0;
  t7[281ULL] = 0.0;
  t7[282ULL] = 0.0;
  t7[283ULL] = 0.0;
  t7[284ULL] = 0.0;
  t7[285ULL] = 0.0;
  t7[286ULL] = 0.0;
  for (t33 = 0ULL; t33 < 12ULL; t33++) {
    t7[t33 + 287ULL] = Gate_driver_G_V[t33];
  }

  t7[299ULL] = 0.0;
  t7[300ULL] = 24.0;
  t7[301ULL] = 0.0;
  t7[302ULL] = 24.0;
  t7[303ULL] = -t43;
  t7[304ULL] = X_idx_12;
  t7[305ULL] = X_idx_13;
  t7[306ULL] = X_idx_8;
  t7[307ULL] = X_idx_9;
  t7[308ULL] = X_idx_10;
  t7[309ULL] = X_idx_8;
  t7[310ULL] = X_idx_9;
  t7[311ULL] = X_idx_10;
  t7[312ULL] = t43;
  t7[313ULL] = -X_idx_12;
  t7[314ULL] = -X_idx_13;
  t7[315ULL] = 0.0;
  t7[316ULL] = 24.0;
  t7[317ULL] = 0.0;
  t7[318ULL] = 0.0;
  t7[319ULL] = 24.0;
  t7[320ULL] = 24.0;
  t7[321ULL] = 24.0;
  t7[322ULL] = 0.0;
  t7[323ULL] = X_idx_7;
  t7[324ULL] = 0.0;
  t7[325ULL] = U_idx_0;
  t7[326ULL] = U_idx_0;
  t7[327ULL] = X_idx_7 * 57.295779513082323;
  t7[328ULL] = 0.0;
  t7[329ULL] = U_idx_0;
  t7[330ULL] = t43;
  t7[331ULL] = -X_idx_12;
  t7[332ULL] = -X_idx_13;
  t7[333ULL] = t43;
  t7[334ULL] = -X_idx_12;
  t7[335ULL] = -X_idx_13;
  t7[336ULL] = X_idx_8;
  t7[337ULL] = X_idx_9;
  t7[338ULL] = X_idx_10;
  t7[339ULL] = X_idx_8;
  t7[340ULL] = X_idx_9;
  t7[341ULL] = X_idx_10;
  t7[342ULL] = X_idx_8;
  t7[343ULL] = X_idx_9;
  t7[344ULL] = X_idx_10;
  t7[345ULL] = X_idx_8;
  t7[346ULL] = X_idx_9;
  t7[347ULL] = X_idx_10;
  t7[348ULL] = 0.0;
  t7[349ULL] = 0.0;
  t7[350ULL] = X_idx_14;
  t7[351ULL] = X_idx_14;
  t7[352ULL] = 0.0;
  for (M_idx_0 = 0; M_idx_0 < 353; M_idx_0++) {
    out.mX[M_idx_0] = t7[M_idx_0];
  }

  (void)t0;
  (void)t66;
  return 0;
}