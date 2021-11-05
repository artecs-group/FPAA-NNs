#ifndef CAMCODE_H
#define CAMCODE_H

#include "ApiCode.h"

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 1.ad2                                            *
*  Generated: October 16, 2020:  12:35 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_1_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold1_1_1       an_1_FPAA1_1_GainHold1_1_1 an_1_FPAA1_1       |
  |  GainHold1_1_2       an_1_FPAA1_1_GainHold1_1_2 an_1_FPAA1_1       |
  |  GainHold1_1_3       an_1_FPAA1_1_GainHold1_1_3 an_1_FPAA1_1       |
  |  GainHold1_2_1       an_1_FPAA1_2_GainHold1_2_1 an_1_FPAA1_2       |
  |  GainHold1_2_2       an_1_FPAA1_2_GainHold1_2_2 an_1_FPAA1_2       |
  |  GainHold1_2_3       an_1_FPAA1_2_GainHold1_2_3 an_1_FPAA1_2       |
  |  GainHold1_3_1       an_1_FPAA1_3_GainHold1_3_1 an_1_FPAA1_3       |
  |  GainHold1_3_2       an_1_FPAA1_3_GainHold1_3_2 an_1_FPAA1_3       |
  |  GainHold1_3_3       an_1_FPAA1_3_GainHold1_3_3 an_1_FPAA1_3       |
  |  GainHold1_4_1       an_1_FPAA1_4_GainHold1_4_1 an_1_FPAA1_4       |
  |  GainHold1_4_2       an_1_FPAA1_4_GainHold1_4_2 an_1_FPAA1_4       |
  |  GainHold1_4_3       an_1_FPAA1_4_GainHold1_4_3 an_1_FPAA1_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_1_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold1_1_1       an_1_FPAA1_1_GainHold1_1_1 an_1_FPAA1_1       |
  |  GainHold1_1_2       an_1_FPAA1_1_GainHold1_1_2 an_1_FPAA1_1       |
  |  GainHold1_1_3       an_1_FPAA1_1_GainHold1_1_3 an_1_FPAA1_1       |
  |  GainHold1_2_1       an_1_FPAA1_2_GainHold1_2_1 an_1_FPAA1_2       |
  |  GainHold1_2_2       an_1_FPAA1_2_GainHold1_2_2 an_1_FPAA1_2       |
  |  GainHold1_2_3       an_1_FPAA1_2_GainHold1_2_3 an_1_FPAA1_2       |
  |  GainHold1_3_1       an_1_FPAA1_3_GainHold1_3_1 an_1_FPAA1_3       |
  |  GainHold1_3_2       an_1_FPAA1_3_GainHold1_3_2 an_1_FPAA1_3       |
  |  GainHold1_3_3       an_1_FPAA1_3_GainHold1_3_3 an_1_FPAA1_3       |
  |  GainHold1_4_1       an_1_FPAA1_4_GainHold1_4_1 an_1_FPAA1_4       |
  |  GainHold1_4_2       an_1_FPAA1_4_GainHold1_4_2 an_1_FPAA1_4       |
  |  GainHold1_4_3       an_1_FPAA1_4_GainHold1_4_3 an_1_FPAA1_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input1_1_1          an_1_FPAA1_1_Input1_1_1 an_1_FPAA1_1       |
  |  Input1_1_2          an_1_FPAA1_1_Input1_1_2 an_1_FPAA1_1       |
  |  Input1_1_3          an_1_FPAA1_1_Input1_1_3 an_1_FPAA1_1       |
  |  Input1_2_1          an_1_FPAA1_2_Input1_2_1 an_1_FPAA1_2       |
  |  Input1_2_2          an_1_FPAA1_2_Input1_2_2 an_1_FPAA1_2       |
  |  Input1_2_3          an_1_FPAA1_2_Input1_2_3 an_1_FPAA1_2       |
  |  Input1_3_1          an_1_FPAA1_3_Input1_3_1 an_1_FPAA1_3       |
  |  Input1_3_2          an_1_FPAA1_3_Input1_3_2 an_1_FPAA1_3       |
  |  Input1_3_3          an_1_FPAA1_3_Input1_3_3 an_1_FPAA1_3       |
  |  Input1_4_1          an_1_FPAA1_4_Input1_4_1 an_1_FPAA1_4       |
  |  Input1_4_2          an_1_FPAA1_4_Input1_4_2 an_1_FPAA1_4       |
  |  Input1_4_3          an_1_FPAA1_4_Input1_4_3 an_1_FPAA1_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona1_1_1 an_1_FPAA1_1_SumadorNeurona1_1_1 an_1_FPAA1_1       |
  |  SumadorNeurona1_1_2 an_1_FPAA1_1_SumadorNeurona1_1_2 an_1_FPAA1_1       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona1_2_1 an_1_FPAA1_2_SumadorNeurona1_2_1 an_1_FPAA1_2       |
  |  SumadorNeurona1_2_2 an_1_FPAA1_2_SumadorNeurona1_2_2 an_1_FPAA1_2       |
  |  SumadorNeurona1_3_1 an_1_FPAA1_3_SumadorNeurona1_3_1 an_1_FPAA1_3       |
  |  SumadorNeurona1_3_2 an_1_FPAA1_3_SumadorNeurona1_3_2 an_1_FPAA1_3       |
  |  SumadorNeurona1_4_1 an_1_FPAA1_4_SumadorNeurona1_4_1 an_1_FPAA1_4       |
  |  SumadorNeurona1_4_2 an_1_FPAA1_4_SumadorNeurona1_4_2 an_1_FPAA1_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input1_1_1          an_1_FPAA1_1_Input1_1_1 an_1_FPAA1_1       |
  |  Input1_1_2          an_1_FPAA1_1_Input1_1_2 an_1_FPAA1_1       |
  |  Input1_1_3          an_1_FPAA1_1_Input1_1_3 an_1_FPAA1_1       |
  |  Input1_2_1          an_1_FPAA1_2_Input1_2_1 an_1_FPAA1_2       |
  |  Input1_2_2          an_1_FPAA1_2_Input1_2_2 an_1_FPAA1_2       |
  |  Input1_2_3          an_1_FPAA1_2_Input1_2_3 an_1_FPAA1_2       |
  |  Input1_3_1          an_1_FPAA1_3_Input1_3_1 an_1_FPAA1_3       |
  |  Input1_3_2          an_1_FPAA1_3_Input1_3_2 an_1_FPAA1_3       |
  |  Input1_3_3          an_1_FPAA1_3_Input1_3_3 an_1_FPAA1_3       |
  |  Input1_4_1          an_1_FPAA1_4_Input1_4_1 an_1_FPAA1_4       |
  |  Input1_4_2          an_1_FPAA1_4_Input1_4_2 an_1_FPAA1_4       |
  |  Input1_4_3          an_1_FPAA1_4_Input1_4_3 an_1_FPAA1_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona1_1_1 an_1_FPAA1_1_SumadorNeurona1_1_1 an_1_FPAA1_1       |
  |  SumadorNeurona1_1_2 an_1_FPAA1_1_SumadorNeurona1_1_2 an_1_FPAA1_1       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona1_2_1 an_1_FPAA1_2_SumadorNeurona1_2_1 an_1_FPAA1_2       |
  |  SumadorNeurona1_2_2 an_1_FPAA1_2_SumadorNeurona1_2_2 an_1_FPAA1_2       |
  |  SumadorNeurona1_3_1 an_1_FPAA1_3_SumadorNeurona1_3_1 an_1_FPAA1_3       |
  |  SumadorNeurona1_3_2 an_1_FPAA1_3_SumadorNeurona1_3_2 an_1_FPAA1_3       |
  |  SumadorNeurona1_4_1 an_1_FPAA1_4_SumadorNeurona1_4_1 an_1_FPAA1_4       |
  |  SumadorNeurona1_4_2 an_1_FPAA1_4_SumadorNeurona1_4_2 an_1_FPAA1_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 2.ad2                                            *
*  Generated: October 19, 2020:  12:59 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_2_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold2_1_1       an_2_FPAA2_1_GainHold2_1_1 an_2_FPAA2_1       |
  |  GainHold2_1_2       an_2_FPAA2_1_GainHold2_1_2 an_2_FPAA2_1       |
  |  GainHold2_1_3       an_2_FPAA2_1_GainHold2_1_3 an_2_FPAA2_1       |
  |  GainHold2_2_1       an_2_FPAA2_2_GainHold2_2_1 an_2_FPAA2_2       |
  |  GainHold2_2_2       an_2_FPAA2_2_GainHold2_2_2 an_2_FPAA2_2       |
  |  GainHold2_2_3       an_2_FPAA2_2_GainHold2_2_3 an_2_FPAA2_2       |
  |  GainHold2_3_1       an_2_FPAA2_3_GainHold2_3_1 an_2_FPAA2_3       |
  |  GainHold2_3_2       an_2_FPAA2_3_GainHold2_3_2 an_2_FPAA2_3       |
  |  GainHold2_3_3       an_2_FPAA2_3_GainHold2_3_3 an_2_FPAA2_3       |
  |  GainHold2_4_1       an_2_FPAA2_4_GainHold2_4_1 an_2_FPAA2_4       |
  |  GainHold2_4_2       an_2_FPAA2_4_GainHold2_4_2 an_2_FPAA2_4       |
  |  GainHold2_4_3       an_2_FPAA2_4_GainHold2_4_3 an_2_FPAA2_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_2_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold2_1_1       an_2_FPAA2_1_GainHold2_1_1 an_2_FPAA2_1       |
  |  GainHold2_1_2       an_2_FPAA2_1_GainHold2_1_2 an_2_FPAA2_1       |
  |  GainHold2_1_3       an_2_FPAA2_1_GainHold2_1_3 an_2_FPAA2_1       |
  |  GainHold2_2_1       an_2_FPAA2_2_GainHold2_2_1 an_2_FPAA2_2       |
  |  GainHold2_2_2       an_2_FPAA2_2_GainHold2_2_2 an_2_FPAA2_2       |
  |  GainHold2_2_3       an_2_FPAA2_2_GainHold2_2_3 an_2_FPAA2_2       |
  |  GainHold2_3_1       an_2_FPAA2_3_GainHold2_3_1 an_2_FPAA2_3       |
  |  GainHold2_3_2       an_2_FPAA2_3_GainHold2_3_2 an_2_FPAA2_3       |
  |  GainHold2_3_3       an_2_FPAA2_3_GainHold2_3_3 an_2_FPAA2_3       |
  |  GainHold2_4_1       an_2_FPAA2_4_GainHold2_4_1 an_2_FPAA2_4       |
  |  GainHold2_4_2       an_2_FPAA2_4_GainHold2_4_2 an_2_FPAA2_4       |
  |  GainHold2_4_3       an_2_FPAA2_4_GainHold2_4_3 an_2_FPAA2_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input2_1_1          an_2_FPAA2_1_Input2_1_1 an_2_FPAA2_1       |
  |  Input2_1_2          an_2_FPAA2_1_Input2_1_2 an_2_FPAA2_1       |
  |  Input2_1_3          an_2_FPAA2_1_Input2_1_3 an_2_FPAA2_1       |
  |  Input2_2_1          an_2_FPAA2_2_Input2_2_1 an_2_FPAA2_2       |
  |  Input2_2_2          an_2_FPAA2_2_Input2_2_2 an_2_FPAA2_2       |
  |  SumadorNeurona2_2_1 an_2_FPAA2_2_SumadorNeurona2_2_1 an_2_FPAA2_2       |
  |  Input2_3_1          an_2_FPAA2_3_Input2_3_1 an_2_FPAA2_3       |
  |  Input2_3_2          an_2_FPAA2_3_Input2_3_2 an_2_FPAA2_3       |
  |  SumadorNeurona2_3_1 an_2_FPAA2_3_SumadorNeurona2_3_1 an_2_FPAA2_3       |
  |  Input2_4_1          an_2_FPAA2_4_Input2_4_1 an_2_FPAA2_4       |
  |  Input2_4_2          an_2_FPAA2_4_Input2_4_2 an_2_FPAA2_4       |
  |  Input2_4_3          an_2_FPAA2_4_Input2_4_3 an_2_FPAA2_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona2_4_1 an_2_FPAA2_4_SumadorNeurona2_4_1 an_2_FPAA2_4       |
  |  SumadorNeurona2_4_2 an_2_FPAA2_4_SumadorNeurona2_4_2 an_2_FPAA2_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona2_1_1 an_2_FPAA2_1_SumadorNeurona2_1_1 an_2_FPAA2_1       |
  |  SumadorNeurona2_1_2 an_2_FPAA2_1_SumadorNeurona2_1_2 an_2_FPAA2_1       |
  |  SumadorNeurona2_2_2 an_2_FPAA2_2_SumadorNeurona2_2_2 an_2_FPAA2_2       |
  |  SumadorNeurona2_3_2 an_2_FPAA2_3_SumadorNeurona2_3_2 an_2_FPAA2_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input2_1_1          an_2_FPAA2_1_Input2_1_1 an_2_FPAA2_1       |
  |  Input2_1_2          an_2_FPAA2_1_Input2_1_2 an_2_FPAA2_1       |
  |  Input2_1_3          an_2_FPAA2_1_Input2_1_3 an_2_FPAA2_1       |
  |  Input2_2_1          an_2_FPAA2_2_Input2_2_1 an_2_FPAA2_2       |
  |  Input2_2_2          an_2_FPAA2_2_Input2_2_2 an_2_FPAA2_2       |
  |  SumadorNeurona2_2_1 an_2_FPAA2_2_SumadorNeurona2_2_1 an_2_FPAA2_2       |
  |  Input2_3_1          an_2_FPAA2_3_Input2_3_1 an_2_FPAA2_3       |
  |  Input2_3_2          an_2_FPAA2_3_Input2_3_2 an_2_FPAA2_3       |
  |  SumadorNeurona2_3_1 an_2_FPAA2_3_SumadorNeurona2_3_1 an_2_FPAA2_3       |
  |  Input2_4_1          an_2_FPAA2_4_Input2_4_1 an_2_FPAA2_4       |
  |  Input2_4_2          an_2_FPAA2_4_Input2_4_2 an_2_FPAA2_4       |
  |  Input2_4_3          an_2_FPAA2_4_Input2_4_3 an_2_FPAA2_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona2_4_1 an_2_FPAA2_4_SumadorNeurona2_4_1 an_2_FPAA2_4       |
  |  SumadorNeurona2_4_2 an_2_FPAA2_4_SumadorNeurona2_4_2 an_2_FPAA2_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona2_1_1 an_2_FPAA2_1_SumadorNeurona2_1_1 an_2_FPAA2_1       |
  |  SumadorNeurona2_1_2 an_2_FPAA2_1_SumadorNeurona2_1_2 an_2_FPAA2_1       |
  |  SumadorNeurona2_2_2 an_2_FPAA2_2_SumadorNeurona2_2_2 an_2_FPAA2_2       |
  |  SumadorNeurona2_3_2 an_2_FPAA2_3_SumadorNeurona2_3_2 an_2_FPAA2_3       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                        TransferFunction.cam                        #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Transfer Function Control                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                    setTransferFunctionTable                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_setTransferFunctionTable(an_CAM cam, double* Values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Transfer Function values for        |
  |  operation over input voltage. It assumes the input table has  |
  |  256 entries.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  TransferFunction2_2_1 an_2_FPAA2_2_TransferFunction2_2_1 an_2_FPAA2_2       |
  |  TransferFunction2_3_1 an_2_FPAA2_3_TransferFunction2_3_1 an_2_FPAA2_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 3.ad2                                            *
*  Generated: October 19, 2020:  01:00 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_3_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold3_1_1       an_3_FPAA3_1_GainHold3_1_1 an_3_FPAA3_1       |
  |  GainHold3_1_2       an_3_FPAA3_1_GainHold3_1_2 an_3_FPAA3_1       |
  |  GainHold3_1_3       an_3_FPAA3_1_GainHold3_1_3 an_3_FPAA3_1       |
  |  GainHold3_2_1       an_3_FPAA3_2_GainHold3_2_1 an_3_FPAA3_2       |
  |  GainHold3_2_2       an_3_FPAA3_2_GainHold3_2_2 an_3_FPAA3_2       |
  |  GainHold3_2_3       an_3_FPAA3_2_GainHold3_2_3 an_3_FPAA3_2       |
  |  GainHold3_3_1       an_3_FPAA3_3_GainHold3_3_1 an_3_FPAA3_3       |
  |  GainHold3_3_2       an_3_FPAA3_3_GainHold3_3_2 an_3_FPAA3_3       |
  |  GainHold3_3_3       an_3_FPAA3_3_GainHold3_3_3 an_3_FPAA3_3       |
  |  GainHold3_4_1       an_3_FPAA3_4_GainHold3_4_1 an_3_FPAA3_4       |
  |  GainHold3_4_2       an_3_FPAA3_4_GainHold3_4_2 an_3_FPAA3_4       |
  |  GainHold3_4_3       an_3_FPAA3_4_GainHold3_4_3 an_3_FPAA3_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_3_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold3_1_1       an_3_FPAA3_1_GainHold3_1_1 an_3_FPAA3_1       |
  |  GainHold3_1_2       an_3_FPAA3_1_GainHold3_1_2 an_3_FPAA3_1       |
  |  GainHold3_1_3       an_3_FPAA3_1_GainHold3_1_3 an_3_FPAA3_1       |
  |  GainHold3_2_1       an_3_FPAA3_2_GainHold3_2_1 an_3_FPAA3_2       |
  |  GainHold3_2_2       an_3_FPAA3_2_GainHold3_2_2 an_3_FPAA3_2       |
  |  GainHold3_2_3       an_3_FPAA3_2_GainHold3_2_3 an_3_FPAA3_2       |
  |  GainHold3_3_1       an_3_FPAA3_3_GainHold3_3_1 an_3_FPAA3_3       |
  |  GainHold3_3_2       an_3_FPAA3_3_GainHold3_3_2 an_3_FPAA3_3       |
  |  GainHold3_3_3       an_3_FPAA3_3_GainHold3_3_3 an_3_FPAA3_3       |
  |  GainHold3_4_1       an_3_FPAA3_4_GainHold3_4_1 an_3_FPAA3_4       |
  |  GainHold3_4_2       an_3_FPAA3_4_GainHold3_4_2 an_3_FPAA3_4       |
  |  GainHold3_4_3       an_3_FPAA3_4_GainHold3_4_3 an_3_FPAA3_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input3_1_1          an_3_FPAA3_1_Input3_1_1 an_3_FPAA3_1       |
  |  Input3_1_2          an_3_FPAA3_1_Input3_1_2 an_3_FPAA3_1       |
  |  Input3_1_3          an_3_FPAA3_1_Input3_1_3 an_3_FPAA3_1       |
  |  Input3_2_1          an_3_FPAA3_2_Input3_2_1 an_3_FPAA3_2       |
  |  Input3_2_2          an_3_FPAA3_2_Input3_2_2 an_3_FPAA3_2       |
  |  Input3_2_3          an_3_FPAA3_2_Input3_2_3 an_3_FPAA3_2       |
  |  Input3_3_1          an_3_FPAA3_3_Input3_3_1 an_3_FPAA3_3       |
  |  Input3_3_2          an_3_FPAA3_3_Input3_3_2 an_3_FPAA3_3       |
  |  Input3_3_3          an_3_FPAA3_3_Input3_3_3 an_3_FPAA3_3       |
  |  Input3_4_1          an_3_FPAA3_4_Input3_4_1 an_3_FPAA3_4       |
  |  Input3_4_2          an_3_FPAA3_4_Input3_4_2 an_3_FPAA3_4       |
  |  Input3_4_3          an_3_FPAA3_4_Input3_4_3 an_3_FPAA3_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona3_1_1 an_3_FPAA3_1_SumadorNeurona3_1_1 an_3_FPAA3_1       |
  |  SumadorNeurona3_1_2 an_3_FPAA3_1_SumadorNeurona3_1_2 an_3_FPAA3_1       |
  |  SumadorNeurona3_2_1 an_3_FPAA3_2_SumadorNeurona3_2_1 an_3_FPAA3_2       |
  |  SumadorNeurona3_2_2 an_3_FPAA3_2_SumadorNeurona3_2_2 an_3_FPAA3_2       |
  |  SumadorNeurona3_3_1 an_3_FPAA3_3_SumadorNeurona3_3_1 an_3_FPAA3_3       |
  |  SumadorNeurona3_3_2 an_3_FPAA3_3_SumadorNeurona3_3_2 an_3_FPAA3_3       |
  |  SumadorNeurona3_4_1 an_3_FPAA3_4_SumadorNeurona3_4_1 an_3_FPAA3_4       |
  |  SumadorNeurona3_4_2 an_3_FPAA3_4_SumadorNeurona3_4_2 an_3_FPAA3_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input3_1_1          an_3_FPAA3_1_Input3_1_1 an_3_FPAA3_1       |
  |  Input3_1_2          an_3_FPAA3_1_Input3_1_2 an_3_FPAA3_1       |
  |  Input3_1_3          an_3_FPAA3_1_Input3_1_3 an_3_FPAA3_1       |
  |  Input3_2_1          an_3_FPAA3_2_Input3_2_1 an_3_FPAA3_2       |
  |  Input3_2_2          an_3_FPAA3_2_Input3_2_2 an_3_FPAA3_2       |
  |  Input3_2_3          an_3_FPAA3_2_Input3_2_3 an_3_FPAA3_2       |
  |  Input3_3_1          an_3_FPAA3_3_Input3_3_1 an_3_FPAA3_3       |
  |  Input3_3_2          an_3_FPAA3_3_Input3_3_2 an_3_FPAA3_3       |
  |  Input3_3_3          an_3_FPAA3_3_Input3_3_3 an_3_FPAA3_3       |
  |  Input3_4_1          an_3_FPAA3_4_Input3_4_1 an_3_FPAA3_4       |
  |  Input3_4_2          an_3_FPAA3_4_Input3_4_2 an_3_FPAA3_4       |
  |  Input3_4_3          an_3_FPAA3_4_Input3_4_3 an_3_FPAA3_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona3_1_1 an_3_FPAA3_1_SumadorNeurona3_1_1 an_3_FPAA3_1       |
  |  SumadorNeurona3_1_2 an_3_FPAA3_1_SumadorNeurona3_1_2 an_3_FPAA3_1       |
  |  SumadorNeurona3_2_1 an_3_FPAA3_2_SumadorNeurona3_2_1 an_3_FPAA3_2       |
  |  SumadorNeurona3_2_2 an_3_FPAA3_2_SumadorNeurona3_2_2 an_3_FPAA3_2       |
  |  SumadorNeurona3_3_1 an_3_FPAA3_3_SumadorNeurona3_3_1 an_3_FPAA3_3       |
  |  SumadorNeurona3_3_2 an_3_FPAA3_3_SumadorNeurona3_3_2 an_3_FPAA3_3       |
  |  SumadorNeurona3_4_1 an_3_FPAA3_4_SumadorNeurona3_4_1 an_3_FPAA3_4       |
  |  SumadorNeurona3_4_2 an_3_FPAA3_4_SumadorNeurona3_4_2 an_3_FPAA3_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 4.ad2                                            *
*  Generated: October 19, 2020:  01:01 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_4_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold4_1_1       an_4_FPAA4_1_GainHold4_1_1 an_4_FPAA4_1       |
  |  GainHold4_1_2       an_4_FPAA4_1_GainHold4_1_2 an_4_FPAA4_1       |
  |  GainHold4_1_3       an_4_FPAA4_1_GainHold4_1_3 an_4_FPAA4_1       |
  |  GainHold4_2_1       an_4_FPAA4_2_GainHold4_2_1 an_4_FPAA4_2       |
  |  GainHold4_2_2       an_4_FPAA4_2_GainHold4_2_2 an_4_FPAA4_2       |
  |  GainHold4_2_3       an_4_FPAA4_2_GainHold4_2_3 an_4_FPAA4_2       |
  |  GainHold4_3_1       an_4_FPAA4_3_GainHold4_3_1 an_4_FPAA4_3       |
  |  GainHold4_3_2       an_4_FPAA4_3_GainHold4_3_2 an_4_FPAA4_3       |
  |  GainHold4_3_3       an_4_FPAA4_3_GainHold4_3_3 an_4_FPAA4_3       |
  |  GainHold4_4_1       an_4_FPAA4_4_GainHold4_4_1 an_4_FPAA4_4       |
  |  GainHold4_4_2       an_4_FPAA4_4_GainHold4_4_2 an_4_FPAA4_4       |
  |  GainHold4_4_3       an_4_FPAA4_4_GainHold4_4_3 an_4_FPAA4_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_4_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold4_1_1       an_4_FPAA4_1_GainHold4_1_1 an_4_FPAA4_1       |
  |  GainHold4_1_2       an_4_FPAA4_1_GainHold4_1_2 an_4_FPAA4_1       |
  |  GainHold4_1_3       an_4_FPAA4_1_GainHold4_1_3 an_4_FPAA4_1       |
  |  GainHold4_2_1       an_4_FPAA4_2_GainHold4_2_1 an_4_FPAA4_2       |
  |  GainHold4_2_2       an_4_FPAA4_2_GainHold4_2_2 an_4_FPAA4_2       |
  |  GainHold4_2_3       an_4_FPAA4_2_GainHold4_2_3 an_4_FPAA4_2       |
  |  GainHold4_3_1       an_4_FPAA4_3_GainHold4_3_1 an_4_FPAA4_3       |
  |  GainHold4_3_2       an_4_FPAA4_3_GainHold4_3_2 an_4_FPAA4_3       |
  |  GainHold4_3_3       an_4_FPAA4_3_GainHold4_3_3 an_4_FPAA4_3       |
  |  GainHold4_4_1       an_4_FPAA4_4_GainHold4_4_1 an_4_FPAA4_4       |
  |  GainHold4_4_2       an_4_FPAA4_4_GainHold4_4_2 an_4_FPAA4_4       |
  |  GainHold4_4_3       an_4_FPAA4_4_GainHold4_4_3 an_4_FPAA4_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input4_1_1          an_4_FPAA4_1_Input4_1_1 an_4_FPAA4_1       |
  |  Input4_1_2          an_4_FPAA4_1_Input4_1_2 an_4_FPAA4_1       |
  |  SumadorNeurona4_1_1 an_4_FPAA4_1_SumadorNeurona4_1_1 an_4_FPAA4_1       |
  |  Input4_2_1          an_4_FPAA4_2_Input4_2_1 an_4_FPAA4_2       |
  |  Input4_2_2          an_4_FPAA4_2_Input4_2_2 an_4_FPAA4_2       |
  |  SumadorNeurona4_2_1 an_4_FPAA4_2_SumadorNeurona4_2_1 an_4_FPAA4_2       |
  |  Input4_3_1          an_4_FPAA4_3_Input4_3_1 an_4_FPAA4_3       |
  |  Input4_3_2          an_4_FPAA4_3_Input4_3_2 an_4_FPAA4_3       |
  |  Input4_3_3          an_4_FPAA4_3_Input4_3_3 an_4_FPAA4_3       |
  |  Input4_4_1          an_4_FPAA4_4_Input4_4_1 an_4_FPAA4_4       |
  |  Input4_4_2          an_4_FPAA4_4_Input4_4_2 an_4_FPAA4_4       |
  |  Input4_4_3          an_4_FPAA4_4_Input4_4_3 an_4_FPAA4_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona4_3_1 an_4_FPAA4_3_SumadorNeurona4_3_1 an_4_FPAA4_3       |
  |  SumadorNeurona4_3_2 an_4_FPAA4_3_SumadorNeurona4_3_2 an_4_FPAA4_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona4_1_2 an_4_FPAA4_1_SumadorNeurona4_1_2 an_4_FPAA4_1       |
  |  SumadorNeurona4_2_2 an_4_FPAA4_2_SumadorNeurona4_2_2 an_4_FPAA4_2       |
  |  SumadorNeurona4_4_1 an_4_FPAA4_4_SumadorNeurona4_4_1 an_4_FPAA4_4       |
  |  SumadorNeurona4_4_2 an_4_FPAA4_4_SumadorNeurona4_4_2 an_4_FPAA4_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input4_1_1          an_4_FPAA4_1_Input4_1_1 an_4_FPAA4_1       |
  |  Input4_1_2          an_4_FPAA4_1_Input4_1_2 an_4_FPAA4_1       |
  |  SumadorNeurona4_1_1 an_4_FPAA4_1_SumadorNeurona4_1_1 an_4_FPAA4_1       |
  |  Input4_2_1          an_4_FPAA4_2_Input4_2_1 an_4_FPAA4_2       |
  |  Input4_2_2          an_4_FPAA4_2_Input4_2_2 an_4_FPAA4_2       |
  |  SumadorNeurona4_2_1 an_4_FPAA4_2_SumadorNeurona4_2_1 an_4_FPAA4_2       |
  |  Input4_3_1          an_4_FPAA4_3_Input4_3_1 an_4_FPAA4_3       |
  |  Input4_3_2          an_4_FPAA4_3_Input4_3_2 an_4_FPAA4_3       |
  |  Input4_3_3          an_4_FPAA4_3_Input4_3_3 an_4_FPAA4_3       |
  |  Input4_4_1          an_4_FPAA4_4_Input4_4_1 an_4_FPAA4_4       |
  |  Input4_4_2          an_4_FPAA4_4_Input4_4_2 an_4_FPAA4_4       |
  |  Input4_4_3          an_4_FPAA4_4_Input4_4_3 an_4_FPAA4_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona4_3_1 an_4_FPAA4_3_SumadorNeurona4_3_1 an_4_FPAA4_3       |
  |  SumadorNeurona4_3_2 an_4_FPAA4_3_SumadorNeurona4_3_2 an_4_FPAA4_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona4_1_2 an_4_FPAA4_1_SumadorNeurona4_1_2 an_4_FPAA4_1       |
  |  SumadorNeurona4_2_2 an_4_FPAA4_2_SumadorNeurona4_2_2 an_4_FPAA4_2       |
  |  SumadorNeurona4_4_1 an_4_FPAA4_4_SumadorNeurona4_4_1 an_4_FPAA4_4       |
  |  SumadorNeurona4_4_2 an_4_FPAA4_4_SumadorNeurona4_4_2 an_4_FPAA4_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                        TransferFunction.cam                        #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Transfer Function Control                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                    setTransferFunctionTable                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_setTransferFunctionTable(an_CAM cam, double* Values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Transfer Function values for        |
  |  operation over input voltage. It assumes the input table has  |
  |  256 entries.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  TransferFunction4_1_1 an_4_FPAA4_1_TransferFunction4_1_1 an_4_FPAA4_1       |
  |  TransferFunction4_2_1 an_4_FPAA4_2_TransferFunction4_2_1 an_4_FPAA4_2       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 5.ad2                                            *
*  Generated: October 19, 2020:  01:02 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_5_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold5_1_1       an_5_FPAA5_1_GainHold5_1_1 an_5_FPAA5_1       |
  |  GainHold5_1_2       an_5_FPAA5_1_GainHold5_1_2 an_5_FPAA5_1       |
  |  GainHold5_1_3       an_5_FPAA5_1_GainHold5_1_3 an_5_FPAA5_1       |
  |  GainHold5_2_1       an_5_FPAA5_2_GainHold5_2_1 an_5_FPAA5_2       |
  |  GainHold5_2_2       an_5_FPAA5_2_GainHold5_2_2 an_5_FPAA5_2       |
  |  GainHold5_2_3       an_5_FPAA5_2_GainHold5_2_3 an_5_FPAA5_2       |
  |  GainHold5_3_1       an_5_FPAA5_3_GainHold5_3_1 an_5_FPAA5_3       |
  |  GainHold5_3_2       an_5_FPAA5_3_GainHold5_3_2 an_5_FPAA5_3       |
  |  GainHold5_3_3       an_5_FPAA5_3_GainHold5_3_3 an_5_FPAA5_3       |
  |  GainHold5_4_1       an_5_FPAA5_4_GainHold5_4_1 an_5_FPAA5_4       |
  |  GainHold5_4_2       an_5_FPAA5_4_GainHold5_4_2 an_5_FPAA5_4       |
  |  GainHold5_4_3       an_5_FPAA5_4_GainHold5_4_3 an_5_FPAA5_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_5_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold5_1_1       an_5_FPAA5_1_GainHold5_1_1 an_5_FPAA5_1       |
  |  GainHold5_1_2       an_5_FPAA5_1_GainHold5_1_2 an_5_FPAA5_1       |
  |  GainHold5_1_3       an_5_FPAA5_1_GainHold5_1_3 an_5_FPAA5_1       |
  |  GainHold5_2_1       an_5_FPAA5_2_GainHold5_2_1 an_5_FPAA5_2       |
  |  GainHold5_2_2       an_5_FPAA5_2_GainHold5_2_2 an_5_FPAA5_2       |
  |  GainHold5_2_3       an_5_FPAA5_2_GainHold5_2_3 an_5_FPAA5_2       |
  |  GainHold5_3_1       an_5_FPAA5_3_GainHold5_3_1 an_5_FPAA5_3       |
  |  GainHold5_3_2       an_5_FPAA5_3_GainHold5_3_2 an_5_FPAA5_3       |
  |  GainHold5_3_3       an_5_FPAA5_3_GainHold5_3_3 an_5_FPAA5_3       |
  |  GainHold5_4_1       an_5_FPAA5_4_GainHold5_4_1 an_5_FPAA5_4       |
  |  GainHold5_4_2       an_5_FPAA5_4_GainHold5_4_2 an_5_FPAA5_4       |
  |  GainHold5_4_3       an_5_FPAA5_4_GainHold5_4_3 an_5_FPAA5_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input5_1_1          an_5_FPAA5_1_Input5_1_1 an_5_FPAA5_1       |
  |  Input5_1_2          an_5_FPAA5_1_Input5_1_2 an_5_FPAA5_1       |
  |  Input5_1_3          an_5_FPAA5_1_Input5_1_3 an_5_FPAA5_1       |
  |  Input5_2_1          an_5_FPAA5_2_Input5_2_1 an_5_FPAA5_2       |
  |  Input5_2_2          an_5_FPAA5_2_Input5_2_2 an_5_FPAA5_2       |
  |  Input5_2_3          an_5_FPAA5_2_Input5_2_3 an_5_FPAA5_2       |
  |  Input5_3_1          an_5_FPAA5_3_Input5_3_1 an_5_FPAA5_3       |
  |  Input5_3_2          an_5_FPAA5_3_Input5_3_2 an_5_FPAA5_3       |
  |  Input5_3_3          an_5_FPAA5_3_Input5_3_3 an_5_FPAA5_3       |
  |  Input5_4_1          an_5_FPAA5_4_Input5_4_1 an_5_FPAA5_4       |
  |  Input5_4_2          an_5_FPAA5_4_Input5_4_2 an_5_FPAA5_4       |
  |  SumadorNeurona5_4_1 an_5_FPAA5_4_SumadorNeurona5_4_1 an_5_FPAA5_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona5_1_1 an_5_FPAA5_1_SumadorNeurona5_1_1 an_5_FPAA5_1       |
  |  SumadorNeurona5_1_2 an_5_FPAA5_1_SumadorNeurona5_1_2 an_5_FPAA5_1       |
  |  SumadorNeurona5_2_1 an_5_FPAA5_2_SumadorNeurona5_2_1 an_5_FPAA5_2       |
  |  SumadorNeurona5_2_2 an_5_FPAA5_2_SumadorNeurona5_2_2 an_5_FPAA5_2       |
  |  SumadorNeurona5_3_1 an_5_FPAA5_3_SumadorNeurona5_3_1 an_5_FPAA5_3       |
  |  SumadorNeurona5_3_2 an_5_FPAA5_3_SumadorNeurona5_3_2 an_5_FPAA5_3       |
  |  SumadorNeurona5_4_2 an_5_FPAA5_4_SumadorNeurona5_4_2 an_5_FPAA5_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input5_1_1          an_5_FPAA5_1_Input5_1_1 an_5_FPAA5_1       |
  |  Input5_1_2          an_5_FPAA5_1_Input5_1_2 an_5_FPAA5_1       |
  |  Input5_1_3          an_5_FPAA5_1_Input5_1_3 an_5_FPAA5_1       |
  |  Input5_2_1          an_5_FPAA5_2_Input5_2_1 an_5_FPAA5_2       |
  |  Input5_2_2          an_5_FPAA5_2_Input5_2_2 an_5_FPAA5_2       |
  |  Input5_2_3          an_5_FPAA5_2_Input5_2_3 an_5_FPAA5_2       |
  |  Input5_3_1          an_5_FPAA5_3_Input5_3_1 an_5_FPAA5_3       |
  |  Input5_3_2          an_5_FPAA5_3_Input5_3_2 an_5_FPAA5_3       |
  |  Input5_3_3          an_5_FPAA5_3_Input5_3_3 an_5_FPAA5_3       |
  |  Input5_4_1          an_5_FPAA5_4_Input5_4_1 an_5_FPAA5_4       |
  |  Input5_4_2          an_5_FPAA5_4_Input5_4_2 an_5_FPAA5_4       |
  |  SumadorNeurona5_4_1 an_5_FPAA5_4_SumadorNeurona5_4_1 an_5_FPAA5_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona5_1_1 an_5_FPAA5_1_SumadorNeurona5_1_1 an_5_FPAA5_1       |
  |  SumadorNeurona5_1_2 an_5_FPAA5_1_SumadorNeurona5_1_2 an_5_FPAA5_1       |
  |  SumadorNeurona5_2_1 an_5_FPAA5_2_SumadorNeurona5_2_1 an_5_FPAA5_2       |
  |  SumadorNeurona5_2_2 an_5_FPAA5_2_SumadorNeurona5_2_2 an_5_FPAA5_2       |
  |  SumadorNeurona5_3_1 an_5_FPAA5_3_SumadorNeurona5_3_1 an_5_FPAA5_3       |
  |  SumadorNeurona5_3_2 an_5_FPAA5_3_SumadorNeurona5_3_2 an_5_FPAA5_3       |
  |  SumadorNeurona5_4_2 an_5_FPAA5_4_SumadorNeurona5_4_2 an_5_FPAA5_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                        TransferFunction.cam                        #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Transfer Function Control                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                    setTransferFunctionTable                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_setTransferFunctionTable(an_CAM cam, double* Values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Transfer Function values for        |
  |  operation over input voltage. It assumes the input table has  |
  |  256 entries.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  TransferFunction5_4_1 an_5_FPAA5_4_TransferFunction5_4_1 an_5_FPAA5_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 6.ad2                                            *
*  Generated: October 19, 2020:  01:03 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_6_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold6_1_1       an_6_FPAA6_1_GainHold6_1_1 an_6_FPAA6_1       |
  |  GainHold6_1_2       an_6_FPAA6_1_GainHold6_1_2 an_6_FPAA6_1       |
  |  GainHold6_1_3       an_6_FPAA6_1_GainHold6_1_3 an_6_FPAA6_1       |
  |  GainHold6_2_1       an_6_FPAA6_2_GainHold6_2_1 an_6_FPAA6_2       |
  |  GainHold6_2_2       an_6_FPAA6_2_GainHold6_2_2 an_6_FPAA6_2       |
  |  GainHold6_2_3       an_6_FPAA6_2_GainHold6_2_3 an_6_FPAA6_2       |
  |  GainHold6_3_1       an_6_FPAA6_3_GainHold6_3_1 an_6_FPAA6_3       |
  |  GainHold6_3_2       an_6_FPAA6_3_GainHold6_3_2 an_6_FPAA6_3       |
  |  GainHold6_3_3       an_6_FPAA6_3_GainHold6_3_3 an_6_FPAA6_3       |
  |  GainHold6_4_1       an_6_FPAA6_4_GainHold6_4_1 an_6_FPAA6_4       |
  |  GainHold6_4_2       an_6_FPAA6_4_GainHold6_4_2 an_6_FPAA6_4       |
  |  GainHold6_4_3       an_6_FPAA6_4_GainHold6_4_3 an_6_FPAA6_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_6_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold6_1_1       an_6_FPAA6_1_GainHold6_1_1 an_6_FPAA6_1       |
  |  GainHold6_1_2       an_6_FPAA6_1_GainHold6_1_2 an_6_FPAA6_1       |
  |  GainHold6_1_3       an_6_FPAA6_1_GainHold6_1_3 an_6_FPAA6_1       |
  |  GainHold6_2_1       an_6_FPAA6_2_GainHold6_2_1 an_6_FPAA6_2       |
  |  GainHold6_2_2       an_6_FPAA6_2_GainHold6_2_2 an_6_FPAA6_2       |
  |  GainHold6_2_3       an_6_FPAA6_2_GainHold6_2_3 an_6_FPAA6_2       |
  |  GainHold6_3_1       an_6_FPAA6_3_GainHold6_3_1 an_6_FPAA6_3       |
  |  GainHold6_3_2       an_6_FPAA6_3_GainHold6_3_2 an_6_FPAA6_3       |
  |  GainHold6_3_3       an_6_FPAA6_3_GainHold6_3_3 an_6_FPAA6_3       |
  |  GainHold6_4_1       an_6_FPAA6_4_GainHold6_4_1 an_6_FPAA6_4       |
  |  GainHold6_4_2       an_6_FPAA6_4_GainHold6_4_2 an_6_FPAA6_4       |
  |  GainHold6_4_3       an_6_FPAA6_4_GainHold6_4_3 an_6_FPAA6_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input6_1_1          an_6_FPAA6_1_Input6_1_1 an_6_FPAA6_1       |
  |  Input6_1_2          an_6_FPAA6_1_Input6_1_2 an_6_FPAA6_1       |
  |  SumadorNeurona6_1_1 an_6_FPAA6_1_SumadorNeurona6_1_1 an_6_FPAA6_1       |
  |  Input6_2_1          an_6_FPAA6_2_Input6_2_1 an_6_FPAA6_2       |
  |  Input6_2_2          an_6_FPAA6_2_Input6_2_2 an_6_FPAA6_2       |
  |  Input6_2_3          an_6_FPAA6_2_Input6_2_3 an_6_FPAA6_2       |
  |  Input6_3_1          an_6_FPAA6_3_Input6_3_1 an_6_FPAA6_3       |
  |  Input6_3_2          an_6_FPAA6_3_Input6_3_2 an_6_FPAA6_3       |
  |  Input6_3_3          an_6_FPAA6_3_Input6_3_3 an_6_FPAA6_3       |
  |  Input6_4_1          an_6_FPAA6_4_Input6_4_1 an_6_FPAA6_4       |
  |  Input6_4_2          an_6_FPAA6_4_Input6_4_2 an_6_FPAA6_4       |
  |  Input6_4_3          an_6_FPAA6_4_Input6_4_3 an_6_FPAA6_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona6_2_1 an_6_FPAA6_2_SumadorNeurona6_2_1 an_6_FPAA6_2       |
  |  SumadorNeurona6_2_2 an_6_FPAA6_2_SumadorNeurona6_2_2 an_6_FPAA6_2       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona6_1_2 an_6_FPAA6_1_SumadorNeurona6_1_2 an_6_FPAA6_1       |
  |  SumadorNeurona6_3_1 an_6_FPAA6_3_SumadorNeurona6_3_1 an_6_FPAA6_3       |
  |  SumadorNeurona6_3_2 an_6_FPAA6_3_SumadorNeurona6_3_2 an_6_FPAA6_3       |
  |  SumadorNeurona6_4_1 an_6_FPAA6_4_SumadorNeurona6_4_1 an_6_FPAA6_4       |
  |  SumadorNeurona6_4_2 an_6_FPAA6_4_SumadorNeurona6_4_2 an_6_FPAA6_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input6_1_1          an_6_FPAA6_1_Input6_1_1 an_6_FPAA6_1       |
  |  Input6_1_2          an_6_FPAA6_1_Input6_1_2 an_6_FPAA6_1       |
  |  SumadorNeurona6_1_1 an_6_FPAA6_1_SumadorNeurona6_1_1 an_6_FPAA6_1       |
  |  Input6_2_1          an_6_FPAA6_2_Input6_2_1 an_6_FPAA6_2       |
  |  Input6_2_2          an_6_FPAA6_2_Input6_2_2 an_6_FPAA6_2       |
  |  Input6_2_3          an_6_FPAA6_2_Input6_2_3 an_6_FPAA6_2       |
  |  Input6_3_1          an_6_FPAA6_3_Input6_3_1 an_6_FPAA6_3       |
  |  Input6_3_2          an_6_FPAA6_3_Input6_3_2 an_6_FPAA6_3       |
  |  Input6_3_3          an_6_FPAA6_3_Input6_3_3 an_6_FPAA6_3       |
  |  Input6_4_1          an_6_FPAA6_4_Input6_4_1 an_6_FPAA6_4       |
  |  Input6_4_2          an_6_FPAA6_4_Input6_4_2 an_6_FPAA6_4       |
  |  Input6_4_3          an_6_FPAA6_4_Input6_4_3 an_6_FPAA6_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona6_2_1 an_6_FPAA6_2_SumadorNeurona6_2_1 an_6_FPAA6_2       |
  |  SumadorNeurona6_2_2 an_6_FPAA6_2_SumadorNeurona6_2_2 an_6_FPAA6_2       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona6_1_2 an_6_FPAA6_1_SumadorNeurona6_1_2 an_6_FPAA6_1       |
  |  SumadorNeurona6_3_1 an_6_FPAA6_3_SumadorNeurona6_3_1 an_6_FPAA6_3       |
  |  SumadorNeurona6_3_2 an_6_FPAA6_3_SumadorNeurona6_3_2 an_6_FPAA6_3       |
  |  SumadorNeurona6_4_1 an_6_FPAA6_4_SumadorNeurona6_4_1 an_6_FPAA6_4       |
  |  SumadorNeurona6_4_2 an_6_FPAA6_4_SumadorNeurona6_4_2 an_6_FPAA6_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                        TransferFunction.cam                        #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Transfer Function Control                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                    setTransferFunctionTable                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_setTransferFunctionTable(an_CAM cam, double* Values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Transfer Function values for        |
  |  operation over input voltage. It assumes the input table has  |
  |  256 entries.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  TransferFunction6_1_1 an_6_FPAA6_1_TransferFunction6_1_1 an_6_FPAA6_1       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 7.ad2                                            *
*  Generated: October 19, 2020:  01:03 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_7_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold7_1_1       an_7_FPAA7_1_GainHold7_1_1 an_7_FPAA7_1       |
  |  GainHold7_1_2       an_7_FPAA7_1_GainHold7_1_2 an_7_FPAA7_1       |
  |  GainHold7_1_3       an_7_FPAA7_1_GainHold7_1_3 an_7_FPAA7_1       |
  |  GainHold7_2_1       an_7_FPAA7_2_GainHold7_2_1 an_7_FPAA7_2       |
  |  GainHold7_2_2       an_7_FPAA7_2_GainHold7_2_2 an_7_FPAA7_2       |
  |  GainHold7_2_3       an_7_FPAA7_2_GainHold7_2_3 an_7_FPAA7_2       |
  |  GainHold7_3_1       an_7_FPAA7_3_GainHold7_3_1 an_7_FPAA7_3       |
  |  GainHold7_3_2       an_7_FPAA7_3_GainHold7_3_2 an_7_FPAA7_3       |
  |  GainHold7_3_3       an_7_FPAA7_3_GainHold7_3_3 an_7_FPAA7_3       |
  |  GainHold7_4_1       an_7_FPAA7_4_GainHold7_4_1 an_7_FPAA7_4       |
  |  GainHold7_4_2       an_7_FPAA7_4_GainHold7_4_2 an_7_FPAA7_4       |
  |  GainHold7_4_3       an_7_FPAA7_4_GainHold7_4_3 an_7_FPAA7_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_7_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold7_1_1       an_7_FPAA7_1_GainHold7_1_1 an_7_FPAA7_1       |
  |  GainHold7_1_2       an_7_FPAA7_1_GainHold7_1_2 an_7_FPAA7_1       |
  |  GainHold7_1_3       an_7_FPAA7_1_GainHold7_1_3 an_7_FPAA7_1       |
  |  GainHold7_2_1       an_7_FPAA7_2_GainHold7_2_1 an_7_FPAA7_2       |
  |  GainHold7_2_2       an_7_FPAA7_2_GainHold7_2_2 an_7_FPAA7_2       |
  |  GainHold7_2_3       an_7_FPAA7_2_GainHold7_2_3 an_7_FPAA7_2       |
  |  GainHold7_3_1       an_7_FPAA7_3_GainHold7_3_1 an_7_FPAA7_3       |
  |  GainHold7_3_2       an_7_FPAA7_3_GainHold7_3_2 an_7_FPAA7_3       |
  |  GainHold7_3_3       an_7_FPAA7_3_GainHold7_3_3 an_7_FPAA7_3       |
  |  GainHold7_4_1       an_7_FPAA7_4_GainHold7_4_1 an_7_FPAA7_4       |
  |  GainHold7_4_2       an_7_FPAA7_4_GainHold7_4_2 an_7_FPAA7_4       |
  |  GainHold7_4_3       an_7_FPAA7_4_GainHold7_4_3 an_7_FPAA7_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input7_1_1          an_7_FPAA7_1_Input7_1_1 an_7_FPAA7_1       |
  |  Input7_1_2          an_7_FPAA7_1_Input7_1_2 an_7_FPAA7_1       |
  |  Input7_1_3          an_7_FPAA7_1_Input7_1_3 an_7_FPAA7_1       |
  |  Input7_2_1          an_7_FPAA7_2_Input7_2_1 an_7_FPAA7_2       |
  |  Input7_2_2          an_7_FPAA7_2_Input7_2_2 an_7_FPAA7_2       |
  |  Input7_2_3          an_7_FPAA7_2_Input7_2_3 an_7_FPAA7_2       |
  |  Input7_3_1          an_7_FPAA7_3_Input7_3_1 an_7_FPAA7_3       |
  |  Input7_3_2          an_7_FPAA7_3_Input7_3_2 an_7_FPAA7_3       |
  |  SumadorNeurona7_3_1 an_7_FPAA7_3_SumadorNeurona7_3_1 an_7_FPAA7_3       |
  |  Input7_4_1          an_7_FPAA7_4_Input7_4_1 an_7_FPAA7_4       |
  |  Input7_4_2          an_7_FPAA7_4_Input7_4_2 an_7_FPAA7_4       |
  |  SumadorNeurona7_4_1 an_7_FPAA7_4_SumadorNeurona7_4_1 an_7_FPAA7_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona7_1_1 an_7_FPAA7_1_SumadorNeurona7_1_1 an_7_FPAA7_1       |
  |  SumadorNeurona7_1_2 an_7_FPAA7_1_SumadorNeurona7_1_2 an_7_FPAA7_1       |
  |  SumadorNeurona7_2_1 an_7_FPAA7_2_SumadorNeurona7_2_1 an_7_FPAA7_2       |
  |  SumadorNeurona7_2_2 an_7_FPAA7_2_SumadorNeurona7_2_2 an_7_FPAA7_2       |
  |  SumadorNeurona7_3_2 an_7_FPAA7_3_SumadorNeurona7_3_2 an_7_FPAA7_3       |
  |  SumadorNeurona7_4_2 an_7_FPAA7_4_SumadorNeurona7_4_2 an_7_FPAA7_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Input7_1_1          an_7_FPAA7_1_Input7_1_1 an_7_FPAA7_1       |
  |  Input7_1_2          an_7_FPAA7_1_Input7_1_2 an_7_FPAA7_1       |
  |  Input7_1_3          an_7_FPAA7_1_Input7_1_3 an_7_FPAA7_1       |
  |  Input7_2_1          an_7_FPAA7_2_Input7_2_1 an_7_FPAA7_2       |
  |  Input7_2_2          an_7_FPAA7_2_Input7_2_2 an_7_FPAA7_2       |
  |  Input7_2_3          an_7_FPAA7_2_Input7_2_3 an_7_FPAA7_2       |
  |  Input7_3_1          an_7_FPAA7_3_Input7_3_1 an_7_FPAA7_3       |
  |  Input7_3_2          an_7_FPAA7_3_Input7_3_2 an_7_FPAA7_3       |
  |  SumadorNeurona7_3_1 an_7_FPAA7_3_SumadorNeurona7_3_1 an_7_FPAA7_3       |
  |  Input7_4_1          an_7_FPAA7_4_Input7_4_1 an_7_FPAA7_4       |
  |  Input7_4_2          an_7_FPAA7_4_Input7_4_2 an_7_FPAA7_4       |
  |  SumadorNeurona7_4_1 an_7_FPAA7_4_SumadorNeurona7_4_1 an_7_FPAA7_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona7_1_1 an_7_FPAA7_1_SumadorNeurona7_1_1 an_7_FPAA7_1       |
  |  SumadorNeurona7_1_2 an_7_FPAA7_1_SumadorNeurona7_1_2 an_7_FPAA7_1       |
  |  SumadorNeurona7_2_1 an_7_FPAA7_2_SumadorNeurona7_2_1 an_7_FPAA7_2       |
  |  SumadorNeurona7_2_2 an_7_FPAA7_2_SumadorNeurona7_2_2 an_7_FPAA7_2       |
  |  SumadorNeurona7_3_2 an_7_FPAA7_3_SumadorNeurona7_3_2 an_7_FPAA7_3       |
  |  SumadorNeurona7_4_2 an_7_FPAA7_4_SumadorNeurona7_4_2 an_7_FPAA7_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                        TransferFunction.cam                        #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Transfer Function Control                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                    setTransferFunctionTable                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_setTransferFunctionTable(an_CAM cam, double* Values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Transfer Function values for        |
  |  operation over input voltage. It assumes the input table has  |
  |  256 entries.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  TransferFunction7_3_1 an_7_FPAA7_3_TransferFunction7_3_1 an_7_FPAA7_3       |
  |  TransferFunction7_4_1 an_7_FPAA7_4_TransferFunction7_4_1 an_7_FPAA7_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 8.ad2                                            *
*  Generated: October 22, 2020:  06:55 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_8_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold8_2_1       an_8_FPAA8_2_GainHold8_2_1 an_8_FPAA8_2       |
  |  GainHold8_3_1       an_8_FPAA8_3_GainHold8_3_1 an_8_FPAA8_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_8_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold8_2_1       an_8_FPAA8_2_GainHold8_2_1 an_8_FPAA8_2       |
  |  GainHold8_3_1       an_8_FPAA8_3_GainHold8_3_1 an_8_FPAA8_3       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona8_3_2 an_8_FPAA8_3_SumadorNeurona8_3_2 an_8_FPAA8_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona8_2_2 an_8_FPAA8_2_SumadorNeurona8_2_2 an_8_FPAA8_2       |
  |  SumadorNeurona8_3_1 an_8_FPAA8_3_SumadorNeurona8_3_1 an_8_FPAA8_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona8_1_1 an_8_FPAA8_1_SumadorNeurona8_1_1 an_8_FPAA8_1       |
  |  SumadorNeurona8_1_2 an_8_FPAA8_1_SumadorNeurona8_1_2 an_8_FPAA8_1       |
  |  SumadorNeurona8_2_1 an_8_FPAA8_2_SumadorNeurona8_2_1 an_8_FPAA8_2       |
  |  SumadorNeurona8_4_1 an_8_FPAA8_4_SumadorNeurona8_4_1 an_8_FPAA8_4       |
  |  SumadorNeurona8_4_2 an_8_FPAA8_4_SumadorNeurona8_4_2 an_8_FPAA8_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona8_3_2 an_8_FPAA8_3_SumadorNeurona8_3_2 an_8_FPAA8_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona8_2_2 an_8_FPAA8_2_SumadorNeurona8_2_2 an_8_FPAA8_2       |
  |  SumadorNeurona8_3_1 an_8_FPAA8_3_SumadorNeurona8_3_1 an_8_FPAA8_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona8_1_1 an_8_FPAA8_1_SumadorNeurona8_1_1 an_8_FPAA8_1       |
  |  SumadorNeurona8_1_2 an_8_FPAA8_1_SumadorNeurona8_1_2 an_8_FPAA8_1       |
  |  SumadorNeurona8_2_1 an_8_FPAA8_2_SumadorNeurona8_2_1 an_8_FPAA8_2       |
  |  SumadorNeurona8_4_1 an_8_FPAA8_4_SumadorNeurona8_4_1 an_8_FPAA8_4       |
  |  SumadorNeurona8_4_2 an_8_FPAA8_4_SumadorNeurona8_4_2 an_8_FPAA8_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                        TransferFunction.cam                        #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Transfer Function Control                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                    setTransferFunctionTable                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_setTransferFunctionTable(an_CAM cam, double* Values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Transfer Function values for        |
  |  operation over input voltage. It assumes the input table has  |
  |  256 entries.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  TransferFunction8_2_1 an_8_FPAA8_2_TransferFunction8_2_1 an_8_FPAA8_2       |
  |  TransferFunction8_3_1 an_8_FPAA8_3_TransferFunction8_3_1 an_8_FPAA8_3       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 9.ad2                                            *
*  Generated: October 22, 2020:  06:55 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_9_fixed_setGainHold(an_CAM cam, double G);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold9_1_1       an_9_FPAA9_1_GainHold9_1_1 an_9_FPAA9_1       |
  |  GainHold9_2_1       an_9_FPAA9_2_GainHold9_2_1 an_9_FPAA9_2       |
  |  GainHold9_4_1       an_9_FPAA9_4_GainHold9_4_1 an_9_FPAA9_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_9_setGainHold(an_CAM cam, double G);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold9_1_1       an_9_FPAA9_1_GainHold9_1_1 an_9_FPAA9_1       |
  |  GainHold9_2_1       an_9_FPAA9_2_GainHold9_2_1 an_9_FPAA9_2       |
  |  GainHold9_4_1       an_9_FPAA9_4_GainHold9_4_1 an_9_FPAA9_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona9_2_2 an_9_FPAA9_2_SumadorNeurona9_2_2 an_9_FPAA9_2       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona9_1_2 an_9_FPAA9_1_SumadorNeurona9_1_2 an_9_FPAA9_1       |
  |  SumadorNeurona9_2_1 an_9_FPAA9_2_SumadorNeurona9_2_1 an_9_FPAA9_2       |
  |  SumadorNeurona9_4_2 an_9_FPAA9_4_SumadorNeurona9_4_2 an_9_FPAA9_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona9_1_1 an_9_FPAA9_1_SumadorNeurona9_1_1 an_9_FPAA9_1       |
  |  SumadorNeurona9_3_1 an_9_FPAA9_3_SumadorNeurona9_3_1 an_9_FPAA9_3       |
  |  SumadorNeurona9_3_2 an_9_FPAA9_3_SumadorNeurona9_3_2 an_9_FPAA9_3       |
  |  SumadorNeurona9_4_1 an_9_FPAA9_4_SumadorNeurona9_4_1 an_9_FPAA9_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona9_2_2 an_9_FPAA9_2_SumadorNeurona9_2_2 an_9_FPAA9_2       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona9_1_2 an_9_FPAA9_1_SumadorNeurona9_1_2 an_9_FPAA9_1       |
  |  SumadorNeurona9_2_1 an_9_FPAA9_2_SumadorNeurona9_2_1 an_9_FPAA9_2       |
  |  SumadorNeurona9_4_2 an_9_FPAA9_4_SumadorNeurona9_4_2 an_9_FPAA9_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona9_1_1 an_9_FPAA9_1_SumadorNeurona9_1_1 an_9_FPAA9_1       |
  |  SumadorNeurona9_3_1 an_9_FPAA9_3_SumadorNeurona9_3_1 an_9_FPAA9_3       |
  |  SumadorNeurona9_3_2 an_9_FPAA9_3_SumadorNeurona9_3_2 an_9_FPAA9_3       |
  |  SumadorNeurona9_4_1 an_9_FPAA9_4_SumadorNeurona9_4_1 an_9_FPAA9_4       |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                        TransferFunction.cam                        #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Transfer Function Control                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                    setTransferFunctionTable                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_setTransferFunctionTable(an_CAM cam, double* Values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Transfer Function values for        |
  |  operation over input voltage. It assumes the input table has  |
  |  256 entries.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  TransferFunction9_1_1 an_9_FPAA9_1_TransferFunction9_1_1 an_9_FPAA9_1       |
  |  TransferFunction9_2_1 an_9_FPAA9_2_TransferFunction9_2_1 an_9_FPAA9_2       |
  |  TransferFunction9_4_1 an_9_FPAA9_4_TransferFunction9_4_1 an_9_FPAA9_4       |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   Placa 10.ad2                                           *
*  Generated: October 22, 2020:  06:56 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                            GainHold.cam                            #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       fixed_setGainHold                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_10_fixed_setGainHold(an_CAM cam, double G);       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold10_1_1      an_10_FPAA10_1_GainHold10_1_1 an_10_FPAA10_1     |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_10_setGainHold(an_CAM cam, double G);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainHold10_1_1      an_10_FPAA10_1_GainHold10_1_1 an_10_FPAA10_1     |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            SumDiff.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                             SumDiff                              (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_2in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona10_1_2 an_10_FPAA10_1_SumadorNeurona10_1_2 an_10_FPAA10_1     |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona10_1_1 an_10_FPAA10_1_SumadorNeurona10_1_1 an_10_FPAA10_1     |
  |  SumadorNeurona10_2_1 an_10_FPAA10_2_SumadorNeurona10_2_1 an_10_FPAA10_2     |
  |  SumadorNeurona10_2_2 an_10_FPAA10_2_SumadorNeurona10_2_2 an_10_FPAA10_2     |
  |  SumadorNeurona10_2_3 an_10_FPAA10_2_SumadorNeurona10_2_3 an_10_FPAA10_2     |
  |  SumadorNeurona10_2_4 an_10_FPAA10_2_SumadorNeurona10_2_4 an_10_FPAA10_2     |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A fixed-point method for setting the gain of the inputs of    |
  |  this module.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona0_3_11 an_10_FPAA10_3_SumadorNeurona0_3_11 an_10_FPAA10_3     |
  |  SumadorNeurona10_3_1 an_10_FPAA10_3_SumadorNeurona10_3_1 an_10_FPAA10_3     |
  |  SumadorNeurona10_4_1 an_10_FPAA10_4_SumadorNeurona10_4_1 an_10_FPAA10_4     |
  |  SumadorNeurona10_4_2 an_10_FPAA10_4_SumadorNeurona10_4_2 an_10_FPAA10_4     |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_setGainSumDiff_2in(an_CAM cam, double G1, double G2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona10_1_2 an_10_FPAA10_1_SumadorNeurona10_1_2 an_10_FPAA10_1     |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona10_1_1 an_10_FPAA10_1_SumadorNeurona10_1_1 an_10_FPAA10_1     |
  |  SumadorNeurona10_2_1 an_10_FPAA10_2_SumadorNeurona10_2_1 an_10_FPAA10_2     |
  |  SumadorNeurona10_2_2 an_10_FPAA10_2_SumadorNeurona10_2_2 an_10_FPAA10_2     |
  |  SumadorNeurona10_2_3 an_10_FPAA10_2_SumadorNeurona10_2_3 an_10_FPAA10_2     |
  |  SumadorNeurona10_2_4 an_10_FPAA10_2_SumadorNeurona10_2_4 an_10_FPAA10_2     |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the gain of the      |
  |  inputs of this module.                                        |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  SumadorNeurona0_3_11 an_10_FPAA10_3_SumadorNeurona0_3_11 an_10_FPAA10_3     |
  |  SumadorNeurona10_3_1 an_10_FPAA10_3_SumadorNeurona10_3_1 an_10_FPAA10_3     |
  |  SumadorNeurona10_4_1 an_10_FPAA10_4_SumadorNeurona10_4_1 an_10_FPAA10_4     |
  |  SumadorNeurona10_4_2 an_10_FPAA10_4_SumadorNeurona10_4_2 an_10_FPAA10_4     |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                        TransferFunction.cam                        #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Transfer Function Control                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                    setTransferFunctionTable                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_setTransferFunctionTable(an_CAM cam, double* Values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Transfer Function values for        |
  |  operation over input voltage. It assumes the input table has  |
  |  256 entries.                                                  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  TransferFunction10_1_1 an_10_FPAA10_1_TransferFunction10_1_1 an_10_FPAA10_1     |
  |                                                                |
  \*--------------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif /* CAMCODE_H */
