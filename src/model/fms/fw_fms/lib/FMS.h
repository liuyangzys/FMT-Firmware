/*
 * File: FMS.h
 *
 * Code generated for Simulink model 'FMS'.
 *
 * Model version                  : 1.1771
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jul  6 20:12:05 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FMS_h_
#define RTW_HEADER_FMS_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#include <stddef.h>
#ifndef FMS_COMMON_INCLUDES_
# define FMS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* FMS_COMMON_INCLUDES_ */

#include "FMS_types.h"
#include "arm_math.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S249>/Hold Control' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S252>/Delay' */
  uint8_T icLoad;                      /* '<S252>/Delay' */
} DW_HoldControl_FMS_T;

/* Block states (default storage) for system '<S249>/Move Control' */
typedef struct {
  real32_T Integrator1_DSTATE;         /* '<S256>/Integrator1' */
  real32_T Integrator_DSTATE;          /* '<S256>/Integrator' */
} DW_MoveControl_FMS_T;

/* Block states (default storage) for system '<S250>/Motion Status' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<S250>/Motion Status' */
  uint8_T is_active_c1_FMS;            /* '<S250>/Motion Status' */
  uint8_T is_c1_FMS;                   /* '<S250>/Motion Status' */
} DW_MotionStatus_FMS_T;

/* Block states (default storage) for system '<S259>/Hold Control' */
typedef struct {
  real32_T Delay_DSTATE[2];            /* '<S262>/Delay' */
  uint8_T icLoad;                      /* '<S262>/Delay' */
} DW_HoldControl_FMS_l_T;

/* Block states (default storage) for system '<S259>/Move Control' */
typedef struct {
  real32_T Integrator1_DSTATE[2];      /* '<S269>/Integrator1' */
  real32_T Integrator_DSTATE[2];       /* '<S269>/Integrator' */
} DW_MoveControl_FMS_d_T;

/* Block states (default storage) for system '<S260>/Motion State' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<S260>/Motion State' */
  uint8_T is_active_c2_FMS;            /* '<S260>/Motion State' */
  uint8_T is_c2_FMS;                   /* '<S260>/Motion State' */
} DW_MotionState_FMS_T;

/* Block states (default storage) for system '<S37>/Move Control' */
typedef struct {
  real32_T Integrator1_DSTATE;         /* '<S44>/Integrator1' */
  real32_T Integrator_DSTATE;          /* '<S44>/Integrator' */
} DW_MoveControl_FMS_g_T;

/* Block states (default storage) for system '<S38>/Motion Status' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<S38>/Motion Status' */
  uint8_T is_active_c17_FMS;           /* '<S38>/Motion Status' */
  uint8_T is_c17_FMS;                  /* '<S38>/Motion Status' */
} DW_MotionStatus_FMS_a_T;

/* Block signals (default storage) */
typedef struct {
  INS_Out_Bus BusConversion_InsertedFor_FMSSt;
  Commander_In_Bus Cmd_In;             /* '<Root>/FMS State Machine' */
  Pilot_Cmd_Bus BusConversion_InsertedFor_FMS_f;
  Pilot_Cmd_Bus pilot_cmd;             /* '<Root>/FMS State Machine' */
  real_T stick_val[4];                 /* '<Root>/FMS State Machine' */
  real_T lla[3];                       /* '<Root>/FMS State Machine' */
  real_T llo[2];                       /* '<Root>/FMS State Machine' */
  real_T href;                         /* '<Root>/FMS State Machine' */
  real_T psio;                         /* '<Root>/FMS State Machine' */
  real32_T xy_R[2];                    /* '<Root>/FMS State Machine' */
  real32_T DataTypeConversion[3];      /* '<S299>/Data Type Conversion' */
  real32_T Reshape[3];                 /* '<S300>/Reshape' */
  real32_T Merge;                      /* '<S58>/Merge' */
  real32_T Merge_p;                    /* '<S72>/Merge' */
  real32_T Merge_l;                    /* '<S37>/Merge' */
  real32_T Merge_n[2];                 /* '<S144>/Merge' */
  real32_T Merge_e;                    /* '<S134>/Merge' */
  real32_T Merge_o[2];                 /* '<S205>/Merge' */
  real32_T Merge_ey;                   /* '<S183>/Merge' */
  real32_T Merge_n1;                   /* '<S193>/Merge' */
  real32_T Merge_m[2];                 /* '<S259>/Merge' */
  real32_T Merge_mu;                   /* '<S249>/Merge' */
  VehicleState state;                  /* '<Root>/FMS State Machine' */
  PilotMode target_mode;               /* '<Root>/SafeMode' */
  FMS_Cmd Switch1;                     /* '<S6>/Switch1' */
  uint8_T wp_consume;                  /* '<Root>/FMS State Machine' */
  uint8_T wp_index;                    /* '<Root>/FMS State Machine' */
  boolean_T Compare;                   /* '<S312>/Compare' */
} B_FMS_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T prep_takeoff;                 /* '<Root>/FMS State Machine' */
  real_T llo[2];                       /* '<Root>/FMS State Machine' */
  real_T prep_mission_takeoff;         /* '<Root>/FMS State Machine' */
  Msg_FMS_Cmd Msg_FMS_Cmd_c[11];       /* '<Root>/FMS State Machine' */
  Queue_FMS_Cmd Queue_FMS_Cmd_p;       /* '<Root>/FMS State Machine' */
  void* M_msgInterface;                /* '<Root>/FMS State Machine' */
  void* M_msgHandle;                   /* '<Root>/FMS State Machine' */
  void* M_msgDataPtr;                  /* '<Root>/FMS State Machine' */
  real32_T Integrator1_DSTATE;         /* '<S70>/Integrator1' */
  real32_T Integrator_DSTATE;          /* '<S70>/Integrator' */
  real32_T Integrator1_DSTATE_c;       /* '<S81>/Integrator1' */
  real32_T Integrator_DSTATE_h;        /* '<S81>/Integrator' */
  real32_T Delay_DSTATE;               /* '<S75>/Delay' */
  real32_T Integrator1_DSTATE_f;       /* '<S49>/Integrator1' */
  real32_T Integrator1_DSTATE_i;       /* '<S52>/Integrator1' */
  real32_T Integrator_DSTATE_o;        /* '<S52>/Integrator' */
  real32_T Integrator_DSTATE_b;        /* '<S49>/Integrator' */
  real32_T Integrator1_DSTATE_j;       /* '<S92>/Integrator1' */
  real32_T Integrator_DSTATE_c;        /* '<S92>/Integrator' */
  real32_T Integrator1_DSTATE_jt;      /* '<S93>/Integrator1' */
  real32_T Integrator1_DSTATE_m;       /* '<S97>/Integrator1' */
  real32_T Integrator_DSTATE_f;        /* '<S97>/Integrator' */
  real32_T Integrator_DSTATE_cq;       /* '<S93>/Integrator' */
  real32_T Delay_DSTATE_p[2];          /* '<S127>/Delay' */
  real32_T l1_heading;                 /* '<S171>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE_h;             /* '<S107>/Delay' */
  real32_T Integrator1_DSTATE_p;       /* '<S110>/Integrator1' */
  real32_T Integrator_DSTATE_i;        /* '<S110>/Integrator' */
  real32_T Integrator1_DSTATE_k;       /* '<S202>/Integrator1' */
  real32_T Integrator_DSTATE_h2;       /* '<S202>/Integrator' */
  real32_T Delay_DSTATE_g;             /* '<S196>/Delay' */
  real32_T Delay_DSTATE_e[2];          /* '<S245>/Delay' */
  real32_T l1_heading_p;               /* '<S286>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE_px[2];         /* '<S225>/Delay' */
  real32_T Delay_DSTATE_a;             /* '<S226>/Delay' */
  real32_T Integrator1_DSTATE_e;       /* '<S229>/Integrator1' */
  real32_T Integrator_DSTATE_bs;       /* '<S229>/Integrator' */
  uint32_T DiscreteTimeIntegrator_DSTATE;/* '<S298>/Discrete-Time Integrator' */
  uint32_T DelayInput1_DSTATE;         /* '<S9>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator1_DSTATE;/* '<S5>/Discrete-Time Integrator1' */
  uint32_T DelayInput1_DSTATE_f;       /* '<S14>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_p;       /* '<S11>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_i;       /* '<S10>/Delay Input1' */
  PilotMode Delay_DSTATE_c;            /* '<S7>/Delay' */
  real32_T home[3];                    /* '<Root>/FMS State Machine' */
  real32_T stick_val[4];               /* '<Root>/FMS State Machine' */
  int32_T sfEvent;                     /* '<Root>/FMS State Machine' */
  int32_T chartAbsoluteTimeCounter;    /* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1; /* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1_j;/* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1_k;/* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_2; /* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1_c;/* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1_n;/* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_2_a;/* '<Root>/FMS State Machine' */
  int32_T M_qId;                       /* '<Root>/FMS State Machine' */
  uint32_T mission_timestamp_prev;     /* '<Root>/FMS State Machine' */
  uint32_T mission_timestamp_start;    /* '<Root>/FMS State Machine' */
  FMS_Cmd M;                           /* '<Root>/FMS State Machine' */
  FMS_Cmd save_cmd;                    /* '<Root>/FMS State Machine' */
  FMS_Cmd cmd_prev;                    /* '<Root>/FMS State Machine' */
  FMS_Cmd cmd_start;                   /* '<Root>/FMS State Machine' */
  FMS_Cmd M_msgData;                   /* '<Root>/FMS State Machine' */
  FMS_Cmd M_msgReservedData;           /* '<Root>/FMS State Machine' */
  PilotMode mode_prev;                 /* '<Root>/FMS State Machine' */
  PilotMode mode_start;                /* '<Root>/FMS State Machine' */
  uint16_T nav_cmd;                    /* '<Root>/FMS State Machine' */
  uint16_T temporalCounter_i1;         /* '<Root>/FMS State Machine' */
  uint16_T temporalCounter_i1_i;       /* '<S73>/Motion State' */
  uint8_T DelayInput1_DSTATE_pe;       /* '<S102>/Delay Input1' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S15>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_b; /* '<S17>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_f; /* '<S21>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_l; /* '<S72>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_ba;/* '<S58>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_m; /* '<S37>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_i; /* '<S22>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_a; /* '<S144>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_e; /* '<S134>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_at;/* '<S24>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_p; /* '<S205>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_pp;/* '<S183>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_bn;/* '<S193>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_k; /* '<S259>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_g; /* '<S249>/Switch Case' */
  uint8_T is_active_c3_FMS;            /* '<Root>/SafeMode' */
  uint8_T is_c3_FMS;                   /* '<Root>/SafeMode' */
  uint8_T is_active_c11_FMS;           /* '<Root>/FMS State Machine' */
  uint8_T is_Command_Listener;         /* '<Root>/FMS State Machine' */
  uint8_T is_active_Command_Listener;  /* '<Root>/FMS State Machine' */
  uint8_T is_Vehicle;                  /* '<Root>/FMS State Machine' */
  uint8_T is_active_Vehicle;           /* '<Root>/FMS State Machine' */
  uint8_T is_Arm;                      /* '<Root>/FMS State Machine' */
  uint8_T is_SubMode;                  /* '<Root>/FMS State Machine' */
  uint8_T is_Auto;                     /* '<Root>/FMS State Machine' */
  uint8_T is_Mission;                  /* '<Root>/FMS State Machine' */
  uint8_T is_Assist;                   /* '<Root>/FMS State Machine' */
  uint8_T is_Manual;                   /* '<Root>/FMS State Machine' */
  uint8_T is_Combo_Stick;              /* '<Root>/FMS State Machine' */
  uint8_T is_active_Combo_Stick;       /* '<Root>/FMS State Machine' */
  uint8_T is_active_c16_FMS;           /* '<S73>/Motion State' */
  uint8_T is_c16_FMS;                  /* '<S73>/Motion State' */
  uint8_T icLoad;                      /* '<S75>/Delay' */
  uint8_T icLoad_i;                    /* '<S127>/Delay' */
  uint8_T icLoad_k;                    /* '<S107>/Delay' */
  uint8_T Integrator1_IC_LOADING;      /* '<S110>/Integrator1' */
  uint8_T is_active_c15_FMS;           /* '<S194>/Motion State' */
  uint8_T is_c15_FMS;                  /* '<S194>/Motion State' */
  uint8_T temporalCounter_i1_a;        /* '<S194>/Motion State' */
  uint8_T icLoad_g;                    /* '<S196>/Delay' */
  uint8_T icLoad_o;                    /* '<S245>/Delay' */
  uint8_T icLoad_c;                    /* '<S225>/Delay' */
  uint8_T icLoad_j;                    /* '<S226>/Delay' */
  uint8_T Integrator1_IC_LOADING_j;    /* '<S229>/Integrator1' */
  boolean_T valid_cmd;                 /* '<Root>/FMS State Machine' */
  boolean_T bl;                        /* '<Root>/FMS State Machine' */
  boolean_T br;                        /* '<Root>/FMS State Machine' */
  boolean_T M_isValid;                 /* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1_d;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1_k;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_2;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1_d0;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1_h;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_2_g;/* '<Root>/FMS State Machine' */
  DW_MotionStatus_FMS_a_T sf_MotionStatus_jn;/* '<S59>/Motion Status' */
  DW_MoveControl_FMS_g_T MoveControl_g;/* '<S58>/Move Control' */
  DW_HoldControl_FMS_T HoldControl_l;  /* '<S58>/Hold Control' */
  DW_MotionStatus_FMS_a_T sf_MotionStatus_b;/* '<S38>/Motion Status' */
  DW_MoveControl_FMS_g_T MoveControl_l;/* '<S37>/Move Control' */
  DW_HoldControl_FMS_T HoldControl_k2; /* '<S37>/Hold Control' */
  DW_MotionState_FMS_T sf_MotionState_n;/* '<S145>/Motion State' */
  DW_MoveControl_FMS_d_T MoveControl_c;/* '<S144>/Move Control' */
  DW_HoldControl_FMS_l_T HoldControl_d;/* '<S144>/Hold Control' */
  DW_MotionStatus_FMS_T sf_MotionStatus_jt;/* '<S135>/Motion Status' */
  DW_MoveControl_FMS_T MoveControl_m;  /* '<S134>/Move Control' */
  DW_HoldControl_FMS_T HoldControl_a;  /* '<S134>/Hold Control' */
  DW_MotionState_FMS_T sf_MotionState_g;/* '<S206>/Motion State' */
  DW_MoveControl_FMS_d_T MoveControl_i;/* '<S205>/Move Control' */
  DW_HoldControl_FMS_l_T HoldControl_f;/* '<S205>/Hold Control' */
  DW_MotionStatus_FMS_T sf_MotionStatus_j;/* '<S184>/Motion Status' */
  DW_MoveControl_FMS_T MoveControl_n;  /* '<S183>/Move Control' */
  DW_HoldControl_FMS_T HoldControl_n;  /* '<S183>/Hold Control' */
  DW_MotionState_FMS_T sf_MotionState; /* '<S260>/Motion State' */
  DW_MoveControl_FMS_d_T MoveControl_o;/* '<S259>/Move Control' */
  DW_HoldControl_FMS_l_T HoldControl_k;/* '<S259>/Hold Control' */
  DW_MotionStatus_FMS_T sf_MotionStatus;/* '<S250>/Motion Status' */
  DW_MoveControl_FMS_T MoveControl;    /* '<S249>/Move Control' */
  DW_HoldControl_FMS_T HoldControl;    /* '<S249>/Hold Control' */
} DW_FMS_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Mission_SubSystem_Reset_ZCE;/* '<S99>/Mission_SubSystem' */
} PrevZCX_FMS_T;

/* Invariant block signals for system '<S249>/Move Control' */
typedef struct {
  const real32_T Square;               /* '<S257>/Square' */
  const real32_T d;                    /* '<S257>/Multiply' */
  const real32_T Gain4;                /* '<S257>/Gain4' */
} ConstB_MoveControl_FMS_T;

/* Invariant block signals for system '<S259>/Hold Control' */
typedef struct {
  const real32_T VectorConcatenate3[3];/* '<S266>/Vector Concatenate3' */
} ConstB_HoldControl_FMS_k_T;

/* Invariant block signals for system '<S259>/Move Control' */
typedef struct {
  const real32_T Square;               /* '<S270>/Square' */
  const real32_T d;                    /* '<S270>/Multiply' */
  const real32_T Gain4;                /* '<S270>/Gain4' */
} ConstB_MoveControl_FMS_k_T;

/* Invariant block signals for system '<S24>/Unknown' */
typedef struct {
  const uint8_T DataTypeConversion;    /* '<S179>/Data Type Conversion' */
  const uint8_T DataTypeConversion1;   /* '<S179>/Data Type Conversion1' */
} ConstB_Unknown_FMS_T;

/* Invariant block signals for system '<S37>/Move Control' */
typedef struct {
  const real32_T Square;               /* '<S45>/Square' */
  const real32_T d;                    /* '<S45>/Multiply' */
  const real32_T Gain4;                /* '<S45>/Gain4' */
} ConstB_MoveControl_FMS_p_T;

/* Invariant block signals for system '<S3>/Vehicle.Arm.Auto.Mission.LLA2FLAT' */
typedef struct {
  const real_T Sum;                    /* '<S303>/Sum' */
  const real_T ff;                     /* '<S303>/Multiply3' */
  const real_T Sum4;                   /* '<S303>/Sum4' */
} ConstB_VehicleArmAutoMissionL_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T VectorConcatenate3[3];/* '<S86>/Vector Concatenate3' */
  const real32_T Square;               /* '<S71>/Square' */
  const real32_T d;                    /* '<S71>/Multiply' */
  const real32_T Gain4;                /* '<S71>/Gain4' */
  const real32_T Square_k;             /* '<S82>/Square' */
  const real32_T d_j;                  /* '<S82>/Multiply' */
  const real32_T Gain4_k;              /* '<S82>/Gain4' */
  const real32_T VectorConcatenate3_p[3];/* '<S79>/Vector Concatenate3' */
  const real32_T Square_i;             /* '<S53>/Square' */
  const real32_T d_o;                  /* '<S53>/Multiply' */
  const real32_T Gain4_l;              /* '<S53>/Gain4' */
  const real32_T Square_g;             /* '<S50>/Square' */
  const real32_T d_e;                  /* '<S50>/Multiply' */
  const real32_T Gain4_d;              /* '<S50>/Gain4' */
  const real32_T Square_m;             /* '<S94>/Square' */
  const real32_T d_d;                  /* '<S94>/Multiply' */
  const real32_T Gain4_n;              /* '<S94>/Gain4' */
  const real32_T Square_f;             /* '<S98>/Square' */
  const real32_T d_d1;                 /* '<S98>/Multiply' */
  const real32_T Gain4_dh;             /* '<S98>/Gain4' */
  const real32_T Square_n;             /* '<S95>/Square' */
  const real32_T d_o2;                 /* '<S95>/Multiply' */
  const real32_T Gain4_n3;             /* '<S95>/Gain4' */
  const real32_T VectorConcatenate3_e[3];/* '<S174>/Vector Concatenate3' */
  const real32_T TmpSignalConversionAtMathFu[2];
  const real32_T MathFunction[2];      /* '<S120>/Math Function' */
  const real32_T SumofElements;        /* '<S120>/Sum of Elements' */
  const real32_T MathFunction1;        /* '<S120>/Math Function1' */
  const real32_T Product[2];           /* '<S120>/Product' */
  const real32_T Switch[3];            /* '<S120>/Switch' */
  const real32_T Divide[2];            /* '<S120>/Divide' */
  const real32_T Square_gd;            /* '<S116>/Square' */
  const real32_T d_jk;                 /* '<S116>/Multiply' */
  const real32_T Gain4_c;              /* '<S116>/Gain4' */
  const real32_T Square_nz;            /* '<S203>/Square' */
  const real32_T d_jz;                 /* '<S203>/Multiply' */
  const real32_T Gain4_cw;             /* '<S203>/Gain4' */
  const real32_T VectorConcatenate3_k[3];/* '<S289>/Vector Concatenate3' */
  const real32_T TmpSignalConversionAtMath_a[2];
  const real32_T MathFunction_n[2];    /* '<S239>/Math Function' */
  const real32_T SumofElements_p;      /* '<S239>/Sum of Elements' */
  const real32_T MathFunction1_m;      /* '<S239>/Math Function1' */
  const real32_T Product_c[2];         /* '<S239>/Product' */
  const real32_T Switch_h[3];          /* '<S239>/Switch' */
  const real32_T Divide_d[2];          /* '<S239>/Divide' */
  const real32_T Square_kq;            /* '<S235>/Square' */
  const real32_T d_l;                  /* '<S235>/Multiply' */
  const real32_T Gain4_np;             /* '<S235>/Gain4' */
  const real32_T VectorConcatenate3_f[3];/* '<S222>/Vector Concatenate3' */
  const real32_T VectorConcatenate3_fb[3];/* '<S297>/Vector Concatenate3' */
  const uint8_T DataTypeConversion;    /* '<S23>/Data Type Conversion' */
  const uint8_T DataTypeConversion1;   /* '<S23>/Data Type Conversion1' */
  const uint8_T DataTypeConversion_b;  /* '<S28>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_o; /* '<S28>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2;   /* '<S28>/Data Type Conversion2' */
  const uint8_T DataTypeConversion1_d; /* '<S27>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_n; /* '<S27>/Data Type Conversion2' */
  const uint8_T DataTypeConversion3;   /* '<S27>/Data Type Conversion3' */
  const uint8_T DataTypeConversion_ba; /* '<S29>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_k; /* '<S29>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_o; /* '<S29>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_j;  /* '<S26>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_do;/* '<S26>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_b; /* '<S26>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_l;  /* '<S103>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_b; /* '<S103>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_by;/* '<S103>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_a;  /* '<S100>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_n; /* '<S100>/Data Type Conversion1' */
  const uint8_T DataTypeConversion_g;  /* '<S175>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_i; /* '<S175>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_j; /* '<S175>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_o;  /* '<S177>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_m; /* '<S177>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_p; /* '<S177>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_c;  /* '<S176>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_h; /* '<S176>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_m; /* '<S176>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_ld; /* '<S178>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_dh;/* '<S178>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_d; /* '<S178>/Data Type Conversion2' */
  const uint8_T DataTypeConversion2_h; /* '<S20>/Data Type Conversion2' */
  const uint8_T DataTypeConversion1_f; /* '<S20>/Data Type Conversion1' */
  const uint8_T DataTypeConversion_m;  /* '<S19>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_a; /* '<S19>/Data Type Conversion1' */
  ConstB_VehicleArmAutoMissionL_T VehicleArmAutoMissionLLA2FLAT;/* '<S3>/Vehicle.Arm.Auto.Mission.LLA2FLAT' */
  ConstB_Unknown_FMS_T Unknown;        /* '<S17>/Unknown' */
  ConstB_Unknown_FMS_T Unknown_i;      /* '<S21>/Unknown' */
  ConstB_MoveControl_FMS_p_T MoveControl_g;/* '<S58>/Move Control' */
  ConstB_MoveControl_FMS_p_T MoveControl_l;/* '<S37>/Move Control' */
  ConstB_Unknown_FMS_T Unknown_d;      /* '<S22>/Unknown' */
  ConstB_MoveControl_FMS_k_T MoveControl_c;/* '<S144>/Move Control' */
  ConstB_HoldControl_FMS_k_T HoldControl_d;/* '<S144>/Hold Control' */
  ConstB_MoveControl_FMS_T MoveControl_m;/* '<S134>/Move Control' */
  ConstB_Unknown_FMS_T Unknown_g;      /* '<S24>/Unknown' */
  ConstB_MoveControl_FMS_k_T MoveControl_i;/* '<S205>/Move Control' */
  ConstB_HoldControl_FMS_k_T HoldControl_f;/* '<S205>/Hold Control' */
  ConstB_MoveControl_FMS_T MoveControl_n;/* '<S183>/Move Control' */
  ConstB_MoveControl_FMS_k_T MoveControl_o;/* '<S259>/Move Control' */
  ConstB_HoldControl_FMS_k_T HoldControl_k;/* '<S259>/Hold Control' */
  ConstB_MoveControl_FMS_T MoveControl;/* '<S249>/Move Control' */
} ConstB_FMS_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  Pilot_Cmd_Bus Pilot_Cmd;             /* '<Root>/Pilot_Cmd' */
  GCS_Cmd_Bus GCS_Cmd;                 /* '<Root>/GCS_Cmd' */
  Auto_Cmd_Bus Auto_Cmd;               /* '<Root>/Auto_Cmd' */
  Mission_Data_Bus Mission_Data;       /* '<Root>/Mission_Data' */
  INS_Out_Bus INS_Out;                 /* '<Root>/INS_Out' */
  Control_Out_Bus Control_Out;         /* '<Root>/Control_Out' */
} ExtU_FMS_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  FMS_Out_Bus FMS_Out;                 /* '<Root>/FMS_Out' */
} ExtY_FMS_T;

/* Real-time Model Data Structure */
struct tag_RTM_FMS_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_FMS_T FMS_B;

/* Block states (default storage) */
extern DW_FMS_T FMS_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_FMS_T FMS_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FMS_T FMS_Y;

/* External data declarations for dependent source files */
extern const FMS_Out_Bus FMS_rtZFMS_Out_Bus;/* FMS_Out_Bus ground */
extern const ConstB_FMS_T FMS_ConstB;  /* constant block i/o */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern struct_MAdQlsLl3QGNtHbmATxiyG FMS_PARAM;/* Variable: FMS_PARAM
                                                * Referenced by:
                                                *   '<Root>/ACCEPT_R'
                                                *   '<S300>/Constant'
                                                *   '<S19>/Constant6'
                                                *   '<S20>/Constant6'
                                                *   '<S177>/L1'
                                                *   '<S33>/Gain'
                                                *   '<S35>/Gain'
                                                *   '<S36>/Gain1'
                                                *   '<S54>/Gain'
                                                *   '<S56>/Gain1'
                                                *   '<S87>/Gain'
                                                *   '<S87>/Gain1'
                                                *   '<S88>/Gain1'
                                                *   '<S103>/L1'
                                                *   '<S218>/Saturation1'
                                                *   '<S291>/Gain2'
                                                *   '<S291>/Saturation1'
                                                *   '<S37>/Saturation1'
                                                *   '<S48>/Dead Zone'
                                                *   '<S48>/Gain'
                                                *   '<S51>/Dead Zone'
                                                *   '<S51>/Gain'
                                                *   '<S58>/Saturation1'
                                                *   '<S69>/Dead Zone'
                                                *   '<S69>/Gain'
                                                *   '<S72>/Saturation1'
                                                *   '<S90>/Dead Zone'
                                                *   '<S90>/Gain'
                                                *   '<S91>/Dead Zone'
                                                *   '<S91>/Gain'
                                                *   '<S96>/Dead Zone'
                                                *   '<S96>/Gain'
                                                *   '<S183>/Saturation1'
                                                *   '<S193>/Saturation'
                                                *   '<S205>/Saturation1'
                                                *   '<S219>/Gain2'
                                                *   '<S241>/vel'
                                                *   '<S241>/Saturation'
                                                *   '<S241>/Switch'
                                                *   '<S40>/Gain2'
                                                *   '<S41>/Gain1'
                                                *   '<S46>/Constant'
                                                *   '<S61>/Gain2'
                                                *   '<S62>/Gain1'
                                                *   '<S67>/Constant'
                                                *   '<S75>/Gain2'
                                                *   '<S76>/Gain6'
                                                *   '<S83>/Constant'
                                                *   '<S122>/Gain'
                                                *   '<S122>/Saturation1'
                                                *   '<S123>/vel'
                                                *   '<S123>/Saturation'
                                                *   '<S123>/Switch'
                                                *   '<S186>/Gain2'
                                                *   '<S187>/Gain1'
                                                *   '<S196>/Gain2'
                                                *   '<S197>/Gain1'
                                                *   '<S208>/Gain2'
                                                *   '<S209>/Gain6'
                                                *   '<S228>/Gain2'
                                                *   '<S228>/Saturation'
                                                *   '<S229>/Integrator'
                                                *   '<S43>/Dead Zone'
                                                *   '<S43>/Gain'
                                                *   '<S64>/Dead Zone'
                                                *   '<S64>/Gain'
                                                *   '<S80>/Dead Zone'
                                                *   '<S80>/Gain'
                                                *   '<S109>/Gain2'
                                                *   '<S109>/Saturation'
                                                *   '<S110>/Integrator'
                                                *   '<S189>/Dead Zone'
                                                *   '<S189>/Gain'
                                                *   '<S201>/Dead Zone'
                                                *   '<S201>/Gain'
                                                *   '<S213>/Dead Zone'
                                                *   '<S213>/Gain'
                                                *   '<S214>/Dead Zone'
                                                *   '<S214>/Gain'
                                                *   '<S249>/Saturation1'
                                                *   '<S259>/Saturation1'
                                                *   '<S134>/Saturation1'
                                                *   '<S144>/Saturation1'
                                                *   '<S252>/Gain2'
                                                *   '<S253>/Gain1'
                                                *   '<S262>/Gain2'
                                                *   '<S263>/Gain6'
                                                *   '<S137>/Gain2'
                                                *   '<S138>/Gain1'
                                                *   '<S147>/Gain2'
                                                *   '<S148>/Gain6'
                                                *   '<S255>/Dead Zone'
                                                *   '<S255>/Gain'
                                                *   '<S267>/Dead Zone'
                                                *   '<S267>/Gain'
                                                *   '<S268>/Dead Zone'
                                                *   '<S268>/Gain'
                                                *   '<S140>/Dead Zone'
                                                *   '<S140>/Gain'
                                                *   '<S152>/Dead Zone'
                                                *   '<S152>/Gain'
                                                *   '<S153>/Dead Zone'
                                                *   '<S153>/Gain'
                                                */
extern struct_i6HyuFQRjfkj8sSCv2bg5D FMS_EXPORT;/* Variable: FMS_EXPORT
                                                 * Referenced by:
                                                 *   '<S5>/Constant1'
                                                 *   '<S298>/Constant'
                                                 */

/* Model entry point functions */
extern void FMS_init(void);
extern void FMS_step(void);
extern void FMS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FMS_T *const FMS_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S120>/Data Type Duplicate' : Unused code path elimination
 * Block '<S121>/Data Type Duplicate' : Unused code path elimination
 * Block '<S168>/Data Type Duplicate' : Unused code path elimination
 * Block '<S169>/Data Type Duplicate' : Unused code path elimination
 * Block '<S165>/Data Type Duplicate' : Unused code path elimination
 * Block '<S166>/Data Type Duplicate' : Unused code path elimination
 * Block '<S172>/Data Type Duplicate' : Unused code path elimination
 * Block '<S239>/Data Type Duplicate' : Unused code path elimination
 * Block '<S240>/Data Type Duplicate' : Unused code path elimination
 * Block '<S283>/Data Type Duplicate' : Unused code path elimination
 * Block '<S284>/Data Type Duplicate' : Unused code path elimination
 * Block '<S280>/Data Type Duplicate' : Unused code path elimination
 * Block '<S281>/Data Type Duplicate' : Unused code path elimination
 * Block '<S287>/Data Type Duplicate' : Unused code path elimination
 * Block '<S125>/Reshape' : Reshape block reduction
 * Block '<S106>/Reshape' : Reshape block reduction
 * Block '<S106>/Reshape1' : Reshape block reduction
 * Block '<S106>/Reshape2' : Reshape block reduction
 * Block '<S176>/Reshape' : Reshape block reduction
 * Block '<S243>/Reshape' : Reshape block reduction
 * Block '<S225>/Reshape' : Reshape block reduction
 * Block '<S225>/Reshape1' : Reshape block reduction
 * Block '<S225>/Reshape2' : Reshape block reduction
 * Block '<S296>/Reshape' : Reshape block reduction
 * Block '<S298>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S16>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S16>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S16>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S16>/Signal Copy6' : Eliminate redundant signal conversion block
 * Block '<S299>/Signal Conversion' : Eliminate redundant signal conversion block
 */

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
 * '<Root>' : 'FMS'
 * '<S1>'   : 'FMS/CommandProcess'
 * '<S2>'   : 'FMS/FMS Commander'
 * '<S3>'   : 'FMS/FMS State Machine'
 * '<S4>'   : 'FMS/SafeMode'
 * '<S5>'   : 'FMS/CommandProcess/Check Valid'
 * '<S6>'   : 'FMS/CommandProcess/Command Routing'
 * '<S7>'   : 'FMS/CommandProcess/Mode Routing'
 * '<S8>'   : 'FMS/CommandProcess/Check Valid/Compare To Constant1'
 * '<S9>'   : 'FMS/CommandProcess/Check Valid/Detect Change1'
 * '<S10>'  : 'FMS/CommandProcess/Command Routing/Detect Change3'
 * '<S11>'  : 'FMS/CommandProcess/Command Routing/Detect Change4'
 * '<S12>'  : 'FMS/CommandProcess/Mode Routing/Compare To Zero'
 * '<S13>'  : 'FMS/CommandProcess/Mode Routing/Compare To Zero1'
 * '<S14>'  : 'FMS/CommandProcess/Mode Routing/Detect Change'
 * '<S15>'  : 'FMS/FMS Commander/Commander'
 * '<S16>'  : 'FMS/FMS Commander/FMS_Input'
 * '<S17>'  : 'FMS/FMS Commander/Commander/Arm'
 * '<S18>'  : 'FMS/FMS Commander/Commander/Bus_Constructor'
 * '<S19>'  : 'FMS/FMS Commander/Commander/Disarm'
 * '<S20>'  : 'FMS/FMS Commander/Commander/Standby'
 * '<S21>'  : 'FMS/FMS Commander/Commander/Arm/Assist'
 * '<S22>'  : 'FMS/FMS Commander/Commander/Arm/Auto'
 * '<S23>'  : 'FMS/FMS Commander/Commander/Arm/Manual'
 * '<S24>'  : 'FMS/FMS Commander/Commander/Arm/SubMode'
 * '<S25>'  : 'FMS/FMS Commander/Commander/Arm/Unknown'
 * '<S26>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Acro'
 * '<S27>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude'
 * '<S28>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position'
 * '<S29>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize'
 * '<S30>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Unknown'
 * '<S31>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Acro/Angular Rate Command'
 * '<S32>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Acro/Throttle Command'
 * '<S33>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Airspeed Command'
 * '<S34>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command'
 * '<S35>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Attitude Command'
 * '<S36>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Heading Command'
 * '<S37>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Controller'
 * '<S38>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Detect Movement'
 * '<S39>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Controller/Brake Control'
 * '<S40>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Controller/Hold Control'
 * '<S41>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Controller/Move Control'
 * '<S42>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Controller/Hold Control/Bus_Selection'
 * '<S43>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Controller/Move Control/DeadZone'
 * '<S44>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Controller/Move Control/TD1'
 * '<S45>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Controller/Move Control/TD1/fhan '
 * '<S46>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Detect Movement/Compare To Constant'
 * '<S47>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Altitude Command/Detect Movement/Motion Status'
 * '<S48>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Attitude Command/DeadZone'
 * '<S49>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Attitude Command/Phi_CMD_TD'
 * '<S50>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Attitude Command/Phi_CMD_TD/fhan '
 * '<S51>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Heading Command/DeadZone'
 * '<S52>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Heading Command/TD'
 * '<S53>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Altitude/Heading Command/TD/fhan '
 * '<S54>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Airspeed Command'
 * '<S55>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command'
 * '<S56>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Heading Command'
 * '<S57>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command'
 * '<S58>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Controller'
 * '<S59>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Detect Movement'
 * '<S60>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Controller/Brake Control'
 * '<S61>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Controller/Hold Control'
 * '<S62>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Controller/Move Control'
 * '<S63>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Controller/Hold Control/Bus_Selection'
 * '<S64>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Controller/Move Control/DeadZone'
 * '<S65>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Controller/Move Control/TD1'
 * '<S66>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Controller/Move Control/TD1/fhan '
 * '<S67>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Detect Movement/Compare To Constant'
 * '<S68>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Altitude Command/Detect Movement/Motion Status'
 * '<S69>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Heading Command/DeadZone'
 * '<S70>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Heading Command/TD'
 * '<S71>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Heading Command/TD/fhan '
 * '<S72>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller'
 * '<S73>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Detect Movement'
 * '<S74>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Brake Control'
 * '<S75>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Hold Control'
 * '<S76>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Move Control'
 * '<S77>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Hold Control/Bus_Selection'
 * '<S78>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Hold Control/Psi To DCM'
 * '<S79>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Hold Control/Psi To DCM/Rotation Matrix Z'
 * '<S80>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Move Control/DeadZone1'
 * '<S81>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Move Control/TD'
 * '<S82>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Controller/Move Control/TD/fhan '
 * '<S83>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Detect Movement/Compare To Constant'
 * '<S84>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Detect Movement/Motion State'
 * '<S85>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Detect Movement/Psi To DCM'
 * '<S86>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Position/Position Command/Detect Movement/Psi To DCM/Rotation Matrix Z'
 * '<S87>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Attitude Command'
 * '<S88>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Heading Command'
 * '<S89>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Throttle Command'
 * '<S90>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Attitude Command/DeadZone'
 * '<S91>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Attitude Command/DeadZone2'
 * '<S92>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Attitude Command/Phi_CMD_TD'
 * '<S93>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Attitude Command/Theta_CMD_TD'
 * '<S94>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Attitude Command/Phi_CMD_TD/fhan '
 * '<S95>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Attitude Command/Theta_CMD_TD/fhan '
 * '<S96>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Heading Command/DeadZone'
 * '<S97>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Heading Command/TD'
 * '<S98>'  : 'FMS/FMS Commander/Commander/Arm/Assist/Stabilize/Heading Command/TD/fhan '
 * '<S99>'  : 'FMS/FMS Commander/Commander/Arm/Auto/Mission'
 * '<S100>' : 'FMS/FMS Commander/Commander/Arm/Auto/Offboard'
 * '<S101>' : 'FMS/FMS Commander/Commander/Arm/Auto/Unknown'
 * '<S102>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Detect Change'
 * '<S103>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem'
 * '<S104>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander'
 * '<S105>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander'
 * '<S106>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Way Points'
 * '<S107>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control'
 * '<S108>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Included Angle'
 * '<S109>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/Heading Control'
 * '<S110>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/TD'
 * '<S111>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/psi_saturation'
 * '<S112>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/psi_saturation1'
 * '<S113>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/Heading Control/Bus_Selection'
 * '<S114>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/Heading Control/psi_saturation'
 * '<S115>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/Heading Control/psi_saturation/Compare To Constant'
 * '<S116>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/TD/fhan '
 * '<S117>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/psi_saturation/Compare To Constant'
 * '<S118>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Heading Control/psi_saturation1/Compare To Constant'
 * '<S119>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Included Angle/2D Cross Product'
 * '<S120>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Included Angle/Vector Normalize'
 * '<S121>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Heading Commander/Included Angle/Vector Normalize1'
 * '<S122>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Altitude Control'
 * '<S123>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Cruise Speed '
 * '<S124>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position'
 * '<S125>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/L1 Reference WP'
 * '<S126>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration'
 * '<S127>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration To Speed'
 * '<S128>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Altitude Control/Target Height'
 * '<S129>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Altitude Control/Target Height/Vector Modulus'
 * '<S130>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Altitude Control/Target Height/Vector Modulus1'
 * '<S131>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Cruise Speed /Vector Modulus'
 * '<S132>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold'
 * '<S133>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold'
 * '<S134>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Controller'
 * '<S135>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Detect Movement'
 * '<S136>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Controller/Brake Control'
 * '<S137>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Controller/Hold Control'
 * '<S138>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control'
 * '<S139>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Controller/Hold Control/Bus_Selection'
 * '<S140>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/DeadZone'
 * '<S141>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/TD1'
 * '<S142>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/TD1/fhan '
 * '<S143>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Altitude Hold/Detect Movement/Motion Status'
 * '<S144>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller'
 * '<S145>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Detect Movement'
 * '<S146>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Brake Control'
 * '<S147>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control'
 * '<S148>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Move Control'
 * '<S149>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Bus_Selection'
 * '<S150>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Psi To DCM'
 * '<S151>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Psi To DCM/Rotation Matrix Z'
 * '<S152>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/DeadZone'
 * '<S153>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/DeadZone1'
 * '<S154>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/TD'
 * '<S155>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/TD/fhan '
 * '<S156>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Hold Position/Position Hold/Detect Movement/Motion State'
 * '<S157>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/L1 Reference WP/Compare To Constant'
 * '<S158>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/L1 Reference WP/Compare To Constant1'
 * '<S159>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/L1 Reference WP/NearbyRefWP'
 * '<S160>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/L1 Reference WP/OutRegionRegWP'
 * '<S161>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/L1 Reference WP/SearchL1RefWP'
 * '<S162>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration/Included Angle'
 * '<S163>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration/Vector Modulus'
 * '<S164>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration/Vector Modulus1'
 * '<S165>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration/Vector Normalize'
 * '<S166>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration/Vector Normalize1'
 * '<S167>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration/Included Angle/2D Cross Product'
 * '<S168>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration/Included Angle/Vector Normalize'
 * '<S169>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration/Included Angle/Vector Normalize1'
 * '<S170>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration To Speed/Ground Speed'
 * '<S171>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix'
 * '<S172>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration To Speed/Ground Speed/Vector Normalize2'
 * '<S173>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix/Psi To DCM'
 * '<S174>' : 'FMS/FMS Commander/Commander/Arm/Auto/Mission/Mission_SubSystem/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix/Psi To DCM/Rotation Matrix Z'
 * '<S175>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold'
 * '<S176>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Land'
 * '<S177>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return'
 * '<S178>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff'
 * '<S179>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Unknown'
 * '<S180>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold'
 * '<S181>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold'
 * '<S182>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold'
 * '<S183>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Controller'
 * '<S184>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Detect Movement'
 * '<S185>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Brake Control'
 * '<S186>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Hold Control'
 * '<S187>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Move Control'
 * '<S188>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Hold Control/Bus_Selection'
 * '<S189>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Move Control/DeadZone'
 * '<S190>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Move Control/TD1'
 * '<S191>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Move Control/TD1/fhan '
 * '<S192>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Altitude Hold/Detect Movement/Motion Status'
 * '<S193>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller'
 * '<S194>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Detect Movement'
 * '<S195>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Brake Control'
 * '<S196>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Hold Control'
 * '<S197>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Move Control'
 * '<S198>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Hold Control/Bus_Selection'
 * '<S199>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Hold Control/psi_err_saturation'
 * '<S200>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Hold Control/psi_err_saturation/Compare To Constant'
 * '<S201>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Move Control/DeadZone'
 * '<S202>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Move Control/TD'
 * '<S203>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Controller/Move Control/TD/fhan '
 * '<S204>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Heading Hold/Detect Movement/Motion State'
 * '<S205>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller'
 * '<S206>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Detect Movement'
 * '<S207>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Brake Control'
 * '<S208>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Hold Control'
 * '<S209>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control'
 * '<S210>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Hold Control/Bus_Selection'
 * '<S211>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Hold Control/Psi To DCM'
 * '<S212>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Hold Control/Psi To DCM/Rotation Matrix Z'
 * '<S213>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control/DeadZone'
 * '<S214>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control/DeadZone1'
 * '<S215>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control/TD'
 * '<S216>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control/TD/fhan '
 * '<S217>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Hold/Position Hold/Detect Movement/Motion State'
 * '<S218>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Land/Position Command'
 * '<S219>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Land/Position Command/Position Control'
 * '<S220>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Land/Position Command/Position Control/Bus_Selection'
 * '<S221>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Land/Position Command/Position Control/Psi To DCM'
 * '<S222>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Land/Position Command/Position Control/Psi To DCM/Rotation Matrix Z'
 * '<S223>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander'
 * '<S224>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander'
 * '<S225>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Way Points'
 * '<S226>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control'
 * '<S227>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Included Angle'
 * '<S228>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/Heading Control'
 * '<S229>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/TD'
 * '<S230>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/psi_saturation'
 * '<S231>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/psi_saturation1'
 * '<S232>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/Heading Control/Bus_Selection'
 * '<S233>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/Heading Control/psi_saturation'
 * '<S234>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/Heading Control/psi_saturation/Compare To Constant'
 * '<S235>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/TD/fhan '
 * '<S236>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/psi_saturation/Compare To Constant'
 * '<S237>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Heading Control/psi_saturation1/Compare To Constant'
 * '<S238>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Included Angle/2D Cross Product'
 * '<S239>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Included Angle/Vector Normalize'
 * '<S240>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Heading Commander/Included Angle/Vector Normalize1'
 * '<S241>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Cruise Speed '
 * '<S242>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position'
 * '<S243>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP'
 * '<S244>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration'
 * '<S245>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed'
 * '<S246>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Cruise Speed /Vector Modulus'
 * '<S247>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold'
 * '<S248>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold'
 * '<S249>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller'
 * '<S250>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Detect Movement'
 * '<S251>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Brake Control'
 * '<S252>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Hold Control'
 * '<S253>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control'
 * '<S254>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Hold Control/Bus_Selection'
 * '<S255>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/DeadZone'
 * '<S256>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/TD1'
 * '<S257>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/TD1/fhan '
 * '<S258>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Detect Movement/Motion Status'
 * '<S259>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller'
 * '<S260>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Detect Movement'
 * '<S261>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Brake Control'
 * '<S262>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control'
 * '<S263>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control'
 * '<S264>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Bus_Selection'
 * '<S265>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Psi To DCM'
 * '<S266>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Psi To DCM/Rotation Matrix Z'
 * '<S267>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/DeadZone'
 * '<S268>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/DeadZone1'
 * '<S269>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/TD'
 * '<S270>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/TD/fhan '
 * '<S271>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Detect Movement/Motion State'
 * '<S272>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/Compare To Constant'
 * '<S273>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/Compare To Constant1'
 * '<S274>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/NearbyRefWP'
 * '<S275>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/OutRegionRegWP'
 * '<S276>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/SearchL1RefWP'
 * '<S277>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Included Angle'
 * '<S278>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Vector Modulus'
 * '<S279>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Vector Modulus1'
 * '<S280>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Vector Normalize'
 * '<S281>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Vector Normalize1'
 * '<S282>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Included Angle/2D Cross Product'
 * '<S283>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Included Angle/Vector Normalize'
 * '<S284>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Included Angle/Vector Normalize1'
 * '<S285>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Ground Speed'
 * '<S286>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix'
 * '<S287>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Ground Speed/Vector Normalize2'
 * '<S288>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix/Psi To DCM'
 * '<S289>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix/Psi To DCM/Rotation Matrix Z'
 * '<S290>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff/Climb Speed'
 * '<S291>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff/Track Position'
 * '<S292>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff/Climb Speed/Compare To Constant'
 * '<S293>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff/Climb Speed/Compare To Constant1'
 * '<S294>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff/Track Position/Bus_Selection'
 * '<S295>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff/Track Position/Psi To DCM'
 * '<S296>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff/Track Position/Target Position'
 * '<S297>' : 'FMS/FMS Commander/Commander/Arm/SubMode/Takeoff/Track Position/Psi To DCM/Rotation Matrix Z'
 * '<S298>' : 'FMS/FMS Commander/Commander/Bus_Constructor/timestamp'
 * '<S299>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT'
 * '<S300>' : 'FMS/FMS State Machine/Vehicle.PrepTakeoff'
 * '<S301>' : 'FMS/FMS State Machine/Vehicle.StickMoved'
 * '<S302>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT'
 * '<S303>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/LAT2FLAT Curve'
 * '<S304>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/LatLon Wrap'
 * '<S305>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/Rotation'
 * '<S306>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/LatLon Wrap/Weap Angle 180'
 * '<S307>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/LatLon Wrap/Wrap Latitude'
 * '<S308>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/LatLon Wrap/Weap Angle 180/Compare To Constant1'
 * '<S309>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/LatLon Wrap/Wrap Latitude/Compare To Constant1'
 * '<S310>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/LatLon Wrap/Wrap Latitude/Weap Angle 180'
 * '<S311>' : 'FMS/FMS State Machine/Vehicle.Arm.Auto.Mission.LLA2FLAT/LLA2FLAT/LatLon Wrap/Wrap Latitude/Weap Angle 180/Compare To Constant1'
 * '<S312>' : 'FMS/FMS State Machine/Vehicle.StickMoved/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_FMS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
