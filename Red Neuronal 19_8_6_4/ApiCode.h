#ifndef APICODE_H
#define APICODE_H

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 1.ad2                                            *
*  Generated: October 16, 2020:  12:35 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

#include <stdlib.h>
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* All basic data types required by the C code. */
typedef unsigned char        an_Byte;
typedef long                 an_Fixed;
typedef short                an_Component;
typedef an_Byte            an_Bool;
typedef an_Byte            an_Chip;
typedef an_Byte            an_CAM;

/* Enumerated type representing VortexControlByte */
typedef enum an_1_VortexControlByte
{
   an_1_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_1_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_1_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_1_VortexControlByte_Read      = 0x10, /* Read            */
   an_1_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_1_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_1_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_1_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_1_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_1_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_1_ApexControlByte
{
   an_1_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_1_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_1_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_1_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_1_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_1_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_1_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_1_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_1_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_1_ApiReconfigState
{
   an_1_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_1_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_1_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_1_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_1_FPAA1_1                   0         /* "FPAA1_1" */
#define an_1_FPAA1_2                   1         /* "FPAA1_2" */
#define an_1_FPAA1_3                   2         /* "FPAA1_3" */
#define an_1_FPAA1_4                   3         /* "FPAA1_4" */

/* How many chips with programmable Chips there are. */             
#define an_1_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_1_apiAddress1[an_1_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_1_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_1_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_1_FPAA1_1_PrimaryConfigInfo[];
extern const an_Byte an_1_FPAA1_2_PrimaryConfigInfo[];
extern const an_Byte an_1_FPAA1_3_PrimaryConfigInfo[];
extern const an_Byte an_1_FPAA1_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_1_apiPrimaryConfigInfo an_1_apiPrimaryConfigData[an_1_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_1_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_1_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_1_ApiReconfigState flags; /* Internal state */
} an_1_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_1_apiReconfigInfo an_1_FPAA1_1_ReconfigInfo; /* FPAA1_1 */
extern an_1_apiReconfigInfo an_1_FPAA1_2_ReconfigInfo; /* FPAA1_2 */
extern an_1_apiReconfigInfo an_1_FPAA1_3_ReconfigInfo; /* FPAA1_3 */
extern an_1_apiReconfigInfo an_1_FPAA1_4_ReconfigInfo; /* FPAA1_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_1_apiReconfigInfo* an_1_apiReconfigData[an_1_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_1_FPAA1_1_ReconfigBuffer[64];  /* FPAA1_1 */
extern an_Byte an_1_FPAA1_2_ReconfigBuffer[64];  /* FPAA1_2 */
extern an_Byte an_1_FPAA1_3_ReconfigBuffer[64];  /* FPAA1_3 */
extern an_Byte an_1_FPAA1_4_ReconfigBuffer[64];  /* FPAA1_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_1_apiReconfigBuffer[an_1_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_1_FPAA1_1_GainHold1_1_1     0         /* "GainHold1_1_1" */
#define an_1_FPAA1_1_GainHold1_1_2     1         /* "GainHold1_1_2" */
#define an_1_FPAA1_1_GainHold1_1_3     2         /* "GainHold1_1_3" */
#define an_1_FPAA1_1_Input1_1_1        3         /* "Input1_1_1" */
#define an_1_FPAA1_1_Input1_1_2        4         /* "Input1_1_2" */
#define an_1_FPAA1_1_Input1_1_3        5         /* "Input1_1_3" */
#define an_1_FPAA1_1_SumadorNeurona1_1_1 6         /* "SumadorNeurona1_1_1" */
#define an_1_FPAA1_1_SumadorNeurona1_1_2 7         /* "SumadorNeurona1_1_2" */
#define an_1_FPAA1_2_GainHold1_2_1     8         /* "GainHold1_2_1" */
#define an_1_FPAA1_2_GainHold1_2_2     9         /* "GainHold1_2_2" */
#define an_1_FPAA1_2_GainHold1_2_3     10        /* "GainHold1_2_3" */
#define an_1_FPAA1_2_Input1_2_1        11        /* "Input1_2_1" */
#define an_1_FPAA1_2_Input1_2_2        12        /* "Input1_2_2" */
#define an_1_FPAA1_2_Input1_2_3        13        /* "Input1_2_3" */
#define an_1_FPAA1_2_SumadorNeurona1_2_1 14        /* "SumadorNeurona1_2_1" */
#define an_1_FPAA1_2_SumadorNeurona1_2_2 15        /* "SumadorNeurona1_2_2" */
#define an_1_FPAA1_3_GainHold1_3_1     16        /* "GainHold1_3_1" */
#define an_1_FPAA1_3_GainHold1_3_2     17        /* "GainHold1_3_2" */
#define an_1_FPAA1_3_GainHold1_3_3     18        /* "GainHold1_3_3" */
#define an_1_FPAA1_3_Input1_3_1        19        /* "Input1_3_1" */
#define an_1_FPAA1_3_Input1_3_2        20        /* "Input1_3_2" */
#define an_1_FPAA1_3_Input1_3_3        21        /* "Input1_3_3" */
#define an_1_FPAA1_3_SumadorNeurona1_3_1 22        /* "SumadorNeurona1_3_1" */
#define an_1_FPAA1_3_SumadorNeurona1_3_2 23        /* "SumadorNeurona1_3_2" */
#define an_1_FPAA1_4_GainHold1_4_1     24        /* "GainHold1_4_1" */
#define an_1_FPAA1_4_GainHold1_4_2     25        /* "GainHold1_4_2" */
#define an_1_FPAA1_4_GainHold1_4_3     26        /* "GainHold1_4_3" */
#define an_1_FPAA1_4_Input1_4_1        27        /* "Input1_4_1" */
#define an_1_FPAA1_4_Input1_4_2        28        /* "Input1_4_2" */
#define an_1_FPAA1_4_Input1_4_3        29        /* "Input1_4_3" */
#define an_1_FPAA1_4_SumadorNeurona1_4_1 30        /* "SumadorNeurona1_4_1" */
#define an_1_FPAA1_4_SumadorNeurona1_4_2 31        /* "SumadorNeurona1_4_2" */

/* How many programmable CAMs there are. */                         
#define an_1_apiCAMCount               32

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_1_apiChipFromCAM[an_1_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_1_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_1_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_1_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_1_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_1_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_1_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_1_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_1_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_1_apiCapacitor;


/* Component tables for GainHold1_1_1 */
extern const an_1_apiCapacitor an_1_FPAA1_1_GainHold1_1_1_Capacitor[2];

/* Component tables for GainHold1_1_2 */
extern const an_1_apiCapacitor an_1_FPAA1_1_GainHold1_1_2_Capacitor[2];

/* Component tables for GainHold1_1_3 */
extern const an_1_apiCapacitor an_1_FPAA1_1_GainHold1_1_3_Capacitor[2];

/* Component tables for Input1_1_1 */
extern const an_1_apiCapacitor an_1_FPAA1_1_Input1_1_1_Capacitor[3];

/* Component tables for Input1_1_2 */
extern const an_1_apiCapacitor an_1_FPAA1_1_Input1_1_2_Capacitor[3];

/* Component tables for Input1_1_3 */
extern const an_1_apiCapacitor an_1_FPAA1_1_Input1_1_3_Capacitor[3];

/* Component tables for SumadorNeurona1_1_1 */
extern const an_1_apiCapacitor an_1_FPAA1_1_SumadorNeurona1_1_1_Capacitor[4];

/* Component tables for SumadorNeurona1_1_2 */
extern const an_1_apiCapacitor an_1_FPAA1_1_SumadorNeurona1_1_2_Capacitor[4];

/* Component tables for GainHold1_2_1 */
extern const an_1_apiCapacitor an_1_FPAA1_2_GainHold1_2_1_Capacitor[2];

/* Component tables for GainHold1_2_2 */
extern const an_1_apiCapacitor an_1_FPAA1_2_GainHold1_2_2_Capacitor[2];

/* Component tables for GainHold1_2_3 */
extern const an_1_apiCapacitor an_1_FPAA1_2_GainHold1_2_3_Capacitor[2];

/* Component tables for Input1_2_1 */
extern const an_1_apiCapacitor an_1_FPAA1_2_Input1_2_1_Capacitor[3];

/* Component tables for Input1_2_2 */
extern const an_1_apiCapacitor an_1_FPAA1_2_Input1_2_2_Capacitor[3];

/* Component tables for Input1_2_3 */
extern const an_1_apiCapacitor an_1_FPAA1_2_Input1_2_3_Capacitor[3];

/* Component tables for SumadorNeurona1_2_1 */
extern const an_1_apiCapacitor an_1_FPAA1_2_SumadorNeurona1_2_1_Capacitor[5];

/* Component tables for SumadorNeurona1_2_2 */
extern const an_1_apiCapacitor an_1_FPAA1_2_SumadorNeurona1_2_2_Capacitor[5];

/* Component tables for GainHold1_3_1 */
extern const an_1_apiCapacitor an_1_FPAA1_3_GainHold1_3_1_Capacitor[2];

/* Component tables for GainHold1_3_2 */
extern const an_1_apiCapacitor an_1_FPAA1_3_GainHold1_3_2_Capacitor[2];

/* Component tables for GainHold1_3_3 */
extern const an_1_apiCapacitor an_1_FPAA1_3_GainHold1_3_3_Capacitor[2];

/* Component tables for Input1_3_1 */
extern const an_1_apiCapacitor an_1_FPAA1_3_Input1_3_1_Capacitor[3];

/* Component tables for Input1_3_2 */
extern const an_1_apiCapacitor an_1_FPAA1_3_Input1_3_2_Capacitor[3];

/* Component tables for Input1_3_3 */
extern const an_1_apiCapacitor an_1_FPAA1_3_Input1_3_3_Capacitor[3];

/* Component tables for SumadorNeurona1_3_1 */
extern const an_1_apiCapacitor an_1_FPAA1_3_SumadorNeurona1_3_1_Capacitor[5];

/* Component tables for SumadorNeurona1_3_2 */
extern const an_1_apiCapacitor an_1_FPAA1_3_SumadorNeurona1_3_2_Capacitor[5];

/* Component tables for GainHold1_4_1 */
extern const an_1_apiCapacitor an_1_FPAA1_4_GainHold1_4_1_Capacitor[2];

/* Component tables for GainHold1_4_2 */
extern const an_1_apiCapacitor an_1_FPAA1_4_GainHold1_4_2_Capacitor[2];

/* Component tables for GainHold1_4_3 */
extern const an_1_apiCapacitor an_1_FPAA1_4_GainHold1_4_3_Capacitor[2];

/* Component tables for Input1_4_1 */
extern const an_1_apiCapacitor an_1_FPAA1_4_Input1_4_1_Capacitor[3];

/* Component tables for Input1_4_2 */
extern const an_1_apiCapacitor an_1_FPAA1_4_Input1_4_2_Capacitor[3];

/* Component tables for Input1_4_3 */
extern const an_1_apiCapacitor an_1_FPAA1_4_Input1_4_3_Capacitor[3];

/* Component tables for SumadorNeurona1_4_1 */
extern const an_1_apiCapacitor an_1_FPAA1_4_SumadorNeurona1_4_1_Capacitor[5];

/* Component tables for SumadorNeurona1_4_2 */
extern const an_1_apiCapacitor an_1_FPAA1_4_SumadorNeurona1_4_2_Capacitor[5];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_1_FPAA1_1_GainHold1_1_1_Components[2];
extern void* an_1_FPAA1_1_GainHold1_1_2_Components[2];
extern void* an_1_FPAA1_1_GainHold1_1_3_Components[2];
extern void* an_1_FPAA1_1_Input1_1_1_Components[5];
extern void* an_1_FPAA1_1_Input1_1_2_Components[5];
extern void* an_1_FPAA1_1_Input1_1_3_Components[5];
extern void* an_1_FPAA1_1_SumadorNeurona1_1_1_Components[5];
extern void* an_1_FPAA1_1_SumadorNeurona1_1_2_Components[5];
extern void* an_1_FPAA1_2_GainHold1_2_1_Components[2];
extern void* an_1_FPAA1_2_GainHold1_2_2_Components[2];
extern void* an_1_FPAA1_2_GainHold1_2_3_Components[2];
extern void* an_1_FPAA1_2_Input1_2_1_Components[5];
extern void* an_1_FPAA1_2_Input1_2_2_Components[5];
extern void* an_1_FPAA1_2_Input1_2_3_Components[5];
extern void* an_1_FPAA1_2_SumadorNeurona1_2_1_Components[5];
extern void* an_1_FPAA1_2_SumadorNeurona1_2_2_Components[5];
extern void* an_1_FPAA1_3_GainHold1_3_1_Components[2];
extern void* an_1_FPAA1_3_GainHold1_3_2_Components[2];
extern void* an_1_FPAA1_3_GainHold1_3_3_Components[2];
extern void* an_1_FPAA1_3_Input1_3_1_Components[5];
extern void* an_1_FPAA1_3_Input1_3_2_Components[5];
extern void* an_1_FPAA1_3_Input1_3_3_Components[5];
extern void* an_1_FPAA1_3_SumadorNeurona1_3_1_Components[5];
extern void* an_1_FPAA1_3_SumadorNeurona1_3_2_Components[5];
extern void* an_1_FPAA1_4_GainHold1_4_1_Components[2];
extern void* an_1_FPAA1_4_GainHold1_4_2_Components[2];
extern void* an_1_FPAA1_4_GainHold1_4_3_Components[2];
extern void* an_1_FPAA1_4_Input1_4_1_Components[5];
extern void* an_1_FPAA1_4_Input1_4_2_Components[5];
extern void* an_1_FPAA1_4_Input1_4_3_Components[5];
extern void* an_1_FPAA1_4_SumadorNeurona1_4_1_Components[5];
extern void* an_1_FPAA1_4_SumadorNeurona1_4_2_Components[5];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_1_apiCAMComponentData[an_1_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_1_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_1_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_1_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_1_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_1_InitializeVortexReconfigData.  |
  |  an_1_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_1_InitializeApexReconfigData.    |
  |  an_1_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_1_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_1_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_SetVortexReconfigControlFlags(an_Chip chip, an_1_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_SetApexReconfigControlFlags(an_Chip chip, an_1_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_SetApexReconfigControlFlagsNOP(an_Chip chip, an_1_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_1_VortexControlByte an_1_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_1_ApexControlByte an_1_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_1_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_1_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_1_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_1_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_1_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_1_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_1_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_1_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_1_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_1_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 2.ad2                                            *
*  Generated: October 19, 2020:  12:59 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_2_VortexControlByte
{
   an_2_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_2_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_2_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_2_VortexControlByte_Read      = 0x10, /* Read            */
   an_2_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_2_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_2_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_2_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_2_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_2_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_2_ApexControlByte
{
   an_2_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_2_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_2_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_2_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_2_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_2_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_2_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_2_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_2_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_2_ApiReconfigState
{
   an_2_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_2_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_2_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_2_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_2_FPAA2_1                   0         /* "FPAA2_1" */
#define an_2_FPAA2_2                   1         /* "FPAA2_2" */
#define an_2_FPAA2_3                   2         /* "FPAA2_3" */
#define an_2_FPAA2_4                   3         /* "FPAA2_4" */

/* How many chips with programmable Chips there are. */             
#define an_2_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_2_apiAddress1[an_2_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_2_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_2_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_2_FPAA2_1_PrimaryConfigInfo[];
extern const an_Byte an_2_FPAA2_2_PrimaryConfigInfo[];
extern const an_Byte an_2_FPAA2_3_PrimaryConfigInfo[];
extern const an_Byte an_2_FPAA2_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_2_apiPrimaryConfigInfo an_2_apiPrimaryConfigData[an_2_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_2_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_2_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_2_ApiReconfigState flags; /* Internal state */
} an_2_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_2_apiReconfigInfo an_2_FPAA2_1_ReconfigInfo; /* FPAA2_1 */
extern an_2_apiReconfigInfo an_2_FPAA2_2_ReconfigInfo; /* FPAA2_2 */
extern an_2_apiReconfigInfo an_2_FPAA2_3_ReconfigInfo; /* FPAA2_3 */
extern an_2_apiReconfigInfo an_2_FPAA2_4_ReconfigInfo; /* FPAA2_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_2_apiReconfigInfo* an_2_apiReconfigData[an_2_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_2_FPAA2_1_ReconfigBuffer[64];  /* FPAA2_1 */
extern an_Byte an_2_FPAA2_2_ReconfigBuffer[64];  /* FPAA2_2 */
extern an_Byte an_2_FPAA2_3_ReconfigBuffer[64];  /* FPAA2_3 */
extern an_Byte an_2_FPAA2_4_ReconfigBuffer[64];  /* FPAA2_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_2_apiReconfigBuffer[an_2_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_2_FPAA2_1_GainHold2_1_1     0         /* "GainHold2_1_1" */
#define an_2_FPAA2_1_GainHold2_1_2     1         /* "GainHold2_1_2" */
#define an_2_FPAA2_1_GainHold2_1_3     2         /* "GainHold2_1_3" */
#define an_2_FPAA2_1_Input2_1_1        3         /* "Input2_1_1" */
#define an_2_FPAA2_1_Input2_1_2        4         /* "Input2_1_2" */
#define an_2_FPAA2_1_Input2_1_3        5         /* "Input2_1_3" */
#define an_2_FPAA2_1_SumadorNeurona2_1_1 6         /* "SumadorNeurona2_1_1" */
#define an_2_FPAA2_1_SumadorNeurona2_1_2 7         /* "SumadorNeurona2_1_2" */
#define an_2_FPAA2_2_GainHold2_2_1     8         /* "GainHold2_2_1" */
#define an_2_FPAA2_2_GainHold2_2_2     9         /* "GainHold2_2_2" */
#define an_2_FPAA2_2_GainHold2_2_3     10        /* "GainHold2_2_3" */
#define an_2_FPAA2_2_Input2_2_1        11        /* "Input2_2_1" */
#define an_2_FPAA2_2_Input2_2_2        12        /* "Input2_2_2" */
#define an_2_FPAA2_2_SumadorNeurona2_2_1 13        /* "SumadorNeurona2_2_1" */
#define an_2_FPAA2_2_SumadorNeurona2_2_2 14        /* "SumadorNeurona2_2_2" */
#define an_2_FPAA2_2_TransferFunction2_2_1 15        /* "TransferFunction2_2_1" */
#define an_2_FPAA2_3_GainHold2_3_1     16        /* "GainHold2_3_1" */
#define an_2_FPAA2_3_GainHold2_3_2     17        /* "GainHold2_3_2" */
#define an_2_FPAA2_3_GainHold2_3_3     18        /* "GainHold2_3_3" */
#define an_2_FPAA2_3_Input2_3_1        19        /* "Input2_3_1" */
#define an_2_FPAA2_3_Input2_3_2        20        /* "Input2_3_2" */
#define an_2_FPAA2_3_SumadorNeurona2_3_1 21        /* "SumadorNeurona2_3_1" */
#define an_2_FPAA2_3_SumadorNeurona2_3_2 22        /* "SumadorNeurona2_3_2" */
#define an_2_FPAA2_3_TransferFunction2_3_1 23        /* "TransferFunction2_3_1" */
#define an_2_FPAA2_4_GainHold2_4_1     24        /* "GainHold2_4_1" */
#define an_2_FPAA2_4_GainHold2_4_2     25        /* "GainHold2_4_2" */
#define an_2_FPAA2_4_GainHold2_4_3     26        /* "GainHold2_4_3" */
#define an_2_FPAA2_4_Input2_4_1        27        /* "Input2_4_1" */
#define an_2_FPAA2_4_Input2_4_2        28        /* "Input2_4_2" */
#define an_2_FPAA2_4_Input2_4_3        29        /* "Input2_4_3" */
#define an_2_FPAA2_4_SumadorNeurona2_4_1 30        /* "SumadorNeurona2_4_1" */
#define an_2_FPAA2_4_SumadorNeurona2_4_2 31        /* "SumadorNeurona2_4_2" */

/* How many programmable CAMs there are. */                         
#define an_2_apiCAMCount               32

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_2_apiChipFromCAM[an_2_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_2_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_2_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_2_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_2_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_2_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_2_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_2_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* Component ID's for AnadigmApex\TransferFunction */
#define an_2_AnadigmApex_TransferFunction_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_2_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_2_apiCapacitor;


/* Component tables for GainHold2_1_1 */
extern const an_2_apiCapacitor an_2_FPAA2_1_GainHold2_1_1_Capacitor[2];

/* Component tables for GainHold2_1_2 */
extern const an_2_apiCapacitor an_2_FPAA2_1_GainHold2_1_2_Capacitor[2];

/* Component tables for GainHold2_1_3 */
extern const an_2_apiCapacitor an_2_FPAA2_1_GainHold2_1_3_Capacitor[2];

/* Component tables for Input2_1_1 */
extern const an_2_apiCapacitor an_2_FPAA2_1_Input2_1_1_Capacitor[3];

/* Component tables for Input2_1_2 */
extern const an_2_apiCapacitor an_2_FPAA2_1_Input2_1_2_Capacitor[3];

/* Component tables for Input2_1_3 */
extern const an_2_apiCapacitor an_2_FPAA2_1_Input2_1_3_Capacitor[3];

/* Component tables for SumadorNeurona2_1_1 */
extern const an_2_apiCapacitor an_2_FPAA2_1_SumadorNeurona2_1_1_Capacitor[5];

/* Component tables for SumadorNeurona2_1_2 */
extern const an_2_apiCapacitor an_2_FPAA2_1_SumadorNeurona2_1_2_Capacitor[5];

/* Component tables for GainHold2_2_1 */
extern const an_2_apiCapacitor an_2_FPAA2_2_GainHold2_2_1_Capacitor[2];

/* Component tables for GainHold2_2_2 */
extern const an_2_apiCapacitor an_2_FPAA2_2_GainHold2_2_2_Capacitor[2];

/* Component tables for GainHold2_2_3 */
extern const an_2_apiCapacitor an_2_FPAA2_2_GainHold2_2_3_Capacitor[2];

/* Component tables for Input2_2_1 */
extern const an_2_apiCapacitor an_2_FPAA2_2_Input2_2_1_Capacitor[3];

/* Component tables for Input2_2_2 */
extern const an_2_apiCapacitor an_2_FPAA2_2_Input2_2_2_Capacitor[3];

/* Component tables for SumadorNeurona2_2_1 */
extern const an_2_apiCapacitor an_2_FPAA2_2_SumadorNeurona2_2_1_Capacitor[3];

/* Component tables for SumadorNeurona2_2_2 */
extern const an_2_apiCapacitor an_2_FPAA2_2_SumadorNeurona2_2_2_Capacitor[5];

/* Component tables for TransferFunction2_2_1 */
extern const an_2_apiCapacitor an_2_FPAA2_2_TransferFunction2_2_1_Capacitor[1];

/* Component tables for GainHold2_3_1 */
extern const an_2_apiCapacitor an_2_FPAA2_3_GainHold2_3_1_Capacitor[2];

/* Component tables for GainHold2_3_2 */
extern const an_2_apiCapacitor an_2_FPAA2_3_GainHold2_3_2_Capacitor[2];

/* Component tables for GainHold2_3_3 */
extern const an_2_apiCapacitor an_2_FPAA2_3_GainHold2_3_3_Capacitor[2];

/* Component tables for Input2_3_1 */
extern const an_2_apiCapacitor an_2_FPAA2_3_Input2_3_1_Capacitor[3];

/* Component tables for Input2_3_2 */
extern const an_2_apiCapacitor an_2_FPAA2_3_Input2_3_2_Capacitor[3];

/* Component tables for SumadorNeurona2_3_1 */
extern const an_2_apiCapacitor an_2_FPAA2_3_SumadorNeurona2_3_1_Capacitor[3];

/* Component tables for SumadorNeurona2_3_2 */
extern const an_2_apiCapacitor an_2_FPAA2_3_SumadorNeurona2_3_2_Capacitor[5];

/* Component tables for TransferFunction2_3_1 */
extern const an_2_apiCapacitor an_2_FPAA2_3_TransferFunction2_3_1_Capacitor[1];

/* Component tables for GainHold2_4_1 */
extern const an_2_apiCapacitor an_2_FPAA2_4_GainHold2_4_1_Capacitor[2];

/* Component tables for GainHold2_4_2 */
extern const an_2_apiCapacitor an_2_FPAA2_4_GainHold2_4_2_Capacitor[2];

/* Component tables for GainHold2_4_3 */
extern const an_2_apiCapacitor an_2_FPAA2_4_GainHold2_4_3_Capacitor[2];

/* Component tables for Input2_4_1 */
extern const an_2_apiCapacitor an_2_FPAA2_4_Input2_4_1_Capacitor[3];

/* Component tables for Input2_4_2 */
extern const an_2_apiCapacitor an_2_FPAA2_4_Input2_4_2_Capacitor[3];

/* Component tables for Input2_4_3 */
extern const an_2_apiCapacitor an_2_FPAA2_4_Input2_4_3_Capacitor[3];

/* Component tables for SumadorNeurona2_4_1 */
extern const an_2_apiCapacitor an_2_FPAA2_4_SumadorNeurona2_4_1_Capacitor[4];

/* Component tables for SumadorNeurona2_4_2 */
extern const an_2_apiCapacitor an_2_FPAA2_4_SumadorNeurona2_4_2_Capacitor[4];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_2_FPAA2_1_GainHold2_1_1_Components[2];
extern void* an_2_FPAA2_1_GainHold2_1_2_Components[2];
extern void* an_2_FPAA2_1_GainHold2_1_3_Components[2];
extern void* an_2_FPAA2_1_Input2_1_1_Components[5];
extern void* an_2_FPAA2_1_Input2_1_2_Components[5];
extern void* an_2_FPAA2_1_Input2_1_3_Components[5];
extern void* an_2_FPAA2_1_SumadorNeurona2_1_1_Components[5];
extern void* an_2_FPAA2_1_SumadorNeurona2_1_2_Components[5];
extern void* an_2_FPAA2_2_GainHold2_2_1_Components[2];
extern void* an_2_FPAA2_2_GainHold2_2_2_Components[2];
extern void* an_2_FPAA2_2_GainHold2_2_3_Components[2];
extern void* an_2_FPAA2_2_Input2_2_1_Components[5];
extern void* an_2_FPAA2_2_Input2_2_2_Components[5];
extern void* an_2_FPAA2_2_SumadorNeurona2_2_1_Components[5];
extern void* an_2_FPAA2_2_SumadorNeurona2_2_2_Components[5];
extern void* an_2_FPAA2_2_TransferFunction2_2_1_Components[1];
extern void* an_2_FPAA2_3_GainHold2_3_1_Components[2];
extern void* an_2_FPAA2_3_GainHold2_3_2_Components[2];
extern void* an_2_FPAA2_3_GainHold2_3_3_Components[2];
extern void* an_2_FPAA2_3_Input2_3_1_Components[5];
extern void* an_2_FPAA2_3_Input2_3_2_Components[5];
extern void* an_2_FPAA2_3_SumadorNeurona2_3_1_Components[5];
extern void* an_2_FPAA2_3_SumadorNeurona2_3_2_Components[5];
extern void* an_2_FPAA2_3_TransferFunction2_3_1_Components[1];
extern void* an_2_FPAA2_4_GainHold2_4_1_Components[2];
extern void* an_2_FPAA2_4_GainHold2_4_2_Components[2];
extern void* an_2_FPAA2_4_GainHold2_4_3_Components[2];
extern void* an_2_FPAA2_4_Input2_4_1_Components[5];
extern void* an_2_FPAA2_4_Input2_4_2_Components[5];
extern void* an_2_FPAA2_4_Input2_4_3_Components[5];
extern void* an_2_FPAA2_4_SumadorNeurona2_4_1_Components[5];
extern void* an_2_FPAA2_4_SumadorNeurona2_4_2_Components[5];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_2_apiCAMComponentData[an_2_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_2_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_2_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_2_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_2_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_2_InitializeVortexReconfigData.  |
  |  an_2_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_2_InitializeApexReconfigData.    |
  |  an_2_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_2_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_2_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_SetVortexReconfigControlFlags(an_Chip chip, an_2_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_SetApexReconfigControlFlags(an_Chip chip, an_2_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_SetApexReconfigControlFlagsNOP(an_Chip chip, an_2_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_2_VortexControlByte an_2_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_2_ApexControlByte an_2_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_2_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_2_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_2_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_2_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_2_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_2_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_2_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_2_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_2_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_2_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 3.ad2                                            *
*  Generated: October 19, 2020:  01:00 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_3_VortexControlByte
{
   an_3_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_3_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_3_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_3_VortexControlByte_Read      = 0x10, /* Read            */
   an_3_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_3_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_3_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_3_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_3_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_3_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_3_ApexControlByte
{
   an_3_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_3_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_3_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_3_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_3_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_3_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_3_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_3_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_3_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_3_ApiReconfigState
{
   an_3_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_3_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_3_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_3_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_3_FPAA3_1                   0         /* "FPAA3_1" */
#define an_3_FPAA3_2                   1         /* "FPAA3_2" */
#define an_3_FPAA3_3                   2         /* "FPAA3_3" */
#define an_3_FPAA3_4                   3         /* "FPAA3_4" */

/* How many chips with programmable Chips there are. */             
#define an_3_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_3_apiAddress1[an_3_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_3_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_3_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_3_FPAA3_1_PrimaryConfigInfo[];
extern const an_Byte an_3_FPAA3_2_PrimaryConfigInfo[];
extern const an_Byte an_3_FPAA3_3_PrimaryConfigInfo[];
extern const an_Byte an_3_FPAA3_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_3_apiPrimaryConfigInfo an_3_apiPrimaryConfigData[an_3_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_3_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_3_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_3_ApiReconfigState flags; /* Internal state */
} an_3_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_3_apiReconfigInfo an_3_FPAA3_1_ReconfigInfo; /* FPAA3_1 */
extern an_3_apiReconfigInfo an_3_FPAA3_2_ReconfigInfo; /* FPAA3_2 */
extern an_3_apiReconfigInfo an_3_FPAA3_3_ReconfigInfo; /* FPAA3_3 */
extern an_3_apiReconfigInfo an_3_FPAA3_4_ReconfigInfo; /* FPAA3_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_3_apiReconfigInfo* an_3_apiReconfigData[an_3_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_3_FPAA3_1_ReconfigBuffer[64];  /* FPAA3_1 */
extern an_Byte an_3_FPAA3_2_ReconfigBuffer[64];  /* FPAA3_2 */
extern an_Byte an_3_FPAA3_3_ReconfigBuffer[64];  /* FPAA3_3 */
extern an_Byte an_3_FPAA3_4_ReconfigBuffer[64];  /* FPAA3_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_3_apiReconfigBuffer[an_3_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_3_FPAA3_1_GainHold3_1_1     0         /* "GainHold3_1_1" */
#define an_3_FPAA3_1_GainHold3_1_2     1         /* "GainHold3_1_2" */
#define an_3_FPAA3_1_GainHold3_1_3     2         /* "GainHold3_1_3" */
#define an_3_FPAA3_1_Input3_1_1        3         /* "Input3_1_1" */
#define an_3_FPAA3_1_Input3_1_2        4         /* "Input3_1_2" */
#define an_3_FPAA3_1_Input3_1_3        5         /* "Input3_1_3" */
#define an_3_FPAA3_1_SumadorNeurona3_1_1 6         /* "SumadorNeurona3_1_1" */
#define an_3_FPAA3_1_SumadorNeurona3_1_2 7         /* "SumadorNeurona3_1_2" */
#define an_3_FPAA3_2_GainHold3_2_1     8         /* "GainHold3_2_1" */
#define an_3_FPAA3_2_GainHold3_2_2     9         /* "GainHold3_2_2" */
#define an_3_FPAA3_2_GainHold3_2_3     10        /* "GainHold3_2_3" */
#define an_3_FPAA3_2_Input3_2_1        11        /* "Input3_2_1" */
#define an_3_FPAA3_2_Input3_2_2        12        /* "Input3_2_2" */
#define an_3_FPAA3_2_Input3_2_3        13        /* "Input3_2_3" */
#define an_3_FPAA3_2_SumadorNeurona3_2_1 14        /* "SumadorNeurona3_2_1" */
#define an_3_FPAA3_2_SumadorNeurona3_2_2 15        /* "SumadorNeurona3_2_2" */
#define an_3_FPAA3_3_GainHold3_3_1     16        /* "GainHold3_3_1" */
#define an_3_FPAA3_3_GainHold3_3_2     17        /* "GainHold3_3_2" */
#define an_3_FPAA3_3_GainHold3_3_3     18        /* "GainHold3_3_3" */
#define an_3_FPAA3_3_Input3_3_1        19        /* "Input3_3_1" */
#define an_3_FPAA3_3_Input3_3_2        20        /* "Input3_3_2" */
#define an_3_FPAA3_3_Input3_3_3        21        /* "Input3_3_3" */
#define an_3_FPAA3_3_SumadorNeurona3_3_1 22        /* "SumadorNeurona3_3_1" */
#define an_3_FPAA3_3_SumadorNeurona3_3_2 23        /* "SumadorNeurona3_3_2" */
#define an_3_FPAA3_4_GainHold3_4_1     24        /* "GainHold3_4_1" */
#define an_3_FPAA3_4_GainHold3_4_2     25        /* "GainHold3_4_2" */
#define an_3_FPAA3_4_GainHold3_4_3     26        /* "GainHold3_4_3" */
#define an_3_FPAA3_4_Input3_4_1        27        /* "Input3_4_1" */
#define an_3_FPAA3_4_Input3_4_2        28        /* "Input3_4_2" */
#define an_3_FPAA3_4_Input3_4_3        29        /* "Input3_4_3" */
#define an_3_FPAA3_4_SumadorNeurona3_4_1 30        /* "SumadorNeurona3_4_1" */
#define an_3_FPAA3_4_SumadorNeurona3_4_2 31        /* "SumadorNeurona3_4_2" */

/* How many programmable CAMs there are. */                         
#define an_3_apiCAMCount               32

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_3_apiChipFromCAM[an_3_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_3_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_3_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_3_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_3_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_3_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_3_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_3_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_3_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_3_apiCapacitor;


/* Component tables for GainHold3_1_1 */
extern const an_3_apiCapacitor an_3_FPAA3_1_GainHold3_1_1_Capacitor[2];

/* Component tables for GainHold3_1_2 */
extern const an_3_apiCapacitor an_3_FPAA3_1_GainHold3_1_2_Capacitor[2];

/* Component tables for GainHold3_1_3 */
extern const an_3_apiCapacitor an_3_FPAA3_1_GainHold3_1_3_Capacitor[2];

/* Component tables for Input3_1_1 */
extern const an_3_apiCapacitor an_3_FPAA3_1_Input3_1_1_Capacitor[3];

/* Component tables for Input3_1_2 */
extern const an_3_apiCapacitor an_3_FPAA3_1_Input3_1_2_Capacitor[3];

/* Component tables for Input3_1_3 */
extern const an_3_apiCapacitor an_3_FPAA3_1_Input3_1_3_Capacitor[3];

/* Component tables for SumadorNeurona3_1_1 */
extern const an_3_apiCapacitor an_3_FPAA3_1_SumadorNeurona3_1_1_Capacitor[5];

/* Component tables for SumadorNeurona3_1_2 */
extern const an_3_apiCapacitor an_3_FPAA3_1_SumadorNeurona3_1_2_Capacitor[5];

/* Component tables for GainHold3_2_1 */
extern const an_3_apiCapacitor an_3_FPAA3_2_GainHold3_2_1_Capacitor[2];

/* Component tables for GainHold3_2_2 */
extern const an_3_apiCapacitor an_3_FPAA3_2_GainHold3_2_2_Capacitor[2];

/* Component tables for GainHold3_2_3 */
extern const an_3_apiCapacitor an_3_FPAA3_2_GainHold3_2_3_Capacitor[2];

/* Component tables for Input3_2_1 */
extern const an_3_apiCapacitor an_3_FPAA3_2_Input3_2_1_Capacitor[3];

/* Component tables for Input3_2_2 */
extern const an_3_apiCapacitor an_3_FPAA3_2_Input3_2_2_Capacitor[3];

/* Component tables for Input3_2_3 */
extern const an_3_apiCapacitor an_3_FPAA3_2_Input3_2_3_Capacitor[3];

/* Component tables for SumadorNeurona3_2_1 */
extern const an_3_apiCapacitor an_3_FPAA3_2_SumadorNeurona3_2_1_Capacitor[5];

/* Component tables for SumadorNeurona3_2_2 */
extern const an_3_apiCapacitor an_3_FPAA3_2_SumadorNeurona3_2_2_Capacitor[5];

/* Component tables for GainHold3_3_1 */
extern const an_3_apiCapacitor an_3_FPAA3_3_GainHold3_3_1_Capacitor[2];

/* Component tables for GainHold3_3_2 */
extern const an_3_apiCapacitor an_3_FPAA3_3_GainHold3_3_2_Capacitor[2];

/* Component tables for GainHold3_3_3 */
extern const an_3_apiCapacitor an_3_FPAA3_3_GainHold3_3_3_Capacitor[2];

/* Component tables for Input3_3_1 */
extern const an_3_apiCapacitor an_3_FPAA3_3_Input3_3_1_Capacitor[3];

/* Component tables for Input3_3_2 */
extern const an_3_apiCapacitor an_3_FPAA3_3_Input3_3_2_Capacitor[3];

/* Component tables for Input3_3_3 */
extern const an_3_apiCapacitor an_3_FPAA3_3_Input3_3_3_Capacitor[3];

/* Component tables for SumadorNeurona3_3_1 */
extern const an_3_apiCapacitor an_3_FPAA3_3_SumadorNeurona3_3_1_Capacitor[5];

/* Component tables for SumadorNeurona3_3_2 */
extern const an_3_apiCapacitor an_3_FPAA3_3_SumadorNeurona3_3_2_Capacitor[5];

/* Component tables for GainHold3_4_1 */
extern const an_3_apiCapacitor an_3_FPAA3_4_GainHold3_4_1_Capacitor[2];

/* Component tables for GainHold3_4_2 */
extern const an_3_apiCapacitor an_3_FPAA3_4_GainHold3_4_2_Capacitor[2];

/* Component tables for GainHold3_4_3 */
extern const an_3_apiCapacitor an_3_FPAA3_4_GainHold3_4_3_Capacitor[2];

/* Component tables for Input3_4_1 */
extern const an_3_apiCapacitor an_3_FPAA3_4_Input3_4_1_Capacitor[3];

/* Component tables for Input3_4_2 */
extern const an_3_apiCapacitor an_3_FPAA3_4_Input3_4_2_Capacitor[3];

/* Component tables for Input3_4_3 */
extern const an_3_apiCapacitor an_3_FPAA3_4_Input3_4_3_Capacitor[3];

/* Component tables for SumadorNeurona3_4_1 */
extern const an_3_apiCapacitor an_3_FPAA3_4_SumadorNeurona3_4_1_Capacitor[5];

/* Component tables for SumadorNeurona3_4_2 */
extern const an_3_apiCapacitor an_3_FPAA3_4_SumadorNeurona3_4_2_Capacitor[5];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_3_FPAA3_1_GainHold3_1_1_Components[2];
extern void* an_3_FPAA3_1_GainHold3_1_2_Components[2];
extern void* an_3_FPAA3_1_GainHold3_1_3_Components[2];
extern void* an_3_FPAA3_1_Input3_1_1_Components[5];
extern void* an_3_FPAA3_1_Input3_1_2_Components[5];
extern void* an_3_FPAA3_1_Input3_1_3_Components[5];
extern void* an_3_FPAA3_1_SumadorNeurona3_1_1_Components[5];
extern void* an_3_FPAA3_1_SumadorNeurona3_1_2_Components[5];
extern void* an_3_FPAA3_2_GainHold3_2_1_Components[2];
extern void* an_3_FPAA3_2_GainHold3_2_2_Components[2];
extern void* an_3_FPAA3_2_GainHold3_2_3_Components[2];
extern void* an_3_FPAA3_2_Input3_2_1_Components[5];
extern void* an_3_FPAA3_2_Input3_2_2_Components[5];
extern void* an_3_FPAA3_2_Input3_2_3_Components[5];
extern void* an_3_FPAA3_2_SumadorNeurona3_2_1_Components[5];
extern void* an_3_FPAA3_2_SumadorNeurona3_2_2_Components[5];
extern void* an_3_FPAA3_3_GainHold3_3_1_Components[2];
extern void* an_3_FPAA3_3_GainHold3_3_2_Components[2];
extern void* an_3_FPAA3_3_GainHold3_3_3_Components[2];
extern void* an_3_FPAA3_3_Input3_3_1_Components[5];
extern void* an_3_FPAA3_3_Input3_3_2_Components[5];
extern void* an_3_FPAA3_3_Input3_3_3_Components[5];
extern void* an_3_FPAA3_3_SumadorNeurona3_3_1_Components[5];
extern void* an_3_FPAA3_3_SumadorNeurona3_3_2_Components[5];
extern void* an_3_FPAA3_4_GainHold3_4_1_Components[2];
extern void* an_3_FPAA3_4_GainHold3_4_2_Components[2];
extern void* an_3_FPAA3_4_GainHold3_4_3_Components[2];
extern void* an_3_FPAA3_4_Input3_4_1_Components[5];
extern void* an_3_FPAA3_4_Input3_4_2_Components[5];
extern void* an_3_FPAA3_4_Input3_4_3_Components[5];
extern void* an_3_FPAA3_4_SumadorNeurona3_4_1_Components[5];
extern void* an_3_FPAA3_4_SumadorNeurona3_4_2_Components[5];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_3_apiCAMComponentData[an_3_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_3_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_3_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_3_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_3_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_3_InitializeVortexReconfigData.  |
  |  an_3_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_3_InitializeApexReconfigData.    |
  |  an_3_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_3_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_3_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_SetVortexReconfigControlFlags(an_Chip chip, an_3_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_SetApexReconfigControlFlags(an_Chip chip, an_3_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_SetApexReconfigControlFlagsNOP(an_Chip chip, an_3_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_3_VortexControlByte an_3_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_3_ApexControlByte an_3_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_3_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_3_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_3_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_3_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_3_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_3_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_3_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_3_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_3_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_3_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 4.ad2                                            *
*  Generated: October 19, 2020:  01:01 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_4_VortexControlByte
{
   an_4_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_4_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_4_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_4_VortexControlByte_Read      = 0x10, /* Read            */
   an_4_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_4_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_4_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_4_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_4_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_4_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_4_ApexControlByte
{
   an_4_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_4_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_4_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_4_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_4_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_4_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_4_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_4_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_4_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_4_ApiReconfigState
{
   an_4_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_4_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_4_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_4_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_4_FPAA4_1                   0         /* "FPAA4_1" */
#define an_4_FPAA4_2                   1         /* "FPAA4_2" */
#define an_4_FPAA4_3                   2         /* "FPAA4_3" */
#define an_4_FPAA4_4                   3         /* "FPAA4_4" */

/* How many chips with programmable Chips there are. */             
#define an_4_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_4_apiAddress1[an_4_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_4_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_4_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_4_FPAA4_1_PrimaryConfigInfo[];
extern const an_Byte an_4_FPAA4_2_PrimaryConfigInfo[];
extern const an_Byte an_4_FPAA4_3_PrimaryConfigInfo[];
extern const an_Byte an_4_FPAA4_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_4_apiPrimaryConfigInfo an_4_apiPrimaryConfigData[an_4_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_4_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_4_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_4_ApiReconfigState flags; /* Internal state */
} an_4_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_4_apiReconfigInfo an_4_FPAA4_1_ReconfigInfo; /* FPAA4_1 */
extern an_4_apiReconfigInfo an_4_FPAA4_2_ReconfigInfo; /* FPAA4_2 */
extern an_4_apiReconfigInfo an_4_FPAA4_3_ReconfigInfo; /* FPAA4_3 */
extern an_4_apiReconfigInfo an_4_FPAA4_4_ReconfigInfo; /* FPAA4_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_4_apiReconfigInfo* an_4_apiReconfigData[an_4_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_4_FPAA4_1_ReconfigBuffer[64];  /* FPAA4_1 */
extern an_Byte an_4_FPAA4_2_ReconfigBuffer[64];  /* FPAA4_2 */
extern an_Byte an_4_FPAA4_3_ReconfigBuffer[64];  /* FPAA4_3 */
extern an_Byte an_4_FPAA4_4_ReconfigBuffer[64];  /* FPAA4_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_4_apiReconfigBuffer[an_4_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_4_FPAA4_1_GainHold4_1_1     0         /* "GainHold4_1_1" */
#define an_4_FPAA4_1_GainHold4_1_2     1         /* "GainHold4_1_2" */
#define an_4_FPAA4_1_GainHold4_1_3     2         /* "GainHold4_1_3" */
#define an_4_FPAA4_1_Input4_1_1        3         /* "Input4_1_1" */
#define an_4_FPAA4_1_Input4_1_2        4         /* "Input4_1_2" */
#define an_4_FPAA4_1_SumadorNeurona4_1_1 5         /* "SumadorNeurona4_1_1" */
#define an_4_FPAA4_1_SumadorNeurona4_1_2 6         /* "SumadorNeurona4_1_2" */
#define an_4_FPAA4_1_TransferFunction4_1_1 7         /* "TransferFunction4_1_1" */
#define an_4_FPAA4_2_GainHold4_2_1     8         /* "GainHold4_2_1" */
#define an_4_FPAA4_2_GainHold4_2_2     9         /* "GainHold4_2_2" */
#define an_4_FPAA4_2_GainHold4_2_3     10        /* "GainHold4_2_3" */
#define an_4_FPAA4_2_Input4_2_1        11        /* "Input4_2_1" */
#define an_4_FPAA4_2_Input4_2_2        12        /* "Input4_2_2" */
#define an_4_FPAA4_2_SumadorNeurona4_2_1 13        /* "SumadorNeurona4_2_1" */
#define an_4_FPAA4_2_SumadorNeurona4_2_2 14        /* "SumadorNeurona4_2_2" */
#define an_4_FPAA4_2_TransferFunction4_2_1 15        /* "TransferFunction4_2_1" */
#define an_4_FPAA4_3_GainHold4_3_1     16        /* "GainHold4_3_1" */
#define an_4_FPAA4_3_GainHold4_3_2     17        /* "GainHold4_3_2" */
#define an_4_FPAA4_3_GainHold4_3_3     18        /* "GainHold4_3_3" */
#define an_4_FPAA4_3_Input4_3_1        19        /* "Input4_3_1" */
#define an_4_FPAA4_3_Input4_3_2        20        /* "Input4_3_2" */
#define an_4_FPAA4_3_Input4_3_3        21        /* "Input4_3_3" */
#define an_4_FPAA4_3_SumadorNeurona4_3_1 22        /* "SumadorNeurona4_3_1" */
#define an_4_FPAA4_3_SumadorNeurona4_3_2 23        /* "SumadorNeurona4_3_2" */
#define an_4_FPAA4_4_GainHold4_4_1     24        /* "GainHold4_4_1" */
#define an_4_FPAA4_4_GainHold4_4_2     25        /* "GainHold4_4_2" */
#define an_4_FPAA4_4_GainHold4_4_3     26        /* "GainHold4_4_3" */
#define an_4_FPAA4_4_Input4_4_1        27        /* "Input4_4_1" */
#define an_4_FPAA4_4_Input4_4_2        28        /* "Input4_4_2" */
#define an_4_FPAA4_4_Input4_4_3        29        /* "Input4_4_3" */
#define an_4_FPAA4_4_SumadorNeurona4_4_1 30        /* "SumadorNeurona4_4_1" */
#define an_4_FPAA4_4_SumadorNeurona4_4_2 31        /* "SumadorNeurona4_4_2" */

/* How many programmable CAMs there are. */                         
#define an_4_apiCAMCount               32

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_4_apiChipFromCAM[an_4_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_4_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_4_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_4_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_4_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_4_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_4_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_4_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* Component ID's for AnadigmApex\TransferFunction */
#define an_4_AnadigmApex_TransferFunction_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_4_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_4_apiCapacitor;


/* Component tables for GainHold4_1_1 */
extern const an_4_apiCapacitor an_4_FPAA4_1_GainHold4_1_1_Capacitor[2];

/* Component tables for GainHold4_1_2 */
extern const an_4_apiCapacitor an_4_FPAA4_1_GainHold4_1_2_Capacitor[2];

/* Component tables for GainHold4_1_3 */
extern const an_4_apiCapacitor an_4_FPAA4_1_GainHold4_1_3_Capacitor[2];

/* Component tables for Input4_1_1 */
extern const an_4_apiCapacitor an_4_FPAA4_1_Input4_1_1_Capacitor[3];

/* Component tables for Input4_1_2 */
extern const an_4_apiCapacitor an_4_FPAA4_1_Input4_1_2_Capacitor[3];

/* Component tables for SumadorNeurona4_1_1 */
extern const an_4_apiCapacitor an_4_FPAA4_1_SumadorNeurona4_1_1_Capacitor[3];

/* Component tables for SumadorNeurona4_1_2 */
extern const an_4_apiCapacitor an_4_FPAA4_1_SumadorNeurona4_1_2_Capacitor[5];

/* Component tables for TransferFunction4_1_1 */
extern const an_4_apiCapacitor an_4_FPAA4_1_TransferFunction4_1_1_Capacitor[1];

/* Component tables for GainHold4_2_1 */
extern const an_4_apiCapacitor an_4_FPAA4_2_GainHold4_2_1_Capacitor[2];

/* Component tables for GainHold4_2_2 */
extern const an_4_apiCapacitor an_4_FPAA4_2_GainHold4_2_2_Capacitor[2];

/* Component tables for GainHold4_2_3 */
extern const an_4_apiCapacitor an_4_FPAA4_2_GainHold4_2_3_Capacitor[2];

/* Component tables for Input4_2_1 */
extern const an_4_apiCapacitor an_4_FPAA4_2_Input4_2_1_Capacitor[3];

/* Component tables for Input4_2_2 */
extern const an_4_apiCapacitor an_4_FPAA4_2_Input4_2_2_Capacitor[3];

/* Component tables for SumadorNeurona4_2_1 */
extern const an_4_apiCapacitor an_4_FPAA4_2_SumadorNeurona4_2_1_Capacitor[3];

/* Component tables for SumadorNeurona4_2_2 */
extern const an_4_apiCapacitor an_4_FPAA4_2_SumadorNeurona4_2_2_Capacitor[5];

/* Component tables for TransferFunction4_2_1 */
extern const an_4_apiCapacitor an_4_FPAA4_2_TransferFunction4_2_1_Capacitor[1];

/* Component tables for GainHold4_3_1 */
extern const an_4_apiCapacitor an_4_FPAA4_3_GainHold4_3_1_Capacitor[2];

/* Component tables for GainHold4_3_2 */
extern const an_4_apiCapacitor an_4_FPAA4_3_GainHold4_3_2_Capacitor[2];

/* Component tables for GainHold4_3_3 */
extern const an_4_apiCapacitor an_4_FPAA4_3_GainHold4_3_3_Capacitor[2];

/* Component tables for Input4_3_1 */
extern const an_4_apiCapacitor an_4_FPAA4_3_Input4_3_1_Capacitor[3];

/* Component tables for Input4_3_2 */
extern const an_4_apiCapacitor an_4_FPAA4_3_Input4_3_2_Capacitor[3];

/* Component tables for Input4_3_3 */
extern const an_4_apiCapacitor an_4_FPAA4_3_Input4_3_3_Capacitor[3];

/* Component tables for SumadorNeurona4_3_1 */
extern const an_4_apiCapacitor an_4_FPAA4_3_SumadorNeurona4_3_1_Capacitor[4];

/* Component tables for SumadorNeurona4_3_2 */
extern const an_4_apiCapacitor an_4_FPAA4_3_SumadorNeurona4_3_2_Capacitor[4];

/* Component tables for GainHold4_4_1 */
extern const an_4_apiCapacitor an_4_FPAA4_4_GainHold4_4_1_Capacitor[2];

/* Component tables for GainHold4_4_2 */
extern const an_4_apiCapacitor an_4_FPAA4_4_GainHold4_4_2_Capacitor[2];

/* Component tables for GainHold4_4_3 */
extern const an_4_apiCapacitor an_4_FPAA4_4_GainHold4_4_3_Capacitor[2];

/* Component tables for Input4_4_1 */
extern const an_4_apiCapacitor an_4_FPAA4_4_Input4_4_1_Capacitor[3];

/* Component tables for Input4_4_2 */
extern const an_4_apiCapacitor an_4_FPAA4_4_Input4_4_2_Capacitor[3];

/* Component tables for Input4_4_3 */
extern const an_4_apiCapacitor an_4_FPAA4_4_Input4_4_3_Capacitor[3];

/* Component tables for SumadorNeurona4_4_1 */
extern const an_4_apiCapacitor an_4_FPAA4_4_SumadorNeurona4_4_1_Capacitor[5];

/* Component tables for SumadorNeurona4_4_2 */
extern const an_4_apiCapacitor an_4_FPAA4_4_SumadorNeurona4_4_2_Capacitor[5];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_4_FPAA4_1_GainHold4_1_1_Components[2];
extern void* an_4_FPAA4_1_GainHold4_1_2_Components[2];
extern void* an_4_FPAA4_1_GainHold4_1_3_Components[2];
extern void* an_4_FPAA4_1_Input4_1_1_Components[5];
extern void* an_4_FPAA4_1_Input4_1_2_Components[5];
extern void* an_4_FPAA4_1_SumadorNeurona4_1_1_Components[5];
extern void* an_4_FPAA4_1_SumadorNeurona4_1_2_Components[5];
extern void* an_4_FPAA4_1_TransferFunction4_1_1_Components[1];
extern void* an_4_FPAA4_2_GainHold4_2_1_Components[2];
extern void* an_4_FPAA4_2_GainHold4_2_2_Components[2];
extern void* an_4_FPAA4_2_GainHold4_2_3_Components[2];
extern void* an_4_FPAA4_2_Input4_2_1_Components[5];
extern void* an_4_FPAA4_2_Input4_2_2_Components[5];
extern void* an_4_FPAA4_2_SumadorNeurona4_2_1_Components[5];
extern void* an_4_FPAA4_2_SumadorNeurona4_2_2_Components[5];
extern void* an_4_FPAA4_2_TransferFunction4_2_1_Components[1];
extern void* an_4_FPAA4_3_GainHold4_3_1_Components[2];
extern void* an_4_FPAA4_3_GainHold4_3_2_Components[2];
extern void* an_4_FPAA4_3_GainHold4_3_3_Components[2];
extern void* an_4_FPAA4_3_Input4_3_1_Components[5];
extern void* an_4_FPAA4_3_Input4_3_2_Components[5];
extern void* an_4_FPAA4_3_Input4_3_3_Components[5];
extern void* an_4_FPAA4_3_SumadorNeurona4_3_1_Components[5];
extern void* an_4_FPAA4_3_SumadorNeurona4_3_2_Components[5];
extern void* an_4_FPAA4_4_GainHold4_4_1_Components[2];
extern void* an_4_FPAA4_4_GainHold4_4_2_Components[2];
extern void* an_4_FPAA4_4_GainHold4_4_3_Components[2];
extern void* an_4_FPAA4_4_Input4_4_1_Components[5];
extern void* an_4_FPAA4_4_Input4_4_2_Components[5];
extern void* an_4_FPAA4_4_Input4_4_3_Components[5];
extern void* an_4_FPAA4_4_SumadorNeurona4_4_1_Components[5];
extern void* an_4_FPAA4_4_SumadorNeurona4_4_2_Components[5];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_4_apiCAMComponentData[an_4_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_4_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_4_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_4_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_4_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_4_InitializeVortexReconfigData.  |
  |  an_4_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_4_InitializeApexReconfigData.    |
  |  an_4_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_4_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_4_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_SetVortexReconfigControlFlags(an_Chip chip, an_4_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_SetApexReconfigControlFlags(an_Chip chip, an_4_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_SetApexReconfigControlFlagsNOP(an_Chip chip, an_4_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_4_VortexControlByte an_4_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_4_ApexControlByte an_4_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_4_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_4_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_4_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_4_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_4_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_4_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_4_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_4_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_4_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_4_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 5.ad2                                            *
*  Generated: October 19, 2020:  01:02 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_5_VortexControlByte
{
   an_5_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_5_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_5_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_5_VortexControlByte_Read      = 0x10, /* Read            */
   an_5_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_5_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_5_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_5_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_5_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_5_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_5_ApexControlByte
{
   an_5_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_5_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_5_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_5_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_5_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_5_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_5_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_5_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_5_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_5_ApiReconfigState
{
   an_5_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_5_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_5_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_5_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_5_FPAA5_1                   0         /* "FPAA5_1" */
#define an_5_FPAA5_2                   1         /* "FPAA5_2" */
#define an_5_FPAA5_3                   2         /* "FPAA5_3" */
#define an_5_FPAA5_4                   3         /* "FPAA5_4" */

/* How many chips with programmable Chips there are. */             
#define an_5_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_5_apiAddress1[an_5_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_5_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_5_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_5_FPAA5_1_PrimaryConfigInfo[];
extern const an_Byte an_5_FPAA5_2_PrimaryConfigInfo[];
extern const an_Byte an_5_FPAA5_3_PrimaryConfigInfo[];
extern const an_Byte an_5_FPAA5_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_5_apiPrimaryConfigInfo an_5_apiPrimaryConfigData[an_5_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_5_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_5_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_5_ApiReconfigState flags; /* Internal state */
} an_5_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_5_apiReconfigInfo an_5_FPAA5_1_ReconfigInfo; /* FPAA5_1 */
extern an_5_apiReconfigInfo an_5_FPAA5_2_ReconfigInfo; /* FPAA5_2 */
extern an_5_apiReconfigInfo an_5_FPAA5_3_ReconfigInfo; /* FPAA5_3 */
extern an_5_apiReconfigInfo an_5_FPAA5_4_ReconfigInfo; /* FPAA5_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_5_apiReconfigInfo* an_5_apiReconfigData[an_5_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_5_FPAA5_1_ReconfigBuffer[64];  /* FPAA5_1 */
extern an_Byte an_5_FPAA5_2_ReconfigBuffer[64];  /* FPAA5_2 */
extern an_Byte an_5_FPAA5_3_ReconfigBuffer[64];  /* FPAA5_3 */
extern an_Byte an_5_FPAA5_4_ReconfigBuffer[64];  /* FPAA5_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_5_apiReconfigBuffer[an_5_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_5_FPAA5_1_GainHold5_1_1     0         /* "GainHold5_1_1" */
#define an_5_FPAA5_1_GainHold5_1_2     1         /* "GainHold5_1_2" */
#define an_5_FPAA5_1_GainHold5_1_3     2         /* "GainHold5_1_3" */
#define an_5_FPAA5_1_Input5_1_1        3         /* "Input5_1_1" */
#define an_5_FPAA5_1_Input5_1_2        4         /* "Input5_1_2" */
#define an_5_FPAA5_1_Input5_1_3        5         /* "Input5_1_3" */
#define an_5_FPAA5_1_SumadorNeurona5_1_1 6         /* "SumadorNeurona5_1_1" */
#define an_5_FPAA5_1_SumadorNeurona5_1_2 7         /* "SumadorNeurona5_1_2" */
#define an_5_FPAA5_2_GainHold5_2_1     8         /* "GainHold5_2_1" */
#define an_5_FPAA5_2_GainHold5_2_2     9         /* "GainHold5_2_2" */
#define an_5_FPAA5_2_GainHold5_2_3     10        /* "GainHold5_2_3" */
#define an_5_FPAA5_2_Input5_2_1        11        /* "Input5_2_1" */
#define an_5_FPAA5_2_Input5_2_2        12        /* "Input5_2_2" */
#define an_5_FPAA5_2_Input5_2_3        13        /* "Input5_2_3" */
#define an_5_FPAA5_2_SumadorNeurona5_2_1 14        /* "SumadorNeurona5_2_1" */
#define an_5_FPAA5_2_SumadorNeurona5_2_2 15        /* "SumadorNeurona5_2_2" */
#define an_5_FPAA5_3_GainHold5_3_1     16        /* "GainHold5_3_1" */
#define an_5_FPAA5_3_GainHold5_3_2     17        /* "GainHold5_3_2" */
#define an_5_FPAA5_3_GainHold5_3_3     18        /* "GainHold5_3_3" */
#define an_5_FPAA5_3_Input5_3_1        19        /* "Input5_3_1" */
#define an_5_FPAA5_3_Input5_3_2        20        /* "Input5_3_2" */
#define an_5_FPAA5_3_Input5_3_3        21        /* "Input5_3_3" */
#define an_5_FPAA5_3_SumadorNeurona5_3_1 22        /* "SumadorNeurona5_3_1" */
#define an_5_FPAA5_3_SumadorNeurona5_3_2 23        /* "SumadorNeurona5_3_2" */
#define an_5_FPAA5_4_GainHold5_4_1     24        /* "GainHold5_4_1" */
#define an_5_FPAA5_4_GainHold5_4_2     25        /* "GainHold5_4_2" */
#define an_5_FPAA5_4_GainHold5_4_3     26        /* "GainHold5_4_3" */
#define an_5_FPAA5_4_Input5_4_1        27        /* "Input5_4_1" */
#define an_5_FPAA5_4_Input5_4_2        28        /* "Input5_4_2" */
#define an_5_FPAA5_4_SumadorNeurona5_4_1 29        /* "SumadorNeurona5_4_1" */
#define an_5_FPAA5_4_SumadorNeurona5_4_2 30        /* "SumadorNeurona5_4_2" */
#define an_5_FPAA5_4_TransferFunction5_4_1 31        /* "TransferFunction5_4_1" */

/* How many programmable CAMs there are. */                         
#define an_5_apiCAMCount               32

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_5_apiChipFromCAM[an_5_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_5_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_5_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_5_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_5_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_5_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_5_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_5_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* Component ID's for AnadigmApex\TransferFunction */
#define an_5_AnadigmApex_TransferFunction_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_5_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_5_apiCapacitor;


/* Component tables for GainHold5_1_1 */
extern const an_5_apiCapacitor an_5_FPAA5_1_GainHold5_1_1_Capacitor[2];

/* Component tables for GainHold5_1_2 */
extern const an_5_apiCapacitor an_5_FPAA5_1_GainHold5_1_2_Capacitor[2];

/* Component tables for GainHold5_1_3 */
extern const an_5_apiCapacitor an_5_FPAA5_1_GainHold5_1_3_Capacitor[2];

/* Component tables for Input5_1_1 */
extern const an_5_apiCapacitor an_5_FPAA5_1_Input5_1_1_Capacitor[3];

/* Component tables for Input5_1_2 */
extern const an_5_apiCapacitor an_5_FPAA5_1_Input5_1_2_Capacitor[3];

/* Component tables for Input5_1_3 */
extern const an_5_apiCapacitor an_5_FPAA5_1_Input5_1_3_Capacitor[3];

/* Component tables for SumadorNeurona5_1_1 */
extern const an_5_apiCapacitor an_5_FPAA5_1_SumadorNeurona5_1_1_Capacitor[5];

/* Component tables for SumadorNeurona5_1_2 */
extern const an_5_apiCapacitor an_5_FPAA5_1_SumadorNeurona5_1_2_Capacitor[5];

/* Component tables for GainHold5_2_1 */
extern const an_5_apiCapacitor an_5_FPAA5_2_GainHold5_2_1_Capacitor[2];

/* Component tables for GainHold5_2_2 */
extern const an_5_apiCapacitor an_5_FPAA5_2_GainHold5_2_2_Capacitor[2];

/* Component tables for GainHold5_2_3 */
extern const an_5_apiCapacitor an_5_FPAA5_2_GainHold5_2_3_Capacitor[2];

/* Component tables for Input5_2_1 */
extern const an_5_apiCapacitor an_5_FPAA5_2_Input5_2_1_Capacitor[3];

/* Component tables for Input5_2_2 */
extern const an_5_apiCapacitor an_5_FPAA5_2_Input5_2_2_Capacitor[3];

/* Component tables for Input5_2_3 */
extern const an_5_apiCapacitor an_5_FPAA5_2_Input5_2_3_Capacitor[3];

/* Component tables for SumadorNeurona5_2_1 */
extern const an_5_apiCapacitor an_5_FPAA5_2_SumadorNeurona5_2_1_Capacitor[5];

/* Component tables for SumadorNeurona5_2_2 */
extern const an_5_apiCapacitor an_5_FPAA5_2_SumadorNeurona5_2_2_Capacitor[5];

/* Component tables for GainHold5_3_1 */
extern const an_5_apiCapacitor an_5_FPAA5_3_GainHold5_3_1_Capacitor[2];

/* Component tables for GainHold5_3_2 */
extern const an_5_apiCapacitor an_5_FPAA5_3_GainHold5_3_2_Capacitor[2];

/* Component tables for GainHold5_3_3 */
extern const an_5_apiCapacitor an_5_FPAA5_3_GainHold5_3_3_Capacitor[2];

/* Component tables for Input5_3_1 */
extern const an_5_apiCapacitor an_5_FPAA5_3_Input5_3_1_Capacitor[3];

/* Component tables for Input5_3_2 */
extern const an_5_apiCapacitor an_5_FPAA5_3_Input5_3_2_Capacitor[3];

/* Component tables for Input5_3_3 */
extern const an_5_apiCapacitor an_5_FPAA5_3_Input5_3_3_Capacitor[3];

/* Component tables for SumadorNeurona5_3_1 */
extern const an_5_apiCapacitor an_5_FPAA5_3_SumadorNeurona5_3_1_Capacitor[5];

/* Component tables for SumadorNeurona5_3_2 */
extern const an_5_apiCapacitor an_5_FPAA5_3_SumadorNeurona5_3_2_Capacitor[5];

/* Component tables for GainHold5_4_1 */
extern const an_5_apiCapacitor an_5_FPAA5_4_GainHold5_4_1_Capacitor[2];

/* Component tables for GainHold5_4_2 */
extern const an_5_apiCapacitor an_5_FPAA5_4_GainHold5_4_2_Capacitor[2];

/* Component tables for GainHold5_4_3 */
extern const an_5_apiCapacitor an_5_FPAA5_4_GainHold5_4_3_Capacitor[2];

/* Component tables for Input5_4_1 */
extern const an_5_apiCapacitor an_5_FPAA5_4_Input5_4_1_Capacitor[3];

/* Component tables for Input5_4_2 */
extern const an_5_apiCapacitor an_5_FPAA5_4_Input5_4_2_Capacitor[3];

/* Component tables for SumadorNeurona5_4_1 */
extern const an_5_apiCapacitor an_5_FPAA5_4_SumadorNeurona5_4_1_Capacitor[3];

/* Component tables for SumadorNeurona5_4_2 */
extern const an_5_apiCapacitor an_5_FPAA5_4_SumadorNeurona5_4_2_Capacitor[5];

/* Component tables for TransferFunction5_4_1 */
extern const an_5_apiCapacitor an_5_FPAA5_4_TransferFunction5_4_1_Capacitor[1];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_5_FPAA5_1_GainHold5_1_1_Components[2];
extern void* an_5_FPAA5_1_GainHold5_1_2_Components[2];
extern void* an_5_FPAA5_1_GainHold5_1_3_Components[2];
extern void* an_5_FPAA5_1_Input5_1_1_Components[5];
extern void* an_5_FPAA5_1_Input5_1_2_Components[5];
extern void* an_5_FPAA5_1_Input5_1_3_Components[5];
extern void* an_5_FPAA5_1_SumadorNeurona5_1_1_Components[5];
extern void* an_5_FPAA5_1_SumadorNeurona5_1_2_Components[5];
extern void* an_5_FPAA5_2_GainHold5_2_1_Components[2];
extern void* an_5_FPAA5_2_GainHold5_2_2_Components[2];
extern void* an_5_FPAA5_2_GainHold5_2_3_Components[2];
extern void* an_5_FPAA5_2_Input5_2_1_Components[5];
extern void* an_5_FPAA5_2_Input5_2_2_Components[5];
extern void* an_5_FPAA5_2_Input5_2_3_Components[5];
extern void* an_5_FPAA5_2_SumadorNeurona5_2_1_Components[5];
extern void* an_5_FPAA5_2_SumadorNeurona5_2_2_Components[5];
extern void* an_5_FPAA5_3_GainHold5_3_1_Components[2];
extern void* an_5_FPAA5_3_GainHold5_3_2_Components[2];
extern void* an_5_FPAA5_3_GainHold5_3_3_Components[2];
extern void* an_5_FPAA5_3_Input5_3_1_Components[5];
extern void* an_5_FPAA5_3_Input5_3_2_Components[5];
extern void* an_5_FPAA5_3_Input5_3_3_Components[5];
extern void* an_5_FPAA5_3_SumadorNeurona5_3_1_Components[5];
extern void* an_5_FPAA5_3_SumadorNeurona5_3_2_Components[5];
extern void* an_5_FPAA5_4_GainHold5_4_1_Components[2];
extern void* an_5_FPAA5_4_GainHold5_4_2_Components[2];
extern void* an_5_FPAA5_4_GainHold5_4_3_Components[2];
extern void* an_5_FPAA5_4_Input5_4_1_Components[5];
extern void* an_5_FPAA5_4_Input5_4_2_Components[5];
extern void* an_5_FPAA5_4_SumadorNeurona5_4_1_Components[5];
extern void* an_5_FPAA5_4_SumadorNeurona5_4_2_Components[5];
extern void* an_5_FPAA5_4_TransferFunction5_4_1_Components[1];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_5_apiCAMComponentData[an_5_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_5_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_5_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_5_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_5_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_5_InitializeVortexReconfigData.  |
  |  an_5_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_5_InitializeApexReconfigData.    |
  |  an_5_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_5_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_5_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_SetVortexReconfigControlFlags(an_Chip chip, an_5_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_SetApexReconfigControlFlags(an_Chip chip, an_5_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_SetApexReconfigControlFlagsNOP(an_Chip chip, an_5_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_5_VortexControlByte an_5_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_5_ApexControlByte an_5_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_5_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_5_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_5_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_5_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_5_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_5_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_5_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_5_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_5_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_5_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 6.ad2                                            *
*  Generated: October 19, 2020:  01:03 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_6_VortexControlByte
{
   an_6_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_6_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_6_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_6_VortexControlByte_Read      = 0x10, /* Read            */
   an_6_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_6_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_6_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_6_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_6_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_6_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_6_ApexControlByte
{
   an_6_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_6_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_6_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_6_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_6_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_6_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_6_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_6_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_6_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_6_ApiReconfigState
{
   an_6_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_6_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_6_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_6_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_6_FPAA6_1                   0         /* "FPAA6_1" */
#define an_6_FPAA6_2                   1         /* "FPAA6_2" */
#define an_6_FPAA6_3                   2         /* "FPAA6_3" */
#define an_6_FPAA6_4                   3         /* "FPAA6_4" */

/* How many chips with programmable Chips there are. */             
#define an_6_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_6_apiAddress1[an_6_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_6_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_6_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_6_FPAA6_1_PrimaryConfigInfo[];
extern const an_Byte an_6_FPAA6_2_PrimaryConfigInfo[];
extern const an_Byte an_6_FPAA6_3_PrimaryConfigInfo[];
extern const an_Byte an_6_FPAA6_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_6_apiPrimaryConfigInfo an_6_apiPrimaryConfigData[an_6_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_6_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_6_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_6_ApiReconfigState flags; /* Internal state */
} an_6_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_6_apiReconfigInfo an_6_FPAA6_1_ReconfigInfo; /* FPAA6_1 */
extern an_6_apiReconfigInfo an_6_FPAA6_2_ReconfigInfo; /* FPAA6_2 */
extern an_6_apiReconfigInfo an_6_FPAA6_3_ReconfigInfo; /* FPAA6_3 */
extern an_6_apiReconfigInfo an_6_FPAA6_4_ReconfigInfo; /* FPAA6_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_6_apiReconfigInfo* an_6_apiReconfigData[an_6_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_6_FPAA6_1_ReconfigBuffer[64];  /* FPAA6_1 */
extern an_Byte an_6_FPAA6_2_ReconfigBuffer[64];  /* FPAA6_2 */
extern an_Byte an_6_FPAA6_3_ReconfigBuffer[64];  /* FPAA6_3 */
extern an_Byte an_6_FPAA6_4_ReconfigBuffer[64];  /* FPAA6_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_6_apiReconfigBuffer[an_6_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_6_FPAA6_1_GainHold6_1_1     0         /* "GainHold6_1_1" */
#define an_6_FPAA6_1_GainHold6_1_2     1         /* "GainHold6_1_2" */
#define an_6_FPAA6_1_GainHold6_1_3     2         /* "GainHold6_1_3" */
#define an_6_FPAA6_1_Input6_1_1        3         /* "Input6_1_1" */
#define an_6_FPAA6_1_Input6_1_2        4         /* "Input6_1_2" */
#define an_6_FPAA6_1_SumadorNeurona6_1_1 5         /* "SumadorNeurona6_1_1" */
#define an_6_FPAA6_1_SumadorNeurona6_1_2 6         /* "SumadorNeurona6_1_2" */
#define an_6_FPAA6_1_TransferFunction6_1_1 7         /* "TransferFunction6_1_1" */
#define an_6_FPAA6_2_GainHold6_2_1     8         /* "GainHold6_2_1" */
#define an_6_FPAA6_2_GainHold6_2_2     9         /* "GainHold6_2_2" */
#define an_6_FPAA6_2_GainHold6_2_3     10        /* "GainHold6_2_3" */
#define an_6_FPAA6_2_Input6_2_1        11        /* "Input6_2_1" */
#define an_6_FPAA6_2_Input6_2_2        12        /* "Input6_2_2" */
#define an_6_FPAA6_2_Input6_2_3        13        /* "Input6_2_3" */
#define an_6_FPAA6_2_SumadorNeurona6_2_1 14        /* "SumadorNeurona6_2_1" */
#define an_6_FPAA6_2_SumadorNeurona6_2_2 15        /* "SumadorNeurona6_2_2" */
#define an_6_FPAA6_3_GainHold6_3_1     16        /* "GainHold6_3_1" */
#define an_6_FPAA6_3_GainHold6_3_2     17        /* "GainHold6_3_2" */
#define an_6_FPAA6_3_GainHold6_3_3     18        /* "GainHold6_3_3" */
#define an_6_FPAA6_3_Input6_3_1        19        /* "Input6_3_1" */
#define an_6_FPAA6_3_Input6_3_2        20        /* "Input6_3_2" */
#define an_6_FPAA6_3_Input6_3_3        21        /* "Input6_3_3" */
#define an_6_FPAA6_3_SumadorNeurona6_3_1 22        /* "SumadorNeurona6_3_1" */
#define an_6_FPAA6_3_SumadorNeurona6_3_2 23        /* "SumadorNeurona6_3_2" */
#define an_6_FPAA6_4_GainHold6_4_1     24        /* "GainHold6_4_1" */
#define an_6_FPAA6_4_GainHold6_4_2     25        /* "GainHold6_4_2" */
#define an_6_FPAA6_4_GainHold6_4_3     26        /* "GainHold6_4_3" */
#define an_6_FPAA6_4_Input6_4_1        27        /* "Input6_4_1" */
#define an_6_FPAA6_4_Input6_4_2        28        /* "Input6_4_2" */
#define an_6_FPAA6_4_Input6_4_3        29        /* "Input6_4_3" */
#define an_6_FPAA6_4_SumadorNeurona6_4_1 30        /* "SumadorNeurona6_4_1" */
#define an_6_FPAA6_4_SumadorNeurona6_4_2 31        /* "SumadorNeurona6_4_2" */

/* How many programmable CAMs there are. */                         
#define an_6_apiCAMCount               32

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_6_apiChipFromCAM[an_6_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_6_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_6_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_6_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_6_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_6_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_6_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_6_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* Component ID's for AnadigmApex\TransferFunction */
#define an_6_AnadigmApex_TransferFunction_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_6_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_6_apiCapacitor;


/* Component tables for GainHold6_1_1 */
extern const an_6_apiCapacitor an_6_FPAA6_1_GainHold6_1_1_Capacitor[2];

/* Component tables for GainHold6_1_2 */
extern const an_6_apiCapacitor an_6_FPAA6_1_GainHold6_1_2_Capacitor[2];

/* Component tables for GainHold6_1_3 */
extern const an_6_apiCapacitor an_6_FPAA6_1_GainHold6_1_3_Capacitor[2];

/* Component tables for Input6_1_1 */
extern const an_6_apiCapacitor an_6_FPAA6_1_Input6_1_1_Capacitor[3];

/* Component tables for Input6_1_2 */
extern const an_6_apiCapacitor an_6_FPAA6_1_Input6_1_2_Capacitor[3];

/* Component tables for SumadorNeurona6_1_1 */
extern const an_6_apiCapacitor an_6_FPAA6_1_SumadorNeurona6_1_1_Capacitor[3];

/* Component tables for SumadorNeurona6_1_2 */
extern const an_6_apiCapacitor an_6_FPAA6_1_SumadorNeurona6_1_2_Capacitor[5];

/* Component tables for TransferFunction6_1_1 */
extern const an_6_apiCapacitor an_6_FPAA6_1_TransferFunction6_1_1_Capacitor[1];

/* Component tables for GainHold6_2_1 */
extern const an_6_apiCapacitor an_6_FPAA6_2_GainHold6_2_1_Capacitor[2];

/* Component tables for GainHold6_2_2 */
extern const an_6_apiCapacitor an_6_FPAA6_2_GainHold6_2_2_Capacitor[2];

/* Component tables for GainHold6_2_3 */
extern const an_6_apiCapacitor an_6_FPAA6_2_GainHold6_2_3_Capacitor[2];

/* Component tables for Input6_2_1 */
extern const an_6_apiCapacitor an_6_FPAA6_2_Input6_2_1_Capacitor[3];

/* Component tables for Input6_2_2 */
extern const an_6_apiCapacitor an_6_FPAA6_2_Input6_2_2_Capacitor[3];

/* Component tables for Input6_2_3 */
extern const an_6_apiCapacitor an_6_FPAA6_2_Input6_2_3_Capacitor[3];

/* Component tables for SumadorNeurona6_2_1 */
extern const an_6_apiCapacitor an_6_FPAA6_2_SumadorNeurona6_2_1_Capacitor[4];

/* Component tables for SumadorNeurona6_2_2 */
extern const an_6_apiCapacitor an_6_FPAA6_2_SumadorNeurona6_2_2_Capacitor[4];

/* Component tables for GainHold6_3_1 */
extern const an_6_apiCapacitor an_6_FPAA6_3_GainHold6_3_1_Capacitor[2];

/* Component tables for GainHold6_3_2 */
extern const an_6_apiCapacitor an_6_FPAA6_3_GainHold6_3_2_Capacitor[2];

/* Component tables for GainHold6_3_3 */
extern const an_6_apiCapacitor an_6_FPAA6_3_GainHold6_3_3_Capacitor[2];

/* Component tables for Input6_3_1 */
extern const an_6_apiCapacitor an_6_FPAA6_3_Input6_3_1_Capacitor[3];

/* Component tables for Input6_3_2 */
extern const an_6_apiCapacitor an_6_FPAA6_3_Input6_3_2_Capacitor[3];

/* Component tables for Input6_3_3 */
extern const an_6_apiCapacitor an_6_FPAA6_3_Input6_3_3_Capacitor[3];

/* Component tables for SumadorNeurona6_3_1 */
extern const an_6_apiCapacitor an_6_FPAA6_3_SumadorNeurona6_3_1_Capacitor[5];

/* Component tables for SumadorNeurona6_3_2 */
extern const an_6_apiCapacitor an_6_FPAA6_3_SumadorNeurona6_3_2_Capacitor[5];

/* Component tables for GainHold6_4_1 */
extern const an_6_apiCapacitor an_6_FPAA6_4_GainHold6_4_1_Capacitor[2];

/* Component tables for GainHold6_4_2 */
extern const an_6_apiCapacitor an_6_FPAA6_4_GainHold6_4_2_Capacitor[2];

/* Component tables for GainHold6_4_3 */
extern const an_6_apiCapacitor an_6_FPAA6_4_GainHold6_4_3_Capacitor[2];

/* Component tables for Input6_4_1 */
extern const an_6_apiCapacitor an_6_FPAA6_4_Input6_4_1_Capacitor[3];

/* Component tables for Input6_4_2 */
extern const an_6_apiCapacitor an_6_FPAA6_4_Input6_4_2_Capacitor[3];

/* Component tables for Input6_4_3 */
extern const an_6_apiCapacitor an_6_FPAA6_4_Input6_4_3_Capacitor[3];

/* Component tables for SumadorNeurona6_4_1 */
extern const an_6_apiCapacitor an_6_FPAA6_4_SumadorNeurona6_4_1_Capacitor[5];

/* Component tables for SumadorNeurona6_4_2 */
extern const an_6_apiCapacitor an_6_FPAA6_4_SumadorNeurona6_4_2_Capacitor[5];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_6_FPAA6_1_GainHold6_1_1_Components[2];
extern void* an_6_FPAA6_1_GainHold6_1_2_Components[2];
extern void* an_6_FPAA6_1_GainHold6_1_3_Components[2];
extern void* an_6_FPAA6_1_Input6_1_1_Components[5];
extern void* an_6_FPAA6_1_Input6_1_2_Components[5];
extern void* an_6_FPAA6_1_SumadorNeurona6_1_1_Components[5];
extern void* an_6_FPAA6_1_SumadorNeurona6_1_2_Components[5];
extern void* an_6_FPAA6_1_TransferFunction6_1_1_Components[1];
extern void* an_6_FPAA6_2_GainHold6_2_1_Components[2];
extern void* an_6_FPAA6_2_GainHold6_2_2_Components[2];
extern void* an_6_FPAA6_2_GainHold6_2_3_Components[2];
extern void* an_6_FPAA6_2_Input6_2_1_Components[5];
extern void* an_6_FPAA6_2_Input6_2_2_Components[5];
extern void* an_6_FPAA6_2_Input6_2_3_Components[5];
extern void* an_6_FPAA6_2_SumadorNeurona6_2_1_Components[5];
extern void* an_6_FPAA6_2_SumadorNeurona6_2_2_Components[5];
extern void* an_6_FPAA6_3_GainHold6_3_1_Components[2];
extern void* an_6_FPAA6_3_GainHold6_3_2_Components[2];
extern void* an_6_FPAA6_3_GainHold6_3_3_Components[2];
extern void* an_6_FPAA6_3_Input6_3_1_Components[5];
extern void* an_6_FPAA6_3_Input6_3_2_Components[5];
extern void* an_6_FPAA6_3_Input6_3_3_Components[5];
extern void* an_6_FPAA6_3_SumadorNeurona6_3_1_Components[5];
extern void* an_6_FPAA6_3_SumadorNeurona6_3_2_Components[5];
extern void* an_6_FPAA6_4_GainHold6_4_1_Components[2];
extern void* an_6_FPAA6_4_GainHold6_4_2_Components[2];
extern void* an_6_FPAA6_4_GainHold6_4_3_Components[2];
extern void* an_6_FPAA6_4_Input6_4_1_Components[5];
extern void* an_6_FPAA6_4_Input6_4_2_Components[5];
extern void* an_6_FPAA6_4_Input6_4_3_Components[5];
extern void* an_6_FPAA6_4_SumadorNeurona6_4_1_Components[5];
extern void* an_6_FPAA6_4_SumadorNeurona6_4_2_Components[5];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_6_apiCAMComponentData[an_6_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_6_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_6_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_6_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_6_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_6_InitializeVortexReconfigData.  |
  |  an_6_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_6_InitializeApexReconfigData.    |
  |  an_6_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_6_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_6_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_SetVortexReconfigControlFlags(an_Chip chip, an_6_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_SetApexReconfigControlFlags(an_Chip chip, an_6_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_SetApexReconfigControlFlagsNOP(an_Chip chip, an_6_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_6_VortexControlByte an_6_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_6_ApexControlByte an_6_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_6_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_6_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_6_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_6_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_6_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_6_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_6_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_6_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_6_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_6_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 7.ad2                                            *
*  Generated: October 19, 2020:  01:03 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_7_VortexControlByte
{
   an_7_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_7_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_7_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_7_VortexControlByte_Read      = 0x10, /* Read            */
   an_7_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_7_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_7_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_7_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_7_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_7_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_7_ApexControlByte
{
   an_7_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_7_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_7_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_7_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_7_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_7_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_7_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_7_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_7_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_7_ApiReconfigState
{
   an_7_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_7_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_7_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_7_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_7_FPAA7_1                   0         /* "FPAA7_1" */
#define an_7_FPAA7_2                   1         /* "FPAA7_2" */
#define an_7_FPAA7_3                   2         /* "FPAA7_3" */
#define an_7_FPAA7_4                   3         /* "FPAA7_4" */

/* How many chips with programmable Chips there are. */             
#define an_7_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_7_apiAddress1[an_7_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_7_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_7_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_7_FPAA7_1_PrimaryConfigInfo[];
extern const an_Byte an_7_FPAA7_2_PrimaryConfigInfo[];
extern const an_Byte an_7_FPAA7_3_PrimaryConfigInfo[];
extern const an_Byte an_7_FPAA7_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_7_apiPrimaryConfigInfo an_7_apiPrimaryConfigData[an_7_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_7_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_7_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_7_ApiReconfigState flags; /* Internal state */
} an_7_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_7_apiReconfigInfo an_7_FPAA7_1_ReconfigInfo; /* FPAA7_1 */
extern an_7_apiReconfigInfo an_7_FPAA7_2_ReconfigInfo; /* FPAA7_2 */
extern an_7_apiReconfigInfo an_7_FPAA7_3_ReconfigInfo; /* FPAA7_3 */
extern an_7_apiReconfigInfo an_7_FPAA7_4_ReconfigInfo; /* FPAA7_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_7_apiReconfigInfo* an_7_apiReconfigData[an_7_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_7_FPAA7_1_ReconfigBuffer[64];  /* FPAA7_1 */
extern an_Byte an_7_FPAA7_2_ReconfigBuffer[64];  /* FPAA7_2 */
extern an_Byte an_7_FPAA7_3_ReconfigBuffer[64];  /* FPAA7_3 */
extern an_Byte an_7_FPAA7_4_ReconfigBuffer[64];  /* FPAA7_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_7_apiReconfigBuffer[an_7_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_7_FPAA7_1_GainHold7_1_1     0         /* "GainHold7_1_1" */
#define an_7_FPAA7_1_GainHold7_1_2     1         /* "GainHold7_1_2" */
#define an_7_FPAA7_1_GainHold7_1_3     2         /* "GainHold7_1_3" */
#define an_7_FPAA7_1_Input7_1_1        3         /* "Input7_1_1" */
#define an_7_FPAA7_1_Input7_1_2        4         /* "Input7_1_2" */
#define an_7_FPAA7_1_Input7_1_3        5         /* "Input7_1_3" */
#define an_7_FPAA7_1_SumadorNeurona7_1_1 6         /* "SumadorNeurona7_1_1" */
#define an_7_FPAA7_1_SumadorNeurona7_1_2 7         /* "SumadorNeurona7_1_2" */
#define an_7_FPAA7_2_GainHold7_2_1     8         /* "GainHold7_2_1" */
#define an_7_FPAA7_2_GainHold7_2_2     9         /* "GainHold7_2_2" */
#define an_7_FPAA7_2_GainHold7_2_3     10        /* "GainHold7_2_3" */
#define an_7_FPAA7_2_Input7_2_1        11        /* "Input7_2_1" */
#define an_7_FPAA7_2_Input7_2_2        12        /* "Input7_2_2" */
#define an_7_FPAA7_2_Input7_2_3        13        /* "Input7_2_3" */
#define an_7_FPAA7_2_SumadorNeurona7_2_1 14        /* "SumadorNeurona7_2_1" */
#define an_7_FPAA7_2_SumadorNeurona7_2_2 15        /* "SumadorNeurona7_2_2" */
#define an_7_FPAA7_3_GainHold7_3_1     16        /* "GainHold7_3_1" */
#define an_7_FPAA7_3_GainHold7_3_2     17        /* "GainHold7_3_2" */
#define an_7_FPAA7_3_GainHold7_3_3     18        /* "GainHold7_3_3" */
#define an_7_FPAA7_3_Input7_3_1        19        /* "Input7_3_1" */
#define an_7_FPAA7_3_Input7_3_2        20        /* "Input7_3_2" */
#define an_7_FPAA7_3_SumadorNeurona7_3_1 21        /* "SumadorNeurona7_3_1" */
#define an_7_FPAA7_3_SumadorNeurona7_3_2 22        /* "SumadorNeurona7_3_2" */
#define an_7_FPAA7_3_TransferFunction7_3_1 23        /* "TransferFunction7_3_1" */
#define an_7_FPAA7_4_GainHold7_4_1     24        /* "GainHold7_4_1" */
#define an_7_FPAA7_4_GainHold7_4_2     25        /* "GainHold7_4_2" */
#define an_7_FPAA7_4_GainHold7_4_3     26        /* "GainHold7_4_3" */
#define an_7_FPAA7_4_Input7_4_1        27        /* "Input7_4_1" */
#define an_7_FPAA7_4_Input7_4_2        28        /* "Input7_4_2" */
#define an_7_FPAA7_4_SumadorNeurona7_4_1 29        /* "SumadorNeurona7_4_1" */
#define an_7_FPAA7_4_SumadorNeurona7_4_2 30        /* "SumadorNeurona7_4_2" */
#define an_7_FPAA7_4_TransferFunction7_4_1 31        /* "TransferFunction7_4_1" */

/* How many programmable CAMs there are. */                         
#define an_7_apiCAMCount               32

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_7_apiChipFromCAM[an_7_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_7_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_7_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_7_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_7_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_7_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_7_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_7_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* Component ID's for AnadigmApex\TransferFunction */
#define an_7_AnadigmApex_TransferFunction_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_7_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_7_apiCapacitor;


/* Component tables for GainHold7_1_1 */
extern const an_7_apiCapacitor an_7_FPAA7_1_GainHold7_1_1_Capacitor[2];

/* Component tables for GainHold7_1_2 */
extern const an_7_apiCapacitor an_7_FPAA7_1_GainHold7_1_2_Capacitor[2];

/* Component tables for GainHold7_1_3 */
extern const an_7_apiCapacitor an_7_FPAA7_1_GainHold7_1_3_Capacitor[2];

/* Component tables for Input7_1_1 */
extern const an_7_apiCapacitor an_7_FPAA7_1_Input7_1_1_Capacitor[3];

/* Component tables for Input7_1_2 */
extern const an_7_apiCapacitor an_7_FPAA7_1_Input7_1_2_Capacitor[3];

/* Component tables for Input7_1_3 */
extern const an_7_apiCapacitor an_7_FPAA7_1_Input7_1_3_Capacitor[3];

/* Component tables for SumadorNeurona7_1_1 */
extern const an_7_apiCapacitor an_7_FPAA7_1_SumadorNeurona7_1_1_Capacitor[5];

/* Component tables for SumadorNeurona7_1_2 */
extern const an_7_apiCapacitor an_7_FPAA7_1_SumadorNeurona7_1_2_Capacitor[5];

/* Component tables for GainHold7_2_1 */
extern const an_7_apiCapacitor an_7_FPAA7_2_GainHold7_2_1_Capacitor[2];

/* Component tables for GainHold7_2_2 */
extern const an_7_apiCapacitor an_7_FPAA7_2_GainHold7_2_2_Capacitor[2];

/* Component tables for GainHold7_2_3 */
extern const an_7_apiCapacitor an_7_FPAA7_2_GainHold7_2_3_Capacitor[2];

/* Component tables for Input7_2_1 */
extern const an_7_apiCapacitor an_7_FPAA7_2_Input7_2_1_Capacitor[3];

/* Component tables for Input7_2_2 */
extern const an_7_apiCapacitor an_7_FPAA7_2_Input7_2_2_Capacitor[3];

/* Component tables for Input7_2_3 */
extern const an_7_apiCapacitor an_7_FPAA7_2_Input7_2_3_Capacitor[3];

/* Component tables for SumadorNeurona7_2_1 */
extern const an_7_apiCapacitor an_7_FPAA7_2_SumadorNeurona7_2_1_Capacitor[5];

/* Component tables for SumadorNeurona7_2_2 */
extern const an_7_apiCapacitor an_7_FPAA7_2_SumadorNeurona7_2_2_Capacitor[5];

/* Component tables for GainHold7_3_1 */
extern const an_7_apiCapacitor an_7_FPAA7_3_GainHold7_3_1_Capacitor[2];

/* Component tables for GainHold7_3_2 */
extern const an_7_apiCapacitor an_7_FPAA7_3_GainHold7_3_2_Capacitor[2];

/* Component tables for GainHold7_3_3 */
extern const an_7_apiCapacitor an_7_FPAA7_3_GainHold7_3_3_Capacitor[2];

/* Component tables for Input7_3_1 */
extern const an_7_apiCapacitor an_7_FPAA7_3_Input7_3_1_Capacitor[3];

/* Component tables for Input7_3_2 */
extern const an_7_apiCapacitor an_7_FPAA7_3_Input7_3_2_Capacitor[3];

/* Component tables for SumadorNeurona7_3_1 */
extern const an_7_apiCapacitor an_7_FPAA7_3_SumadorNeurona7_3_1_Capacitor[3];

/* Component tables for SumadorNeurona7_3_2 */
extern const an_7_apiCapacitor an_7_FPAA7_3_SumadorNeurona7_3_2_Capacitor[5];

/* Component tables for TransferFunction7_3_1 */
extern const an_7_apiCapacitor an_7_FPAA7_3_TransferFunction7_3_1_Capacitor[1];

/* Component tables for GainHold7_4_1 */
extern const an_7_apiCapacitor an_7_FPAA7_4_GainHold7_4_1_Capacitor[2];

/* Component tables for GainHold7_4_2 */
extern const an_7_apiCapacitor an_7_FPAA7_4_GainHold7_4_2_Capacitor[2];

/* Component tables for GainHold7_4_3 */
extern const an_7_apiCapacitor an_7_FPAA7_4_GainHold7_4_3_Capacitor[2];

/* Component tables for Input7_4_1 */
extern const an_7_apiCapacitor an_7_FPAA7_4_Input7_4_1_Capacitor[3];

/* Component tables for Input7_4_2 */
extern const an_7_apiCapacitor an_7_FPAA7_4_Input7_4_2_Capacitor[3];

/* Component tables for SumadorNeurona7_4_1 */
extern const an_7_apiCapacitor an_7_FPAA7_4_SumadorNeurona7_4_1_Capacitor[3];

/* Component tables for SumadorNeurona7_4_2 */
extern const an_7_apiCapacitor an_7_FPAA7_4_SumadorNeurona7_4_2_Capacitor[5];

/* Component tables for TransferFunction7_4_1 */
extern const an_7_apiCapacitor an_7_FPAA7_4_TransferFunction7_4_1_Capacitor[1];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_7_FPAA7_1_GainHold7_1_1_Components[2];
extern void* an_7_FPAA7_1_GainHold7_1_2_Components[2];
extern void* an_7_FPAA7_1_GainHold7_1_3_Components[2];
extern void* an_7_FPAA7_1_Input7_1_1_Components[5];
extern void* an_7_FPAA7_1_Input7_1_2_Components[5];
extern void* an_7_FPAA7_1_Input7_1_3_Components[5];
extern void* an_7_FPAA7_1_SumadorNeurona7_1_1_Components[5];
extern void* an_7_FPAA7_1_SumadorNeurona7_1_2_Components[5];
extern void* an_7_FPAA7_2_GainHold7_2_1_Components[2];
extern void* an_7_FPAA7_2_GainHold7_2_2_Components[2];
extern void* an_7_FPAA7_2_GainHold7_2_3_Components[2];
extern void* an_7_FPAA7_2_Input7_2_1_Components[5];
extern void* an_7_FPAA7_2_Input7_2_2_Components[5];
extern void* an_7_FPAA7_2_Input7_2_3_Components[5];
extern void* an_7_FPAA7_2_SumadorNeurona7_2_1_Components[5];
extern void* an_7_FPAA7_2_SumadorNeurona7_2_2_Components[5];
extern void* an_7_FPAA7_3_GainHold7_3_1_Components[2];
extern void* an_7_FPAA7_3_GainHold7_3_2_Components[2];
extern void* an_7_FPAA7_3_GainHold7_3_3_Components[2];
extern void* an_7_FPAA7_3_Input7_3_1_Components[5];
extern void* an_7_FPAA7_3_Input7_3_2_Components[5];
extern void* an_7_FPAA7_3_SumadorNeurona7_3_1_Components[5];
extern void* an_7_FPAA7_3_SumadorNeurona7_3_2_Components[5];
extern void* an_7_FPAA7_3_TransferFunction7_3_1_Components[1];
extern void* an_7_FPAA7_4_GainHold7_4_1_Components[2];
extern void* an_7_FPAA7_4_GainHold7_4_2_Components[2];
extern void* an_7_FPAA7_4_GainHold7_4_3_Components[2];
extern void* an_7_FPAA7_4_Input7_4_1_Components[5];
extern void* an_7_FPAA7_4_Input7_4_2_Components[5];
extern void* an_7_FPAA7_4_SumadorNeurona7_4_1_Components[5];
extern void* an_7_FPAA7_4_SumadorNeurona7_4_2_Components[5];
extern void* an_7_FPAA7_4_TransferFunction7_4_1_Components[1];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_7_apiCAMComponentData[an_7_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_7_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_7_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_7_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_7_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_7_InitializeVortexReconfigData.  |
  |  an_7_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_7_InitializeApexReconfigData.    |
  |  an_7_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_7_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_7_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_SetVortexReconfigControlFlags(an_Chip chip, an_7_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_SetApexReconfigControlFlags(an_Chip chip, an_7_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_SetApexReconfigControlFlagsNOP(an_Chip chip, an_7_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_7_VortexControlByte an_7_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_7_ApexControlByte an_7_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_7_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_7_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_7_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_7_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_7_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_7_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_7_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_7_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_7_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_7_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 8.ad2                                            *
*  Generated: October 22, 2020:  06:55 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_8_VortexControlByte
{
   an_8_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_8_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_8_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_8_VortexControlByte_Read      = 0x10, /* Read            */
   an_8_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_8_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_8_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_8_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_8_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_8_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_8_ApexControlByte
{
   an_8_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_8_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_8_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_8_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_8_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_8_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_8_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_8_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_8_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_8_ApiReconfigState
{
   an_8_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_8_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_8_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_8_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_8_FPAA8_1                   0         /* "FPAA8_1" */
#define an_8_FPAA8_2                   1         /* "FPAA8_2" */
#define an_8_FPAA8_3                   2         /* "FPAA8_3" */
#define an_8_FPAA8_4                   3         /* "FPAA8_4" */

/* How many chips with programmable Chips there are. */             
#define an_8_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_8_apiAddress1[an_8_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_8_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_8_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_8_FPAA8_1_PrimaryConfigInfo[];
extern const an_Byte an_8_FPAA8_2_PrimaryConfigInfo[];
extern const an_Byte an_8_FPAA8_3_PrimaryConfigInfo[];
extern const an_Byte an_8_FPAA8_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_8_apiPrimaryConfigInfo an_8_apiPrimaryConfigData[an_8_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_8_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_8_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_8_ApiReconfigState flags; /* Internal state */
} an_8_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_8_apiReconfigInfo an_8_FPAA8_1_ReconfigInfo; /* FPAA8_1 */
extern an_8_apiReconfigInfo an_8_FPAA8_2_ReconfigInfo; /* FPAA8_2 */
extern an_8_apiReconfigInfo an_8_FPAA8_3_ReconfigInfo; /* FPAA8_3 */
extern an_8_apiReconfigInfo an_8_FPAA8_4_ReconfigInfo; /* FPAA8_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_8_apiReconfigInfo* an_8_apiReconfigData[an_8_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_8_FPAA8_1_ReconfigBuffer[64];  /* FPAA8_1 */
extern an_Byte an_8_FPAA8_2_ReconfigBuffer[64];  /* FPAA8_2 */
extern an_Byte an_8_FPAA8_3_ReconfigBuffer[64];  /* FPAA8_3 */
extern an_Byte an_8_FPAA8_4_ReconfigBuffer[64];  /* FPAA8_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_8_apiReconfigBuffer[an_8_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_8_FPAA8_1_SumadorNeurona8_1_1 0         /* "SumadorNeurona8_1_1" */
#define an_8_FPAA8_1_SumadorNeurona8_1_2 1         /* "SumadorNeurona8_1_2" */
#define an_8_FPAA8_2_GainHold8_2_1     2         /* "GainHold8_2_1" */
#define an_8_FPAA8_2_SumadorNeurona8_2_1 3         /* "SumadorNeurona8_2_1" */
#define an_8_FPAA8_2_SumadorNeurona8_2_2 4         /* "SumadorNeurona8_2_2" */
#define an_8_FPAA8_2_TransferFunction8_2_1 5         /* "TransferFunction8_2_1" */
#define an_8_FPAA8_3_GainHold8_3_1     6         /* "GainHold8_3_1" */
#define an_8_FPAA8_3_SumadorNeurona8_3_1 7         /* "SumadorNeurona8_3_1" */
#define an_8_FPAA8_3_SumadorNeurona8_3_2 8         /* "SumadorNeurona8_3_2" */
#define an_8_FPAA8_3_TransferFunction8_3_1 9         /* "TransferFunction8_3_1" */
#define an_8_FPAA8_4_SumadorNeurona8_4_1 10        /* "SumadorNeurona8_4_1" */
#define an_8_FPAA8_4_SumadorNeurona8_4_2 11        /* "SumadorNeurona8_4_2" */

/* How many programmable CAMs there are. */                         
#define an_8_apiCAMCount               12

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_8_apiChipFromCAM[an_8_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_8_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_8_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_8_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_8_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_8_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_8_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_8_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* Component ID's for AnadigmApex\TransferFunction */
#define an_8_AnadigmApex_TransferFunction_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_8_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_8_apiCapacitor;


/* Component tables for SumadorNeurona8_1_1 */
extern const an_8_apiCapacitor an_8_FPAA8_1_SumadorNeurona8_1_1_Capacitor[5];

/* Component tables for SumadorNeurona8_1_2 */
extern const an_8_apiCapacitor an_8_FPAA8_1_SumadorNeurona8_1_2_Capacitor[5];

/* Component tables for GainHold8_2_1 */
extern const an_8_apiCapacitor an_8_FPAA8_2_GainHold8_2_1_Capacitor[2];

/* Component tables for SumadorNeurona8_2_1 */
extern const an_8_apiCapacitor an_8_FPAA8_2_SumadorNeurona8_2_1_Capacitor[5];

/* Component tables for SumadorNeurona8_2_2 */
extern const an_8_apiCapacitor an_8_FPAA8_2_SumadorNeurona8_2_2_Capacitor[4];

/* Component tables for TransferFunction8_2_1 */
extern const an_8_apiCapacitor an_8_FPAA8_2_TransferFunction8_2_1_Capacitor[1];

/* Component tables for GainHold8_3_1 */
extern const an_8_apiCapacitor an_8_FPAA8_3_GainHold8_3_1_Capacitor[2];

/* Component tables for SumadorNeurona8_3_1 */
extern const an_8_apiCapacitor an_8_FPAA8_3_SumadorNeurona8_3_1_Capacitor[4];

/* Component tables for SumadorNeurona8_3_2 */
extern const an_8_apiCapacitor an_8_FPAA8_3_SumadorNeurona8_3_2_Capacitor[3];

/* Component tables for TransferFunction8_3_1 */
extern const an_8_apiCapacitor an_8_FPAA8_3_TransferFunction8_3_1_Capacitor[1];

/* Component tables for SumadorNeurona8_4_1 */
extern const an_8_apiCapacitor an_8_FPAA8_4_SumadorNeurona8_4_1_Capacitor[5];

/* Component tables for SumadorNeurona8_4_2 */
extern const an_8_apiCapacitor an_8_FPAA8_4_SumadorNeurona8_4_2_Capacitor[5];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_8_FPAA8_1_SumadorNeurona8_1_1_Components[5];
extern void* an_8_FPAA8_1_SumadorNeurona8_1_2_Components[5];
extern void* an_8_FPAA8_2_GainHold8_2_1_Components[2];
extern void* an_8_FPAA8_2_SumadorNeurona8_2_1_Components[5];
extern void* an_8_FPAA8_2_SumadorNeurona8_2_2_Components[5];
extern void* an_8_FPAA8_2_TransferFunction8_2_1_Components[1];
extern void* an_8_FPAA8_3_GainHold8_3_1_Components[2];
extern void* an_8_FPAA8_3_SumadorNeurona8_3_1_Components[5];
extern void* an_8_FPAA8_3_SumadorNeurona8_3_2_Components[5];
extern void* an_8_FPAA8_3_TransferFunction8_3_1_Components[1];
extern void* an_8_FPAA8_4_SumadorNeurona8_4_1_Components[5];
extern void* an_8_FPAA8_4_SumadorNeurona8_4_2_Components[5];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_8_apiCAMComponentData[an_8_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_8_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_8_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_8_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_8_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_8_InitializeVortexReconfigData.  |
  |  an_8_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_8_InitializeApexReconfigData.    |
  |  an_8_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_8_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_8_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_SetVortexReconfigControlFlags(an_Chip chip, an_8_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_SetApexReconfigControlFlags(an_Chip chip, an_8_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_SetApexReconfigControlFlagsNOP(an_Chip chip, an_8_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_8_VortexControlByte an_8_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_8_ApexControlByte an_8_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_8_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_8_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_8_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_8_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_8_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_8_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_8_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_8_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_8_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_8_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 9.ad2                                            *
*  Generated: October 22, 2020:  06:55 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_9_VortexControlByte
{
   an_9_VortexControlByte_SAFD      = 0x80, /* SAFD            */
   an_9_VortexControlByte_ResetAll  = 0x40, /* ResetAll        */
   an_9_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_9_VortexControlByte_Read      = 0x10, /* Read            */
   an_9_VortexControlByte_SReset    = 0x08, /* SReset          */
   an_9_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_9_VortexControlByte_TESTCTRL  = 0x02, /* TESTCTRL        */
   an_9_VortexControlByte_Pullups   = 0x01, /* Pullups         */
   an_9_VortexControlByte_PUs_Ex    = 0x05  /* PUs_Ex          */
} an_9_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_9_ApexControlByte
{
   an_9_ApexControlByte_EndExecute  = 0x80, /* EndExecute      */
   an_9_ApexControlByte_Pullups     = 0x40, /* Pullups         */
   an_9_ApexControlByte_ResetAll    = 0x20, /* ResetAll        */
   an_9_ApexControlByte_SAFD        = 0x10, /* SAFD            */
   an_9_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_9_ApexControlByte_SReset      = 0x07, /* SReset          */
   an_9_ApexControlByte_PUs_UpClks  = 0x41, /* PUs_UpClks      */
   an_9_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_9_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_9_ApiReconfigState
{
   an_9_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_9_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_9_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_9_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_9_FPAA9_1                   0         /* "FPAA9_1" */
#define an_9_FPAA9_2                   1         /* "FPAA9_2" */
#define an_9_FPAA9_3                   2         /* "FPAA9_3" */
#define an_9_FPAA9_4                   3         /* "FPAA9_4" */

/* How many chips with programmable Chips there are. */             
#define an_9_apiChipCount              4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_9_apiAddress1[an_9_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_9_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_9_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_9_FPAA9_1_PrimaryConfigInfo[];
extern const an_Byte an_9_FPAA9_2_PrimaryConfigInfo[];
extern const an_Byte an_9_FPAA9_3_PrimaryConfigInfo[];
extern const an_Byte an_9_FPAA9_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_9_apiPrimaryConfigInfo an_9_apiPrimaryConfigData[an_9_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_9_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_9_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_9_ApiReconfigState flags; /* Internal state */
} an_9_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_9_apiReconfigInfo an_9_FPAA9_1_ReconfigInfo; /* FPAA9_1 */
extern an_9_apiReconfigInfo an_9_FPAA9_2_ReconfigInfo; /* FPAA9_2 */
extern an_9_apiReconfigInfo an_9_FPAA9_3_ReconfigInfo; /* FPAA9_3 */
extern an_9_apiReconfigInfo an_9_FPAA9_4_ReconfigInfo; /* FPAA9_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_9_apiReconfigInfo* an_9_apiReconfigData[an_9_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_9_FPAA9_1_ReconfigBuffer[64];  /* FPAA9_1 */
extern an_Byte an_9_FPAA9_2_ReconfigBuffer[64];  /* FPAA9_2 */
extern an_Byte an_9_FPAA9_3_ReconfigBuffer[64];  /* FPAA9_3 */
extern an_Byte an_9_FPAA9_4_ReconfigBuffer[64];  /* FPAA9_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_9_apiReconfigBuffer[an_9_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_9_FPAA9_1_GainHold9_1_1     0         /* "GainHold9_1_1" */
#define an_9_FPAA9_1_SumadorNeurona9_1_1 1         /* "SumadorNeurona9_1_1" */
#define an_9_FPAA9_1_SumadorNeurona9_1_2 2         /* "SumadorNeurona9_1_2" */
#define an_9_FPAA9_1_TransferFunction9_1_1 3         /* "TransferFunction9_1_1" */
#define an_9_FPAA9_2_GainHold9_2_1     4         /* "GainHold9_2_1" */
#define an_9_FPAA9_2_SumadorNeurona9_2_1 5         /* "SumadorNeurona9_2_1" */
#define an_9_FPAA9_2_SumadorNeurona9_2_2 6         /* "SumadorNeurona9_2_2" */
#define an_9_FPAA9_2_TransferFunction9_2_1 7         /* "TransferFunction9_2_1" */
#define an_9_FPAA9_3_SumadorNeurona9_3_1 8         /* "SumadorNeurona9_3_1" */
#define an_9_FPAA9_3_SumadorNeurona9_3_2 9         /* "SumadorNeurona9_3_2" */
#define an_9_FPAA9_4_GainHold9_4_1     10        /* "GainHold9_4_1" */
#define an_9_FPAA9_4_SumadorNeurona9_4_1 11        /* "SumadorNeurona9_4_1" */
#define an_9_FPAA9_4_SumadorNeurona9_4_2 12        /* "SumadorNeurona9_4_2" */
#define an_9_FPAA9_4_TransferFunction9_4_1 13        /* "TransferFunction9_4_1" */

/* How many programmable CAMs there are. */                         
#define an_9_apiCAMCount               14

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_9_apiChipFromCAM[an_9_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_9_AnadigmApex_GainHold_Cin    0          /* Cin */
#define an_9_AnadigmApex_GainHold_Cout   1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_9_AnadigmApex_SumDiff_CinA    0          /* CinA */
#define an_9_AnadigmApex_SumDiff_CinB    1          /* CinB */
#define an_9_AnadigmApex_SumDiff_CinC    2          /* CinC */
#define an_9_AnadigmApex_SumDiff_CinD    3          /* CinD */
#define an_9_AnadigmApex_SumDiff_Cout    4          /* Cout */

/* Component ID's for AnadigmApex\TransferFunction */
#define an_9_AnadigmApex_TransferFunction_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_9_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_9_apiCapacitor;


/* Component tables for GainHold9_1_1 */
extern const an_9_apiCapacitor an_9_FPAA9_1_GainHold9_1_1_Capacitor[2];

/* Component tables for SumadorNeurona9_1_1 */
extern const an_9_apiCapacitor an_9_FPAA9_1_SumadorNeurona9_1_1_Capacitor[5];

/* Component tables for SumadorNeurona9_1_2 */
extern const an_9_apiCapacitor an_9_FPAA9_1_SumadorNeurona9_1_2_Capacitor[4];

/* Component tables for TransferFunction9_1_1 */
extern const an_9_apiCapacitor an_9_FPAA9_1_TransferFunction9_1_1_Capacitor[1];

/* Component tables for GainHold9_2_1 */
extern const an_9_apiCapacitor an_9_FPAA9_2_GainHold9_2_1_Capacitor[2];

/* Component tables for SumadorNeurona9_2_1 */
extern const an_9_apiCapacitor an_9_FPAA9_2_SumadorNeurona9_2_1_Capacitor[4];

/* Component tables for SumadorNeurona9_2_2 */
extern const an_9_apiCapacitor an_9_FPAA9_2_SumadorNeurona9_2_2_Capacitor[3];

/* Component tables for TransferFunction9_2_1 */
extern const an_9_apiCapacitor an_9_FPAA9_2_TransferFunction9_2_1_Capacitor[1];

/* Component tables for SumadorNeurona9_3_1 */
extern const an_9_apiCapacitor an_9_FPAA9_3_SumadorNeurona9_3_1_Capacitor[5];

/* Component tables for SumadorNeurona9_3_2 */
extern const an_9_apiCapacitor an_9_FPAA9_3_SumadorNeurona9_3_2_Capacitor[5];

/* Component tables for GainHold9_4_1 */
extern const an_9_apiCapacitor an_9_FPAA9_4_GainHold9_4_1_Capacitor[2];

/* Component tables for SumadorNeurona9_4_1 */
extern const an_9_apiCapacitor an_9_FPAA9_4_SumadorNeurona9_4_1_Capacitor[5];

/* Component tables for SumadorNeurona9_4_2 */
extern const an_9_apiCapacitor an_9_FPAA9_4_SumadorNeurona9_4_2_Capacitor[4];

/* Component tables for TransferFunction9_4_1 */
extern const an_9_apiCapacitor an_9_FPAA9_4_TransferFunction9_4_1_Capacitor[1];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_9_FPAA9_1_GainHold9_1_1_Components[2];
extern void* an_9_FPAA9_1_SumadorNeurona9_1_1_Components[5];
extern void* an_9_FPAA9_1_SumadorNeurona9_1_2_Components[5];
extern void* an_9_FPAA9_1_TransferFunction9_1_1_Components[1];
extern void* an_9_FPAA9_2_GainHold9_2_1_Components[2];
extern void* an_9_FPAA9_2_SumadorNeurona9_2_1_Components[5];
extern void* an_9_FPAA9_2_SumadorNeurona9_2_2_Components[5];
extern void* an_9_FPAA9_2_TransferFunction9_2_1_Components[1];
extern void* an_9_FPAA9_3_SumadorNeurona9_3_1_Components[5];
extern void* an_9_FPAA9_3_SumadorNeurona9_3_2_Components[5];
extern void* an_9_FPAA9_4_GainHold9_4_1_Components[2];
extern void* an_9_FPAA9_4_SumadorNeurona9_4_1_Components[5];
extern void* an_9_FPAA9_4_SumadorNeurona9_4_2_Components[5];
extern void* an_9_FPAA9_4_TransferFunction9_4_1_Components[1];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_9_apiCAMComponentData[an_9_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_9_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_9_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_9_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_9_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_InitializeVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_InitializeApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_ClearVortexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_ClearApexReconfigData(an_Chip chip);               
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_ShutdownVortexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_9_InitializeVortexReconfigData.  |
  |  an_9_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_ShutdownApexReconfigData(an_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_9_InitializeApexReconfigData.    |
  |  an_9_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_9_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_9_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_SetVortexReconfigControlFlags(an_Chip chip, an_9_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_SetApexReconfigControlFlags(an_Chip chip, an_9_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_SetApexReconfigControlFlagsNOP(an_Chip chip, an_9_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_9_VortexControlByte an_9_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_9_ApexControlByte an_9_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_9_AdjustCap(double dValue);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_9_FixedAdjustCap(an_Fixed fValue);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_9_FloatToFixed(float fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_9_IntToFixed(int value);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_9_FixedToInt(an_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_9_FixedToFloat(an_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_9_FixedAbs(an_Fixed fValue);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_9_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_9_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_9_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   Placa 10.ad2                                           *
*  Generated: October 22, 2020:  06:56 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Enumerated type representing VortexControlByte */
typedef enum an_10_VortexControlByte
{
   an_10_VortexControlByte_SAFD     = 0x80, /* SAFD            */
   an_10_VortexControlByte_ResetAll = 0x40, /* ResetAll        */
   an_10_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_10_VortexControlByte_Read     = 0x10, /* Read            */
   an_10_VortexControlByte_SReset   = 0x08, /* SReset          */
   an_10_VortexControlByte_EndExecute = 0x04, /* EndExecute      */
   an_10_VortexControlByte_TESTCTRL = 0x02, /* TESTCTRL        */
   an_10_VortexControlByte_Pullups  = 0x01, /* Pullups         */
   an_10_VortexControlByte_PUs_Ex   = 0x05  /* PUs_Ex          */
} an_10_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_10_ApexControlByte
{
   an_10_ApexControlByte_EndExecute = 0x80, /* EndExecute      */
   an_10_ApexControlByte_Pullups    = 0x40, /* Pullups         */
   an_10_ApexControlByte_ResetAll   = 0x20, /* ResetAll        */
   an_10_ApexControlByte_SAFD       = 0x10, /* SAFD            */
   an_10_ApexControlByte_UpdateClocks = 0x01, /* UpdateClocks    */
   an_10_ApexControlByte_SReset     = 0x07, /* SReset          */
   an_10_ApexControlByte_PUs_UpClks = 0x41, /* PUs_UpClks      */
   an_10_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_10_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_10_ApiReconfigState
{
   an_10_ApiReconfigState_Initialized = 0x01, /* Initialized     */
   an_10_ApiReconfigState_CRCEnabled = 0x02  /* CRCEnabled      */
} an_10_ApiReconfigState;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_10_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_10_FPAA10_1                 0         /* "FPAA10_1" */
#define an_10_FPAA10_2                 1         /* "FPAA10_2" */
#define an_10_FPAA10_3                 2         /* "FPAA10_3" */
#define an_10_FPAA10_4                 3         /* "FPAA10_4" */

/* How many chips with programmable Chips there are. */             
#define an_10_apiChipCount             4

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_10_apiAddress1[an_10_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_10_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_10_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_10_FPAA10_1_PrimaryConfigInfo[];
extern const an_Byte an_10_FPAA10_2_PrimaryConfigInfo[];
extern const an_Byte an_10_FPAA10_3_PrimaryConfigInfo[];
extern const an_Byte an_10_FPAA10_4_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_10_apiPrimaryConfigInfo an_10_apiPrimaryConfigData[an_10_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_10_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_10_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_10_ApiReconfigState flags; /* Internal state */
} an_10_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_10_apiReconfigInfo an_10_FPAA10_1_ReconfigInfo; /* FPAA10_1 */
extern an_10_apiReconfigInfo an_10_FPAA10_2_ReconfigInfo; /* FPAA10_2 */
extern an_10_apiReconfigInfo an_10_FPAA10_3_ReconfigInfo; /* FPAA10_3 */
extern an_10_apiReconfigInfo an_10_FPAA10_4_ReconfigInfo; /* FPAA10_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_10_apiReconfigInfo* an_10_apiReconfigData[an_10_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_10_FPAA10_1_ReconfigBuffer[64]; /* FPAA10_1 */
extern an_Byte an_10_FPAA10_2_ReconfigBuffer[64]; /* FPAA10_2 */
extern an_Byte an_10_FPAA10_3_ReconfigBuffer[64]; /* FPAA10_3 */
extern an_Byte an_10_FPAA10_4_ReconfigBuffer[64]; /* FPAA10_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_10_apiReconfigBuffer[an_10_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_10_FPAA10_1_GainHold10_1_1  0         /* "GainHold10_1_1" */
#define an_10_FPAA10_1_SumadorNeurona10_1_1 1         /* "SumadorNeurona10_1_1" */
#define an_10_FPAA10_1_SumadorNeurona10_1_2 2         /* "SumadorNeurona10_1_2" */
#define an_10_FPAA10_1_TransferFunction10_1_1 3         /* "TransferFunction10_1_1" */
#define an_10_FPAA10_2_SumadorNeurona10_2_1 4         /* "SumadorNeurona10_2_1" */
#define an_10_FPAA10_2_SumadorNeurona10_2_2 5         /* "SumadorNeurona10_2_2" */
#define an_10_FPAA10_2_SumadorNeurona10_2_3 6         /* "SumadorNeurona10_2_3" */
#define an_10_FPAA10_2_SumadorNeurona10_2_4 7         /* "SumadorNeurona10_2_4" */
#define an_10_FPAA10_3_SumadorNeurona0_3_11 8         /* "SumadorNeurona0_3_11" */
#define an_10_FPAA10_3_SumadorNeurona10_3_1 9         /* "SumadorNeurona10_3_1" */
#define an_10_FPAA10_4_SumadorNeurona10_4_1 10        /* "SumadorNeurona10_4_1" */
#define an_10_FPAA10_4_SumadorNeurona10_4_2 11        /* "SumadorNeurona10_4_2" */

/* How many programmable CAMs there are. */                         
#define an_10_apiCAMCount              12

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_10_apiChipFromCAM[an_10_apiCAMCount];

/* Component ID's for AnadigmApex\GainHold */
#define an_10_AnadigmApex_GainHold_Cin   0          /* Cin */
#define an_10_AnadigmApex_GainHold_Cout  1          /* Cout */

/* Component ID's for AnadigmApex\SumDiff */
#define an_10_AnadigmApex_SumDiff_CinA   0          /* CinA */
#define an_10_AnadigmApex_SumDiff_CinB   1          /* CinB */
#define an_10_AnadigmApex_SumDiff_CinC   2          /* CinC */
#define an_10_AnadigmApex_SumDiff_CinD   3          /* CinD */
#define an_10_AnadigmApex_SumDiff_Cout   4          /* Cout */

/* Component ID's for AnadigmApex\TransferFunction */
#define an_10_AnadigmApex_TransferFunction_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_10_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_10_apiCapacitor;


/* Component tables for GainHold10_1_1 */
extern const an_10_apiCapacitor an_10_FPAA10_1_GainHold10_1_1_Capacitor[2];

/* Component tables for SumadorNeurona10_1_1 */
extern const an_10_apiCapacitor an_10_FPAA10_1_SumadorNeurona10_1_1_Capacitor[4];

/* Component tables for SumadorNeurona10_1_2 */
extern const an_10_apiCapacitor an_10_FPAA10_1_SumadorNeurona10_1_2_Capacitor[3];

/* Component tables for TransferFunction10_1_1 */
extern const an_10_apiCapacitor an_10_FPAA10_1_TransferFunction10_1_1_Capacitor[1];

/* Component tables for SumadorNeurona10_2_1 */
extern const an_10_apiCapacitor an_10_FPAA10_2_SumadorNeurona10_2_1_Capacitor[4];

/* Component tables for SumadorNeurona10_2_2 */
extern const an_10_apiCapacitor an_10_FPAA10_2_SumadorNeurona10_2_2_Capacitor[4];

/* Component tables for SumadorNeurona10_2_3 */
extern const an_10_apiCapacitor an_10_FPAA10_2_SumadorNeurona10_2_3_Capacitor[4];

/* Component tables for SumadorNeurona10_2_4 */
extern const an_10_apiCapacitor an_10_FPAA10_2_SumadorNeurona10_2_4_Capacitor[4];

/* Component tables for SumadorNeurona0_3_11 */
extern const an_10_apiCapacitor an_10_FPAA10_3_SumadorNeurona0_3_11_Capacitor[5];

/* Component tables for SumadorNeurona10_3_1 */
extern const an_10_apiCapacitor an_10_FPAA10_3_SumadorNeurona10_3_1_Capacitor[5];

/* Component tables for SumadorNeurona10_4_1 */
extern const an_10_apiCapacitor an_10_FPAA10_4_SumadorNeurona10_4_1_Capacitor[5];

/* Component tables for SumadorNeurona10_4_2 */
extern const an_10_apiCapacitor an_10_FPAA10_4_SumadorNeurona10_4_2_Capacitor[5];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_10_FPAA10_1_GainHold10_1_1_Components[2];
extern void* an_10_FPAA10_1_SumadorNeurona10_1_1_Components[5];
extern void* an_10_FPAA10_1_SumadorNeurona10_1_2_Components[5];
extern void* an_10_FPAA10_1_TransferFunction10_1_1_Components[1];
extern void* an_10_FPAA10_2_SumadorNeurona10_2_1_Components[5];
extern void* an_10_FPAA10_2_SumadorNeurona10_2_2_Components[5];
extern void* an_10_FPAA10_2_SumadorNeurona10_2_3_Components[5];
extern void* an_10_FPAA10_2_SumadorNeurona10_2_4_Components[5];
extern void* an_10_FPAA10_3_SumadorNeurona0_3_11_Components[5];
extern void* an_10_FPAA10_3_SumadorNeurona10_3_1_Components[5];
extern void* an_10_FPAA10_4_SumadorNeurona10_4_1_Components[5];
extern void* an_10_FPAA10_4_SumadorNeurona10_4_2_Components[5];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_10_apiCAMComponentData[an_10_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_10_GetPrimaryConfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_10_GetResetData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_10_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_10_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_InitializeVortexReconfigData(an_Chip chip);      
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_InitializeApexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_ClearVortexReconfigData(an_Chip chip);           
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_ClearApexReconfigData(an_Chip chip);             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_ShutdownVortexReconfigData(an_Chip chip);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_10_InitializeVortexReconfigData. |
  |  an_10_InitializeVortexReconfigData must be called again prior |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_ShutdownApexReconfigData(an_Chip chip);          
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_10_InitializeApexReconfigData.   |
  |  an_10_InitializeApexReconfigData must be called again prior   |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_10_GetVortexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_10_GetApexReconfigData(an_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_SetVortexReconfigControlFlags(an_Chip chip, an_10_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_SetApexReconfigControlFlags(an_Chip chip, an_10_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_SetApexReconfigControlFlagsNOP(an_Chip chip, an_10_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_10_VortexControlByte an_10_GetVortexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_10_ApexControlByte an_10_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_10_AdjustCap(double dValue);                     
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Byte an_10_FixedAdjustCap(an_Fixed fValue);           
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_10_FloatToFixed(float fValue);                  
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_10_IntToFixed(int value);                       
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int an_10_FixedToInt(an_Fixed fValue);                      
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float an_10_FixedToFloat(an_Fixed fValue);                  
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_10_FixedAbs(an_Fixed fValue);                
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_10_FixedMultiply(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of multiplying two           |
  |  fixed-point numbers. Input fLeft is the left-side of the      |
  |  implied multiplication sign. It is the first value to         |
  |  multiply. Input fRight is the right-side of the implied       |
  |  multiplication sign. It is the second value to multiply. The  |
  |  return is the fixed-point result of the multiply. The         |
  |  fixed-point numbers are assumed to be in 16:16 form, although |
  |  the routine might work for any other fixed-point setup, as    |
  |  long as the two multiplicants are identical in their          |
  |  fixed-point setup. But this has not been tested.              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Fixed an_10_FixedDivide(an_Fixed fLeft, an_Fixed fRight); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_10_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif /* APICODE_H */
