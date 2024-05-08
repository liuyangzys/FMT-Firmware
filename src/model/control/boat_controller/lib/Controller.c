/*
 * File: Controller.c
 *
 * Code generated for Simulink model 'Controller'.
 *
 * Model version                  : 1.1109
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue May  7 16:13:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Controller.h"
#include "Controller_private.h"

const Control_Out_Bus Controller_rtZControl_Out_Bus = {
  0U,                                  /* timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* actuator_cmd */
} ;                                    /* Control_Out_Bus ground */

/* Exported block parameters */
struct_L5ioibiXFlDXzs1YoXn9HB CONTROL_PARAM = {
  2.0F,
  2.0F,
  0.0F,
  0.1F,
  -0.1F,
  0.1F,
  -0.1F,
  5.0F,
  5.0F,
  0.0F,
  0.1F,
  -0.1F,
  0.1F,
  -0.1F
} ;                                    /* Variable: CONTROL_PARAM
                                        * Referenced by:
                                        *   '<S11>/gain1'
                                        *   '<S11>/Saturation'
                                        *   '<S12>/gain1'
                                        *   '<S12>/Discrete-Time Integrator'
                                        *   '<S13>/gain1'
                                        *   '<S20>/gain1'
                                        *   '<S20>/Saturation'
                                        *   '<S21>/gain1'
                                        *   '<S21>/Discrete-Time Integrator'
                                        *   '<S22>/gain1'
                                        */

struct_biZzOMrg0u3lxrb7POOubF CONTROL_EXPORT = {
  10U,

  { 66, 111, 97, 116, 32, 67, 111, 110, 116, 114, 111, 108, 108, 101, 114, 32,
    118, 48, 46, 48, 46, 49, 0 }
} ;                                    /* Variable: CONTROL_EXPORT
                                        * Referenced by: '<S5>/Constant'
                                        */

/* Block states (default storage) */
DW_Controller_T Controller_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Controller_T Controller_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Controller_T Controller_Y;

/* Real-time model */
RT_MODEL_Controller_T Controller_M_;
RT_MODEL_Controller_T *const Controller_M = &Controller_M_;

/* Model step function */
void Controller_step(void)
{
  real32_T rtb_VectorConcatenate[9];
  real32_T rtb_u_err;
  real32_T rtb_Gain;
  real32_T rtb_r_err;
  real32_T rtb_Gain_f;
  real32_T rtb_Sign;
  uint16_T rtb_thruster2;
  real32_T rtb_Multiply_g;
  uint16_T rtb_paddle2;
  int32_T i;
  real32_T rtb_VectorConcatenate_0[3];

  /* Trigonometry: '<S19>/Trigonometric Function1' incorporates:
   *  Gain: '<S18>/Gain'
   *  Inport: '<Root>/INS_Out'
   *  Trigonometry: '<S19>/Trigonometric Function3'
   */
  rtb_u_err = arm_cos_f32(-Controller_U.INS_Out.psi);
  rtb_VectorConcatenate[0] = rtb_u_err;

  /* Trigonometry: '<S19>/Trigonometric Function' incorporates:
   *  Gain: '<S18>/Gain'
   *  Inport: '<Root>/INS_Out'
   *  Trigonometry: '<S19>/Trigonometric Function2'
   */
  rtb_Gain = arm_sin_f32(-Controller_U.INS_Out.psi);
  rtb_VectorConcatenate[1] = rtb_Gain;

  /* SignalConversion: '<S19>/ConcatBufferAtVector Concatenate1In3' incorporates:
   *  Constant: '<S19>/Constant3'
   */
  rtb_VectorConcatenate[2] = 0.0F;

  /* Gain: '<S19>/Gain' */
  rtb_VectorConcatenate[3] = -rtb_Gain;

  /* Trigonometry: '<S19>/Trigonometric Function3' */
  rtb_VectorConcatenate[4] = rtb_u_err;

  /* SignalConversion: '<S19>/ConcatBufferAtVector Concatenate2In3' incorporates:
   *  Constant: '<S19>/Constant4'
   */
  rtb_VectorConcatenate[5] = 0.0F;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn3' */
  rtb_VectorConcatenate[6] = Controller_ConstB.VectorConcatenate3[0];
  rtb_VectorConcatenate[7] = Controller_ConstB.VectorConcatenate3[1];
  rtb_VectorConcatenate[8] = Controller_ConstB.VectorConcatenate3[2];

  /* Product: '<S17>/Multiply' incorporates:
   *  Inport: '<Root>/INS_Out'
   *  SignalConversion: '<S17>/TmpSignal ConversionAtMultiplyInport2'
   */
  for (i = 0; i < 3; i++) {
    rtb_VectorConcatenate_0[i] = rtb_VectorConcatenate[i + 3] *
      Controller_U.INS_Out.ve + rtb_VectorConcatenate[i] *
      Controller_U.INS_Out.vn;
  }

  /* End of Product: '<S17>/Multiply' */

  /* Sum: '<S15>/Sum' incorporates:
   *  Inport: '<Root>/FMS_Out'
   */
  rtb_u_err = Controller_U.FMS_Out.u_cmd - rtb_VectorConcatenate_0[0];

  /* DiscreteIntegrator: '<S21>/Discrete-Time Integrator' incorporates:
   *  Inport: '<Root>/FMS_Out'
   */
  if ((Controller_U.FMS_Out.reset != 0) ||
      (Controller_DW.DiscreteTimeIntegrator_PrevRese != 0)) {
    Controller_DW.DiscreteTimeIntegrator_DSTATE = Controller_ConstB.Constant;
    if (Controller_DW.DiscreteTimeIntegrator_DSTATE >= CONTROL_PARAM.VEL_I_MAX)
    {
      Controller_DW.DiscreteTimeIntegrator_DSTATE = CONTROL_PARAM.VEL_I_MAX;
    } else {
      if (Controller_DW.DiscreteTimeIntegrator_DSTATE <= CONTROL_PARAM.VEL_I_MIN)
      {
        Controller_DW.DiscreteTimeIntegrator_DSTATE = CONTROL_PARAM.VEL_I_MIN;
      }
    }
  }

  if (Controller_DW.DiscreteTimeIntegrator_DSTATE >= CONTROL_PARAM.VEL_I_MAX) {
    Controller_DW.DiscreteTimeIntegrator_DSTATE = CONTROL_PARAM.VEL_I_MAX;
  } else {
    if (Controller_DW.DiscreteTimeIntegrator_DSTATE <= CONTROL_PARAM.VEL_I_MIN)
    {
      Controller_DW.DiscreteTimeIntegrator_DSTATE = CONTROL_PARAM.VEL_I_MIN;
    }
  }

  /* DiscreteIntegrator: '<S23>/Discrete-Time Integrator1' incorporates:
   *  Inport: '<Root>/FMS_Out'
   */
  if (Controller_DW.DiscreteTimeIntegrator1_IC_LOAD != 0) {
    Controller_DW.DiscreteTimeIntegrator1_DSTATE = rtb_u_err;
  }

  if ((Controller_U.FMS_Out.reset != 0) ||
      (Controller_DW.DiscreteTimeIntegrator1_PrevRes != 0)) {
    Controller_DW.DiscreteTimeIntegrator1_DSTATE = rtb_u_err;
  }

  /* Gain: '<S23>/Gain' incorporates:
   *  DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
   *  Sum: '<S23>/Sum5'
   */
  rtb_Gain = (rtb_u_err - Controller_DW.DiscreteTimeIntegrator1_DSTATE) *
    188.49556F;

  /* Sum: '<S9>/Sum' incorporates:
   *  Inport: '<Root>/FMS_Out'
   *  Inport: '<Root>/INS_Out'
   */
  rtb_r_err = Controller_U.FMS_Out.r_cmd - Controller_U.INS_Out.r;

  /* DiscreteIntegrator: '<S12>/Discrete-Time Integrator' incorporates:
   *  Inport: '<Root>/FMS_Out'
   */
  if ((Controller_U.FMS_Out.reset != 0) ||
      (Controller_DW.DiscreteTimeIntegrator_PrevRe_l != 0)) {
    Controller_DW.DiscreteTimeIntegrator_DSTATE_k = Controller_ConstB.Constant_g;
    if (Controller_DW.DiscreteTimeIntegrator_DSTATE_k >= CONTROL_PARAM.R_I_MAX)
    {
      Controller_DW.DiscreteTimeIntegrator_DSTATE_k = CONTROL_PARAM.R_I_MAX;
    } else {
      if (Controller_DW.DiscreteTimeIntegrator_DSTATE_k <= CONTROL_PARAM.R_I_MIN)
      {
        Controller_DW.DiscreteTimeIntegrator_DSTATE_k = CONTROL_PARAM.R_I_MIN;
      }
    }
  }

  if (Controller_DW.DiscreteTimeIntegrator_DSTATE_k >= CONTROL_PARAM.R_I_MAX) {
    Controller_DW.DiscreteTimeIntegrator_DSTATE_k = CONTROL_PARAM.R_I_MAX;
  } else {
    if (Controller_DW.DiscreteTimeIntegrator_DSTATE_k <= CONTROL_PARAM.R_I_MIN)
    {
      Controller_DW.DiscreteTimeIntegrator_DSTATE_k = CONTROL_PARAM.R_I_MIN;
    }
  }

  /* DiscreteIntegrator: '<S14>/Discrete-Time Integrator1' incorporates:
   *  Inport: '<Root>/FMS_Out'
   */
  if (Controller_DW.DiscreteTimeIntegrator1_IC_LO_i != 0) {
    Controller_DW.DiscreteTimeIntegrator1_DSTAT_l = rtb_r_err;
  }

  if ((Controller_U.FMS_Out.reset != 0) ||
      (Controller_DW.DiscreteTimeIntegrator1_PrevR_n != 0)) {
    Controller_DW.DiscreteTimeIntegrator1_DSTAT_l = rtb_r_err;
  }

  /* Gain: '<S14>/Gain' incorporates:
   *  DiscreteIntegrator: '<S14>/Discrete-Time Integrator1'
   *  Sum: '<S14>/Sum5'
   */
  rtb_Gain_f = (rtb_r_err - Controller_DW.DiscreteTimeIntegrator1_DSTAT_l) *
    188.49556F;

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/FMS_Out'
   *  RelationalOperator: '<S3>/Compare'
   */
  if (Controller_U.FMS_Out.status == 3) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S4>/Constant'
     *  RelationalOperator: '<S4>/Compare'
     *  Switch: '<S23>/Switch'
     */
    if (Controller_U.FMS_Out.ctrl_mode == 1) {
      /* Outport: '<Root>/Control_Out' */
      for (i = 0; i < 16; i++) {
        Controller_Y.Control_Out.actuator_cmd[i] =
          Controller_U.FMS_Out.actuator_cmd[i];
      }
    } else {
      if (Controller_U.FMS_Out.reset > 0) {
        /* Switch: '<S23>/Switch' incorporates:
         *  Gain: '<S23>/Gain1'
         */
        rtb_Sign = 0.0F;
      } else {
        /* Switch: '<S23>/Switch' */
        rtb_Sign = rtb_Gain;
      }

      /* Product: '<S20>/Multiply' incorporates:
       *  Constant: '<S20>/gain1'
       */
      rtb_Sign *= CONTROL_PARAM.VEL_D;

      /* Saturate: '<S20>/Saturation' */
      if (rtb_Sign > CONTROL_PARAM.VEL_D_MAX) {
        rtb_Sign = CONTROL_PARAM.VEL_D_MAX;
      } else {
        if (rtb_Sign < CONTROL_PARAM.VEL_D_MIN) {
          rtb_Sign = CONTROL_PARAM.VEL_D_MIN;
        }
      }

      /* End of Saturate: '<S20>/Saturation' */

      /* Sum: '<S16>/Add' incorporates:
       *  Constant: '<S22>/gain1'
       *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
       *  Product: '<S22>/Multiply'
       */
      rtb_Sign += CONTROL_PARAM.VEL_P * rtb_u_err +
        Controller_DW.DiscreteTimeIntegrator_DSTATE;

      /* Saturate: '<S16>/Saturation' */
      if (rtb_Sign > 1.0F) {
        rtb_Sign = 1.0F;
      } else {
        if (rtb_Sign < -1.0F) {
          rtb_Sign = -1.0F;
        }
      }

      /* End of Saturate: '<S16>/Saturation' */

      /* Gain: '<S6>/Gain' */
      rtb_Sign = fmodf(floorf(500.0F * rtb_Sign), 65536.0F);

      /* Bias: '<S6>/Bias' incorporates:
       *  Gain: '<S6>/Gain'
       */
      rtb_thruster2 = (uint16_T)((rtb_Sign < 0.0F ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-rtb_Sign : (int32_T)(uint16_T)rtb_Sign) + 1500U);

      /* Saturate: '<S6>/Saturation' */
      if (rtb_thruster2 > 2000) {
        rtb_thruster2 = 2000U;
      } else {
        if (rtb_thruster2 < 1000) {
          rtb_thruster2 = 1000U;
        }
      }

      /* End of Saturate: '<S6>/Saturation' */

      /* Switch: '<S14>/Switch' incorporates:
       *  Gain: '<S14>/Gain1'
       */
      if (Controller_U.FMS_Out.reset > 0) {
        rtb_Sign = 0.0F;
      } else {
        rtb_Sign = rtb_Gain_f;
      }

      /* End of Switch: '<S14>/Switch' */

      /* Product: '<S11>/Multiply' incorporates:
       *  Constant: '<S11>/gain1'
       */
      rtb_Multiply_g = CONTROL_PARAM.R_D * rtb_Sign;

      /* Saturate: '<S11>/Saturation' */
      if (rtb_Multiply_g > CONTROL_PARAM.R_D_MAX) {
        rtb_Multiply_g = CONTROL_PARAM.R_D_MAX;
      } else {
        if (rtb_Multiply_g < CONTROL_PARAM.R_D_MIN) {
          rtb_Multiply_g = CONTROL_PARAM.R_D_MIN;
        }
      }

      /* End of Saturate: '<S11>/Saturation' */

      /* Sum: '<S10>/Add' incorporates:
       *  Constant: '<S13>/gain1'
       *  DiscreteIntegrator: '<S12>/Discrete-Time Integrator'
       *  Product: '<S13>/Multiply'
       */
      rtb_Multiply_g += CONTROL_PARAM.R_P * rtb_r_err +
        Controller_DW.DiscreteTimeIntegrator_DSTATE_k;

      /* Saturate: '<S10>/Saturation' */
      if (rtb_Multiply_g > 1.0F) {
        rtb_Multiply_g = 1.0F;
      } else {
        if (rtb_Multiply_g < -1.0F) {
          rtb_Multiply_g = -1.0F;
        }
      }

      /* End of Saturate: '<S10>/Saturation' */

      /* Signum: '<S7>/Sign' */
      if (Controller_U.FMS_Out.u_cmd < 0.0F) {
        rtb_Sign = -1.0F;
      } else if (Controller_U.FMS_Out.u_cmd > 0.0F) {
        rtb_Sign = 1.0F;
      } else {
        rtb_Sign = Controller_U.FMS_Out.u_cmd;
      }

      /* End of Signum: '<S7>/Sign' */

      /* Product: '<S7>/Multiply' */
      rtb_Multiply_g *= rtb_Sign;

      /* Gain: '<S6>/Gain1' */
      rtb_Sign = fmodf(floorf(250.0F * rtb_Multiply_g), 65536.0F);

      /* Bias: '<S6>/Bias1' incorporates:
       *  Gain: '<S6>/Gain1'
       */
      rtb_paddle2 = (uint16_T)((rtb_Sign < 0.0F ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-rtb_Sign : (int32_T)(uint16_T)rtb_Sign) + 1500U);

      /* Saturate: '<S6>/Saturation1' */
      if (rtb_paddle2 > 2000) {
        rtb_paddle2 = 2000U;
      } else {
        if (rtb_paddle2 < 1000) {
          rtb_paddle2 = 1000U;
        }
      }

      /* End of Saturate: '<S6>/Saturation1' */

      /* Outport: '<Root>/Control_Out' */
      Controller_Y.Control_Out.actuator_cmd[0] = rtb_thruster2;
      Controller_Y.Control_Out.actuator_cmd[1] = rtb_thruster2;
      Controller_Y.Control_Out.actuator_cmd[2] = rtb_paddle2;
      Controller_Y.Control_Out.actuator_cmd[3] = rtb_paddle2;
      for (i = 0; i < 12; i++) {
        Controller_Y.Control_Out.actuator_cmd[i + 4] = 0U;
      }
    }

    /* End of Switch: '<S1>/Switch1' */
  } else {
    /* Outport: '<Root>/Control_Out' */
    for (i = 0; i < 16; i++) {
      Controller_Y.Control_Out.actuator_cmd[i] =
        Controller_U.FMS_Out.actuator_cmd[i];
    }
  }

  /* End of Switch: '<S1>/Switch' */

  /* Outport: '<Root>/Control_Out' incorporates:
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator'
   */
  Controller_Y.Control_Out.timestamp =
    Controller_DW.DiscreteTimeIntegrator_DSTATE_b;

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S21>/gain1'
   *  Inport: '<Root>/FMS_Out'
   *  Product: '<S21>/Multiply'
   */
  Controller_DW.DiscreteTimeIntegrator_DSTATE += CONTROL_PARAM.VEL_I * rtb_u_err
    * 0.01F;
  if (Controller_DW.DiscreteTimeIntegrator_DSTATE >= CONTROL_PARAM.VEL_I_MAX) {
    Controller_DW.DiscreteTimeIntegrator_DSTATE = CONTROL_PARAM.VEL_I_MAX;
  } else {
    if (Controller_DW.DiscreteTimeIntegrator_DSTATE <= CONTROL_PARAM.VEL_I_MIN)
    {
      Controller_DW.DiscreteTimeIntegrator_DSTATE = CONTROL_PARAM.VEL_I_MIN;
    }
  }

  Controller_DW.DiscreteTimeIntegrator_PrevRese = (int8_T)
    (Controller_U.FMS_Out.reset > 0);

  /* End of Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S23>/Discrete-Time Integrator1' incorporates:
   *  Inport: '<Root>/FMS_Out'
   */
  Controller_DW.DiscreteTimeIntegrator1_IC_LOAD = 0U;
  Controller_DW.DiscreteTimeIntegrator1_DSTATE += 0.01F * rtb_Gain;
  Controller_DW.DiscreteTimeIntegrator1_PrevRes = (int8_T)
    (Controller_U.FMS_Out.reset > 0);

  /* Update for DiscreteIntegrator: '<S12>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S12>/gain1'
   *  Inport: '<Root>/FMS_Out'
   *  Product: '<S12>/Multiply'
   */
  Controller_DW.DiscreteTimeIntegrator_DSTATE_k += CONTROL_PARAM.R_I * rtb_r_err
    * 0.01F;
  if (Controller_DW.DiscreteTimeIntegrator_DSTATE_k >= CONTROL_PARAM.R_I_MAX) {
    Controller_DW.DiscreteTimeIntegrator_DSTATE_k = CONTROL_PARAM.R_I_MAX;
  } else {
    if (Controller_DW.DiscreteTimeIntegrator_DSTATE_k <= CONTROL_PARAM.R_I_MIN)
    {
      Controller_DW.DiscreteTimeIntegrator_DSTATE_k = CONTROL_PARAM.R_I_MIN;
    }
  }

  Controller_DW.DiscreteTimeIntegrator_PrevRe_l = (int8_T)
    (Controller_U.FMS_Out.reset > 0);

  /* End of Update for DiscreteIntegrator: '<S12>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S14>/Discrete-Time Integrator1' incorporates:
   *  Inport: '<Root>/FMS_Out'
   */
  Controller_DW.DiscreteTimeIntegrator1_IC_LO_i = 0U;
  Controller_DW.DiscreteTimeIntegrator1_DSTAT_l += 0.01F * rtb_Gain_f;
  Controller_DW.DiscreteTimeIntegrator1_PrevR_n = (int8_T)
    (Controller_U.FMS_Out.reset > 0);

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S5>/Constant'
   */
  Controller_DW.DiscreteTimeIntegrator_DSTATE_b += CONTROL_EXPORT.period;
}

/* Model initialize function */
void Controller_init(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Controller_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Controller_DW, 0,
                sizeof(DW_Controller_T));

  /* external inputs */
  (void)memset(&Controller_U, 0, sizeof(ExtU_Controller_T));

  /* external outputs */
  Controller_Y.Control_Out = Controller_rtZControl_Out_Bus;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  Controller_DW.DiscreteTimeIntegrator_DSTATE = Controller_ConstB.Constant;
  if (Controller_DW.DiscreteTimeIntegrator_DSTATE >= CONTROL_PARAM.VEL_I_MAX) {
    Controller_DW.DiscreteTimeIntegrator_DSTATE = CONTROL_PARAM.VEL_I_MAX;
  } else {
    if (Controller_DW.DiscreteTimeIntegrator_DSTATE <= CONTROL_PARAM.VEL_I_MIN)
    {
      Controller_DW.DiscreteTimeIntegrator_DSTATE = CONTROL_PARAM.VEL_I_MIN;
    }
  }

  Controller_DW.DiscreteTimeIntegrator_PrevRese = 0;

  /* End of InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */

  /* InitializeConditions for DiscreteIntegrator: '<S23>/Discrete-Time Integrator1' */
  Controller_DW.DiscreteTimeIntegrator1_IC_LOAD = 1U;
  Controller_DW.DiscreteTimeIntegrator1_PrevRes = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S12>/Discrete-Time Integrator' */
  Controller_DW.DiscreteTimeIntegrator_DSTATE_k = Controller_ConstB.Constant_g;
  if (Controller_DW.DiscreteTimeIntegrator_DSTATE_k >= CONTROL_PARAM.R_I_MAX) {
    Controller_DW.DiscreteTimeIntegrator_DSTATE_k = CONTROL_PARAM.R_I_MAX;
  } else {
    if (Controller_DW.DiscreteTimeIntegrator_DSTATE_k <= CONTROL_PARAM.R_I_MIN)
    {
      Controller_DW.DiscreteTimeIntegrator_DSTATE_k = CONTROL_PARAM.R_I_MIN;
    }
  }

  Controller_DW.DiscreteTimeIntegrator_PrevRe_l = 0;

  /* End of InitializeConditions for DiscreteIntegrator: '<S12>/Discrete-Time Integrator' */

  /* InitializeConditions for DiscreteIntegrator: '<S14>/Discrete-Time Integrator1' */
  Controller_DW.DiscreteTimeIntegrator1_IC_LO_i = 1U;
  Controller_DW.DiscreteTimeIntegrator1_PrevR_n = 0;
}

/* Model terminate function */
void Controller_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
