#include "CAMCode.h"

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
*  Circuit:   Placa 1.ad2                                            *
*  Generated: October 16, 2020:  12:35 PM                            *
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

     double an_1_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_1_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_1_SetCapValue(cam, an_1_AnadigmApex_GainHold_Cin,cap1);
        an_1_SetCapValue(cam, an_1_AnadigmApex_GainHold_Cout,cap2);
        return an_1_FixedToFloat(an_1_FixedDivide(an_1_IntToFixed(cap1),an_1_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_1_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_1_ChooseCapRatio(G, &cap1, &cap2);
        
        an_1_SetCapValue(cam, an_1_AnadigmApex_GainHold_Cin,cap1);
        an_1_SetCapValue(cam, an_1_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_1_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_1_FloatToFixed(G1);
        an_Fixed workG2 = an_1_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)	Z1=1;
        if (workG2==0)	Z2=1;
        
        while (dCout > 0)
        {	err = 0;
                fixedp_dCout = an_1_IntToFixed(dCout);
           if (Z1==0)
           {	dC1 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_1_FixedDivide(an_1_IntToFixed(dC1),fixedp_dCout);
              err += an_1_FixedDivide(aG1,workG1) + an_1_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {	dC2 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_1_FixedDivide(an_1_IntToFixed(dC2),fixedp_dCout);
              err += an_1_FixedDivide(aG2,workG2) + an_1_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)	C1=0;
        if (Z2==1)	C2=0;
        
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinA, C1);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinB, C2);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
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

     void an_1_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        an_Fixed aG1, aG2, aG3;
        an_Fixed workG1 = an_1_FloatToFixed(G1);
        an_Fixed workG2 = an_1_FloatToFixed(G2);
        an_Fixed workG3 = an_1_FloatToFixed(G3);
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0;
        if (workG1==0)	Z1=1;
        if (workG2==0)	Z2=1;
        if (workG3==0)	Z3=1;
        
        while (dCout > 0)
        {	err = 0;
                fixedp_dCout = an_1_IntToFixed(dCout);
           if (Z1==0)
           {	dC1 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_1_FixedDivide(an_1_IntToFixed(dC1),fixedp_dCout);
              err += an_1_FixedDivide(aG1,workG1) + an_1_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {	dC2 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_1_FixedDivide(an_1_IntToFixed(dC2),fixedp_dCout);
              err += an_1_FixedDivide(aG2,workG2) + an_1_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {	dC3 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_1_FixedDivide(an_1_IntToFixed(dC3),fixedp_dCout);
              err += an_1_FixedDivide(aG3,workG3) + an_1_FixedDivide(workG3,aG3);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)	C1=0;
        if (Z2==1)	C2=0;
        if (Z3==1)	C3=0;
        
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinA, C1);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinB, C2);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinC, C3);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_1_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_1_FloatToFixed(G1);
        an_Fixed workG2 = an_1_FloatToFixed(G2);
        an_Fixed workG3 = an_1_FloatToFixed(G3);
        an_Fixed workG4 = an_1_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)	Z1=1;
        if (workG2==0)	Z2=1;
        if (workG3==0)	Z3=1;
        if (workG4==0)	Z4=1;
        
        while (dCout > 0)
        {	err = 0;
                fixedp_dCout = an_1_IntToFixed(dCout);
           if (Z1==0)
           {	dC1 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_1_FixedDivide(an_1_IntToFixed(dC1),fixedp_dCout);
              err += an_1_FixedDivide(aG1,workG1) + an_1_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {	dC2 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_1_FixedDivide(an_1_IntToFixed(dC2),fixedp_dCout);
              err += an_1_FixedDivide(aG2,workG2) + an_1_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {	dC3 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_1_FixedDivide(an_1_IntToFixed(dC3),fixedp_dCout);
              err += an_1_FixedDivide(aG3,workG3) + an_1_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {	dC4 = an_1_FixedAdjustCap(an_1_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_1_FixedDivide(an_1_IntToFixed(dC4),fixedp_dCout);
              err += an_1_FixedDivide(aG4,workG4) + an_1_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)	C1=0;
        if (Z2==1)	C2=0;
        if (Z3==1)	C3=0;
        if (Z4==1)	C4=0;
        
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinA, C1);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinB, C2);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinC, C3);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinD, C4);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_1_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)	Z1=1;
        if (G2==0)	Z2=1;
        
        while (dCout > 0)
        {	err = 0;
           if (Z1==0)
           {	dC1 = an_1_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {	dC2 = an_1_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)	C1=0;
        if (Z2==1)	C2=0;
        
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinA, C1);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinB, C2);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
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

     void an_1_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        double aG1, aG2, aG3;
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0;
        if (G1==0)	Z1=1;
        if (G2==0)	Z2=1;
        if (G3==0)	Z3=1;
        
        while (dCout > 0)
        {	err = 0;
           if (Z1==0)
           {	dC1 = an_1_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {	dC2 = an_1_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {	dC3 = an_1_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)	C1=0;
        if (Z2==1)	C2=0;
        if (Z3==1)	C3=0;
        
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinA, C1);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinB, C2);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinC, C3);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_1_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)	Z1=1;
        if (G2==0)	Z2=1;
        if (G3==0)	Z3=1;
        if (G4==0)	Z4=1;
        
        while (dCout > 0)
        {	err = 0;
           if (Z1==0)
           {	dC1 = an_1_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {	dC2 = an_1_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {	dC3 = an_1_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {	dC4 = an_1_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)	C1=0;
        if (Z2==1)	C2=0;
        if (Z3==1)	C3=0;
        if (Z4==1)	C4=0;
        
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinA, C1);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinB, C2);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinC, C3);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_CinD, C4);
        an_1_SetCapValue(cam, an_1_AnadigmApex_SumDiff_Cout, Cout);
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_2_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_2_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_2_SetCapValue(cam, an_2_AnadigmApex_GainHold_Cin,cap1);
        an_2_SetCapValue(cam, an_2_AnadigmApex_GainHold_Cout,cap2);
        return an_2_FixedToFloat(an_2_FixedDivide(an_2_IntToFixed(cap1),an_2_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_2_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_2_ChooseCapRatio(G, &cap1, &cap2);
        
        an_2_SetCapValue(cam, an_2_AnadigmApex_GainHold_Cin,cap1);
        an_2_SetCapValue(cam, an_2_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_2_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_2_FloatToFixed(G1);
        an_Fixed workG2 = an_2_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_2_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_2_FixedDivide(an_2_IntToFixed(dC1),fixedp_dCout);
              err += an_2_FixedDivide(aG1,workG1) + an_2_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_2_FixedDivide(an_2_IntToFixed(dC2),fixedp_dCout);
              err += an_2_FixedDivide(aG2,workG2) + an_2_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinA, C1);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinB, C2);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
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

     void an_2_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        an_Fixed aG1, aG2, aG3;
        an_Fixed workG1 = an_2_FloatToFixed(G1);
        an_Fixed workG2 = an_2_FloatToFixed(G2);
        an_Fixed workG3 = an_2_FloatToFixed(G3);
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_2_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_2_FixedDivide(an_2_IntToFixed(dC1),fixedp_dCout);
              err += an_2_FixedDivide(aG1,workG1) + an_2_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_2_FixedDivide(an_2_IntToFixed(dC2),fixedp_dCout);
              err += an_2_FixedDivide(aG2,workG2) + an_2_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_2_FixedDivide(an_2_IntToFixed(dC3),fixedp_dCout);
              err += an_2_FixedDivide(aG3,workG3) + an_2_FixedDivide(workG3,aG3);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinA, C1);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinB, C2);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinC, C3);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_2_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_2_FloatToFixed(G1);
        an_Fixed workG2 = an_2_FloatToFixed(G2);
        an_Fixed workG3 = an_2_FloatToFixed(G3);
        an_Fixed workG4 = an_2_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_2_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_2_FixedDivide(an_2_IntToFixed(dC1),fixedp_dCout);
              err += an_2_FixedDivide(aG1,workG1) + an_2_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_2_FixedDivide(an_2_IntToFixed(dC2),fixedp_dCout);
              err += an_2_FixedDivide(aG2,workG2) + an_2_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_2_FixedDivide(an_2_IntToFixed(dC3),fixedp_dCout);
              err += an_2_FixedDivide(aG3,workG3) + an_2_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_2_FixedAdjustCap(an_2_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_2_FixedDivide(an_2_IntToFixed(dC4),fixedp_dCout);
              err += an_2_FixedDivide(aG4,workG4) + an_2_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinA, C1);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinB, C2);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinC, C3);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinD, C4);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_2_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_2_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_2_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinA, C1);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinB, C2);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
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

     void an_2_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        double aG1, aG2, aG3;
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_2_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_2_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_2_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinA, C1);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinB, C2);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinC, C3);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_2_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_2_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_2_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_2_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_2_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinA, C1);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinB, C2);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinC, C3);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_CinD, C4);
        an_2_SetCapValue(cam, an_2_AnadigmApex_SumDiff_Cout, Cout);
     }


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

     void an_2_setTransferFunctionTable(an_CAM cam, double* Values)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int C1 = 128, C2 = 128;
        
        for (loop = 0; loop < 256; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0.0)
           C2 = an_2_AdjustCap(127.0*2.0/maxV);
        
        for (loop = 0; loop < 256; loop++)
        {
           C1 = an_2_AdjustCap(128.0 + Values[loop]*C2/2.0);
           LUTTable[loop] = (an_Byte)C1;
        }
        an_2_LoadLUT(cam, LUTTable, 0, 256);
        an_2_SetCapValue(cam, an_2_AnadigmApex_TransferFunction_Cout, C2);
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_3_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_3_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_3_SetCapValue(cam, an_3_AnadigmApex_GainHold_Cin,cap1);
        an_3_SetCapValue(cam, an_3_AnadigmApex_GainHold_Cout,cap2);
        return an_3_FixedToFloat(an_3_FixedDivide(an_3_IntToFixed(cap1),an_3_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_3_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_3_ChooseCapRatio(G, &cap1, &cap2);
        
        an_3_SetCapValue(cam, an_3_AnadigmApex_GainHold_Cin,cap1);
        an_3_SetCapValue(cam, an_3_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_3_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_3_FloatToFixed(G1);
        an_Fixed workG2 = an_3_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_3_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_3_FixedAdjustCap(an_3_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_3_FixedDivide(an_3_IntToFixed(dC1),fixedp_dCout);
              err += an_3_FixedDivide(aG1,workG1) + an_3_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_3_FixedAdjustCap(an_3_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_3_FixedDivide(an_3_IntToFixed(dC2),fixedp_dCout);
              err += an_3_FixedDivide(aG2,workG2) + an_3_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinA, C1);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinB, C2);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_3_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_3_FloatToFixed(G1);
        an_Fixed workG2 = an_3_FloatToFixed(G2);
        an_Fixed workG3 = an_3_FloatToFixed(G3);
        an_Fixed workG4 = an_3_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_3_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_3_FixedAdjustCap(an_3_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_3_FixedDivide(an_3_IntToFixed(dC1),fixedp_dCout);
              err += an_3_FixedDivide(aG1,workG1) + an_3_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_3_FixedAdjustCap(an_3_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_3_FixedDivide(an_3_IntToFixed(dC2),fixedp_dCout);
              err += an_3_FixedDivide(aG2,workG2) + an_3_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_3_FixedAdjustCap(an_3_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_3_FixedDivide(an_3_IntToFixed(dC3),fixedp_dCout);
              err += an_3_FixedDivide(aG3,workG3) + an_3_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_3_FixedAdjustCap(an_3_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_3_FixedDivide(an_3_IntToFixed(dC4),fixedp_dCout);
              err += an_3_FixedDivide(aG4,workG4) + an_3_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinA, C1);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinB, C2);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinC, C3);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinD, C4);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_3_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_3_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_3_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinA, C1);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinB, C2);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_3_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_3_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_3_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_3_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_3_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinA, C1);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinB, C2);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinC, C3);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_CinD, C4);
        an_3_SetCapValue(cam, an_3_AnadigmApex_SumDiff_Cout, Cout);
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_4_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_4_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_4_SetCapValue(cam, an_4_AnadigmApex_GainHold_Cin,cap1);
        an_4_SetCapValue(cam, an_4_AnadigmApex_GainHold_Cout,cap2);
        return an_4_FixedToFloat(an_4_FixedDivide(an_4_IntToFixed(cap1),an_4_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_4_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_4_ChooseCapRatio(G, &cap1, &cap2);
        
        an_4_SetCapValue(cam, an_4_AnadigmApex_GainHold_Cin,cap1);
        an_4_SetCapValue(cam, an_4_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_4_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_4_FloatToFixed(G1);
        an_Fixed workG2 = an_4_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_4_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_4_FixedDivide(an_4_IntToFixed(dC1),fixedp_dCout);
              err += an_4_FixedDivide(aG1,workG1) + an_4_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_4_FixedDivide(an_4_IntToFixed(dC2),fixedp_dCout);
              err += an_4_FixedDivide(aG2,workG2) + an_4_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinA, C1);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinB, C2);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
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

     void an_4_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        an_Fixed aG1, aG2, aG3;
        an_Fixed workG1 = an_4_FloatToFixed(G1);
        an_Fixed workG2 = an_4_FloatToFixed(G2);
        an_Fixed workG3 = an_4_FloatToFixed(G3);
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_4_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_4_FixedDivide(an_4_IntToFixed(dC1),fixedp_dCout);
              err += an_4_FixedDivide(aG1,workG1) + an_4_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_4_FixedDivide(an_4_IntToFixed(dC2),fixedp_dCout);
              err += an_4_FixedDivide(aG2,workG2) + an_4_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_4_FixedDivide(an_4_IntToFixed(dC3),fixedp_dCout);
              err += an_4_FixedDivide(aG3,workG3) + an_4_FixedDivide(workG3,aG3);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinA, C1);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinB, C2);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinC, C3);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_4_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_4_FloatToFixed(G1);
        an_Fixed workG2 = an_4_FloatToFixed(G2);
        an_Fixed workG3 = an_4_FloatToFixed(G3);
        an_Fixed workG4 = an_4_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_4_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_4_FixedDivide(an_4_IntToFixed(dC1),fixedp_dCout);
              err += an_4_FixedDivide(aG1,workG1) + an_4_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_4_FixedDivide(an_4_IntToFixed(dC2),fixedp_dCout);
              err += an_4_FixedDivide(aG2,workG2) + an_4_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_4_FixedDivide(an_4_IntToFixed(dC3),fixedp_dCout);
              err += an_4_FixedDivide(aG3,workG3) + an_4_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_4_FixedAdjustCap(an_4_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_4_FixedDivide(an_4_IntToFixed(dC4),fixedp_dCout);
              err += an_4_FixedDivide(aG4,workG4) + an_4_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinA, C1);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinB, C2);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinC, C3);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinD, C4);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_4_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_4_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_4_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinA, C1);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinB, C2);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
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

     void an_4_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        double aG1, aG2, aG3;
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_4_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_4_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_4_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinA, C1);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinB, C2);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinC, C3);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_4_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_4_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_4_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_4_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_4_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinA, C1);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinB, C2);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinC, C3);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_CinD, C4);
        an_4_SetCapValue(cam, an_4_AnadigmApex_SumDiff_Cout, Cout);
     }


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

     void an_4_setTransferFunctionTable(an_CAM cam, double* Values)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int C1 = 128, C2 = 128;
        
        for (loop = 0; loop < 256; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0.0)
           C2 = an_4_AdjustCap(127.0*2.0/maxV);
        
        for (loop = 0; loop < 256; loop++)
        {
           C1 = an_4_AdjustCap(128.0 + Values[loop]*C2/2.0);
           LUTTable[loop] = (an_Byte)C1;
        }
        an_4_LoadLUT(cam, LUTTable, 0, 256);
        an_4_SetCapValue(cam, an_4_AnadigmApex_TransferFunction_Cout, C2);
     }


/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_5_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_5_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_5_SetCapValue(cam, an_5_AnadigmApex_GainHold_Cin,cap1);
        an_5_SetCapValue(cam, an_5_AnadigmApex_GainHold_Cout,cap2);
        return an_5_FixedToFloat(an_5_FixedDivide(an_5_IntToFixed(cap1),an_5_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_5_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_5_ChooseCapRatio(G, &cap1, &cap2);
        
        an_5_SetCapValue(cam, an_5_AnadigmApex_GainHold_Cin,cap1);
        an_5_SetCapValue(cam, an_5_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_5_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_5_FloatToFixed(G1);
        an_Fixed workG2 = an_5_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_5_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_5_FixedAdjustCap(an_5_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_5_FixedDivide(an_5_IntToFixed(dC1),fixedp_dCout);
              err += an_5_FixedDivide(aG1,workG1) + an_5_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_5_FixedAdjustCap(an_5_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_5_FixedDivide(an_5_IntToFixed(dC2),fixedp_dCout);
              err += an_5_FixedDivide(aG2,workG2) + an_5_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinA, C1);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinB, C2);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_5_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_5_FloatToFixed(G1);
        an_Fixed workG2 = an_5_FloatToFixed(G2);
        an_Fixed workG3 = an_5_FloatToFixed(G3);
        an_Fixed workG4 = an_5_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_5_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_5_FixedAdjustCap(an_5_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_5_FixedDivide(an_5_IntToFixed(dC1),fixedp_dCout);
              err += an_5_FixedDivide(aG1,workG1) + an_5_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_5_FixedAdjustCap(an_5_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_5_FixedDivide(an_5_IntToFixed(dC2),fixedp_dCout);
              err += an_5_FixedDivide(aG2,workG2) + an_5_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_5_FixedAdjustCap(an_5_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_5_FixedDivide(an_5_IntToFixed(dC3),fixedp_dCout);
              err += an_5_FixedDivide(aG3,workG3) + an_5_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_5_FixedAdjustCap(an_5_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_5_FixedDivide(an_5_IntToFixed(dC4),fixedp_dCout);
              err += an_5_FixedDivide(aG4,workG4) + an_5_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinA, C1);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinB, C2);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinC, C3);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinD, C4);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_5_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_5_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_5_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinA, C1);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinB, C2);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_5_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_5_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_5_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_5_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_5_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinA, C1);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinB, C2);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinC, C3);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_CinD, C4);
        an_5_SetCapValue(cam, an_5_AnadigmApex_SumDiff_Cout, Cout);
     }


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

     void an_5_setTransferFunctionTable(an_CAM cam, double* Values)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int C1 = 128, C2 = 128;
        
        for (loop = 0; loop < 256; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0.0)
           C2 = an_5_AdjustCap(127.0*2.0/maxV);
        
        for (loop = 0; loop < 256; loop++)
        {
           C1 = an_5_AdjustCap(128.0 + Values[loop]*C2/2.0);
           LUTTable[loop] = (an_Byte)C1;
        }
        an_5_LoadLUT(cam, LUTTable, 0, 256);
        an_5_SetCapValue(cam, an_5_AnadigmApex_TransferFunction_Cout, C2);
     }


/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_6_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_6_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_6_SetCapValue(cam, an_6_AnadigmApex_GainHold_Cin,cap1);
        an_6_SetCapValue(cam, an_6_AnadigmApex_GainHold_Cout,cap2);
        return an_6_FixedToFloat(an_6_FixedDivide(an_6_IntToFixed(cap1),an_6_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_6_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_6_ChooseCapRatio(G, &cap1, &cap2);
        
        an_6_SetCapValue(cam, an_6_AnadigmApex_GainHold_Cin,cap1);
        an_6_SetCapValue(cam, an_6_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_6_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_6_FloatToFixed(G1);
        an_Fixed workG2 = an_6_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_6_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_6_FixedDivide(an_6_IntToFixed(dC1),fixedp_dCout);
              err += an_6_FixedDivide(aG1,workG1) + an_6_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_6_FixedDivide(an_6_IntToFixed(dC2),fixedp_dCout);
              err += an_6_FixedDivide(aG2,workG2) + an_6_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinA, C1);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinB, C2);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
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

     void an_6_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        an_Fixed aG1, aG2, aG3;
        an_Fixed workG1 = an_6_FloatToFixed(G1);
        an_Fixed workG2 = an_6_FloatToFixed(G2);
        an_Fixed workG3 = an_6_FloatToFixed(G3);
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_6_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_6_FixedDivide(an_6_IntToFixed(dC1),fixedp_dCout);
              err += an_6_FixedDivide(aG1,workG1) + an_6_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_6_FixedDivide(an_6_IntToFixed(dC2),fixedp_dCout);
              err += an_6_FixedDivide(aG2,workG2) + an_6_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_6_FixedDivide(an_6_IntToFixed(dC3),fixedp_dCout);
              err += an_6_FixedDivide(aG3,workG3) + an_6_FixedDivide(workG3,aG3);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinA, C1);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinB, C2);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinC, C3);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_6_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_6_FloatToFixed(G1);
        an_Fixed workG2 = an_6_FloatToFixed(G2);
        an_Fixed workG3 = an_6_FloatToFixed(G3);
        an_Fixed workG4 = an_6_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_6_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_6_FixedDivide(an_6_IntToFixed(dC1),fixedp_dCout);
              err += an_6_FixedDivide(aG1,workG1) + an_6_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_6_FixedDivide(an_6_IntToFixed(dC2),fixedp_dCout);
              err += an_6_FixedDivide(aG2,workG2) + an_6_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_6_FixedDivide(an_6_IntToFixed(dC3),fixedp_dCout);
              err += an_6_FixedDivide(aG3,workG3) + an_6_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_6_FixedAdjustCap(an_6_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_6_FixedDivide(an_6_IntToFixed(dC4),fixedp_dCout);
              err += an_6_FixedDivide(aG4,workG4) + an_6_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinA, C1);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinB, C2);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinC, C3);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinD, C4);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_6_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_6_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_6_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinA, C1);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinB, C2);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
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

     void an_6_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        double aG1, aG2, aG3;
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_6_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_6_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_6_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinA, C1);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinB, C2);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinC, C3);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_6_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_6_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_6_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_6_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_6_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinA, C1);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinB, C2);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinC, C3);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_CinD, C4);
        an_6_SetCapValue(cam, an_6_AnadigmApex_SumDiff_Cout, Cout);
     }


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

     void an_6_setTransferFunctionTable(an_CAM cam, double* Values)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int C1 = 128, C2 = 128;
        
        for (loop = 0; loop < 256; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0.0)
           C2 = an_6_AdjustCap(127.0*2.0/maxV);
        
        for (loop = 0; loop < 256; loop++)
        {
           C1 = an_6_AdjustCap(128.0 + Values[loop]*C2/2.0);
           LUTTable[loop] = (an_Byte)C1;
        }
        an_6_LoadLUT(cam, LUTTable, 0, 256);
        an_6_SetCapValue(cam, an_6_AnadigmApex_TransferFunction_Cout, C2);
     }


/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_7_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_7_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_7_SetCapValue(cam, an_7_AnadigmApex_GainHold_Cin,cap1);
        an_7_SetCapValue(cam, an_7_AnadigmApex_GainHold_Cout,cap2);
        return an_7_FixedToFloat(an_7_FixedDivide(an_7_IntToFixed(cap1),an_7_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_7_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_7_ChooseCapRatio(G, &cap1, &cap2);
        
        an_7_SetCapValue(cam, an_7_AnadigmApex_GainHold_Cin,cap1);
        an_7_SetCapValue(cam, an_7_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_7_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_7_FloatToFixed(G1);
        an_Fixed workG2 = an_7_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_7_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_7_FixedAdjustCap(an_7_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_7_FixedDivide(an_7_IntToFixed(dC1),fixedp_dCout);
              err += an_7_FixedDivide(aG1,workG1) + an_7_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_7_FixedAdjustCap(an_7_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_7_FixedDivide(an_7_IntToFixed(dC2),fixedp_dCout);
              err += an_7_FixedDivide(aG2,workG2) + an_7_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinA, C1);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinB, C2);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_7_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_7_FloatToFixed(G1);
        an_Fixed workG2 = an_7_FloatToFixed(G2);
        an_Fixed workG3 = an_7_FloatToFixed(G3);
        an_Fixed workG4 = an_7_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_7_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_7_FixedAdjustCap(an_7_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_7_FixedDivide(an_7_IntToFixed(dC1),fixedp_dCout);
              err += an_7_FixedDivide(aG1,workG1) + an_7_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_7_FixedAdjustCap(an_7_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_7_FixedDivide(an_7_IntToFixed(dC2),fixedp_dCout);
              err += an_7_FixedDivide(aG2,workG2) + an_7_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_7_FixedAdjustCap(an_7_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_7_FixedDivide(an_7_IntToFixed(dC3),fixedp_dCout);
              err += an_7_FixedDivide(aG3,workG3) + an_7_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_7_FixedAdjustCap(an_7_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_7_FixedDivide(an_7_IntToFixed(dC4),fixedp_dCout);
              err += an_7_FixedDivide(aG4,workG4) + an_7_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinA, C1);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinB, C2);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinC, C3);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinD, C4);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_7_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_7_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_7_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinA, C1);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinB, C2);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_7_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_7_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_7_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_7_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_7_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinA, C1);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinB, C2);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinC, C3);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_CinD, C4);
        an_7_SetCapValue(cam, an_7_AnadigmApex_SumDiff_Cout, Cout);
     }


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

     void an_7_setTransferFunctionTable(an_CAM cam, double* Values)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int C1 = 128, C2 = 128;
        
        for (loop = 0; loop < 256; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0.0)
           C2 = an_7_AdjustCap(127.0*2.0/maxV);
        
        for (loop = 0; loop < 256; loop++)
        {
           C1 = an_7_AdjustCap(128.0 + Values[loop]*C2/2.0);
           LUTTable[loop] = (an_Byte)C1;
        }
        an_7_LoadLUT(cam, LUTTable, 0, 256);
        an_7_SetCapValue(cam, an_7_AnadigmApex_TransferFunction_Cout, C2);
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_8_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_8_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_8_SetCapValue(cam, an_8_AnadigmApex_GainHold_Cin,cap1);
        an_8_SetCapValue(cam, an_8_AnadigmApex_GainHold_Cout,cap2);
        return an_8_FixedToFloat(an_8_FixedDivide(an_8_IntToFixed(cap1),an_8_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_8_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_8_ChooseCapRatio(G, &cap1, &cap2);
        
        an_8_SetCapValue(cam, an_8_AnadigmApex_GainHold_Cin,cap1);
        an_8_SetCapValue(cam, an_8_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_8_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_8_FloatToFixed(G1);
        an_Fixed workG2 = an_8_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_8_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_8_FixedDivide(an_8_IntToFixed(dC1),fixedp_dCout);
              err += an_8_FixedDivide(aG1,workG1) + an_8_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_8_FixedDivide(an_8_IntToFixed(dC2),fixedp_dCout);
              err += an_8_FixedDivide(aG2,workG2) + an_8_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinA, C1);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinB, C2);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
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

     void an_8_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        an_Fixed aG1, aG2, aG3;
        an_Fixed workG1 = an_8_FloatToFixed(G1);
        an_Fixed workG2 = an_8_FloatToFixed(G2);
        an_Fixed workG3 = an_8_FloatToFixed(G3);
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_8_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_8_FixedDivide(an_8_IntToFixed(dC1),fixedp_dCout);
              err += an_8_FixedDivide(aG1,workG1) + an_8_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_8_FixedDivide(an_8_IntToFixed(dC2),fixedp_dCout);
              err += an_8_FixedDivide(aG2,workG2) + an_8_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_8_FixedDivide(an_8_IntToFixed(dC3),fixedp_dCout);
              err += an_8_FixedDivide(aG3,workG3) + an_8_FixedDivide(workG3,aG3);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinA, C1);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinB, C2);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinC, C3);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_8_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_8_FloatToFixed(G1);
        an_Fixed workG2 = an_8_FloatToFixed(G2);
        an_Fixed workG3 = an_8_FloatToFixed(G3);
        an_Fixed workG4 = an_8_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_8_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_8_FixedDivide(an_8_IntToFixed(dC1),fixedp_dCout);
              err += an_8_FixedDivide(aG1,workG1) + an_8_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_8_FixedDivide(an_8_IntToFixed(dC2),fixedp_dCout);
              err += an_8_FixedDivide(aG2,workG2) + an_8_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_8_FixedDivide(an_8_IntToFixed(dC3),fixedp_dCout);
              err += an_8_FixedDivide(aG3,workG3) + an_8_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_8_FixedAdjustCap(an_8_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_8_FixedDivide(an_8_IntToFixed(dC4),fixedp_dCout);
              err += an_8_FixedDivide(aG4,workG4) + an_8_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinA, C1);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinB, C2);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinC, C3);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinD, C4);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_8_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_8_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_8_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinA, C1);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinB, C2);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
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

     void an_8_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        double aG1, aG2, aG3;
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_8_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_8_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_8_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinA, C1);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinB, C2);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinC, C3);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_8_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_8_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_8_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_8_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_8_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinA, C1);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinB, C2);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinC, C3);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_CinD, C4);
        an_8_SetCapValue(cam, an_8_AnadigmApex_SumDiff_Cout, Cout);
     }


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

     void an_8_setTransferFunctionTable(an_CAM cam, double* Values)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int C1 = 128, C2 = 128;
        
        for (loop = 0; loop < 256; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0.0)
           C2 = an_8_AdjustCap(127.0*2.0/maxV);
        
        for (loop = 0; loop < 256; loop++)
        {
           C1 = an_8_AdjustCap(128.0 + Values[loop]*C2/2.0);
           LUTTable[loop] = (an_Byte)C1;
        }
        an_8_LoadLUT(cam, LUTTable, 0, 256);
        an_8_SetCapValue(cam, an_8_AnadigmApex_TransferFunction_Cout, C2);
     }


/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_9_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_9_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_9_SetCapValue(cam, an_9_AnadigmApex_GainHold_Cin,cap1);
        an_9_SetCapValue(cam, an_9_AnadigmApex_GainHold_Cout,cap2);
        return an_9_FixedToFloat(an_9_FixedDivide(an_9_IntToFixed(cap1),an_9_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_9_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_9_ChooseCapRatio(G, &cap1, &cap2);
        
        an_9_SetCapValue(cam, an_9_AnadigmApex_GainHold_Cin,cap1);
        an_9_SetCapValue(cam, an_9_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_9_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_9_FloatToFixed(G1);
        an_Fixed workG2 = an_9_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_9_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_9_FixedDivide(an_9_IntToFixed(dC1),fixedp_dCout);
              err += an_9_FixedDivide(aG1,workG1) + an_9_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_9_FixedDivide(an_9_IntToFixed(dC2),fixedp_dCout);
              err += an_9_FixedDivide(aG2,workG2) + an_9_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinA, C1);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinB, C2);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
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

     void an_9_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        an_Fixed aG1, aG2, aG3;
        an_Fixed workG1 = an_9_FloatToFixed(G1);
        an_Fixed workG2 = an_9_FloatToFixed(G2);
        an_Fixed workG3 = an_9_FloatToFixed(G3);
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_9_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_9_FixedDivide(an_9_IntToFixed(dC1),fixedp_dCout);
              err += an_9_FixedDivide(aG1,workG1) + an_9_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_9_FixedDivide(an_9_IntToFixed(dC2),fixedp_dCout);
              err += an_9_FixedDivide(aG2,workG2) + an_9_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_9_FixedDivide(an_9_IntToFixed(dC3),fixedp_dCout);
              err += an_9_FixedDivide(aG3,workG3) + an_9_FixedDivide(workG3,aG3);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinA, C1);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinB, C2);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinC, C3);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_9_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_9_FloatToFixed(G1);
        an_Fixed workG2 = an_9_FloatToFixed(G2);
        an_Fixed workG3 = an_9_FloatToFixed(G3);
        an_Fixed workG4 = an_9_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_9_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_9_FixedDivide(an_9_IntToFixed(dC1),fixedp_dCout);
              err += an_9_FixedDivide(aG1,workG1) + an_9_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_9_FixedDivide(an_9_IntToFixed(dC2),fixedp_dCout);
              err += an_9_FixedDivide(aG2,workG2) + an_9_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_9_FixedDivide(an_9_IntToFixed(dC3),fixedp_dCout);
              err += an_9_FixedDivide(aG3,workG3) + an_9_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_9_FixedAdjustCap(an_9_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_9_FixedDivide(an_9_IntToFixed(dC4),fixedp_dCout);
              err += an_9_FixedDivide(aG4,workG4) + an_9_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinA, C1);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinB, C2);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinC, C3);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinD, C4);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_9_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_9_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_9_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinA, C1);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinB, C2);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
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

     void an_9_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        double aG1, aG2, aG3;
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_9_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_9_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_9_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinA, C1);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinB, C2);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinC, C3);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_9_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_9_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_9_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_9_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_9_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinA, C1);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinB, C2);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinC, C3);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_CinD, C4);
        an_9_SetCapValue(cam, an_9_AnadigmApex_SumDiff_Cout, Cout);
     }


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

     void an_9_setTransferFunctionTable(an_CAM cam, double* Values)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int C1 = 128, C2 = 128;
        
        for (loop = 0; loop < 256; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0.0)
           C2 = an_9_AdjustCap(127.0*2.0/maxV);
        
        for (loop = 0; loop < 256; loop++)
        {
           C1 = an_9_AdjustCap(128.0 + Values[loop]*C2/2.0);
           LUTTable[loop] = (an_Byte)C1;
        }
        an_9_LoadLUT(cam, LUTTable, 0, 256);
        an_9_SetCapValue(cam, an_9_AnadigmApex_TransferFunction_Cout, C2);
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
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

     double an_10_fixed_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_10_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_10_SetCapValue(cam, an_10_AnadigmApex_GainHold_Cin,cap1);
        an_10_SetCapValue(cam, an_10_AnadigmApex_GainHold_Cout,cap2);
        return an_10_FixedToFloat(an_10_FixedDivide(an_10_IntToFixed(cap1),an_10_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                          setGainHold                           |
  +----------------------------------------------------------------+
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

     double an_10_setGainHold(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_10_ChooseCapRatio(G, &cap1, &cap2);
        
        an_10_SetCapValue(cam, an_10_AnadigmApex_GainHold_Cin,cap1);
        an_10_SetCapValue(cam, an_10_AnadigmApex_GainHold_Cout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_10_fixedp_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        an_Fixed aG1, aG2;
        an_Fixed workG1 = an_10_FloatToFixed(G1);
        an_Fixed workG2 = an_10_FloatToFixed(G2);
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_10_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_10_FixedDivide(an_10_IntToFixed(dC1),fixedp_dCout);
              err += an_10_FixedDivide(aG1,workG1) + an_10_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_10_FixedDivide(an_10_IntToFixed(dC2),fixedp_dCout);
              err += an_10_FixedDivide(aG2,workG2) + an_10_FixedDivide(workG2,aG2);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinA, C1);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinB, C2);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_3in                    |
  +----------------------------------------------------------------+
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

     void an_10_fixedp_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        an_Fixed aG1, aG2, aG3;
        an_Fixed workG1 = an_10_FloatToFixed(G1);
        an_Fixed workG2 = an_10_FloatToFixed(G2);
        an_Fixed workG3 = an_10_FloatToFixed(G3);
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_10_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_10_FixedDivide(an_10_IntToFixed(dC1),fixedp_dCout);
              err += an_10_FixedDivide(aG1,workG1) + an_10_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_10_FixedDivide(an_10_IntToFixed(dC2),fixedp_dCout);
              err += an_10_FixedDivide(aG2,workG2) + an_10_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_10_FixedDivide(an_10_IntToFixed(dC3),fixedp_dCout);
              err += an_10_FixedDivide(aG3,workG3) + an_10_FixedDivide(workG3,aG3);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinA, C1);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinB, C2);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinC, C3);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                   fixedp_setGainSumDiff_4in                    |
  +----------------------------------------------------------------+
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

     void an_10_fixedp_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        an_Fixed aG1, aG2, aG3, aG4;
        an_Fixed workG1 = an_10_FloatToFixed(G1);
        an_Fixed workG2 = an_10_FloatToFixed(G2);
        an_Fixed workG3 = an_10_FloatToFixed(G3);
        an_Fixed workG4 = an_10_FloatToFixed(G4);
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        an_Fixed err;
        an_Fixed bestErr = 0x7FFFFFFF;
        an_Fixed fixedp_dCout;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (workG1==0)  Z1=1;
        if (workG2==0)  Z2=1;
        if (workG3==0)  Z3=1;
        if (workG4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
                fixedp_dCout = an_10_IntToFixed(dCout);
           if (Z1==0)
           {  dC1 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG1,fixedp_dCout));
              aG1 = an_10_FixedDivide(an_10_IntToFixed(dC1),fixedp_dCout);
              err += an_10_FixedDivide(aG1,workG1) + an_10_FixedDivide(workG1,aG1);
           }
           if (Z2==0)
           {  dC2 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG2,fixedp_dCout));
              aG2 = an_10_FixedDivide(an_10_IntToFixed(dC2),fixedp_dCout);
              err += an_10_FixedDivide(aG2,workG2) + an_10_FixedDivide(workG2,aG2);
           }
           if (Z3==0)
           {  dC3 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG3,fixedp_dCout));
              aG3 = an_10_FixedDivide(an_10_IntToFixed(dC3),fixedp_dCout);
              err += an_10_FixedDivide(aG3,workG3) + an_10_FixedDivide(workG3,aG3);
           }
           if (Z4==0)
           {  dC4 = an_10_FixedAdjustCap(an_10_FixedMultiply(workG4,fixedp_dCout));
              aG4 = an_10_FixedDivide(an_10_IntToFixed(dC4),fixedp_dCout);
              err += an_10_FixedDivide(aG4,workG4) + an_10_FixedDivide(workG4,aG4);
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinA, C1);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinB, C2);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinC, C3);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinD, C4);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_2in                       |
  +----------------------------------------------------------------+
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

     void an_10_setGainSumDiff_2in(an_CAM cam, double G1, double G2)
     {
        double aG1, aG2;
        int C1=1, C2=1, Cout=1;
        int dC1=255, dC2=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_10_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_10_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinA, C1);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinB, C2);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_3in                       |
  +----------------------------------------------------------------+
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

     void an_10_setGainSumDiff_3in(an_CAM cam, double G1, double G2, double G3)
     {
        double aG1, aG2, aG3;
        int C1=1, C2=1, C3=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_10_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_10_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_10_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinA, C1);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinB, C2);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinC, C3);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_Cout, Cout);
     }

  /*--------------------------------------------------------------*\
  |                       setGainSumDiff_4in                       |
  +----------------------------------------------------------------+
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

     void an_10_setGainSumDiff_4in(an_CAM cam, double G1, double G2, double G3, double G4)
     {
        double aG1, aG2, aG3, aG4;
        int C1=1, C2=1, C3=1, C4=1, Cout=1;
        int dC1=255, dC2=255, dC3=255, dC4=255, dCout=255;
        double err = 99999;
        double bestErr = 999;
        short Z1=0, Z2=0, Z3=0, Z4=0;
        if (G1==0)  Z1=1;
        if (G2==0)  Z2=1;
        if (G3==0)  Z3=1;
        if (G4==0)  Z4=1;
        
        while (dCout > 0)
        { err = 0;
           if (Z1==0)
           {  dC1 = an_10_AdjustCap(G1*dCout);
              aG1 = 1.0 * dC1/dCout;
              err += aG1/G1 + G1/aG1;
           }
           if (Z2==0)
           {  dC2 = an_10_AdjustCap(G2*dCout);
              aG2 = 1.0 * dC2/dCout;
              err += aG2/G2 + G2/aG2;
           }
           if (Z3==0)
           {  dC3 = an_10_AdjustCap(G3*dCout);
              aG3 = 1.0 * dC3/dCout;
              err += aG3/G3 + G3/aG3;
           }
           if (Z4==0)
           {  dC4 = an_10_AdjustCap(G4*dCout);
              aG4 = 1.0 * dC4/dCout;
              err += aG4/G4 + G4/aG4;
           }
           if (err < bestErr)
           {
              bestErr = err;
              C1 = dC1;
              C2 = dC2;
              C3 = dC3;
              C4 = dC4;
              Cout = dCout;
           }
           dCout--;
        }
        if (Z1==1)  C1=0;
        if (Z2==1)  C2=0;
        if (Z3==1)  C3=0;
        if (Z4==1)  C4=0;
        
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinA, C1);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinB, C2);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinC, C3);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_CinD, C4);
        an_10_SetCapValue(cam, an_10_AnadigmApex_SumDiff_Cout, Cout);
     }


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

     void an_10_setTransferFunctionTable(an_CAM cam, double* Values)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int C1 = 128, C2 = 128;
        
        for (loop = 0; loop < 256; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0.0)
           C2 = an_10_AdjustCap(127.0*2.0/maxV);
        
        for (loop = 0; loop < 256; loop++)
        {
           C1 = an_10_AdjustCap(128.0 + Values[loop]*C2/2.0);
           LUTTable[loop] = (an_Byte)C1;
        }
        an_10_LoadLUT(cam, LUTTable, 0, 256);
        an_10_SetCapValue(cam, an_10_AnadigmApex_TransferFunction_Cout, C2);
     }


