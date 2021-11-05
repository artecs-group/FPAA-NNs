#include "ApiCode.h"

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
*  Circuit:   Placa 1.ad2                                            *
*  Generated: October 16, 2020:  12:35 PM                            *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_1_apiAddress1[an_1_apiChipCount] =
{
   0x01,                /* an_1_FPAA1_1: 00000001 */
   0x02,                /* an_1_FPAA1_2: 00000010 */
   0x03,                /* an_1_FPAA1_3: 00000011 */
   0x04                 /* an_1_FPAA1_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA1_1. */
const an_Byte an_1_FPAA1_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x21,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x8C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x02, /* Bank address:  2 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x5E,  0x03,  0x00,  0x5E,  0x03,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x03, /* Bank address:  3 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0xFF,  0xFF,  0xFF,  0xAA,  0xF3,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x04, /* Bank address:  4 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x6A,  0xBB,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x90,  0xD5,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x01,  0x00,  0x00,  
   0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x51,  0x12,  0x0A,  0xF4,  0xAC,  0x16,  0x40,  0xA7,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x01,  0x13,  0x00,  0x10,  0x01,  0x18,  0x00,  0x10,  
   0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x1A,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0xC1,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0xA1,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA1_2. */
const an_Byte an_1_FPAA1_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x21,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5A,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x6B,  0xC8,  0x76,  0xA7,  0x6B,  0x9A,  0xF5,  0xE7,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x19,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0xA1,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0xA6,  0xF0,  0xF9,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x55,  0x26,  0x46,  0xD4,  0x55,  0x6E,  0xA4,  0xA5,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x17,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0xC1,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA1_3. */
const an_Byte an_1_FPAA1_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x21,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xAE,  0xFF,  0xA4,  0x1E,  0xAE,  0xA0,  0xE5,  0xF0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x1B,  0x00,  0x20,  
   0x01,  0x91,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1A,  0x00,  0x20,  0x01,  0xE1,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x90,  0xDD,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0xB8,  0x33,  0x30,  0x58,  0xB8,  0x98,  0xE7,  0xE4,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xD1,  0x00,  0x20,  
   0x01,  0x71,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA1_4. */
const an_Byte an_1_FPAA1_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x21,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5A,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x46,  0x13,  0xBD,  0x2B,  0x46,  0x94,  0xE2,  0xDE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x1B,  0x00,  0x20,  
   0x01,  0x19,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0xA1,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x76,  0xAF,  0xB1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0xCF,  0xAC,  0xDC,  0xB7,  0xCF,  0x96,  0xDA,  0xE1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0xD1,  0x00,  0x20,  
   0x01,  0x17,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_1_apiPrimaryConfigInfo an_1_apiPrimaryConfigData[an_1_apiChipCount] =
{
   /* FPAA1_1 */
   {
      an_1_FPAA1_1_PrimaryConfigInfo, /* data */
      239,                          /* length */
   },

   /* FPAA1_2 */
   {
      an_1_FPAA1_2_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA1_3 */
   {
      an_1_FPAA1_3_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA1_4 */
   {
      an_1_FPAA1_4_PrimaryConfigInfo, /* data */
      261                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_1_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA1_1 */
an_1_apiReconfigInfo an_1_FPAA1_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA1_2 */
an_1_apiReconfigInfo an_1_FPAA1_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA1_3 */
an_1_apiReconfigInfo an_1_FPAA1_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA1_4 */
an_1_apiReconfigInfo an_1_FPAA1_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_1_apiReconfigInfo* an_1_apiReconfigData[an_1_apiChipCount] =
{
   &an_1_FPAA1_1_ReconfigInfo,    /* FPAA1_1 */
   &an_1_FPAA1_2_ReconfigInfo,    /* FPAA1_2 */
   &an_1_FPAA1_3_ReconfigInfo,    /* FPAA1_3 */
   &an_1_FPAA1_4_ReconfigInfo     /* FPAA1_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_1_FPAA1_1_ReconfigBuffer[64] = {0};   /* FPAA1_1 */
an_Byte an_1_FPAA1_2_ReconfigBuffer[64] = {0};   /* FPAA1_2 */
an_Byte an_1_FPAA1_3_ReconfigBuffer[64] = {0};   /* FPAA1_3 */
an_Byte an_1_FPAA1_4_ReconfigBuffer[64] = {0};   /* FPAA1_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_1_apiReconfigBuffer[an_1_apiChipCount] =
{
   an_1_FPAA1_1_ReconfigBuffer,   /* FPAA1_1 */
   an_1_FPAA1_2_ReconfigBuffer,   /* FPAA1_2 */
   an_1_FPAA1_3_ReconfigBuffer,   /* FPAA1_3 */
   an_1_FPAA1_4_ReconfigBuffer    /* FPAA1_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_1_apiChipFromCAM[an_1_apiCAMCount] =
{
   an_1_FPAA1_1,        /* "an_1_FPAA1_1_GainHold1_1_1" in chip "FPAA1_1" */
   an_1_FPAA1_1,        /* "an_1_FPAA1_1_GainHold1_1_2" in chip "FPAA1_1" */
   an_1_FPAA1_1,        /* "an_1_FPAA1_1_GainHold1_1_3" in chip "FPAA1_1" */
   an_1_FPAA1_1,        /* "an_1_FPAA1_1_Input1_1_1" in chip "FPAA1_1" */
   an_1_FPAA1_1,        /* "an_1_FPAA1_1_Input1_1_2" in chip "FPAA1_1" */
   an_1_FPAA1_1,        /* "an_1_FPAA1_1_Input1_1_3" in chip "FPAA1_1" */
   an_1_FPAA1_1,        /* "an_1_FPAA1_1_SumadorNeurona1_1_1" in chip "FPAA1_1" */
   an_1_FPAA1_1,        /* "an_1_FPAA1_1_SumadorNeurona1_1_2" in chip "FPAA1_1" */
   an_1_FPAA1_2,        /* "an_1_FPAA1_2_GainHold1_2_1" in chip "FPAA1_2" */
   an_1_FPAA1_2,        /* "an_1_FPAA1_2_GainHold1_2_2" in chip "FPAA1_2" */
   an_1_FPAA1_2,        /* "an_1_FPAA1_2_GainHold1_2_3" in chip "FPAA1_2" */
   an_1_FPAA1_2,        /* "an_1_FPAA1_2_Input1_2_1" in chip "FPAA1_2" */
   an_1_FPAA1_2,        /* "an_1_FPAA1_2_Input1_2_2" in chip "FPAA1_2" */
   an_1_FPAA1_2,        /* "an_1_FPAA1_2_Input1_2_3" in chip "FPAA1_2" */
   an_1_FPAA1_2,        /* "an_1_FPAA1_2_SumadorNeurona1_2_1" in chip "FPAA1_2" */
   an_1_FPAA1_2,        /* "an_1_FPAA1_2_SumadorNeurona1_2_2" in chip "FPAA1_2" */
   an_1_FPAA1_3,        /* "an_1_FPAA1_3_GainHold1_3_1" in chip "FPAA1_3" */
   an_1_FPAA1_3,        /* "an_1_FPAA1_3_GainHold1_3_2" in chip "FPAA1_3" */
   an_1_FPAA1_3,        /* "an_1_FPAA1_3_GainHold1_3_3" in chip "FPAA1_3" */
   an_1_FPAA1_3,        /* "an_1_FPAA1_3_Input1_3_1" in chip "FPAA1_3" */
   an_1_FPAA1_3,        /* "an_1_FPAA1_3_Input1_3_2" in chip "FPAA1_3" */
   an_1_FPAA1_3,        /* "an_1_FPAA1_3_Input1_3_3" in chip "FPAA1_3" */
   an_1_FPAA1_3,        /* "an_1_FPAA1_3_SumadorNeurona1_3_1" in chip "FPAA1_3" */
   an_1_FPAA1_3,        /* "an_1_FPAA1_3_SumadorNeurona1_3_2" in chip "FPAA1_3" */
   an_1_FPAA1_4,        /* "an_1_FPAA1_4_GainHold1_4_1" in chip "FPAA1_4" */
   an_1_FPAA1_4,        /* "an_1_FPAA1_4_GainHold1_4_2" in chip "FPAA1_4" */
   an_1_FPAA1_4,        /* "an_1_FPAA1_4_GainHold1_4_3" in chip "FPAA1_4" */
   an_1_FPAA1_4,        /* "an_1_FPAA1_4_Input1_4_1" in chip "FPAA1_4" */
   an_1_FPAA1_4,        /* "an_1_FPAA1_4_Input1_4_2" in chip "FPAA1_4" */
   an_1_FPAA1_4,        /* "an_1_FPAA1_4_Input1_4_3" in chip "FPAA1_4" */
   an_1_FPAA1_4,        /* "an_1_FPAA1_4_SumadorNeurona1_4_1" in chip "FPAA1_4" */
   an_1_FPAA1_4         /* "an_1_FPAA1_4_SumadorNeurona1_4_2" in chip "FPAA1_4" */
};

/* Component data table for the apiCapacitor's of GainHold1_1_1. */
extern const an_1_apiCapacitor an_1_FPAA1_1_GainHold1_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of GainHold1_1_2. */
extern const an_1_apiCapacitor an_1_FPAA1_1_GainHold1_1_2_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold1_1_3. */
extern const an_1_apiCapacitor an_1_FPAA1_1_GainHold1_1_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input1_1_1. */
extern const an_1_apiCapacitor an_1_FPAA1_1_Input1_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input1_1_2. */
extern const an_1_apiCapacitor an_1_FPAA1_1_Input1_1_2_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of Input1_1_3. */
extern const an_1_apiCapacitor an_1_FPAA1_1_Input1_1_3_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona1_1_1. */
extern const an_1_apiCapacitor an_1_FPAA1_1_SumadorNeurona1_1_1_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* CinC  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona1_1_2. */
extern const an_1_apiCapacitor an_1_FPAA1_1_SumadorNeurona1_1_2_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinB  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinC  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold1_2_1. */
extern const an_1_apiCapacitor an_1_FPAA1_2_GainHold1_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold1_2_2. */
extern const an_1_apiCapacitor an_1_FPAA1_2_GainHold1_2_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold1_2_3. */
extern const an_1_apiCapacitor an_1_FPAA1_2_GainHold1_2_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input1_2_1. */
extern const an_1_apiCapacitor an_1_FPAA1_2_Input1_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input1_2_2. */
extern const an_1_apiCapacitor an_1_FPAA1_2_Input1_2_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input1_2_3. */
extern const an_1_apiCapacitor an_1_FPAA1_2_Input1_2_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona1_2_1. */
extern const an_1_apiCapacitor an_1_FPAA1_2_SumadorNeurona1_2_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona1_2_2. */
extern const an_1_apiCapacitor an_1_FPAA1_2_SumadorNeurona1_2_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold1_3_1. */
extern const an_1_apiCapacitor an_1_FPAA1_3_GainHold1_3_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold1_3_2. */
extern const an_1_apiCapacitor an_1_FPAA1_3_GainHold1_3_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold1_3_3. */
extern const an_1_apiCapacitor an_1_FPAA1_3_GainHold1_3_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input1_3_1. */
extern const an_1_apiCapacitor an_1_FPAA1_3_Input1_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input1_3_2. */
extern const an_1_apiCapacitor an_1_FPAA1_3_Input1_3_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input1_3_3. */
extern const an_1_apiCapacitor an_1_FPAA1_3_Input1_3_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona1_3_1. */
extern const an_1_apiCapacitor an_1_FPAA1_3_SumadorNeurona1_3_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona1_3_2. */
extern const an_1_apiCapacitor an_1_FPAA1_3_SumadorNeurona1_3_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold1_4_1. */
extern const an_1_apiCapacitor an_1_FPAA1_4_GainHold1_4_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold1_4_2. */
extern const an_1_apiCapacitor an_1_FPAA1_4_GainHold1_4_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold1_4_3. */
extern const an_1_apiCapacitor an_1_FPAA1_4_GainHold1_4_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input1_4_1. */
extern const an_1_apiCapacitor an_1_FPAA1_4_Input1_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input1_4_2. */
extern const an_1_apiCapacitor an_1_FPAA1_4_Input1_4_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input1_4_3. */
extern const an_1_apiCapacitor an_1_FPAA1_4_Input1_4_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona1_4_1. */
extern const an_1_apiCapacitor an_1_FPAA1_4_SumadorNeurona1_4_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona1_4_2. */
extern const an_1_apiCapacitor an_1_FPAA1_4_SumadorNeurona1_4_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component map for GainHold1_1_1 */
void* an_1_FPAA1_1_GainHold1_1_1_Components[2] = 
{
   (void*) &an_1_FPAA1_1_GainHold1_1_1_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_1_GainHold1_1_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold1_1_2 */
void* an_1_FPAA1_1_GainHold1_1_2_Components[2] = 
{
   (void*) &an_1_FPAA1_1_GainHold1_1_2_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_1_GainHold1_1_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold1_1_3 */
void* an_1_FPAA1_1_GainHold1_1_3_Components[2] = 
{
   (void*) &an_1_FPAA1_1_GainHold1_1_3_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_1_GainHold1_1_3_Capacitor[1]  /* Cout */
};

/* Component map for Input1_1_1 */
void* an_1_FPAA1_1_Input1_1_1_Components[5] = 
{
   (void*) &an_1_FPAA1_1_Input1_1_1_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_1_Input1_1_1_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_1_Input1_1_1_Capacitor[2]  /* Cout */
};

/* Component map for Input1_1_2 */
void* an_1_FPAA1_1_Input1_1_2_Components[5] = 
{
   (void*) &an_1_FPAA1_1_Input1_1_2_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_1_Input1_1_2_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_1_Input1_1_2_Capacitor[2]  /* Cout */
};

/* Component map for Input1_1_3 */
void* an_1_FPAA1_1_Input1_1_3_Components[5] = 
{
   (void*) &an_1_FPAA1_1_Input1_1_3_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_1_Input1_1_3_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_1_Input1_1_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona1_1_1 */
void* an_1_FPAA1_1_SumadorNeurona1_1_1_Components[5] = 
{
   (void*) &an_1_FPAA1_1_SumadorNeurona1_1_1_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_1_SumadorNeurona1_1_1_Capacitor[1],  /* CinB */
   (void*) &an_1_FPAA1_1_SumadorNeurona1_1_1_Capacitor[2],  /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_1_SumadorNeurona1_1_1_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona1_1_2 */
void* an_1_FPAA1_1_SumadorNeurona1_1_2_Components[5] = 
{
   (void*) &an_1_FPAA1_1_SumadorNeurona1_1_2_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_1_SumadorNeurona1_1_2_Capacitor[1],  /* CinB */
   (void*) &an_1_FPAA1_1_SumadorNeurona1_1_2_Capacitor[2],  /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_1_SumadorNeurona1_1_2_Capacitor[3]  /* Cout */
};

/* Component map for GainHold1_2_1 */
void* an_1_FPAA1_2_GainHold1_2_1_Components[2] = 
{
   (void*) &an_1_FPAA1_2_GainHold1_2_1_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_2_GainHold1_2_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold1_2_2 */
void* an_1_FPAA1_2_GainHold1_2_2_Components[2] = 
{
   (void*) &an_1_FPAA1_2_GainHold1_2_2_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_2_GainHold1_2_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold1_2_3 */
void* an_1_FPAA1_2_GainHold1_2_3_Components[2] = 
{
   (void*) &an_1_FPAA1_2_GainHold1_2_3_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_2_GainHold1_2_3_Capacitor[1]  /* Cout */
};

/* Component map for Input1_2_1 */
void* an_1_FPAA1_2_Input1_2_1_Components[5] = 
{
   (void*) &an_1_FPAA1_2_Input1_2_1_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_2_Input1_2_1_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_2_Input1_2_1_Capacitor[2]  /* Cout */
};

/* Component map for Input1_2_2 */
void* an_1_FPAA1_2_Input1_2_2_Components[5] = 
{
   (void*) &an_1_FPAA1_2_Input1_2_2_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_2_Input1_2_2_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_2_Input1_2_2_Capacitor[2]  /* Cout */
};

/* Component map for Input1_2_3 */
void* an_1_FPAA1_2_Input1_2_3_Components[5] = 
{
   (void*) &an_1_FPAA1_2_Input1_2_3_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_2_Input1_2_3_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_2_Input1_2_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona1_2_1 */
void* an_1_FPAA1_2_SumadorNeurona1_2_1_Components[5] = 
{
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_1_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_1_Capacitor[1],  /* CinB */
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_1_Capacitor[2],  /* CinC */
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_1_Capacitor[3],  /* CinD */
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona1_2_2 */
void* an_1_FPAA1_2_SumadorNeurona1_2_2_Components[5] = 
{
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_2_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_2_Capacitor[1],  /* CinB */
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_2_Capacitor[2],  /* CinC */
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_2_Capacitor[3],  /* CinD */
   (void*) &an_1_FPAA1_2_SumadorNeurona1_2_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold1_3_1 */
void* an_1_FPAA1_3_GainHold1_3_1_Components[2] = 
{
   (void*) &an_1_FPAA1_3_GainHold1_3_1_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_3_GainHold1_3_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold1_3_2 */
void* an_1_FPAA1_3_GainHold1_3_2_Components[2] = 
{
   (void*) &an_1_FPAA1_3_GainHold1_3_2_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_3_GainHold1_3_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold1_3_3 */
void* an_1_FPAA1_3_GainHold1_3_3_Components[2] = 
{
   (void*) &an_1_FPAA1_3_GainHold1_3_3_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_3_GainHold1_3_3_Capacitor[1]  /* Cout */
};

/* Component map for Input1_3_1 */
void* an_1_FPAA1_3_Input1_3_1_Components[5] = 
{
   (void*) &an_1_FPAA1_3_Input1_3_1_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_3_Input1_3_1_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_3_Input1_3_1_Capacitor[2]  /* Cout */
};

/* Component map for Input1_3_2 */
void* an_1_FPAA1_3_Input1_3_2_Components[5] = 
{
   (void*) &an_1_FPAA1_3_Input1_3_2_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_3_Input1_3_2_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_3_Input1_3_2_Capacitor[2]  /* Cout */
};

/* Component map for Input1_3_3 */
void* an_1_FPAA1_3_Input1_3_3_Components[5] = 
{
   (void*) &an_1_FPAA1_3_Input1_3_3_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_3_Input1_3_3_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_3_Input1_3_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona1_3_1 */
void* an_1_FPAA1_3_SumadorNeurona1_3_1_Components[5] = 
{
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_1_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_1_Capacitor[1],  /* CinB */
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_1_Capacitor[2],  /* CinC */
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_1_Capacitor[3],  /* CinD */
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona1_3_2 */
void* an_1_FPAA1_3_SumadorNeurona1_3_2_Components[5] = 
{
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_2_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_2_Capacitor[1],  /* CinB */
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_2_Capacitor[2],  /* CinC */
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_2_Capacitor[3],  /* CinD */
   (void*) &an_1_FPAA1_3_SumadorNeurona1_3_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold1_4_1 */
void* an_1_FPAA1_4_GainHold1_4_1_Components[2] = 
{
   (void*) &an_1_FPAA1_4_GainHold1_4_1_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_4_GainHold1_4_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold1_4_2 */
void* an_1_FPAA1_4_GainHold1_4_2_Components[2] = 
{
   (void*) &an_1_FPAA1_4_GainHold1_4_2_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_4_GainHold1_4_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold1_4_3 */
void* an_1_FPAA1_4_GainHold1_4_3_Components[2] = 
{
   (void*) &an_1_FPAA1_4_GainHold1_4_3_Capacitor[0],  /* Cin */
   (void*) &an_1_FPAA1_4_GainHold1_4_3_Capacitor[1]  /* Cout */
};

/* Component map for Input1_4_1 */
void* an_1_FPAA1_4_Input1_4_1_Components[5] = 
{
   (void*) &an_1_FPAA1_4_Input1_4_1_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_4_Input1_4_1_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_4_Input1_4_1_Capacitor[2]  /* Cout */
};

/* Component map for Input1_4_2 */
void* an_1_FPAA1_4_Input1_4_2_Components[5] = 
{
   (void*) &an_1_FPAA1_4_Input1_4_2_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_4_Input1_4_2_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_4_Input1_4_2_Capacitor[2]  /* Cout */
};

/* Component map for Input1_4_3 */
void* an_1_FPAA1_4_Input1_4_3_Components[5] = 
{
   (void*) &an_1_FPAA1_4_Input1_4_3_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_4_Input1_4_3_Capacitor[1],  /* CinB */
   (void*) an_1_apiInvalid,               /* CinC */
   (void*) an_1_apiInvalid,               /* CinD */
   (void*) &an_1_FPAA1_4_Input1_4_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona1_4_1 */
void* an_1_FPAA1_4_SumadorNeurona1_4_1_Components[5] = 
{
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_1_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_1_Capacitor[1],  /* CinB */
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_1_Capacitor[2],  /* CinC */
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_1_Capacitor[3],  /* CinD */
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona1_4_2 */
void* an_1_FPAA1_4_SumadorNeurona1_4_2_Components[5] = 
{
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_2_Capacitor[0],  /* CinA */
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_2_Capacitor[1],  /* CinB */
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_2_Capacitor[2],  /* CinC */
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_2_Capacitor[3],  /* CinD */
   (void*) &an_1_FPAA1_4_SumadorNeurona1_4_2_Capacitor[4]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_1_apiCAMComponentData[an_1_apiCAMCount] =
{
   an_1_FPAA1_1_GainHold1_1_1_Components,   /* an_1_FPAA1_1_GainHold1_1_1 */
   an_1_FPAA1_1_GainHold1_1_2_Components,   /* an_1_FPAA1_1_GainHold1_1_2 */
   an_1_FPAA1_1_GainHold1_1_3_Components,   /* an_1_FPAA1_1_GainHold1_1_3 */
   an_1_FPAA1_1_Input1_1_1_Components,      /* an_1_FPAA1_1_Input1_1_1 */
   an_1_FPAA1_1_Input1_1_2_Components,      /* an_1_FPAA1_1_Input1_1_2 */
   an_1_FPAA1_1_Input1_1_3_Components,      /* an_1_FPAA1_1_Input1_1_3 */
   an_1_FPAA1_1_SumadorNeurona1_1_1_Components, /* an_1_FPAA1_1_SumadorNeurona1_1_1 */
   an_1_FPAA1_1_SumadorNeurona1_1_2_Components, /* an_1_FPAA1_1_SumadorNeurona1_1_2 */
   an_1_FPAA1_2_GainHold1_2_1_Components,   /* an_1_FPAA1_2_GainHold1_2_1 */
   an_1_FPAA1_2_GainHold1_2_2_Components,   /* an_1_FPAA1_2_GainHold1_2_2 */
   an_1_FPAA1_2_GainHold1_2_3_Components,   /* an_1_FPAA1_2_GainHold1_2_3 */
   an_1_FPAA1_2_Input1_2_1_Components,      /* an_1_FPAA1_2_Input1_2_1 */
   an_1_FPAA1_2_Input1_2_2_Components,      /* an_1_FPAA1_2_Input1_2_2 */
   an_1_FPAA1_2_Input1_2_3_Components,      /* an_1_FPAA1_2_Input1_2_3 */
   an_1_FPAA1_2_SumadorNeurona1_2_1_Components, /* an_1_FPAA1_2_SumadorNeurona1_2_1 */
   an_1_FPAA1_2_SumadorNeurona1_2_2_Components, /* an_1_FPAA1_2_SumadorNeurona1_2_2 */
   an_1_FPAA1_3_GainHold1_3_1_Components,   /* an_1_FPAA1_3_GainHold1_3_1 */
   an_1_FPAA1_3_GainHold1_3_2_Components,   /* an_1_FPAA1_3_GainHold1_3_2 */
   an_1_FPAA1_3_GainHold1_3_3_Components,   /* an_1_FPAA1_3_GainHold1_3_3 */
   an_1_FPAA1_3_Input1_3_1_Components,      /* an_1_FPAA1_3_Input1_3_1 */
   an_1_FPAA1_3_Input1_3_2_Components,      /* an_1_FPAA1_3_Input1_3_2 */
   an_1_FPAA1_3_Input1_3_3_Components,      /* an_1_FPAA1_3_Input1_3_3 */
   an_1_FPAA1_3_SumadorNeurona1_3_1_Components, /* an_1_FPAA1_3_SumadorNeurona1_3_1 */
   an_1_FPAA1_3_SumadorNeurona1_3_2_Components, /* an_1_FPAA1_3_SumadorNeurona1_3_2 */
   an_1_FPAA1_4_GainHold1_4_1_Components,   /* an_1_FPAA1_4_GainHold1_4_1 */
   an_1_FPAA1_4_GainHold1_4_2_Components,   /* an_1_FPAA1_4_GainHold1_4_2 */
   an_1_FPAA1_4_GainHold1_4_3_Components,   /* an_1_FPAA1_4_GainHold1_4_3 */
   an_1_FPAA1_4_Input1_4_1_Components,      /* an_1_FPAA1_4_Input1_4_1 */
   an_1_FPAA1_4_Input1_4_2_Components,      /* an_1_FPAA1_4_Input1_4_2 */
   an_1_FPAA1_4_Input1_4_3_Components,      /* an_1_FPAA1_4_Input1_4_3 */
   an_1_FPAA1_4_SumadorNeurona1_4_1_Components, /* an_1_FPAA1_4_SumadorNeurona1_4_1 */
   an_1_FPAA1_4_SumadorNeurona1_4_2_Components  /* an_1_FPAA1_4_SumadorNeurona1_4_2 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_1_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_1_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_1_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_1_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_1_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_1_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_1_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_1_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_1_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_1_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_1_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_1_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_1_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_1_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_1_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_1_apiReconfigData[chip]->length = 3;
        an_1_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_1_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_1_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_1_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_1_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_1_apiReconfigData[chip]->length = 3;
        an_1_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_1_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_1_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_1_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_1_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_1_InitializeVortexReconfigData.  |
  |  an_1_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_1_InitializeApexReconfigData.    |
  |  an_1_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_1_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_1_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_SetVortexReconfigControlFlags(an_Chip chip, an_1_VortexControlByte flags)
     {
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_SetApexReconfigControlFlags(an_Chip chip, an_1_ApexControlByte flags)
     {
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_SetApexReconfigControlFlagsNOP(an_Chip chip, an_1_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_1_VortexControlByte an_1_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_1_ApexControlByte an_1_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_1_apiCapacitor* pCap = an_1_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_1_BuildReconfigDataBlock(an_1_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_1_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_1_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_1_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_1_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_1_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_1_FixedDivide(an_1_IntToFixed(capTry1), an_1_IntToFixed(capTry2));
           realizedError = an_1_FixedDivide(an_1_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_1_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_1_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_1_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_1_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_1_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_1_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_1_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_1_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         * 				0294 5678   (fLeft)
         * 			*	0014 ACE0   (fRight)
         * 				---------
         * 				3A64 4900   (left_r * right_r = left_r_right_r)
         * 		 01BD B180			(left_l * right_r = left_l_right_r)
         * 		 0006 C160			(left_r * right_l = left_r_right_l)
         *   0000 3390					(left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_1_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)	
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_1_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_1_apiReconfigInfo* pInfo = an_1_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_1_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_2_apiAddress1[an_2_apiChipCount] =
{
   0x01,                /* an_2_FPAA2_1: 00000001 */
   0x02,                /* an_2_FPAA2_2: 00000010 */
   0x03,                /* an_2_FPAA2_3: 00000011 */
   0x04                 /* an_2_FPAA2_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA2_1. */
const an_Byte an_2_FPAA2_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFD,  0x14,  0x0D,  0x6D,  0xFD,  0xA4,  0xF9,  0xF6,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x91,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1A,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x90,  0xDF,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0xA5,  0x49,  0x5C,  0x50,  0xA5,  0x70,  0xAE,  0xA8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xD1,  0x00,  0x20,  
   0x01,  0x71,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA2_2. */
const an_Byte an_2_FPAA2_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x05,  0x83,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x08,  0x50,  0x80,  0x00,  0x08,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0x71,  0x9D,  0x1C,  0x71,  0x71,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x71,  0x00,  0x10,  0x01,  0x1F,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x19,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x18,  0x00,  0x10,  0x80,  0xAA,  0xFF,  0xFF,  
   0x80,  0xF7,  0x54,  0x47,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x05, /* Bank address:  5 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x12,  0x00,  
   0x20,  0x02,  0x15,  0x00,  0x20,  0x02,  0xC1,  0x00,  
   0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x06, /* Bank address:  6 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  0x02,  
   0x14,  0x00,  0x20,  0x82,  0x05,  0x02,  0x13,  0x00,  
   0x10,  0x82,  0x05,  0x02,  0xE1,  0x00,  0x10,  0x00,  
   0x00,  0xFF,  0xFF,  0xFF,  0x62,  0x9F,  0x93,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x08,  0x00,  0x00,  
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x90,  0xE8,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x0A, /* Bank address: 10 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA2_3. */
const an_Byte an_2_FPAA2_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x05,  0x83,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x08,  0x50,  0x80,  0x00,  0x08,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xE3,  0x0D,  0x51,  0xE3,  0xE3,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x17,  0x00,  0x10,  0x01,  0x1F,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x91,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x18,  0x00,  0x10,  0x80,  0xAA,  0xFF,  0xFF,  
   0x80,  0x81,  0x15,  0x17,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x05, /* Bank address:  5 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x12,  0x00,  
   0x20,  0x02,  0x15,  0x00,  0x20,  0x02,  0x1C,  0x00,  
   0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x06, /* Bank address:  6 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  0x02,  
   0x14,  0x00,  0x20,  0x82,  0x05,  0x02,  0x13,  0x00,  
   0x10,  0x82,  0x05,  0x02,  0x1E,  0x00,  0x10,  0x00,  
   0x00,  0xFF,  0xFF,  0xFF,  0x6A,  0xA2,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x08,  0x00,  0x00,  
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x60,  0x8F,  0x90,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x0A, /* Bank address: 10 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA2_4. */
const an_Byte an_2_FPAA2_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x8C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x02, /* Bank address:  2 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x5E,  0x03,  0x00,  0x5E,  0x03,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x03, /* Bank address:  3 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0xFF,  0xFF,  0xFF,  0xAA,  0xF3,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x04, /* Bank address:  4 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x6A,  0xBB,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x90,  0xD5,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x01,  0x00,  0x00,  
   0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x5A,  0x1A,  0x08,  0xF9,  0x7A,  0x1A,  0x51,  0xCB,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x01,  0x13,  0x00,  0x10,  0x01,  0x18,  0x00,  0x10,  
   0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x1A,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x1C,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x1A,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_2_apiPrimaryConfigInfo an_2_apiPrimaryConfigData[an_2_apiChipCount] =
{
   /* FPAA2_1 */
   {
      an_2_FPAA2_1_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA2_2 */
   {
      an_2_FPAA2_2_PrimaryConfigInfo, /* data */
      543,                          /* length */
   },

   /* FPAA2_3 */
   {
      an_2_FPAA2_3_PrimaryConfigInfo, /* data */
      543,                          /* length */
   },

   /* FPAA2_4 */
   {
      an_2_FPAA2_4_PrimaryConfigInfo, /* data */
      239                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_2_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA2_1 */
an_2_apiReconfigInfo an_2_FPAA2_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA2_2 */
an_2_apiReconfigInfo an_2_FPAA2_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA2_3 */
an_2_apiReconfigInfo an_2_FPAA2_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA2_4 */
an_2_apiReconfigInfo an_2_FPAA2_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_2_apiReconfigInfo* an_2_apiReconfigData[an_2_apiChipCount] =
{
   &an_2_FPAA2_1_ReconfigInfo,    /* FPAA2_1 */
   &an_2_FPAA2_2_ReconfigInfo,    /* FPAA2_2 */
   &an_2_FPAA2_3_ReconfigInfo,    /* FPAA2_3 */
   &an_2_FPAA2_4_ReconfigInfo     /* FPAA2_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_2_FPAA2_1_ReconfigBuffer[64] = {0};   /* FPAA2_1 */
an_Byte an_2_FPAA2_2_ReconfigBuffer[64] = {0};   /* FPAA2_2 */
an_Byte an_2_FPAA2_3_ReconfigBuffer[64] = {0};   /* FPAA2_3 */
an_Byte an_2_FPAA2_4_ReconfigBuffer[64] = {0};   /* FPAA2_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_2_apiReconfigBuffer[an_2_apiChipCount] =
{
   an_2_FPAA2_1_ReconfigBuffer,   /* FPAA2_1 */
   an_2_FPAA2_2_ReconfigBuffer,   /* FPAA2_2 */
   an_2_FPAA2_3_ReconfigBuffer,   /* FPAA2_3 */
   an_2_FPAA2_4_ReconfigBuffer    /* FPAA2_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_2_apiChipFromCAM[an_2_apiCAMCount] =
{
   an_2_FPAA2_1,        /* "an_2_FPAA2_1_GainHold2_1_1" in chip "FPAA2_1" */
   an_2_FPAA2_1,        /* "an_2_FPAA2_1_GainHold2_1_2" in chip "FPAA2_1" */
   an_2_FPAA2_1,        /* "an_2_FPAA2_1_GainHold2_1_3" in chip "FPAA2_1" */
   an_2_FPAA2_1,        /* "an_2_FPAA2_1_Input2_1_1" in chip "FPAA2_1" */
   an_2_FPAA2_1,        /* "an_2_FPAA2_1_Input2_1_2" in chip "FPAA2_1" */
   an_2_FPAA2_1,        /* "an_2_FPAA2_1_Input2_1_3" in chip "FPAA2_1" */
   an_2_FPAA2_1,        /* "an_2_FPAA2_1_SumadorNeurona2_1_1" in chip "FPAA2_1" */
   an_2_FPAA2_1,        /* "an_2_FPAA2_1_SumadorNeurona2_1_2" in chip "FPAA2_1" */
   an_2_FPAA2_2,        /* "an_2_FPAA2_2_GainHold2_2_1" in chip "FPAA2_2" */
   an_2_FPAA2_2,        /* "an_2_FPAA2_2_GainHold2_2_2" in chip "FPAA2_2" */
   an_2_FPAA2_2,        /* "an_2_FPAA2_2_GainHold2_2_3" in chip "FPAA2_2" */
   an_2_FPAA2_2,        /* "an_2_FPAA2_2_Input2_2_1" in chip "FPAA2_2" */
   an_2_FPAA2_2,        /* "an_2_FPAA2_2_Input2_2_2" in chip "FPAA2_2" */
   an_2_FPAA2_2,        /* "an_2_FPAA2_2_SumadorNeurona2_2_1" in chip "FPAA2_2" */
   an_2_FPAA2_2,        /* "an_2_FPAA2_2_SumadorNeurona2_2_2" in chip "FPAA2_2" */
   an_2_FPAA2_2,        /* "an_2_FPAA2_2_TransferFunction2_2_1" in chip "FPAA2_2" */
   an_2_FPAA2_3,        /* "an_2_FPAA2_3_GainHold2_3_1" in chip "FPAA2_3" */
   an_2_FPAA2_3,        /* "an_2_FPAA2_3_GainHold2_3_2" in chip "FPAA2_3" */
   an_2_FPAA2_3,        /* "an_2_FPAA2_3_GainHold2_3_3" in chip "FPAA2_3" */
   an_2_FPAA2_3,        /* "an_2_FPAA2_3_Input2_3_1" in chip "FPAA2_3" */
   an_2_FPAA2_3,        /* "an_2_FPAA2_3_Input2_3_2" in chip "FPAA2_3" */
   an_2_FPAA2_3,        /* "an_2_FPAA2_3_SumadorNeurona2_3_1" in chip "FPAA2_3" */
   an_2_FPAA2_3,        /* "an_2_FPAA2_3_SumadorNeurona2_3_2" in chip "FPAA2_3" */
   an_2_FPAA2_3,        /* "an_2_FPAA2_3_TransferFunction2_3_1" in chip "FPAA2_3" */
   an_2_FPAA2_4,        /* "an_2_FPAA2_4_GainHold2_4_1" in chip "FPAA2_4" */
   an_2_FPAA2_4,        /* "an_2_FPAA2_4_GainHold2_4_2" in chip "FPAA2_4" */
   an_2_FPAA2_4,        /* "an_2_FPAA2_4_GainHold2_4_3" in chip "FPAA2_4" */
   an_2_FPAA2_4,        /* "an_2_FPAA2_4_Input2_4_1" in chip "FPAA2_4" */
   an_2_FPAA2_4,        /* "an_2_FPAA2_4_Input2_4_2" in chip "FPAA2_4" */
   an_2_FPAA2_4,        /* "an_2_FPAA2_4_Input2_4_3" in chip "FPAA2_4" */
   an_2_FPAA2_4,        /* "an_2_FPAA2_4_SumadorNeurona2_4_1" in chip "FPAA2_4" */
   an_2_FPAA2_4         /* "an_2_FPAA2_4_SumadorNeurona2_4_2" in chip "FPAA2_4" */
};

/* Component data table for the apiCapacitor's of GainHold2_1_1. */
extern const an_2_apiCapacitor an_2_FPAA2_1_GainHold2_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold2_1_2. */
extern const an_2_apiCapacitor an_2_FPAA2_1_GainHold2_1_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold2_1_3. */
extern const an_2_apiCapacitor an_2_FPAA2_1_GainHold2_1_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input2_1_1. */
extern const an_2_apiCapacitor an_2_FPAA2_1_Input2_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input2_1_2. */
extern const an_2_apiCapacitor an_2_FPAA2_1_Input2_1_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input2_1_3. */
extern const an_2_apiCapacitor an_2_FPAA2_1_Input2_1_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona2_1_1. */
extern const an_2_apiCapacitor an_2_FPAA2_1_SumadorNeurona2_1_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona2_1_2. */
extern const an_2_apiCapacitor an_2_FPAA2_1_SumadorNeurona2_1_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold2_2_1. */
extern const an_2_apiCapacitor an_2_FPAA2_2_GainHold2_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of GainHold2_2_2. */
extern const an_2_apiCapacitor an_2_FPAA2_2_GainHold2_2_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of GainHold2_2_3. */
extern const an_2_apiCapacitor an_2_FPAA2_2_GainHold2_2_3_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of Input2_2_1. */
extern const an_2_apiCapacitor an_2_FPAA2_2_Input2_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input2_2_2. */
extern const an_2_apiCapacitor an_2_FPAA2_2_Input2_2_2_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona2_2_1. */
extern const an_2_apiCapacitor an_2_FPAA2_2_SumadorNeurona2_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona2_2_2. */
extern const an_2_apiCapacitor an_2_FPAA2_2_SumadorNeurona2_2_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of TransferFunction2_2_1. */
extern const an_2_apiCapacitor an_2_FPAA2_2_TransferFunction2_2_1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x02  }  /* 5, 2 */
};

/* Component data table for the apiCapacitor's of GainHold2_3_1. */
extern const an_2_apiCapacitor an_2_FPAA2_3_GainHold2_3_1_Capacitor[2] = 
{
   /* Cin   */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of GainHold2_3_2. */
extern const an_2_apiCapacitor an_2_FPAA2_3_GainHold2_3_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of GainHold2_3_3. */
extern const an_2_apiCapacitor an_2_FPAA2_3_GainHold2_3_3_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of Input2_3_1. */
extern const an_2_apiCapacitor an_2_FPAA2_3_Input2_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input2_3_2. */
extern const an_2_apiCapacitor an_2_FPAA2_3_Input2_3_2_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona2_3_1. */
extern const an_2_apiCapacitor an_2_FPAA2_3_SumadorNeurona2_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona2_3_2. */
extern const an_2_apiCapacitor an_2_FPAA2_3_SumadorNeurona2_3_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of TransferFunction2_3_1. */
extern const an_2_apiCapacitor an_2_FPAA2_3_TransferFunction2_3_1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x02  }  /* 5, 2 */
};

/* Component data table for the apiCapacitor's of GainHold2_4_1. */
extern const an_2_apiCapacitor an_2_FPAA2_4_GainHold2_4_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of GainHold2_4_2. */
extern const an_2_apiCapacitor an_2_FPAA2_4_GainHold2_4_2_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold2_4_3. */
extern const an_2_apiCapacitor an_2_FPAA2_4_GainHold2_4_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input2_4_1. */
extern const an_2_apiCapacitor an_2_FPAA2_4_Input2_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input2_4_2. */
extern const an_2_apiCapacitor an_2_FPAA2_4_Input2_4_2_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of Input2_4_3. */
extern const an_2_apiCapacitor an_2_FPAA2_4_Input2_4_3_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona2_4_1. */
extern const an_2_apiCapacitor an_2_FPAA2_4_SumadorNeurona2_4_1_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* CinC  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona2_4_2. */
extern const an_2_apiCapacitor an_2_FPAA2_4_SumadorNeurona2_4_2_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinB  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinC  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component map for GainHold2_1_1 */
void* an_2_FPAA2_1_GainHold2_1_1_Components[2] = 
{
   (void*) &an_2_FPAA2_1_GainHold2_1_1_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_1_GainHold2_1_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold2_1_2 */
void* an_2_FPAA2_1_GainHold2_1_2_Components[2] = 
{
   (void*) &an_2_FPAA2_1_GainHold2_1_2_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_1_GainHold2_1_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold2_1_3 */
void* an_2_FPAA2_1_GainHold2_1_3_Components[2] = 
{
   (void*) &an_2_FPAA2_1_GainHold2_1_3_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_1_GainHold2_1_3_Capacitor[1]  /* Cout */
};

/* Component map for Input2_1_1 */
void* an_2_FPAA2_1_Input2_1_1_Components[5] = 
{
   (void*) &an_2_FPAA2_1_Input2_1_1_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_1_Input2_1_1_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_1_Input2_1_1_Capacitor[2]  /* Cout */
};

/* Component map for Input2_1_2 */
void* an_2_FPAA2_1_Input2_1_2_Components[5] = 
{
   (void*) &an_2_FPAA2_1_Input2_1_2_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_1_Input2_1_2_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_1_Input2_1_2_Capacitor[2]  /* Cout */
};

/* Component map for Input2_1_3 */
void* an_2_FPAA2_1_Input2_1_3_Components[5] = 
{
   (void*) &an_2_FPAA2_1_Input2_1_3_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_1_Input2_1_3_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_1_Input2_1_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona2_1_1 */
void* an_2_FPAA2_1_SumadorNeurona2_1_1_Components[5] = 
{
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_1_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_1_Capacitor[1],  /* CinB */
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_1_Capacitor[2],  /* CinC */
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_1_Capacitor[3],  /* CinD */
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona2_1_2 */
void* an_2_FPAA2_1_SumadorNeurona2_1_2_Components[5] = 
{
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_2_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_2_Capacitor[1],  /* CinB */
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_2_Capacitor[2],  /* CinC */
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_2_Capacitor[3],  /* CinD */
   (void*) &an_2_FPAA2_1_SumadorNeurona2_1_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold2_2_1 */
void* an_2_FPAA2_2_GainHold2_2_1_Components[2] = 
{
   (void*) &an_2_FPAA2_2_GainHold2_2_1_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_2_GainHold2_2_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold2_2_2 */
void* an_2_FPAA2_2_GainHold2_2_2_Components[2] = 
{
   (void*) &an_2_FPAA2_2_GainHold2_2_2_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_2_GainHold2_2_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold2_2_3 */
void* an_2_FPAA2_2_GainHold2_2_3_Components[2] = 
{
   (void*) &an_2_FPAA2_2_GainHold2_2_3_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_2_GainHold2_2_3_Capacitor[1]  /* Cout */
};

/* Component map for Input2_2_1 */
void* an_2_FPAA2_2_Input2_2_1_Components[5] = 
{
   (void*) &an_2_FPAA2_2_Input2_2_1_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_2_Input2_2_1_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_2_Input2_2_1_Capacitor[2]  /* Cout */
};

/* Component map for Input2_2_2 */
void* an_2_FPAA2_2_Input2_2_2_Components[5] = 
{
   (void*) &an_2_FPAA2_2_Input2_2_2_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_2_Input2_2_2_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_2_Input2_2_2_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona2_2_1 */
void* an_2_FPAA2_2_SumadorNeurona2_2_1_Components[5] = 
{
   (void*) &an_2_FPAA2_2_SumadorNeurona2_2_1_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_2_SumadorNeurona2_2_1_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_2_SumadorNeurona2_2_1_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona2_2_2 */
void* an_2_FPAA2_2_SumadorNeurona2_2_2_Components[5] = 
{
   (void*) &an_2_FPAA2_2_SumadorNeurona2_2_2_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_2_SumadorNeurona2_2_2_Capacitor[1],  /* CinB */
   (void*) &an_2_FPAA2_2_SumadorNeurona2_2_2_Capacitor[2],  /* CinC */
   (void*) &an_2_FPAA2_2_SumadorNeurona2_2_2_Capacitor[3],  /* CinD */
   (void*) &an_2_FPAA2_2_SumadorNeurona2_2_2_Capacitor[4]  /* Cout */
};

/* Component map for TransferFunction2_2_1 */
void* an_2_FPAA2_2_TransferFunction2_2_1_Components[1] = 
{
   (void*) &an_2_FPAA2_2_TransferFunction2_2_1_Capacitor[0]  /* Cout */
};

/* Component map for GainHold2_3_1 */
void* an_2_FPAA2_3_GainHold2_3_1_Components[2] = 
{
   (void*) &an_2_FPAA2_3_GainHold2_3_1_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_3_GainHold2_3_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold2_3_2 */
void* an_2_FPAA2_3_GainHold2_3_2_Components[2] = 
{
   (void*) &an_2_FPAA2_3_GainHold2_3_2_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_3_GainHold2_3_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold2_3_3 */
void* an_2_FPAA2_3_GainHold2_3_3_Components[2] = 
{
   (void*) &an_2_FPAA2_3_GainHold2_3_3_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_3_GainHold2_3_3_Capacitor[1]  /* Cout */
};

/* Component map for Input2_3_1 */
void* an_2_FPAA2_3_Input2_3_1_Components[5] = 
{
   (void*) &an_2_FPAA2_3_Input2_3_1_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_3_Input2_3_1_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_3_Input2_3_1_Capacitor[2]  /* Cout */
};

/* Component map for Input2_3_2 */
void* an_2_FPAA2_3_Input2_3_2_Components[5] = 
{
   (void*) &an_2_FPAA2_3_Input2_3_2_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_3_Input2_3_2_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_3_Input2_3_2_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona2_3_1 */
void* an_2_FPAA2_3_SumadorNeurona2_3_1_Components[5] = 
{
   (void*) &an_2_FPAA2_3_SumadorNeurona2_3_1_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_3_SumadorNeurona2_3_1_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_3_SumadorNeurona2_3_1_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona2_3_2 */
void* an_2_FPAA2_3_SumadorNeurona2_3_2_Components[5] = 
{
   (void*) &an_2_FPAA2_3_SumadorNeurona2_3_2_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_3_SumadorNeurona2_3_2_Capacitor[1],  /* CinB */
   (void*) &an_2_FPAA2_3_SumadorNeurona2_3_2_Capacitor[2],  /* CinC */
   (void*) &an_2_FPAA2_3_SumadorNeurona2_3_2_Capacitor[3],  /* CinD */
   (void*) &an_2_FPAA2_3_SumadorNeurona2_3_2_Capacitor[4]  /* Cout */
};

/* Component map for TransferFunction2_3_1 */
void* an_2_FPAA2_3_TransferFunction2_3_1_Components[1] = 
{
   (void*) &an_2_FPAA2_3_TransferFunction2_3_1_Capacitor[0]  /* Cout */
};

/* Component map for GainHold2_4_1 */
void* an_2_FPAA2_4_GainHold2_4_1_Components[2] = 
{
   (void*) &an_2_FPAA2_4_GainHold2_4_1_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_4_GainHold2_4_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold2_4_2 */
void* an_2_FPAA2_4_GainHold2_4_2_Components[2] = 
{
   (void*) &an_2_FPAA2_4_GainHold2_4_2_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_4_GainHold2_4_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold2_4_3 */
void* an_2_FPAA2_4_GainHold2_4_3_Components[2] = 
{
   (void*) &an_2_FPAA2_4_GainHold2_4_3_Capacitor[0],  /* Cin */
   (void*) &an_2_FPAA2_4_GainHold2_4_3_Capacitor[1]  /* Cout */
};

/* Component map for Input2_4_1 */
void* an_2_FPAA2_4_Input2_4_1_Components[5] = 
{
   (void*) &an_2_FPAA2_4_Input2_4_1_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_4_Input2_4_1_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_4_Input2_4_1_Capacitor[2]  /* Cout */
};

/* Component map for Input2_4_2 */
void* an_2_FPAA2_4_Input2_4_2_Components[5] = 
{
   (void*) &an_2_FPAA2_4_Input2_4_2_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_4_Input2_4_2_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_4_Input2_4_2_Capacitor[2]  /* Cout */
};

/* Component map for Input2_4_3 */
void* an_2_FPAA2_4_Input2_4_3_Components[5] = 
{
   (void*) &an_2_FPAA2_4_Input2_4_3_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_4_Input2_4_3_Capacitor[1],  /* CinB */
   (void*) an_2_apiInvalid,               /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_4_Input2_4_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona2_4_1 */
void* an_2_FPAA2_4_SumadorNeurona2_4_1_Components[5] = 
{
   (void*) &an_2_FPAA2_4_SumadorNeurona2_4_1_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_4_SumadorNeurona2_4_1_Capacitor[1],  /* CinB */
   (void*) &an_2_FPAA2_4_SumadorNeurona2_4_1_Capacitor[2],  /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_4_SumadorNeurona2_4_1_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona2_4_2 */
void* an_2_FPAA2_4_SumadorNeurona2_4_2_Components[5] = 
{
   (void*) &an_2_FPAA2_4_SumadorNeurona2_4_2_Capacitor[0],  /* CinA */
   (void*) &an_2_FPAA2_4_SumadorNeurona2_4_2_Capacitor[1],  /* CinB */
   (void*) &an_2_FPAA2_4_SumadorNeurona2_4_2_Capacitor[2],  /* CinC */
   (void*) an_2_apiInvalid,               /* CinD */
   (void*) &an_2_FPAA2_4_SumadorNeurona2_4_2_Capacitor[3]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_2_apiCAMComponentData[an_2_apiCAMCount] =
{
   an_2_FPAA2_1_GainHold2_1_1_Components,   /* an_2_FPAA2_1_GainHold2_1_1 */
   an_2_FPAA2_1_GainHold2_1_2_Components,   /* an_2_FPAA2_1_GainHold2_1_2 */
   an_2_FPAA2_1_GainHold2_1_3_Components,   /* an_2_FPAA2_1_GainHold2_1_3 */
   an_2_FPAA2_1_Input2_1_1_Components,      /* an_2_FPAA2_1_Input2_1_1 */
   an_2_FPAA2_1_Input2_1_2_Components,      /* an_2_FPAA2_1_Input2_1_2 */
   an_2_FPAA2_1_Input2_1_3_Components,      /* an_2_FPAA2_1_Input2_1_3 */
   an_2_FPAA2_1_SumadorNeurona2_1_1_Components, /* an_2_FPAA2_1_SumadorNeurona2_1_1 */
   an_2_FPAA2_1_SumadorNeurona2_1_2_Components, /* an_2_FPAA2_1_SumadorNeurona2_1_2 */
   an_2_FPAA2_2_GainHold2_2_1_Components,   /* an_2_FPAA2_2_GainHold2_2_1 */
   an_2_FPAA2_2_GainHold2_2_2_Components,   /* an_2_FPAA2_2_GainHold2_2_2 */
   an_2_FPAA2_2_GainHold2_2_3_Components,   /* an_2_FPAA2_2_GainHold2_2_3 */
   an_2_FPAA2_2_Input2_2_1_Components,      /* an_2_FPAA2_2_Input2_2_1 */
   an_2_FPAA2_2_Input2_2_2_Components,      /* an_2_FPAA2_2_Input2_2_2 */
   an_2_FPAA2_2_SumadorNeurona2_2_1_Components, /* an_2_FPAA2_2_SumadorNeurona2_2_1 */
   an_2_FPAA2_2_SumadorNeurona2_2_2_Components, /* an_2_FPAA2_2_SumadorNeurona2_2_2 */
   an_2_FPAA2_2_TransferFunction2_2_1_Components, /* an_2_FPAA2_2_TransferFunction2_2_1 */
   an_2_FPAA2_3_GainHold2_3_1_Components,   /* an_2_FPAA2_3_GainHold2_3_1 */
   an_2_FPAA2_3_GainHold2_3_2_Components,   /* an_2_FPAA2_3_GainHold2_3_2 */
   an_2_FPAA2_3_GainHold2_3_3_Components,   /* an_2_FPAA2_3_GainHold2_3_3 */
   an_2_FPAA2_3_Input2_3_1_Components,      /* an_2_FPAA2_3_Input2_3_1 */
   an_2_FPAA2_3_Input2_3_2_Components,      /* an_2_FPAA2_3_Input2_3_2 */
   an_2_FPAA2_3_SumadorNeurona2_3_1_Components, /* an_2_FPAA2_3_SumadorNeurona2_3_1 */
   an_2_FPAA2_3_SumadorNeurona2_3_2_Components, /* an_2_FPAA2_3_SumadorNeurona2_3_2 */
   an_2_FPAA2_3_TransferFunction2_3_1_Components, /* an_2_FPAA2_3_TransferFunction2_3_1 */
   an_2_FPAA2_4_GainHold2_4_1_Components,   /* an_2_FPAA2_4_GainHold2_4_1 */
   an_2_FPAA2_4_GainHold2_4_2_Components,   /* an_2_FPAA2_4_GainHold2_4_2 */
   an_2_FPAA2_4_GainHold2_4_3_Components,   /* an_2_FPAA2_4_GainHold2_4_3 */
   an_2_FPAA2_4_Input2_4_1_Components,      /* an_2_FPAA2_4_Input2_4_1 */
   an_2_FPAA2_4_Input2_4_2_Components,      /* an_2_FPAA2_4_Input2_4_2 */
   an_2_FPAA2_4_Input2_4_3_Components,      /* an_2_FPAA2_4_Input2_4_3 */
   an_2_FPAA2_4_SumadorNeurona2_4_1_Components, /* an_2_FPAA2_4_SumadorNeurona2_4_1 */
   an_2_FPAA2_4_SumadorNeurona2_4_2_Components  /* an_2_FPAA2_4_SumadorNeurona2_4_2 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_2_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_2_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_2_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_2_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_2_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_2_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_2_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_2_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_2_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_2_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_2_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_2_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_2_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_2_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_2_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_2_apiReconfigData[chip]->length = 3;
        an_2_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_2_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_2_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_2_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_2_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_2_apiReconfigData[chip]->length = 3;
        an_2_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_2_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_2_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_2_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_2_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_2_InitializeVortexReconfigData.  |
  |  an_2_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_2_InitializeApexReconfigData.    |
  |  an_2_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_2_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_2_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_SetVortexReconfigControlFlags(an_Chip chip, an_2_VortexControlByte flags)
     {
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_SetApexReconfigControlFlags(an_Chip chip, an_2_ApexControlByte flags)
     {
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_SetApexReconfigControlFlagsNOP(an_Chip chip, an_2_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_2_VortexControlByte an_2_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_2_ApexControlByte an_2_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_2_apiCapacitor* pCap = an_2_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_2_BuildReconfigDataBlock(an_2_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_2_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_2_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_2_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_2_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_2_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_2_FixedDivide(an_2_IntToFixed(capTry1), an_2_IntToFixed(capTry2));
           realizedError = an_2_FixedDivide(an_2_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_2_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_2_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_2_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_2_BuildReconfigDataBlock(an_2_apiChipFromCAM[cam], bank, byte, values, count);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_2_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_2_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_2_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_2_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_2_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_2_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_2_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_2_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_2_apiReconfigInfo* pInfo = an_2_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_2_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
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

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_3_apiAddress1[an_3_apiChipCount] =
{
   0x01,                /* an_3_FPAA3_1: 00000001 */
   0x02,                /* an_3_FPAA3_2: 00000010 */
   0x03,                /* an_3_FPAA3_3: 00000011 */
   0x04                 /* an_3_FPAA3_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA3_1. */
const an_Byte an_3_FPAA3_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x21,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5A,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x1E,  0x1E,  0x88,  0x2D,  0x1E,  0x9A,  0xF5,  0xE7,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x19,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0xA1,  0x00,  0x20,  0x01,  0xE1,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0xA6,  0xF0,  0xF9,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x6B,  0xC2,  0x33,  0xEA,  0x6B,  0x6E,  0xA4,  0xA5,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x17,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0xC1,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA3_2. */
const an_Byte an_3_FPAA3_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x21,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xA1,  0xC0,  0x06,  0x8A,  0xA1,  0xA0,  0xE5,  0xF0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x1B,  0x00,  0x20,  
   0x01,  0x91,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1A,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x90,  0xDD,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x89,  0x0F,  0x69,  0x3B,  0x89,  0x98,  0xE7,  0xE4,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x71,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0xC1,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA3_3. */
const an_Byte an_3_FPAA3_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x21,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5A,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x3B,  0x97,  0x35,  0x1D,  0x3B,  0x94,  0xE2,  0xDE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x19,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0xA1,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x76,  0xAF,  0xB1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0xAF,  0xC8,  0xF5,  0x09,  0xAF,  0x96,  0xDA,  0xE1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0xD1,  0x00,  0x20,  
   0x01,  0x17,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA3_4. */
const an_Byte an_3_FPAA3_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x21,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x5F,  0x13,  0xBE,  0xC0,  0x5F,  0xA4,  0xF9,  0xF6,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x1B,  0x00,  0x20,  
   0x01,  0x91,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0xA1,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x90,  0xDF,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x52,  0x4E,  0x41,  0xAD,  0x52,  0x70,  0xAE,  0xA8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xD1,  0x00,  0x20,  
   0x01,  0x71,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_3_apiPrimaryConfigInfo an_3_apiPrimaryConfigData[an_3_apiChipCount] =
{
   /* FPAA3_1 */
   {
      an_3_FPAA3_1_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA3_2 */
   {
      an_3_FPAA3_2_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA3_3 */
   {
      an_3_FPAA3_3_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA3_4 */
   {
      an_3_FPAA3_4_PrimaryConfigInfo, /* data */
      261                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_3_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA3_1 */
an_3_apiReconfigInfo an_3_FPAA3_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA3_2 */
an_3_apiReconfigInfo an_3_FPAA3_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA3_3 */
an_3_apiReconfigInfo an_3_FPAA3_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA3_4 */
an_3_apiReconfigInfo an_3_FPAA3_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_3_apiReconfigInfo* an_3_apiReconfigData[an_3_apiChipCount] =
{
   &an_3_FPAA3_1_ReconfigInfo,    /* FPAA3_1 */
   &an_3_FPAA3_2_ReconfigInfo,    /* FPAA3_2 */
   &an_3_FPAA3_3_ReconfigInfo,    /* FPAA3_3 */
   &an_3_FPAA3_4_ReconfigInfo     /* FPAA3_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_3_FPAA3_1_ReconfigBuffer[64] = {0};   /* FPAA3_1 */
an_Byte an_3_FPAA3_2_ReconfigBuffer[64] = {0};   /* FPAA3_2 */
an_Byte an_3_FPAA3_3_ReconfigBuffer[64] = {0};   /* FPAA3_3 */
an_Byte an_3_FPAA3_4_ReconfigBuffer[64] = {0};   /* FPAA3_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_3_apiReconfigBuffer[an_3_apiChipCount] =
{
   an_3_FPAA3_1_ReconfigBuffer,   /* FPAA3_1 */
   an_3_FPAA3_2_ReconfigBuffer,   /* FPAA3_2 */
   an_3_FPAA3_3_ReconfigBuffer,   /* FPAA3_3 */
   an_3_FPAA3_4_ReconfigBuffer    /* FPAA3_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_3_apiChipFromCAM[an_3_apiCAMCount] =
{
   an_3_FPAA3_1,        /* "an_3_FPAA3_1_GainHold3_1_1" in chip "FPAA3_1" */
   an_3_FPAA3_1,        /* "an_3_FPAA3_1_GainHold3_1_2" in chip "FPAA3_1" */
   an_3_FPAA3_1,        /* "an_3_FPAA3_1_GainHold3_1_3" in chip "FPAA3_1" */
   an_3_FPAA3_1,        /* "an_3_FPAA3_1_Input3_1_1" in chip "FPAA3_1" */
   an_3_FPAA3_1,        /* "an_3_FPAA3_1_Input3_1_2" in chip "FPAA3_1" */
   an_3_FPAA3_1,        /* "an_3_FPAA3_1_Input3_1_3" in chip "FPAA3_1" */
   an_3_FPAA3_1,        /* "an_3_FPAA3_1_SumadorNeurona3_1_1" in chip "FPAA3_1" */
   an_3_FPAA3_1,        /* "an_3_FPAA3_1_SumadorNeurona3_1_2" in chip "FPAA3_1" */
   an_3_FPAA3_2,        /* "an_3_FPAA3_2_GainHold3_2_1" in chip "FPAA3_2" */
   an_3_FPAA3_2,        /* "an_3_FPAA3_2_GainHold3_2_2" in chip "FPAA3_2" */
   an_3_FPAA3_2,        /* "an_3_FPAA3_2_GainHold3_2_3" in chip "FPAA3_2" */
   an_3_FPAA3_2,        /* "an_3_FPAA3_2_Input3_2_1" in chip "FPAA3_2" */
   an_3_FPAA3_2,        /* "an_3_FPAA3_2_Input3_2_2" in chip "FPAA3_2" */
   an_3_FPAA3_2,        /* "an_3_FPAA3_2_Input3_2_3" in chip "FPAA3_2" */
   an_3_FPAA3_2,        /* "an_3_FPAA3_2_SumadorNeurona3_2_1" in chip "FPAA3_2" */
   an_3_FPAA3_2,        /* "an_3_FPAA3_2_SumadorNeurona3_2_2" in chip "FPAA3_2" */
   an_3_FPAA3_3,        /* "an_3_FPAA3_3_GainHold3_3_1" in chip "FPAA3_3" */
   an_3_FPAA3_3,        /* "an_3_FPAA3_3_GainHold3_3_2" in chip "FPAA3_3" */
   an_3_FPAA3_3,        /* "an_3_FPAA3_3_GainHold3_3_3" in chip "FPAA3_3" */
   an_3_FPAA3_3,        /* "an_3_FPAA3_3_Input3_3_1" in chip "FPAA3_3" */
   an_3_FPAA3_3,        /* "an_3_FPAA3_3_Input3_3_2" in chip "FPAA3_3" */
   an_3_FPAA3_3,        /* "an_3_FPAA3_3_Input3_3_3" in chip "FPAA3_3" */
   an_3_FPAA3_3,        /* "an_3_FPAA3_3_SumadorNeurona3_3_1" in chip "FPAA3_3" */
   an_3_FPAA3_3,        /* "an_3_FPAA3_3_SumadorNeurona3_3_2" in chip "FPAA3_3" */
   an_3_FPAA3_4,        /* "an_3_FPAA3_4_GainHold3_4_1" in chip "FPAA3_4" */
   an_3_FPAA3_4,        /* "an_3_FPAA3_4_GainHold3_4_2" in chip "FPAA3_4" */
   an_3_FPAA3_4,        /* "an_3_FPAA3_4_GainHold3_4_3" in chip "FPAA3_4" */
   an_3_FPAA3_4,        /* "an_3_FPAA3_4_Input3_4_1" in chip "FPAA3_4" */
   an_3_FPAA3_4,        /* "an_3_FPAA3_4_Input3_4_2" in chip "FPAA3_4" */
   an_3_FPAA3_4,        /* "an_3_FPAA3_4_Input3_4_3" in chip "FPAA3_4" */
   an_3_FPAA3_4,        /* "an_3_FPAA3_4_SumadorNeurona3_4_1" in chip "FPAA3_4" */
   an_3_FPAA3_4         /* "an_3_FPAA3_4_SumadorNeurona3_4_2" in chip "FPAA3_4" */
};

/* Component data table for the apiCapacitor's of GainHold3_1_1. */
extern const an_3_apiCapacitor an_3_FPAA3_1_GainHold3_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold3_1_2. */
extern const an_3_apiCapacitor an_3_FPAA3_1_GainHold3_1_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold3_1_3. */
extern const an_3_apiCapacitor an_3_FPAA3_1_GainHold3_1_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input3_1_1. */
extern const an_3_apiCapacitor an_3_FPAA3_1_Input3_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input3_1_2. */
extern const an_3_apiCapacitor an_3_FPAA3_1_Input3_1_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input3_1_3. */
extern const an_3_apiCapacitor an_3_FPAA3_1_Input3_1_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona3_1_1. */
extern const an_3_apiCapacitor an_3_FPAA3_1_SumadorNeurona3_1_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona3_1_2. */
extern const an_3_apiCapacitor an_3_FPAA3_1_SumadorNeurona3_1_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold3_2_1. */
extern const an_3_apiCapacitor an_3_FPAA3_2_GainHold3_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold3_2_2. */
extern const an_3_apiCapacitor an_3_FPAA3_2_GainHold3_2_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold3_2_3. */
extern const an_3_apiCapacitor an_3_FPAA3_2_GainHold3_2_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input3_2_1. */
extern const an_3_apiCapacitor an_3_FPAA3_2_Input3_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input3_2_2. */
extern const an_3_apiCapacitor an_3_FPAA3_2_Input3_2_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input3_2_3. */
extern const an_3_apiCapacitor an_3_FPAA3_2_Input3_2_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona3_2_1. */
extern const an_3_apiCapacitor an_3_FPAA3_2_SumadorNeurona3_2_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona3_2_2. */
extern const an_3_apiCapacitor an_3_FPAA3_2_SumadorNeurona3_2_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold3_3_1. */
extern const an_3_apiCapacitor an_3_FPAA3_3_GainHold3_3_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold3_3_2. */
extern const an_3_apiCapacitor an_3_FPAA3_3_GainHold3_3_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold3_3_3. */
extern const an_3_apiCapacitor an_3_FPAA3_3_GainHold3_3_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input3_3_1. */
extern const an_3_apiCapacitor an_3_FPAA3_3_Input3_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input3_3_2. */
extern const an_3_apiCapacitor an_3_FPAA3_3_Input3_3_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input3_3_3. */
extern const an_3_apiCapacitor an_3_FPAA3_3_Input3_3_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona3_3_1. */
extern const an_3_apiCapacitor an_3_FPAA3_3_SumadorNeurona3_3_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona3_3_2. */
extern const an_3_apiCapacitor an_3_FPAA3_3_SumadorNeurona3_3_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold3_4_1. */
extern const an_3_apiCapacitor an_3_FPAA3_4_GainHold3_4_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold3_4_2. */
extern const an_3_apiCapacitor an_3_FPAA3_4_GainHold3_4_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold3_4_3. */
extern const an_3_apiCapacitor an_3_FPAA3_4_GainHold3_4_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input3_4_1. */
extern const an_3_apiCapacitor an_3_FPAA3_4_Input3_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input3_4_2. */
extern const an_3_apiCapacitor an_3_FPAA3_4_Input3_4_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input3_4_3. */
extern const an_3_apiCapacitor an_3_FPAA3_4_Input3_4_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona3_4_1. */
extern const an_3_apiCapacitor an_3_FPAA3_4_SumadorNeurona3_4_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona3_4_2. */
extern const an_3_apiCapacitor an_3_FPAA3_4_SumadorNeurona3_4_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component map for GainHold3_1_1 */
void* an_3_FPAA3_1_GainHold3_1_1_Components[2] = 
{
   (void*) &an_3_FPAA3_1_GainHold3_1_1_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_1_GainHold3_1_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold3_1_2 */
void* an_3_FPAA3_1_GainHold3_1_2_Components[2] = 
{
   (void*) &an_3_FPAA3_1_GainHold3_1_2_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_1_GainHold3_1_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold3_1_3 */
void* an_3_FPAA3_1_GainHold3_1_3_Components[2] = 
{
   (void*) &an_3_FPAA3_1_GainHold3_1_3_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_1_GainHold3_1_3_Capacitor[1]  /* Cout */
};

/* Component map for Input3_1_1 */
void* an_3_FPAA3_1_Input3_1_1_Components[5] = 
{
   (void*) &an_3_FPAA3_1_Input3_1_1_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_1_Input3_1_1_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_1_Input3_1_1_Capacitor[2]  /* Cout */
};

/* Component map for Input3_1_2 */
void* an_3_FPAA3_1_Input3_1_2_Components[5] = 
{
   (void*) &an_3_FPAA3_1_Input3_1_2_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_1_Input3_1_2_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_1_Input3_1_2_Capacitor[2]  /* Cout */
};

/* Component map for Input3_1_3 */
void* an_3_FPAA3_1_Input3_1_3_Components[5] = 
{
   (void*) &an_3_FPAA3_1_Input3_1_3_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_1_Input3_1_3_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_1_Input3_1_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona3_1_1 */
void* an_3_FPAA3_1_SumadorNeurona3_1_1_Components[5] = 
{
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_1_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_1_Capacitor[1],  /* CinB */
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_1_Capacitor[2],  /* CinC */
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_1_Capacitor[3],  /* CinD */
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona3_1_2 */
void* an_3_FPAA3_1_SumadorNeurona3_1_2_Components[5] = 
{
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_2_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_2_Capacitor[1],  /* CinB */
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_2_Capacitor[2],  /* CinC */
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_2_Capacitor[3],  /* CinD */
   (void*) &an_3_FPAA3_1_SumadorNeurona3_1_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold3_2_1 */
void* an_3_FPAA3_2_GainHold3_2_1_Components[2] = 
{
   (void*) &an_3_FPAA3_2_GainHold3_2_1_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_2_GainHold3_2_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold3_2_2 */
void* an_3_FPAA3_2_GainHold3_2_2_Components[2] = 
{
   (void*) &an_3_FPAA3_2_GainHold3_2_2_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_2_GainHold3_2_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold3_2_3 */
void* an_3_FPAA3_2_GainHold3_2_3_Components[2] = 
{
   (void*) &an_3_FPAA3_2_GainHold3_2_3_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_2_GainHold3_2_3_Capacitor[1]  /* Cout */
};

/* Component map for Input3_2_1 */
void* an_3_FPAA3_2_Input3_2_1_Components[5] = 
{
   (void*) &an_3_FPAA3_2_Input3_2_1_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_2_Input3_2_1_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_2_Input3_2_1_Capacitor[2]  /* Cout */
};

/* Component map for Input3_2_2 */
void* an_3_FPAA3_2_Input3_2_2_Components[5] = 
{
   (void*) &an_3_FPAA3_2_Input3_2_2_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_2_Input3_2_2_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_2_Input3_2_2_Capacitor[2]  /* Cout */
};

/* Component map for Input3_2_3 */
void* an_3_FPAA3_2_Input3_2_3_Components[5] = 
{
   (void*) &an_3_FPAA3_2_Input3_2_3_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_2_Input3_2_3_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_2_Input3_2_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona3_2_1 */
void* an_3_FPAA3_2_SumadorNeurona3_2_1_Components[5] = 
{
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_1_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_1_Capacitor[1],  /* CinB */
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_1_Capacitor[2],  /* CinC */
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_1_Capacitor[3],  /* CinD */
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona3_2_2 */
void* an_3_FPAA3_2_SumadorNeurona3_2_2_Components[5] = 
{
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_2_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_2_Capacitor[1],  /* CinB */
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_2_Capacitor[2],  /* CinC */
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_2_Capacitor[3],  /* CinD */
   (void*) &an_3_FPAA3_2_SumadorNeurona3_2_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold3_3_1 */
void* an_3_FPAA3_3_GainHold3_3_1_Components[2] = 
{
   (void*) &an_3_FPAA3_3_GainHold3_3_1_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_3_GainHold3_3_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold3_3_2 */
void* an_3_FPAA3_3_GainHold3_3_2_Components[2] = 
{
   (void*) &an_3_FPAA3_3_GainHold3_3_2_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_3_GainHold3_3_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold3_3_3 */
void* an_3_FPAA3_3_GainHold3_3_3_Components[2] = 
{
   (void*) &an_3_FPAA3_3_GainHold3_3_3_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_3_GainHold3_3_3_Capacitor[1]  /* Cout */
};

/* Component map for Input3_3_1 */
void* an_3_FPAA3_3_Input3_3_1_Components[5] = 
{
   (void*) &an_3_FPAA3_3_Input3_3_1_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_3_Input3_3_1_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_3_Input3_3_1_Capacitor[2]  /* Cout */
};

/* Component map for Input3_3_2 */
void* an_3_FPAA3_3_Input3_3_2_Components[5] = 
{
   (void*) &an_3_FPAA3_3_Input3_3_2_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_3_Input3_3_2_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_3_Input3_3_2_Capacitor[2]  /* Cout */
};

/* Component map for Input3_3_3 */
void* an_3_FPAA3_3_Input3_3_3_Components[5] = 
{
   (void*) &an_3_FPAA3_3_Input3_3_3_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_3_Input3_3_3_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_3_Input3_3_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona3_3_1 */
void* an_3_FPAA3_3_SumadorNeurona3_3_1_Components[5] = 
{
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_1_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_1_Capacitor[1],  /* CinB */
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_1_Capacitor[2],  /* CinC */
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_1_Capacitor[3],  /* CinD */
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona3_3_2 */
void* an_3_FPAA3_3_SumadorNeurona3_3_2_Components[5] = 
{
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_2_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_2_Capacitor[1],  /* CinB */
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_2_Capacitor[2],  /* CinC */
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_2_Capacitor[3],  /* CinD */
   (void*) &an_3_FPAA3_3_SumadorNeurona3_3_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold3_4_1 */
void* an_3_FPAA3_4_GainHold3_4_1_Components[2] = 
{
   (void*) &an_3_FPAA3_4_GainHold3_4_1_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_4_GainHold3_4_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold3_4_2 */
void* an_3_FPAA3_4_GainHold3_4_2_Components[2] = 
{
   (void*) &an_3_FPAA3_4_GainHold3_4_2_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_4_GainHold3_4_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold3_4_3 */
void* an_3_FPAA3_4_GainHold3_4_3_Components[2] = 
{
   (void*) &an_3_FPAA3_4_GainHold3_4_3_Capacitor[0],  /* Cin */
   (void*) &an_3_FPAA3_4_GainHold3_4_3_Capacitor[1]  /* Cout */
};

/* Component map for Input3_4_1 */
void* an_3_FPAA3_4_Input3_4_1_Components[5] = 
{
   (void*) &an_3_FPAA3_4_Input3_4_1_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_4_Input3_4_1_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_4_Input3_4_1_Capacitor[2]  /* Cout */
};

/* Component map for Input3_4_2 */
void* an_3_FPAA3_4_Input3_4_2_Components[5] = 
{
   (void*) &an_3_FPAA3_4_Input3_4_2_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_4_Input3_4_2_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_4_Input3_4_2_Capacitor[2]  /* Cout */
};

/* Component map for Input3_4_3 */
void* an_3_FPAA3_4_Input3_4_3_Components[5] = 
{
   (void*) &an_3_FPAA3_4_Input3_4_3_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_4_Input3_4_3_Capacitor[1],  /* CinB */
   (void*) an_3_apiInvalid,               /* CinC */
   (void*) an_3_apiInvalid,               /* CinD */
   (void*) &an_3_FPAA3_4_Input3_4_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona3_4_1 */
void* an_3_FPAA3_4_SumadorNeurona3_4_1_Components[5] = 
{
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_1_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_1_Capacitor[1],  /* CinB */
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_1_Capacitor[2],  /* CinC */
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_1_Capacitor[3],  /* CinD */
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona3_4_2 */
void* an_3_FPAA3_4_SumadorNeurona3_4_2_Components[5] = 
{
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_2_Capacitor[0],  /* CinA */
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_2_Capacitor[1],  /* CinB */
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_2_Capacitor[2],  /* CinC */
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_2_Capacitor[3],  /* CinD */
   (void*) &an_3_FPAA3_4_SumadorNeurona3_4_2_Capacitor[4]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_3_apiCAMComponentData[an_3_apiCAMCount] =
{
   an_3_FPAA3_1_GainHold3_1_1_Components,   /* an_3_FPAA3_1_GainHold3_1_1 */
   an_3_FPAA3_1_GainHold3_1_2_Components,   /* an_3_FPAA3_1_GainHold3_1_2 */
   an_3_FPAA3_1_GainHold3_1_3_Components,   /* an_3_FPAA3_1_GainHold3_1_3 */
   an_3_FPAA3_1_Input3_1_1_Components,      /* an_3_FPAA3_1_Input3_1_1 */
   an_3_FPAA3_1_Input3_1_2_Components,      /* an_3_FPAA3_1_Input3_1_2 */
   an_3_FPAA3_1_Input3_1_3_Components,      /* an_3_FPAA3_1_Input3_1_3 */
   an_3_FPAA3_1_SumadorNeurona3_1_1_Components, /* an_3_FPAA3_1_SumadorNeurona3_1_1 */
   an_3_FPAA3_1_SumadorNeurona3_1_2_Components, /* an_3_FPAA3_1_SumadorNeurona3_1_2 */
   an_3_FPAA3_2_GainHold3_2_1_Components,   /* an_3_FPAA3_2_GainHold3_2_1 */
   an_3_FPAA3_2_GainHold3_2_2_Components,   /* an_3_FPAA3_2_GainHold3_2_2 */
   an_3_FPAA3_2_GainHold3_2_3_Components,   /* an_3_FPAA3_2_GainHold3_2_3 */
   an_3_FPAA3_2_Input3_2_1_Components,      /* an_3_FPAA3_2_Input3_2_1 */
   an_3_FPAA3_2_Input3_2_2_Components,      /* an_3_FPAA3_2_Input3_2_2 */
   an_3_FPAA3_2_Input3_2_3_Components,      /* an_3_FPAA3_2_Input3_2_3 */
   an_3_FPAA3_2_SumadorNeurona3_2_1_Components, /* an_3_FPAA3_2_SumadorNeurona3_2_1 */
   an_3_FPAA3_2_SumadorNeurona3_2_2_Components, /* an_3_FPAA3_2_SumadorNeurona3_2_2 */
   an_3_FPAA3_3_GainHold3_3_1_Components,   /* an_3_FPAA3_3_GainHold3_3_1 */
   an_3_FPAA3_3_GainHold3_3_2_Components,   /* an_3_FPAA3_3_GainHold3_3_2 */
   an_3_FPAA3_3_GainHold3_3_3_Components,   /* an_3_FPAA3_3_GainHold3_3_3 */
   an_3_FPAA3_3_Input3_3_1_Components,      /* an_3_FPAA3_3_Input3_3_1 */
   an_3_FPAA3_3_Input3_3_2_Components,      /* an_3_FPAA3_3_Input3_3_2 */
   an_3_FPAA3_3_Input3_3_3_Components,      /* an_3_FPAA3_3_Input3_3_3 */
   an_3_FPAA3_3_SumadorNeurona3_3_1_Components, /* an_3_FPAA3_3_SumadorNeurona3_3_1 */
   an_3_FPAA3_3_SumadorNeurona3_3_2_Components, /* an_3_FPAA3_3_SumadorNeurona3_3_2 */
   an_3_FPAA3_4_GainHold3_4_1_Components,   /* an_3_FPAA3_4_GainHold3_4_1 */
   an_3_FPAA3_4_GainHold3_4_2_Components,   /* an_3_FPAA3_4_GainHold3_4_2 */
   an_3_FPAA3_4_GainHold3_4_3_Components,   /* an_3_FPAA3_4_GainHold3_4_3 */
   an_3_FPAA3_4_Input3_4_1_Components,      /* an_3_FPAA3_4_Input3_4_1 */
   an_3_FPAA3_4_Input3_4_2_Components,      /* an_3_FPAA3_4_Input3_4_2 */
   an_3_FPAA3_4_Input3_4_3_Components,      /* an_3_FPAA3_4_Input3_4_3 */
   an_3_FPAA3_4_SumadorNeurona3_4_1_Components, /* an_3_FPAA3_4_SumadorNeurona3_4_1 */
   an_3_FPAA3_4_SumadorNeurona3_4_2_Components  /* an_3_FPAA3_4_SumadorNeurona3_4_2 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_3_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_3_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_3_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_3_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_3_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_3_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_3_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_3_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_3_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_3_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_3_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_3_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_3_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_3_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_3_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_3_apiReconfigData[chip]->length = 3;
        an_3_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_3_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_3_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_3_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_3_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_3_apiReconfigData[chip]->length = 3;
        an_3_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_3_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_3_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_3_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_3_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_3_InitializeVortexReconfigData.  |
  |  an_3_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_3_InitializeApexReconfigData.    |
  |  an_3_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_3_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_3_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_SetVortexReconfigControlFlags(an_Chip chip, an_3_VortexControlByte flags)
     {
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_SetApexReconfigControlFlags(an_Chip chip, an_3_ApexControlByte flags)
     {
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_SetApexReconfigControlFlagsNOP(an_Chip chip, an_3_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_3_VortexControlByte an_3_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_3_ApexControlByte an_3_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_3_apiCapacitor* pCap = an_3_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_3_BuildReconfigDataBlock(an_3_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_3_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_3_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_3_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_3_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_3_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_3_FixedDivide(an_3_IntToFixed(capTry1), an_3_IntToFixed(capTry2));
           realizedError = an_3_FixedDivide(an_3_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_3_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_3_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_3_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_3_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_3_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_3_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_3_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_3_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_3_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_3_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_3_apiReconfigInfo* pInfo = an_3_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_3_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }


/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
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

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_4_apiAddress1[an_4_apiChipCount] =
{
   0x01,                /* an_4_FPAA4_1: 00000001 */
   0x02,                /* an_4_FPAA4_2: 00000010 */
   0x03,                /* an_4_FPAA4_3: 00000011 */
   0x04                 /* an_4_FPAA4_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA4_1. */
const an_Byte an_4_FPAA4_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x05,  0x83,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x08,  0x50,  0x80,  0x00,  0x08,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xEF,  0xFD,  0x50,  0xEF,  0xEF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x17,  0x00,  0x10,  0x01,  0x1F,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x19,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x18,  0x00,  0x10,  0x80,  0xAA,  0xFF,  0xFF,  
   0x80,  0xDF,  0x38,  0x2E,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x05, /* Bank address:  5 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x12,  0x00,  
   0x20,  0x02,  0x15,  0x00,  0x20,  0x02,  0xC1,  0x00,  
   0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x06, /* Bank address:  6 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  0x02,  
   0x14,  0x00,  0x20,  0x82,  0x05,  0x02,  0x13,  0x00,  
   0x10,  0x82,  0x05,  0x02,  0xE1,  0x00,  0x10,  0x00,  
   0x00,  0xFF,  0xFF,  0xFF,  0x62,  0x9F,  0x93,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x08,  0x00,  0x00,  
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x90,  0xE8,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x0A, /* Bank address: 10 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA4_2. */
const an_Byte an_4_FPAA4_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x05,  0x83,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x08,  0x50,  0x80,  0x00,  0x08,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xF6,  0x45,  0x81,  0xF6,  0xF6,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x71,  0x00,  0x10,  0x01,  0x1F,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x19,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x18,  0x00,  0x10,  0x80,  0xAA,  0xFF,  0xFF,  
   0x80,  0xBD,  0x10,  0x65,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x05, /* Bank address:  5 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x12,  0x00,  
   0x20,  0x02,  0x15,  0x00,  0x20,  0x02,  0xC1,  0x00,  
   0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x06, /* Bank address:  6 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  0x02,  
   0x14,  0x00,  0x20,  0x82,  0x05,  0x02,  0x13,  0x00,  
   0x10,  0x82,  0x05,  0x02,  0xE1,  0x00,  0x10,  0x00,  
   0x00,  0xFF,  0xFF,  0xFF,  0x6A,  0xA2,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x08,  0x00,  0x00,  
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x60,  0x8F,  0x90,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x0A, /* Bank address: 10 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA4_3. */
const an_Byte an_4_FPAA4_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x8C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x02, /* Bank address:  2 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x5E,  0x03,  0x00,  0x5E,  0x03,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x03, /* Bank address:  3 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0xFF,  0xFF,  0xFF,  0xAA,  0xF3,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x04, /* Bank address:  4 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x6A,  0xBB,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x90,  0xD5,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x01,  0x00,  0x00,  
   0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x97,  0x1E,  0x1E,  0xFD,  0xD3,  0x77,  0x7C,  0xC6,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x01,  0x13,  0x00,  0x10,  0x01,  0x18,  0x00,  0x10,  
   0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0xA1,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x1C,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x1A,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA4_4. */
const an_Byte an_4_FPAA4_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5A,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x7A,  0xF0,  0x7F,  0xC1,  0x7A,  0x9A,  0xF5,  0xE7,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x1B,  0x00,  0x20,  
   0x01,  0x19,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1A,  0x00,  0x20,  0x01,  0xE1,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0xA6,  0xF0,  0xF9,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x87,  0x30,  0x2C,  0x92,  0x87,  0x6E,  0xA4,  0xA5,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x17,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_4_apiPrimaryConfigInfo an_4_apiPrimaryConfigData[an_4_apiChipCount] =
{
   /* FPAA4_1 */
   {
      an_4_FPAA4_1_PrimaryConfigInfo, /* data */
      543,                          /* length */
   },

   /* FPAA4_2 */
   {
      an_4_FPAA4_2_PrimaryConfigInfo, /* data */
      543,                          /* length */
   },

   /* FPAA4_3 */
   {
      an_4_FPAA4_3_PrimaryConfigInfo, /* data */
      239,                          /* length */
   },

   /* FPAA4_4 */
   {
      an_4_FPAA4_4_PrimaryConfigInfo, /* data */
      261                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_4_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA4_1 */
an_4_apiReconfigInfo an_4_FPAA4_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA4_2 */
an_4_apiReconfigInfo an_4_FPAA4_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA4_3 */
an_4_apiReconfigInfo an_4_FPAA4_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA4_4 */
an_4_apiReconfigInfo an_4_FPAA4_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_4_apiReconfigInfo* an_4_apiReconfigData[an_4_apiChipCount] =
{
   &an_4_FPAA4_1_ReconfigInfo,    /* FPAA4_1 */
   &an_4_FPAA4_2_ReconfigInfo,    /* FPAA4_2 */
   &an_4_FPAA4_3_ReconfigInfo,    /* FPAA4_3 */
   &an_4_FPAA4_4_ReconfigInfo     /* FPAA4_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_4_FPAA4_1_ReconfigBuffer[64] = {0};   /* FPAA4_1 */
an_Byte an_4_FPAA4_2_ReconfigBuffer[64] = {0};   /* FPAA4_2 */
an_Byte an_4_FPAA4_3_ReconfigBuffer[64] = {0};   /* FPAA4_3 */
an_Byte an_4_FPAA4_4_ReconfigBuffer[64] = {0};   /* FPAA4_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_4_apiReconfigBuffer[an_4_apiChipCount] =
{
   an_4_FPAA4_1_ReconfigBuffer,   /* FPAA4_1 */
   an_4_FPAA4_2_ReconfigBuffer,   /* FPAA4_2 */
   an_4_FPAA4_3_ReconfigBuffer,   /* FPAA4_3 */
   an_4_FPAA4_4_ReconfigBuffer    /* FPAA4_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_4_apiChipFromCAM[an_4_apiCAMCount] =
{
   an_4_FPAA4_1,        /* "an_4_FPAA4_1_GainHold4_1_1" in chip "FPAA4_1" */
   an_4_FPAA4_1,        /* "an_4_FPAA4_1_GainHold4_1_2" in chip "FPAA4_1" */
   an_4_FPAA4_1,        /* "an_4_FPAA4_1_GainHold4_1_3" in chip "FPAA4_1" */
   an_4_FPAA4_1,        /* "an_4_FPAA4_1_Input4_1_1" in chip "FPAA4_1" */
   an_4_FPAA4_1,        /* "an_4_FPAA4_1_Input4_1_2" in chip "FPAA4_1" */
   an_4_FPAA4_1,        /* "an_4_FPAA4_1_SumadorNeurona4_1_1" in chip "FPAA4_1" */
   an_4_FPAA4_1,        /* "an_4_FPAA4_1_SumadorNeurona4_1_2" in chip "FPAA4_1" */
   an_4_FPAA4_1,        /* "an_4_FPAA4_1_TransferFunction4_1_1" in chip "FPAA4_1" */
   an_4_FPAA4_2,        /* "an_4_FPAA4_2_GainHold4_2_1" in chip "FPAA4_2" */
   an_4_FPAA4_2,        /* "an_4_FPAA4_2_GainHold4_2_2" in chip "FPAA4_2" */
   an_4_FPAA4_2,        /* "an_4_FPAA4_2_GainHold4_2_3" in chip "FPAA4_2" */
   an_4_FPAA4_2,        /* "an_4_FPAA4_2_Input4_2_1" in chip "FPAA4_2" */
   an_4_FPAA4_2,        /* "an_4_FPAA4_2_Input4_2_2" in chip "FPAA4_2" */
   an_4_FPAA4_2,        /* "an_4_FPAA4_2_SumadorNeurona4_2_1" in chip "FPAA4_2" */
   an_4_FPAA4_2,        /* "an_4_FPAA4_2_SumadorNeurona4_2_2" in chip "FPAA4_2" */
   an_4_FPAA4_2,        /* "an_4_FPAA4_2_TransferFunction4_2_1" in chip "FPAA4_2" */
   an_4_FPAA4_3,        /* "an_4_FPAA4_3_GainHold4_3_1" in chip "FPAA4_3" */
   an_4_FPAA4_3,        /* "an_4_FPAA4_3_GainHold4_3_2" in chip "FPAA4_3" */
   an_4_FPAA4_3,        /* "an_4_FPAA4_3_GainHold4_3_3" in chip "FPAA4_3" */
   an_4_FPAA4_3,        /* "an_4_FPAA4_3_Input4_3_1" in chip "FPAA4_3" */
   an_4_FPAA4_3,        /* "an_4_FPAA4_3_Input4_3_2" in chip "FPAA4_3" */
   an_4_FPAA4_3,        /* "an_4_FPAA4_3_Input4_3_3" in chip "FPAA4_3" */
   an_4_FPAA4_3,        /* "an_4_FPAA4_3_SumadorNeurona4_3_1" in chip "FPAA4_3" */
   an_4_FPAA4_3,        /* "an_4_FPAA4_3_SumadorNeurona4_3_2" in chip "FPAA4_3" */
   an_4_FPAA4_4,        /* "an_4_FPAA4_4_GainHold4_4_1" in chip "FPAA4_4" */
   an_4_FPAA4_4,        /* "an_4_FPAA4_4_GainHold4_4_2" in chip "FPAA4_4" */
   an_4_FPAA4_4,        /* "an_4_FPAA4_4_GainHold4_4_3" in chip "FPAA4_4" */
   an_4_FPAA4_4,        /* "an_4_FPAA4_4_Input4_4_1" in chip "FPAA4_4" */
   an_4_FPAA4_4,        /* "an_4_FPAA4_4_Input4_4_2" in chip "FPAA4_4" */
   an_4_FPAA4_4,        /* "an_4_FPAA4_4_Input4_4_3" in chip "FPAA4_4" */
   an_4_FPAA4_4,        /* "an_4_FPAA4_4_SumadorNeurona4_4_1" in chip "FPAA4_4" */
   an_4_FPAA4_4         /* "an_4_FPAA4_4_SumadorNeurona4_4_2" in chip "FPAA4_4" */
};

/* Component data table for the apiCapacitor's of GainHold4_1_1. */
extern const an_4_apiCapacitor an_4_FPAA4_1_GainHold4_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of GainHold4_1_2. */
extern const an_4_apiCapacitor an_4_FPAA4_1_GainHold4_1_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of GainHold4_1_3. */
extern const an_4_apiCapacitor an_4_FPAA4_1_GainHold4_1_3_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of Input4_1_1. */
extern const an_4_apiCapacitor an_4_FPAA4_1_Input4_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input4_1_2. */
extern const an_4_apiCapacitor an_4_FPAA4_1_Input4_1_2_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona4_1_1. */
extern const an_4_apiCapacitor an_4_FPAA4_1_SumadorNeurona4_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona4_1_2. */
extern const an_4_apiCapacitor an_4_FPAA4_1_SumadorNeurona4_1_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of TransferFunction4_1_1. */
extern const an_4_apiCapacitor an_4_FPAA4_1_TransferFunction4_1_1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x02  }  /* 5, 2 */
};

/* Component data table for the apiCapacitor's of GainHold4_2_1. */
extern const an_4_apiCapacitor an_4_FPAA4_2_GainHold4_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of GainHold4_2_2. */
extern const an_4_apiCapacitor an_4_FPAA4_2_GainHold4_2_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of GainHold4_2_3. */
extern const an_4_apiCapacitor an_4_FPAA4_2_GainHold4_2_3_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of Input4_2_1. */
extern const an_4_apiCapacitor an_4_FPAA4_2_Input4_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input4_2_2. */
extern const an_4_apiCapacitor an_4_FPAA4_2_Input4_2_2_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona4_2_1. */
extern const an_4_apiCapacitor an_4_FPAA4_2_SumadorNeurona4_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona4_2_2. */
extern const an_4_apiCapacitor an_4_FPAA4_2_SumadorNeurona4_2_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of TransferFunction4_2_1. */
extern const an_4_apiCapacitor an_4_FPAA4_2_TransferFunction4_2_1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x02  }  /* 5, 2 */
};

/* Component data table for the apiCapacitor's of GainHold4_3_1. */
extern const an_4_apiCapacitor an_4_FPAA4_3_GainHold4_3_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of GainHold4_3_2. */
extern const an_4_apiCapacitor an_4_FPAA4_3_GainHold4_3_2_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold4_3_3. */
extern const an_4_apiCapacitor an_4_FPAA4_3_GainHold4_3_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input4_3_1. */
extern const an_4_apiCapacitor an_4_FPAA4_3_Input4_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input4_3_2. */
extern const an_4_apiCapacitor an_4_FPAA4_3_Input4_3_2_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of Input4_3_3. */
extern const an_4_apiCapacitor an_4_FPAA4_3_Input4_3_3_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona4_3_1. */
extern const an_4_apiCapacitor an_4_FPAA4_3_SumadorNeurona4_3_1_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* CinC  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona4_3_2. */
extern const an_4_apiCapacitor an_4_FPAA4_3_SumadorNeurona4_3_2_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinB  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinC  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold4_4_1. */
extern const an_4_apiCapacitor an_4_FPAA4_4_GainHold4_4_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold4_4_2. */
extern const an_4_apiCapacitor an_4_FPAA4_4_GainHold4_4_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold4_4_3. */
extern const an_4_apiCapacitor an_4_FPAA4_4_GainHold4_4_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input4_4_1. */
extern const an_4_apiCapacitor an_4_FPAA4_4_Input4_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input4_4_2. */
extern const an_4_apiCapacitor an_4_FPAA4_4_Input4_4_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input4_4_3. */
extern const an_4_apiCapacitor an_4_FPAA4_4_Input4_4_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona4_4_1. */
extern const an_4_apiCapacitor an_4_FPAA4_4_SumadorNeurona4_4_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona4_4_2. */
extern const an_4_apiCapacitor an_4_FPAA4_4_SumadorNeurona4_4_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component map for GainHold4_1_1 */
void* an_4_FPAA4_1_GainHold4_1_1_Components[2] = 
{
   (void*) &an_4_FPAA4_1_GainHold4_1_1_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_1_GainHold4_1_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold4_1_2 */
void* an_4_FPAA4_1_GainHold4_1_2_Components[2] = 
{
   (void*) &an_4_FPAA4_1_GainHold4_1_2_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_1_GainHold4_1_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold4_1_3 */
void* an_4_FPAA4_1_GainHold4_1_3_Components[2] = 
{
   (void*) &an_4_FPAA4_1_GainHold4_1_3_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_1_GainHold4_1_3_Capacitor[1]  /* Cout */
};

/* Component map for Input4_1_1 */
void* an_4_FPAA4_1_Input4_1_1_Components[5] = 
{
   (void*) &an_4_FPAA4_1_Input4_1_1_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_1_Input4_1_1_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_1_Input4_1_1_Capacitor[2]  /* Cout */
};

/* Component map for Input4_1_2 */
void* an_4_FPAA4_1_Input4_1_2_Components[5] = 
{
   (void*) &an_4_FPAA4_1_Input4_1_2_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_1_Input4_1_2_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_1_Input4_1_2_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona4_1_1 */
void* an_4_FPAA4_1_SumadorNeurona4_1_1_Components[5] = 
{
   (void*) &an_4_FPAA4_1_SumadorNeurona4_1_1_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_1_SumadorNeurona4_1_1_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_1_SumadorNeurona4_1_1_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona4_1_2 */
void* an_4_FPAA4_1_SumadorNeurona4_1_2_Components[5] = 
{
   (void*) &an_4_FPAA4_1_SumadorNeurona4_1_2_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_1_SumadorNeurona4_1_2_Capacitor[1],  /* CinB */
   (void*) &an_4_FPAA4_1_SumadorNeurona4_1_2_Capacitor[2],  /* CinC */
   (void*) &an_4_FPAA4_1_SumadorNeurona4_1_2_Capacitor[3],  /* CinD */
   (void*) &an_4_FPAA4_1_SumadorNeurona4_1_2_Capacitor[4]  /* Cout */
};

/* Component map for TransferFunction4_1_1 */
void* an_4_FPAA4_1_TransferFunction4_1_1_Components[1] = 
{
   (void*) &an_4_FPAA4_1_TransferFunction4_1_1_Capacitor[0]  /* Cout */
};

/* Component map for GainHold4_2_1 */
void* an_4_FPAA4_2_GainHold4_2_1_Components[2] = 
{
   (void*) &an_4_FPAA4_2_GainHold4_2_1_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_2_GainHold4_2_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold4_2_2 */
void* an_4_FPAA4_2_GainHold4_2_2_Components[2] = 
{
   (void*) &an_4_FPAA4_2_GainHold4_2_2_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_2_GainHold4_2_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold4_2_3 */
void* an_4_FPAA4_2_GainHold4_2_3_Components[2] = 
{
   (void*) &an_4_FPAA4_2_GainHold4_2_3_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_2_GainHold4_2_3_Capacitor[1]  /* Cout */
};

/* Component map for Input4_2_1 */
void* an_4_FPAA4_2_Input4_2_1_Components[5] = 
{
   (void*) &an_4_FPAA4_2_Input4_2_1_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_2_Input4_2_1_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_2_Input4_2_1_Capacitor[2]  /* Cout */
};

/* Component map for Input4_2_2 */
void* an_4_FPAA4_2_Input4_2_2_Components[5] = 
{
   (void*) &an_4_FPAA4_2_Input4_2_2_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_2_Input4_2_2_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_2_Input4_2_2_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona4_2_1 */
void* an_4_FPAA4_2_SumadorNeurona4_2_1_Components[5] = 
{
   (void*) &an_4_FPAA4_2_SumadorNeurona4_2_1_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_2_SumadorNeurona4_2_1_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_2_SumadorNeurona4_2_1_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona4_2_2 */
void* an_4_FPAA4_2_SumadorNeurona4_2_2_Components[5] = 
{
   (void*) &an_4_FPAA4_2_SumadorNeurona4_2_2_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_2_SumadorNeurona4_2_2_Capacitor[1],  /* CinB */
   (void*) &an_4_FPAA4_2_SumadorNeurona4_2_2_Capacitor[2],  /* CinC */
   (void*) &an_4_FPAA4_2_SumadorNeurona4_2_2_Capacitor[3],  /* CinD */
   (void*) &an_4_FPAA4_2_SumadorNeurona4_2_2_Capacitor[4]  /* Cout */
};

/* Component map for TransferFunction4_2_1 */
void* an_4_FPAA4_2_TransferFunction4_2_1_Components[1] = 
{
   (void*) &an_4_FPAA4_2_TransferFunction4_2_1_Capacitor[0]  /* Cout */
};

/* Component map for GainHold4_3_1 */
void* an_4_FPAA4_3_GainHold4_3_1_Components[2] = 
{
   (void*) &an_4_FPAA4_3_GainHold4_3_1_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_3_GainHold4_3_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold4_3_2 */
void* an_4_FPAA4_3_GainHold4_3_2_Components[2] = 
{
   (void*) &an_4_FPAA4_3_GainHold4_3_2_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_3_GainHold4_3_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold4_3_3 */
void* an_4_FPAA4_3_GainHold4_3_3_Components[2] = 
{
   (void*) &an_4_FPAA4_3_GainHold4_3_3_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_3_GainHold4_3_3_Capacitor[1]  /* Cout */
};

/* Component map for Input4_3_1 */
void* an_4_FPAA4_3_Input4_3_1_Components[5] = 
{
   (void*) &an_4_FPAA4_3_Input4_3_1_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_3_Input4_3_1_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_3_Input4_3_1_Capacitor[2]  /* Cout */
};

/* Component map for Input4_3_2 */
void* an_4_FPAA4_3_Input4_3_2_Components[5] = 
{
   (void*) &an_4_FPAA4_3_Input4_3_2_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_3_Input4_3_2_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_3_Input4_3_2_Capacitor[2]  /* Cout */
};

/* Component map for Input4_3_3 */
void* an_4_FPAA4_3_Input4_3_3_Components[5] = 
{
   (void*) &an_4_FPAA4_3_Input4_3_3_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_3_Input4_3_3_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_3_Input4_3_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona4_3_1 */
void* an_4_FPAA4_3_SumadorNeurona4_3_1_Components[5] = 
{
   (void*) &an_4_FPAA4_3_SumadorNeurona4_3_1_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_3_SumadorNeurona4_3_1_Capacitor[1],  /* CinB */
   (void*) &an_4_FPAA4_3_SumadorNeurona4_3_1_Capacitor[2],  /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_3_SumadorNeurona4_3_1_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona4_3_2 */
void* an_4_FPAA4_3_SumadorNeurona4_3_2_Components[5] = 
{
   (void*) &an_4_FPAA4_3_SumadorNeurona4_3_2_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_3_SumadorNeurona4_3_2_Capacitor[1],  /* CinB */
   (void*) &an_4_FPAA4_3_SumadorNeurona4_3_2_Capacitor[2],  /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_3_SumadorNeurona4_3_2_Capacitor[3]  /* Cout */
};

/* Component map for GainHold4_4_1 */
void* an_4_FPAA4_4_GainHold4_4_1_Components[2] = 
{
   (void*) &an_4_FPAA4_4_GainHold4_4_1_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_4_GainHold4_4_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold4_4_2 */
void* an_4_FPAA4_4_GainHold4_4_2_Components[2] = 
{
   (void*) &an_4_FPAA4_4_GainHold4_4_2_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_4_GainHold4_4_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold4_4_3 */
void* an_4_FPAA4_4_GainHold4_4_3_Components[2] = 
{
   (void*) &an_4_FPAA4_4_GainHold4_4_3_Capacitor[0],  /* Cin */
   (void*) &an_4_FPAA4_4_GainHold4_4_3_Capacitor[1]  /* Cout */
};

/* Component map for Input4_4_1 */
void* an_4_FPAA4_4_Input4_4_1_Components[5] = 
{
   (void*) &an_4_FPAA4_4_Input4_4_1_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_4_Input4_4_1_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_4_Input4_4_1_Capacitor[2]  /* Cout */
};

/* Component map for Input4_4_2 */
void* an_4_FPAA4_4_Input4_4_2_Components[5] = 
{
   (void*) &an_4_FPAA4_4_Input4_4_2_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_4_Input4_4_2_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_4_Input4_4_2_Capacitor[2]  /* Cout */
};

/* Component map for Input4_4_3 */
void* an_4_FPAA4_4_Input4_4_3_Components[5] = 
{
   (void*) &an_4_FPAA4_4_Input4_4_3_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_4_Input4_4_3_Capacitor[1],  /* CinB */
   (void*) an_4_apiInvalid,               /* CinC */
   (void*) an_4_apiInvalid,               /* CinD */
   (void*) &an_4_FPAA4_4_Input4_4_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona4_4_1 */
void* an_4_FPAA4_4_SumadorNeurona4_4_1_Components[5] = 
{
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_1_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_1_Capacitor[1],  /* CinB */
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_1_Capacitor[2],  /* CinC */
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_1_Capacitor[3],  /* CinD */
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona4_4_2 */
void* an_4_FPAA4_4_SumadorNeurona4_4_2_Components[5] = 
{
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_2_Capacitor[0],  /* CinA */
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_2_Capacitor[1],  /* CinB */
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_2_Capacitor[2],  /* CinC */
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_2_Capacitor[3],  /* CinD */
   (void*) &an_4_FPAA4_4_SumadorNeurona4_4_2_Capacitor[4]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_4_apiCAMComponentData[an_4_apiCAMCount] =
{
   an_4_FPAA4_1_GainHold4_1_1_Components,   /* an_4_FPAA4_1_GainHold4_1_1 */
   an_4_FPAA4_1_GainHold4_1_2_Components,   /* an_4_FPAA4_1_GainHold4_1_2 */
   an_4_FPAA4_1_GainHold4_1_3_Components,   /* an_4_FPAA4_1_GainHold4_1_3 */
   an_4_FPAA4_1_Input4_1_1_Components,      /* an_4_FPAA4_1_Input4_1_1 */
   an_4_FPAA4_1_Input4_1_2_Components,      /* an_4_FPAA4_1_Input4_1_2 */
   an_4_FPAA4_1_SumadorNeurona4_1_1_Components, /* an_4_FPAA4_1_SumadorNeurona4_1_1 */
   an_4_FPAA4_1_SumadorNeurona4_1_2_Components, /* an_4_FPAA4_1_SumadorNeurona4_1_2 */
   an_4_FPAA4_1_TransferFunction4_1_1_Components, /* an_4_FPAA4_1_TransferFunction4_1_1 */
   an_4_FPAA4_2_GainHold4_2_1_Components,   /* an_4_FPAA4_2_GainHold4_2_1 */
   an_4_FPAA4_2_GainHold4_2_2_Components,   /* an_4_FPAA4_2_GainHold4_2_2 */
   an_4_FPAA4_2_GainHold4_2_3_Components,   /* an_4_FPAA4_2_GainHold4_2_3 */
   an_4_FPAA4_2_Input4_2_1_Components,      /* an_4_FPAA4_2_Input4_2_1 */
   an_4_FPAA4_2_Input4_2_2_Components,      /* an_4_FPAA4_2_Input4_2_2 */
   an_4_FPAA4_2_SumadorNeurona4_2_1_Components, /* an_4_FPAA4_2_SumadorNeurona4_2_1 */
   an_4_FPAA4_2_SumadorNeurona4_2_2_Components, /* an_4_FPAA4_2_SumadorNeurona4_2_2 */
   an_4_FPAA4_2_TransferFunction4_2_1_Components, /* an_4_FPAA4_2_TransferFunction4_2_1 */
   an_4_FPAA4_3_GainHold4_3_1_Components,   /* an_4_FPAA4_3_GainHold4_3_1 */
   an_4_FPAA4_3_GainHold4_3_2_Components,   /* an_4_FPAA4_3_GainHold4_3_2 */
   an_4_FPAA4_3_GainHold4_3_3_Components,   /* an_4_FPAA4_3_GainHold4_3_3 */
   an_4_FPAA4_3_Input4_3_1_Components,      /* an_4_FPAA4_3_Input4_3_1 */
   an_4_FPAA4_3_Input4_3_2_Components,      /* an_4_FPAA4_3_Input4_3_2 */
   an_4_FPAA4_3_Input4_3_3_Components,      /* an_4_FPAA4_3_Input4_3_3 */
   an_4_FPAA4_3_SumadorNeurona4_3_1_Components, /* an_4_FPAA4_3_SumadorNeurona4_3_1 */
   an_4_FPAA4_3_SumadorNeurona4_3_2_Components, /* an_4_FPAA4_3_SumadorNeurona4_3_2 */
   an_4_FPAA4_4_GainHold4_4_1_Components,   /* an_4_FPAA4_4_GainHold4_4_1 */
   an_4_FPAA4_4_GainHold4_4_2_Components,   /* an_4_FPAA4_4_GainHold4_4_2 */
   an_4_FPAA4_4_GainHold4_4_3_Components,   /* an_4_FPAA4_4_GainHold4_4_3 */
   an_4_FPAA4_4_Input4_4_1_Components,      /* an_4_FPAA4_4_Input4_4_1 */
   an_4_FPAA4_4_Input4_4_2_Components,      /* an_4_FPAA4_4_Input4_4_2 */
   an_4_FPAA4_4_Input4_4_3_Components,      /* an_4_FPAA4_4_Input4_4_3 */
   an_4_FPAA4_4_SumadorNeurona4_4_1_Components, /* an_4_FPAA4_4_SumadorNeurona4_4_1 */
   an_4_FPAA4_4_SumadorNeurona4_4_2_Components  /* an_4_FPAA4_4_SumadorNeurona4_4_2 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_4_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_4_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_4_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_4_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_4_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_4_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_4_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_4_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_4_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_4_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_4_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_4_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_4_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_4_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_4_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_4_apiReconfigData[chip]->length = 3;
        an_4_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_4_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_4_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_4_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_4_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_4_apiReconfigData[chip]->length = 3;
        an_4_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_4_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_4_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_4_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_4_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_4_InitializeVortexReconfigData.  |
  |  an_4_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_4_InitializeApexReconfigData.    |
  |  an_4_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_4_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_4_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_SetVortexReconfigControlFlags(an_Chip chip, an_4_VortexControlByte flags)
     {
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_SetApexReconfigControlFlags(an_Chip chip, an_4_ApexControlByte flags)
     {
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_SetApexReconfigControlFlagsNOP(an_Chip chip, an_4_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_4_VortexControlByte an_4_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_4_ApexControlByte an_4_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_4_apiCapacitor* pCap = an_4_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_4_BuildReconfigDataBlock(an_4_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_4_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_4_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_4_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_4_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_4_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_4_FixedDivide(an_4_IntToFixed(capTry1), an_4_IntToFixed(capTry2));
           realizedError = an_4_FixedDivide(an_4_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_4_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_4_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_4_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_4_BuildReconfigDataBlock(an_4_apiChipFromCAM[cam], bank, byte, values, count);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_4_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_4_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_4_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_4_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_4_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_4_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_4_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_4_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_4_apiReconfigInfo* pInfo = an_4_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_4_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
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

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_5_apiAddress1[an_5_apiChipCount] =
{
   0x01,                /* an_5_FPAA5_1: 00000001 */
   0x02,                /* an_5_FPAA5_2: 00000010 */
   0x03,                /* an_5_FPAA5_3: 00000011 */
   0x04                 /* an_5_FPAA5_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA5_1. */
const an_Byte an_5_FPAA5_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xA8,  0x49,  0xE5,  0x45,  0xA8,  0xA0,  0xE5,  0xF0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x1B,  0x00,  0x20,  
   0x01,  0x91,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1A,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x90,  0xDD,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0xE2,  0x5B,  0x94,  0x36,  0xE2,  0x98,  0xE7,  0xE4,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x71,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0xC1,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA5_2. */
const an_Byte an_5_FPAA5_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5A,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x75,  0x24,  0xD9,  0x4D,  0x75,  0x94,  0xE2,  0xDE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x19,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1A,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x76,  0xAF,  0xB1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x83,  0x0F,  0x1A,  0xD4,  0x83,  0x96,  0xDA,  0xE1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x17,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA5_3. */
const an_Byte an_5_FPAA5_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xBF,  0xFC,  0xA8,  0xAC,  0xBF,  0xA4,  0xF9,  0xF6,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x91,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0xA1,  0x00,  0x20,  0x01,  0xE1,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x90,  0xDF,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0xF5,  0x35,  0x61,  0x59,  0xF5,  0x70,  0xAE,  0xA8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xD1,  0x00,  0x20,  
   0x01,  0x71,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0xC1,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA5_4. */
const an_Byte an_5_FPAA5_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x05,  0x83,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x08,  0x50,  0x80,  0x00,  0x08,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xF1,  0xF5,  0x6B,  0xF1,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x71,  0x00,  0x10,  0x01,  0x1F,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x19,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x18,  0x00,  0x10,  0x80,  0xAA,  0xFF,  0xFF,  
   0x80,  0xE5,  0x4A,  0x68,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x05, /* Bank address:  5 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x12,  0x00,  
   0x20,  0x02,  0x15,  0x00,  0x20,  0x02,  0x1C,  0x00,  
   0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x06, /* Bank address:  6 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  0x02,  
   0x14,  0x00,  0x20,  0x82,  0x05,  0x02,  0x13,  0x00,  
   0x10,  0x82,  0x05,  0x02,  0xE1,  0x00,  0x10,  0x00,  
   0x00,  0xFF,  0xFF,  0xFF,  0x62,  0x9F,  0x93,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x08,  0x00,  0x00,  
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x90,  0xE8,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x0A, /* Bank address: 10 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_5_apiPrimaryConfigInfo an_5_apiPrimaryConfigData[an_5_apiChipCount] =
{
   /* FPAA5_1 */
   {
      an_5_FPAA5_1_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA5_2 */
   {
      an_5_FPAA5_2_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA5_3 */
   {
      an_5_FPAA5_3_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA5_4 */
   {
      an_5_FPAA5_4_PrimaryConfigInfo, /* data */
      543                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_5_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA5_1 */
an_5_apiReconfigInfo an_5_FPAA5_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA5_2 */
an_5_apiReconfigInfo an_5_FPAA5_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA5_3 */
an_5_apiReconfigInfo an_5_FPAA5_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA5_4 */
an_5_apiReconfigInfo an_5_FPAA5_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_5_apiReconfigInfo* an_5_apiReconfigData[an_5_apiChipCount] =
{
   &an_5_FPAA5_1_ReconfigInfo,    /* FPAA5_1 */
   &an_5_FPAA5_2_ReconfigInfo,    /* FPAA5_2 */
   &an_5_FPAA5_3_ReconfigInfo,    /* FPAA5_3 */
   &an_5_FPAA5_4_ReconfigInfo     /* FPAA5_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_5_FPAA5_1_ReconfigBuffer[64] = {0};   /* FPAA5_1 */
an_Byte an_5_FPAA5_2_ReconfigBuffer[64] = {0};   /* FPAA5_2 */
an_Byte an_5_FPAA5_3_ReconfigBuffer[64] = {0};   /* FPAA5_3 */
an_Byte an_5_FPAA5_4_ReconfigBuffer[64] = {0};   /* FPAA5_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_5_apiReconfigBuffer[an_5_apiChipCount] =
{
   an_5_FPAA5_1_ReconfigBuffer,   /* FPAA5_1 */
   an_5_FPAA5_2_ReconfigBuffer,   /* FPAA5_2 */
   an_5_FPAA5_3_ReconfigBuffer,   /* FPAA5_3 */
   an_5_FPAA5_4_ReconfigBuffer    /* FPAA5_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_5_apiChipFromCAM[an_5_apiCAMCount] =
{
   an_5_FPAA5_1,        /* "an_5_FPAA5_1_GainHold5_1_1" in chip "FPAA5_1" */
   an_5_FPAA5_1,        /* "an_5_FPAA5_1_GainHold5_1_2" in chip "FPAA5_1" */
   an_5_FPAA5_1,        /* "an_5_FPAA5_1_GainHold5_1_3" in chip "FPAA5_1" */
   an_5_FPAA5_1,        /* "an_5_FPAA5_1_Input5_1_1" in chip "FPAA5_1" */
   an_5_FPAA5_1,        /* "an_5_FPAA5_1_Input5_1_2" in chip "FPAA5_1" */
   an_5_FPAA5_1,        /* "an_5_FPAA5_1_Input5_1_3" in chip "FPAA5_1" */
   an_5_FPAA5_1,        /* "an_5_FPAA5_1_SumadorNeurona5_1_1" in chip "FPAA5_1" */
   an_5_FPAA5_1,        /* "an_5_FPAA5_1_SumadorNeurona5_1_2" in chip "FPAA5_1" */
   an_5_FPAA5_2,        /* "an_5_FPAA5_2_GainHold5_2_1" in chip "FPAA5_2" */
   an_5_FPAA5_2,        /* "an_5_FPAA5_2_GainHold5_2_2" in chip "FPAA5_2" */
   an_5_FPAA5_2,        /* "an_5_FPAA5_2_GainHold5_2_3" in chip "FPAA5_2" */
   an_5_FPAA5_2,        /* "an_5_FPAA5_2_Input5_2_1" in chip "FPAA5_2" */
   an_5_FPAA5_2,        /* "an_5_FPAA5_2_Input5_2_2" in chip "FPAA5_2" */
   an_5_FPAA5_2,        /* "an_5_FPAA5_2_Input5_2_3" in chip "FPAA5_2" */
   an_5_FPAA5_2,        /* "an_5_FPAA5_2_SumadorNeurona5_2_1" in chip "FPAA5_2" */
   an_5_FPAA5_2,        /* "an_5_FPAA5_2_SumadorNeurona5_2_2" in chip "FPAA5_2" */
   an_5_FPAA5_3,        /* "an_5_FPAA5_3_GainHold5_3_1" in chip "FPAA5_3" */
   an_5_FPAA5_3,        /* "an_5_FPAA5_3_GainHold5_3_2" in chip "FPAA5_3" */
   an_5_FPAA5_3,        /* "an_5_FPAA5_3_GainHold5_3_3" in chip "FPAA5_3" */
   an_5_FPAA5_3,        /* "an_5_FPAA5_3_Input5_3_1" in chip "FPAA5_3" */
   an_5_FPAA5_3,        /* "an_5_FPAA5_3_Input5_3_2" in chip "FPAA5_3" */
   an_5_FPAA5_3,        /* "an_5_FPAA5_3_Input5_3_3" in chip "FPAA5_3" */
   an_5_FPAA5_3,        /* "an_5_FPAA5_3_SumadorNeurona5_3_1" in chip "FPAA5_3" */
   an_5_FPAA5_3,        /* "an_5_FPAA5_3_SumadorNeurona5_3_2" in chip "FPAA5_3" */
   an_5_FPAA5_4,        /* "an_5_FPAA5_4_GainHold5_4_1" in chip "FPAA5_4" */
   an_5_FPAA5_4,        /* "an_5_FPAA5_4_GainHold5_4_2" in chip "FPAA5_4" */
   an_5_FPAA5_4,        /* "an_5_FPAA5_4_GainHold5_4_3" in chip "FPAA5_4" */
   an_5_FPAA5_4,        /* "an_5_FPAA5_4_Input5_4_1" in chip "FPAA5_4" */
   an_5_FPAA5_4,        /* "an_5_FPAA5_4_Input5_4_2" in chip "FPAA5_4" */
   an_5_FPAA5_4,        /* "an_5_FPAA5_4_SumadorNeurona5_4_1" in chip "FPAA5_4" */
   an_5_FPAA5_4,        /* "an_5_FPAA5_4_SumadorNeurona5_4_2" in chip "FPAA5_4" */
   an_5_FPAA5_4         /* "an_5_FPAA5_4_TransferFunction5_4_1" in chip "FPAA5_4" */
};

/* Component data table for the apiCapacitor's of GainHold5_1_1. */
extern const an_5_apiCapacitor an_5_FPAA5_1_GainHold5_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold5_1_2. */
extern const an_5_apiCapacitor an_5_FPAA5_1_GainHold5_1_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold5_1_3. */
extern const an_5_apiCapacitor an_5_FPAA5_1_GainHold5_1_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input5_1_1. */
extern const an_5_apiCapacitor an_5_FPAA5_1_Input5_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input5_1_2. */
extern const an_5_apiCapacitor an_5_FPAA5_1_Input5_1_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input5_1_3. */
extern const an_5_apiCapacitor an_5_FPAA5_1_Input5_1_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona5_1_1. */
extern const an_5_apiCapacitor an_5_FPAA5_1_SumadorNeurona5_1_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona5_1_2. */
extern const an_5_apiCapacitor an_5_FPAA5_1_SumadorNeurona5_1_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold5_2_1. */
extern const an_5_apiCapacitor an_5_FPAA5_2_GainHold5_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold5_2_2. */
extern const an_5_apiCapacitor an_5_FPAA5_2_GainHold5_2_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold5_2_3. */
extern const an_5_apiCapacitor an_5_FPAA5_2_GainHold5_2_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input5_2_1. */
extern const an_5_apiCapacitor an_5_FPAA5_2_Input5_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input5_2_2. */
extern const an_5_apiCapacitor an_5_FPAA5_2_Input5_2_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input5_2_3. */
extern const an_5_apiCapacitor an_5_FPAA5_2_Input5_2_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona5_2_1. */
extern const an_5_apiCapacitor an_5_FPAA5_2_SumadorNeurona5_2_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona5_2_2. */
extern const an_5_apiCapacitor an_5_FPAA5_2_SumadorNeurona5_2_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold5_3_1. */
extern const an_5_apiCapacitor an_5_FPAA5_3_GainHold5_3_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold5_3_2. */
extern const an_5_apiCapacitor an_5_FPAA5_3_GainHold5_3_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold5_3_3. */
extern const an_5_apiCapacitor an_5_FPAA5_3_GainHold5_3_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input5_3_1. */
extern const an_5_apiCapacitor an_5_FPAA5_3_Input5_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input5_3_2. */
extern const an_5_apiCapacitor an_5_FPAA5_3_Input5_3_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input5_3_3. */
extern const an_5_apiCapacitor an_5_FPAA5_3_Input5_3_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona5_3_1. */
extern const an_5_apiCapacitor an_5_FPAA5_3_SumadorNeurona5_3_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona5_3_2. */
extern const an_5_apiCapacitor an_5_FPAA5_3_SumadorNeurona5_3_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold5_4_1. */
extern const an_5_apiCapacitor an_5_FPAA5_4_GainHold5_4_1_Capacitor[2] = 
{
   /* Cin   */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of GainHold5_4_2. */
extern const an_5_apiCapacitor an_5_FPAA5_4_GainHold5_4_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of GainHold5_4_3. */
extern const an_5_apiCapacitor an_5_FPAA5_4_GainHold5_4_3_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of Input5_4_1. */
extern const an_5_apiCapacitor an_5_FPAA5_4_Input5_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input5_4_2. */
extern const an_5_apiCapacitor an_5_FPAA5_4_Input5_4_2_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona5_4_1. */
extern const an_5_apiCapacitor an_5_FPAA5_4_SumadorNeurona5_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona5_4_2. */
extern const an_5_apiCapacitor an_5_FPAA5_4_SumadorNeurona5_4_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of TransferFunction5_4_1. */
extern const an_5_apiCapacitor an_5_FPAA5_4_TransferFunction5_4_1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x02  }  /* 5, 2 */
};

/* Component map for GainHold5_1_1 */
void* an_5_FPAA5_1_GainHold5_1_1_Components[2] = 
{
   (void*) &an_5_FPAA5_1_GainHold5_1_1_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_1_GainHold5_1_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold5_1_2 */
void* an_5_FPAA5_1_GainHold5_1_2_Components[2] = 
{
   (void*) &an_5_FPAA5_1_GainHold5_1_2_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_1_GainHold5_1_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold5_1_3 */
void* an_5_FPAA5_1_GainHold5_1_3_Components[2] = 
{
   (void*) &an_5_FPAA5_1_GainHold5_1_3_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_1_GainHold5_1_3_Capacitor[1]  /* Cout */
};

/* Component map for Input5_1_1 */
void* an_5_FPAA5_1_Input5_1_1_Components[5] = 
{
   (void*) &an_5_FPAA5_1_Input5_1_1_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_1_Input5_1_1_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_1_Input5_1_1_Capacitor[2]  /* Cout */
};

/* Component map for Input5_1_2 */
void* an_5_FPAA5_1_Input5_1_2_Components[5] = 
{
   (void*) &an_5_FPAA5_1_Input5_1_2_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_1_Input5_1_2_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_1_Input5_1_2_Capacitor[2]  /* Cout */
};

/* Component map for Input5_1_3 */
void* an_5_FPAA5_1_Input5_1_3_Components[5] = 
{
   (void*) &an_5_FPAA5_1_Input5_1_3_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_1_Input5_1_3_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_1_Input5_1_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona5_1_1 */
void* an_5_FPAA5_1_SumadorNeurona5_1_1_Components[5] = 
{
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_1_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_1_Capacitor[1],  /* CinB */
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_1_Capacitor[2],  /* CinC */
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_1_Capacitor[3],  /* CinD */
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona5_1_2 */
void* an_5_FPAA5_1_SumadorNeurona5_1_2_Components[5] = 
{
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_2_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_2_Capacitor[1],  /* CinB */
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_2_Capacitor[2],  /* CinC */
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_2_Capacitor[3],  /* CinD */
   (void*) &an_5_FPAA5_1_SumadorNeurona5_1_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold5_2_1 */
void* an_5_FPAA5_2_GainHold5_2_1_Components[2] = 
{
   (void*) &an_5_FPAA5_2_GainHold5_2_1_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_2_GainHold5_2_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold5_2_2 */
void* an_5_FPAA5_2_GainHold5_2_2_Components[2] = 
{
   (void*) &an_5_FPAA5_2_GainHold5_2_2_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_2_GainHold5_2_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold5_2_3 */
void* an_5_FPAA5_2_GainHold5_2_3_Components[2] = 
{
   (void*) &an_5_FPAA5_2_GainHold5_2_3_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_2_GainHold5_2_3_Capacitor[1]  /* Cout */
};

/* Component map for Input5_2_1 */
void* an_5_FPAA5_2_Input5_2_1_Components[5] = 
{
   (void*) &an_5_FPAA5_2_Input5_2_1_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_2_Input5_2_1_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_2_Input5_2_1_Capacitor[2]  /* Cout */
};

/* Component map for Input5_2_2 */
void* an_5_FPAA5_2_Input5_2_2_Components[5] = 
{
   (void*) &an_5_FPAA5_2_Input5_2_2_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_2_Input5_2_2_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_2_Input5_2_2_Capacitor[2]  /* Cout */
};

/* Component map for Input5_2_3 */
void* an_5_FPAA5_2_Input5_2_3_Components[5] = 
{
   (void*) &an_5_FPAA5_2_Input5_2_3_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_2_Input5_2_3_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_2_Input5_2_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona5_2_1 */
void* an_5_FPAA5_2_SumadorNeurona5_2_1_Components[5] = 
{
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_1_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_1_Capacitor[1],  /* CinB */
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_1_Capacitor[2],  /* CinC */
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_1_Capacitor[3],  /* CinD */
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona5_2_2 */
void* an_5_FPAA5_2_SumadorNeurona5_2_2_Components[5] = 
{
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_2_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_2_Capacitor[1],  /* CinB */
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_2_Capacitor[2],  /* CinC */
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_2_Capacitor[3],  /* CinD */
   (void*) &an_5_FPAA5_2_SumadorNeurona5_2_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold5_3_1 */
void* an_5_FPAA5_3_GainHold5_3_1_Components[2] = 
{
   (void*) &an_5_FPAA5_3_GainHold5_3_1_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_3_GainHold5_3_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold5_3_2 */
void* an_5_FPAA5_3_GainHold5_3_2_Components[2] = 
{
   (void*) &an_5_FPAA5_3_GainHold5_3_2_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_3_GainHold5_3_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold5_3_3 */
void* an_5_FPAA5_3_GainHold5_3_3_Components[2] = 
{
   (void*) &an_5_FPAA5_3_GainHold5_3_3_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_3_GainHold5_3_3_Capacitor[1]  /* Cout */
};

/* Component map for Input5_3_1 */
void* an_5_FPAA5_3_Input5_3_1_Components[5] = 
{
   (void*) &an_5_FPAA5_3_Input5_3_1_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_3_Input5_3_1_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_3_Input5_3_1_Capacitor[2]  /* Cout */
};

/* Component map for Input5_3_2 */
void* an_5_FPAA5_3_Input5_3_2_Components[5] = 
{
   (void*) &an_5_FPAA5_3_Input5_3_2_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_3_Input5_3_2_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_3_Input5_3_2_Capacitor[2]  /* Cout */
};

/* Component map for Input5_3_3 */
void* an_5_FPAA5_3_Input5_3_3_Components[5] = 
{
   (void*) &an_5_FPAA5_3_Input5_3_3_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_3_Input5_3_3_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_3_Input5_3_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona5_3_1 */
void* an_5_FPAA5_3_SumadorNeurona5_3_1_Components[5] = 
{
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_1_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_1_Capacitor[1],  /* CinB */
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_1_Capacitor[2],  /* CinC */
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_1_Capacitor[3],  /* CinD */
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona5_3_2 */
void* an_5_FPAA5_3_SumadorNeurona5_3_2_Components[5] = 
{
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_2_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_2_Capacitor[1],  /* CinB */
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_2_Capacitor[2],  /* CinC */
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_2_Capacitor[3],  /* CinD */
   (void*) &an_5_FPAA5_3_SumadorNeurona5_3_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold5_4_1 */
void* an_5_FPAA5_4_GainHold5_4_1_Components[2] = 
{
   (void*) &an_5_FPAA5_4_GainHold5_4_1_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_4_GainHold5_4_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold5_4_2 */
void* an_5_FPAA5_4_GainHold5_4_2_Components[2] = 
{
   (void*) &an_5_FPAA5_4_GainHold5_4_2_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_4_GainHold5_4_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold5_4_3 */
void* an_5_FPAA5_4_GainHold5_4_3_Components[2] = 
{
   (void*) &an_5_FPAA5_4_GainHold5_4_3_Capacitor[0],  /* Cin */
   (void*) &an_5_FPAA5_4_GainHold5_4_3_Capacitor[1]  /* Cout */
};

/* Component map for Input5_4_1 */
void* an_5_FPAA5_4_Input5_4_1_Components[5] = 
{
   (void*) &an_5_FPAA5_4_Input5_4_1_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_4_Input5_4_1_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_4_Input5_4_1_Capacitor[2]  /* Cout */
};

/* Component map for Input5_4_2 */
void* an_5_FPAA5_4_Input5_4_2_Components[5] = 
{
   (void*) &an_5_FPAA5_4_Input5_4_2_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_4_Input5_4_2_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_4_Input5_4_2_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona5_4_1 */
void* an_5_FPAA5_4_SumadorNeurona5_4_1_Components[5] = 
{
   (void*) &an_5_FPAA5_4_SumadorNeurona5_4_1_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_4_SumadorNeurona5_4_1_Capacitor[1],  /* CinB */
   (void*) an_5_apiInvalid,               /* CinC */
   (void*) an_5_apiInvalid,               /* CinD */
   (void*) &an_5_FPAA5_4_SumadorNeurona5_4_1_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona5_4_2 */
void* an_5_FPAA5_4_SumadorNeurona5_4_2_Components[5] = 
{
   (void*) &an_5_FPAA5_4_SumadorNeurona5_4_2_Capacitor[0],  /* CinA */
   (void*) &an_5_FPAA5_4_SumadorNeurona5_4_2_Capacitor[1],  /* CinB */
   (void*) &an_5_FPAA5_4_SumadorNeurona5_4_2_Capacitor[2],  /* CinC */
   (void*) &an_5_FPAA5_4_SumadorNeurona5_4_2_Capacitor[3],  /* CinD */
   (void*) &an_5_FPAA5_4_SumadorNeurona5_4_2_Capacitor[4]  /* Cout */
};

/* Component map for TransferFunction5_4_1 */
void* an_5_FPAA5_4_TransferFunction5_4_1_Components[1] = 
{
   (void*) &an_5_FPAA5_4_TransferFunction5_4_1_Capacitor[0]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_5_apiCAMComponentData[an_5_apiCAMCount] =
{
   an_5_FPAA5_1_GainHold5_1_1_Components,   /* an_5_FPAA5_1_GainHold5_1_1 */
   an_5_FPAA5_1_GainHold5_1_2_Components,   /* an_5_FPAA5_1_GainHold5_1_2 */
   an_5_FPAA5_1_GainHold5_1_3_Components,   /* an_5_FPAA5_1_GainHold5_1_3 */
   an_5_FPAA5_1_Input5_1_1_Components,      /* an_5_FPAA5_1_Input5_1_1 */
   an_5_FPAA5_1_Input5_1_2_Components,      /* an_5_FPAA5_1_Input5_1_2 */
   an_5_FPAA5_1_Input5_1_3_Components,      /* an_5_FPAA5_1_Input5_1_3 */
   an_5_FPAA5_1_SumadorNeurona5_1_1_Components, /* an_5_FPAA5_1_SumadorNeurona5_1_1 */
   an_5_FPAA5_1_SumadorNeurona5_1_2_Components, /* an_5_FPAA5_1_SumadorNeurona5_1_2 */
   an_5_FPAA5_2_GainHold5_2_1_Components,   /* an_5_FPAA5_2_GainHold5_2_1 */
   an_5_FPAA5_2_GainHold5_2_2_Components,   /* an_5_FPAA5_2_GainHold5_2_2 */
   an_5_FPAA5_2_GainHold5_2_3_Components,   /* an_5_FPAA5_2_GainHold5_2_3 */
   an_5_FPAA5_2_Input5_2_1_Components,      /* an_5_FPAA5_2_Input5_2_1 */
   an_5_FPAA5_2_Input5_2_2_Components,      /* an_5_FPAA5_2_Input5_2_2 */
   an_5_FPAA5_2_Input5_2_3_Components,      /* an_5_FPAA5_2_Input5_2_3 */
   an_5_FPAA5_2_SumadorNeurona5_2_1_Components, /* an_5_FPAA5_2_SumadorNeurona5_2_1 */
   an_5_FPAA5_2_SumadorNeurona5_2_2_Components, /* an_5_FPAA5_2_SumadorNeurona5_2_2 */
   an_5_FPAA5_3_GainHold5_3_1_Components,   /* an_5_FPAA5_3_GainHold5_3_1 */
   an_5_FPAA5_3_GainHold5_3_2_Components,   /* an_5_FPAA5_3_GainHold5_3_2 */
   an_5_FPAA5_3_GainHold5_3_3_Components,   /* an_5_FPAA5_3_GainHold5_3_3 */
   an_5_FPAA5_3_Input5_3_1_Components,      /* an_5_FPAA5_3_Input5_3_1 */
   an_5_FPAA5_3_Input5_3_2_Components,      /* an_5_FPAA5_3_Input5_3_2 */
   an_5_FPAA5_3_Input5_3_3_Components,      /* an_5_FPAA5_3_Input5_3_3 */
   an_5_FPAA5_3_SumadorNeurona5_3_1_Components, /* an_5_FPAA5_3_SumadorNeurona5_3_1 */
   an_5_FPAA5_3_SumadorNeurona5_3_2_Components, /* an_5_FPAA5_3_SumadorNeurona5_3_2 */
   an_5_FPAA5_4_GainHold5_4_1_Components,   /* an_5_FPAA5_4_GainHold5_4_1 */
   an_5_FPAA5_4_GainHold5_4_2_Components,   /* an_5_FPAA5_4_GainHold5_4_2 */
   an_5_FPAA5_4_GainHold5_4_3_Components,   /* an_5_FPAA5_4_GainHold5_4_3 */
   an_5_FPAA5_4_Input5_4_1_Components,      /* an_5_FPAA5_4_Input5_4_1 */
   an_5_FPAA5_4_Input5_4_2_Components,      /* an_5_FPAA5_4_Input5_4_2 */
   an_5_FPAA5_4_SumadorNeurona5_4_1_Components, /* an_5_FPAA5_4_SumadorNeurona5_4_1 */
   an_5_FPAA5_4_SumadorNeurona5_4_2_Components, /* an_5_FPAA5_4_SumadorNeurona5_4_2 */
   an_5_FPAA5_4_TransferFunction5_4_1_Components  /* an_5_FPAA5_4_TransferFunction5_4_1 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_5_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_5_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_5_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_5_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_5_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_5_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_5_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_5_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_5_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_5_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_5_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_5_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_5_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_5_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_5_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_5_apiReconfigData[chip]->length = 3;
        an_5_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_5_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_5_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_5_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_5_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_5_apiReconfigData[chip]->length = 3;
        an_5_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_5_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_5_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_5_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_5_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_5_InitializeVortexReconfigData.  |
  |  an_5_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_5_InitializeApexReconfigData.    |
  |  an_5_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_5_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_5_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_SetVortexReconfigControlFlags(an_Chip chip, an_5_VortexControlByte flags)
     {
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_SetApexReconfigControlFlags(an_Chip chip, an_5_ApexControlByte flags)
     {
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_SetApexReconfigControlFlagsNOP(an_Chip chip, an_5_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_5_VortexControlByte an_5_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_5_ApexControlByte an_5_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_5_apiCapacitor* pCap = an_5_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_5_BuildReconfigDataBlock(an_5_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_5_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_5_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_5_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_5_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_5_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_5_FixedDivide(an_5_IntToFixed(capTry1), an_5_IntToFixed(capTry2));
           realizedError = an_5_FixedDivide(an_5_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_5_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_5_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_5_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_5_BuildReconfigDataBlock(an_5_apiChipFromCAM[cam], bank, byte, values, count);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_5_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_5_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_5_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_5_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_5_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_5_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_5_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_5_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_5_apiReconfigInfo* pInfo = an_5_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_5_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
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

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_6_apiAddress1[an_6_apiChipCount] =
{
   0x01,                /* an_6_FPAA6_1: 00000001 */
   0x02,                /* an_6_FPAA6_2: 00000010 */
   0x03,                /* an_6_FPAA6_3: 00000011 */
   0x04                 /* an_6_FPAA6_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA6_1. */
const an_Byte an_6_FPAA6_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x05,  0x83,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x08,  0x50,  0x80,  0x00,  0x08,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xFA,  0x0D,  0x50,  0xFA,  0xFA,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x71,  0x00,  0x10,  0x01,  0x1F,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x91,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x18,  0x00,  0x10,  0x80,  0xAA,  0xFF,  0xFF,  
   0x80,  0xF0,  0xAC,  0x1C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x05, /* Bank address:  5 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x12,  0x00,  
   0x20,  0x02,  0x15,  0x00,  0x20,  0x02,  0xC1,  0x00,  
   0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x06, /* Bank address:  6 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  0x02,  
   0x14,  0x00,  0x20,  0x82,  0x05,  0x02,  0x13,  0x00,  
   0x10,  0x82,  0x05,  0x02,  0x1E,  0x00,  0x10,  0x00,  
   0x00,  0xFF,  0xFF,  0xFF,  0x6A,  0xA2,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x08,  0x00,  0x00,  
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x60,  0x8F,  0x90,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x0A, /* Bank address: 10 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA6_2. */
const an_Byte an_6_FPAA6_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x8C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x02, /* Bank address:  2 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x5E,  0x03,  0x00,  0x5E,  0x03,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x03, /* Bank address:  3 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0xFF,  0xFF,  0xFF,  0xAA,  0xF3,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x04, /* Bank address:  4 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x6A,  0xBB,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x90,  0xD5,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x01,  0x00,  0x00,  
   0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0xAB,  0x59,  0xF1,  0x02,  0x8B,  0x05,  0x0E,  0x7E,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x01,  0x13,  0x00,  0x10,  0x01,  0x81,  0x00,  0x10,  
   0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x1A,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x1C,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x1A,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA6_3. */
const an_Byte an_6_FPAA6_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5A,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xB6,  0x5C,  0x79,  0x90,  0xB6,  0x9A,  0xF5,  0xE7,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x1B,  0x00,  0x20,  
   0x01,  0x19,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0xA1,  0x00,  0x20,  0x01,  0xE1,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0xA6,  0xF0,  0xF9,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x53,  0xF8,  0xE5,  0xB4,  0x53,  0x6E,  0xA4,  0xA5,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0xD1,  0x00,  0x20,  
   0x01,  0x17,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA6_4. */
const an_Byte an_6_FPAA6_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xCA,  0x51,  0x6F,  0x36,  0xCA,  0xA0,  0xE5,  0xF0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x91,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0xA1,  0x00,  0x20,  0x01,  0xE1,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x90,  0xDD,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x4E,  0x44,  0xC7,  0xB1,  0x4E,  0x98,  0xE7,  0xE4,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x71,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1C,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_6_apiPrimaryConfigInfo an_6_apiPrimaryConfigData[an_6_apiChipCount] =
{
   /* FPAA6_1 */
   {
      an_6_FPAA6_1_PrimaryConfigInfo, /* data */
      543,                          /* length */
   },

   /* FPAA6_2 */
   {
      an_6_FPAA6_2_PrimaryConfigInfo, /* data */
      239,                          /* length */
   },

   /* FPAA6_3 */
   {
      an_6_FPAA6_3_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA6_4 */
   {
      an_6_FPAA6_4_PrimaryConfigInfo, /* data */
      261                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_6_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA6_1 */
an_6_apiReconfigInfo an_6_FPAA6_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA6_2 */
an_6_apiReconfigInfo an_6_FPAA6_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA6_3 */
an_6_apiReconfigInfo an_6_FPAA6_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA6_4 */
an_6_apiReconfigInfo an_6_FPAA6_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_6_apiReconfigInfo* an_6_apiReconfigData[an_6_apiChipCount] =
{
   &an_6_FPAA6_1_ReconfigInfo,    /* FPAA6_1 */
   &an_6_FPAA6_2_ReconfigInfo,    /* FPAA6_2 */
   &an_6_FPAA6_3_ReconfigInfo,    /* FPAA6_3 */
   &an_6_FPAA6_4_ReconfigInfo     /* FPAA6_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_6_FPAA6_1_ReconfigBuffer[64] = {0};   /* FPAA6_1 */
an_Byte an_6_FPAA6_2_ReconfigBuffer[64] = {0};   /* FPAA6_2 */
an_Byte an_6_FPAA6_3_ReconfigBuffer[64] = {0};   /* FPAA6_3 */
an_Byte an_6_FPAA6_4_ReconfigBuffer[64] = {0};   /* FPAA6_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_6_apiReconfigBuffer[an_6_apiChipCount] =
{
   an_6_FPAA6_1_ReconfigBuffer,   /* FPAA6_1 */
   an_6_FPAA6_2_ReconfigBuffer,   /* FPAA6_2 */
   an_6_FPAA6_3_ReconfigBuffer,   /* FPAA6_3 */
   an_6_FPAA6_4_ReconfigBuffer    /* FPAA6_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_6_apiChipFromCAM[an_6_apiCAMCount] =
{
   an_6_FPAA6_1,        /* "an_6_FPAA6_1_GainHold6_1_1" in chip "FPAA6_1" */
   an_6_FPAA6_1,        /* "an_6_FPAA6_1_GainHold6_1_2" in chip "FPAA6_1" */
   an_6_FPAA6_1,        /* "an_6_FPAA6_1_GainHold6_1_3" in chip "FPAA6_1" */
   an_6_FPAA6_1,        /* "an_6_FPAA6_1_Input6_1_1" in chip "FPAA6_1" */
   an_6_FPAA6_1,        /* "an_6_FPAA6_1_Input6_1_2" in chip "FPAA6_1" */
   an_6_FPAA6_1,        /* "an_6_FPAA6_1_SumadorNeurona6_1_1" in chip "FPAA6_1" */
   an_6_FPAA6_1,        /* "an_6_FPAA6_1_SumadorNeurona6_1_2" in chip "FPAA6_1" */
   an_6_FPAA6_1,        /* "an_6_FPAA6_1_TransferFunction6_1_1" in chip "FPAA6_1" */
   an_6_FPAA6_2,        /* "an_6_FPAA6_2_GainHold6_2_1" in chip "FPAA6_2" */
   an_6_FPAA6_2,        /* "an_6_FPAA6_2_GainHold6_2_2" in chip "FPAA6_2" */
   an_6_FPAA6_2,        /* "an_6_FPAA6_2_GainHold6_2_3" in chip "FPAA6_2" */
   an_6_FPAA6_2,        /* "an_6_FPAA6_2_Input6_2_1" in chip "FPAA6_2" */
   an_6_FPAA6_2,        /* "an_6_FPAA6_2_Input6_2_2" in chip "FPAA6_2" */
   an_6_FPAA6_2,        /* "an_6_FPAA6_2_Input6_2_3" in chip "FPAA6_2" */
   an_6_FPAA6_2,        /* "an_6_FPAA6_2_SumadorNeurona6_2_1" in chip "FPAA6_2" */
   an_6_FPAA6_2,        /* "an_6_FPAA6_2_SumadorNeurona6_2_2" in chip "FPAA6_2" */
   an_6_FPAA6_3,        /* "an_6_FPAA6_3_GainHold6_3_1" in chip "FPAA6_3" */
   an_6_FPAA6_3,        /* "an_6_FPAA6_3_GainHold6_3_2" in chip "FPAA6_3" */
   an_6_FPAA6_3,        /* "an_6_FPAA6_3_GainHold6_3_3" in chip "FPAA6_3" */
   an_6_FPAA6_3,        /* "an_6_FPAA6_3_Input6_3_1" in chip "FPAA6_3" */
   an_6_FPAA6_3,        /* "an_6_FPAA6_3_Input6_3_2" in chip "FPAA6_3" */
   an_6_FPAA6_3,        /* "an_6_FPAA6_3_Input6_3_3" in chip "FPAA6_3" */
   an_6_FPAA6_3,        /* "an_6_FPAA6_3_SumadorNeurona6_3_1" in chip "FPAA6_3" */
   an_6_FPAA6_3,        /* "an_6_FPAA6_3_SumadorNeurona6_3_2" in chip "FPAA6_3" */
   an_6_FPAA6_4,        /* "an_6_FPAA6_4_GainHold6_4_1" in chip "FPAA6_4" */
   an_6_FPAA6_4,        /* "an_6_FPAA6_4_GainHold6_4_2" in chip "FPAA6_4" */
   an_6_FPAA6_4,        /* "an_6_FPAA6_4_GainHold6_4_3" in chip "FPAA6_4" */
   an_6_FPAA6_4,        /* "an_6_FPAA6_4_Input6_4_1" in chip "FPAA6_4" */
   an_6_FPAA6_4,        /* "an_6_FPAA6_4_Input6_4_2" in chip "FPAA6_4" */
   an_6_FPAA6_4,        /* "an_6_FPAA6_4_Input6_4_3" in chip "FPAA6_4" */
   an_6_FPAA6_4,        /* "an_6_FPAA6_4_SumadorNeurona6_4_1" in chip "FPAA6_4" */
   an_6_FPAA6_4         /* "an_6_FPAA6_4_SumadorNeurona6_4_2" in chip "FPAA6_4" */
};

/* Component data table for the apiCapacitor's of GainHold6_1_1. */
extern const an_6_apiCapacitor an_6_FPAA6_1_GainHold6_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of GainHold6_1_2. */
extern const an_6_apiCapacitor an_6_FPAA6_1_GainHold6_1_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of GainHold6_1_3. */
extern const an_6_apiCapacitor an_6_FPAA6_1_GainHold6_1_3_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of Input6_1_1. */
extern const an_6_apiCapacitor an_6_FPAA6_1_Input6_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input6_1_2. */
extern const an_6_apiCapacitor an_6_FPAA6_1_Input6_1_2_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona6_1_1. */
extern const an_6_apiCapacitor an_6_FPAA6_1_SumadorNeurona6_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona6_1_2. */
extern const an_6_apiCapacitor an_6_FPAA6_1_SumadorNeurona6_1_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of TransferFunction6_1_1. */
extern const an_6_apiCapacitor an_6_FPAA6_1_TransferFunction6_1_1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x02  }  /* 5, 2 */
};

/* Component data table for the apiCapacitor's of GainHold6_2_1. */
extern const an_6_apiCapacitor an_6_FPAA6_2_GainHold6_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of GainHold6_2_2. */
extern const an_6_apiCapacitor an_6_FPAA6_2_GainHold6_2_2_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold6_2_3. */
extern const an_6_apiCapacitor an_6_FPAA6_2_GainHold6_2_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input6_2_1. */
extern const an_6_apiCapacitor an_6_FPAA6_2_Input6_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input6_2_2. */
extern const an_6_apiCapacitor an_6_FPAA6_2_Input6_2_2_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of Input6_2_3. */
extern const an_6_apiCapacitor an_6_FPAA6_2_Input6_2_3_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona6_2_1. */
extern const an_6_apiCapacitor an_6_FPAA6_2_SumadorNeurona6_2_1_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* CinC  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona6_2_2. */
extern const an_6_apiCapacitor an_6_FPAA6_2_SumadorNeurona6_2_2_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinB  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinC  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold6_3_1. */
extern const an_6_apiCapacitor an_6_FPAA6_3_GainHold6_3_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold6_3_2. */
extern const an_6_apiCapacitor an_6_FPAA6_3_GainHold6_3_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold6_3_3. */
extern const an_6_apiCapacitor an_6_FPAA6_3_GainHold6_3_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input6_3_1. */
extern const an_6_apiCapacitor an_6_FPAA6_3_Input6_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input6_3_2. */
extern const an_6_apiCapacitor an_6_FPAA6_3_Input6_3_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input6_3_3. */
extern const an_6_apiCapacitor an_6_FPAA6_3_Input6_3_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona6_3_1. */
extern const an_6_apiCapacitor an_6_FPAA6_3_SumadorNeurona6_3_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona6_3_2. */
extern const an_6_apiCapacitor an_6_FPAA6_3_SumadorNeurona6_3_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold6_4_1. */
extern const an_6_apiCapacitor an_6_FPAA6_4_GainHold6_4_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold6_4_2. */
extern const an_6_apiCapacitor an_6_FPAA6_4_GainHold6_4_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold6_4_3. */
extern const an_6_apiCapacitor an_6_FPAA6_4_GainHold6_4_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input6_4_1. */
extern const an_6_apiCapacitor an_6_FPAA6_4_Input6_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input6_4_2. */
extern const an_6_apiCapacitor an_6_FPAA6_4_Input6_4_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input6_4_3. */
extern const an_6_apiCapacitor an_6_FPAA6_4_Input6_4_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona6_4_1. */
extern const an_6_apiCapacitor an_6_FPAA6_4_SumadorNeurona6_4_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona6_4_2. */
extern const an_6_apiCapacitor an_6_FPAA6_4_SumadorNeurona6_4_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component map for GainHold6_1_1 */
void* an_6_FPAA6_1_GainHold6_1_1_Components[2] = 
{
   (void*) &an_6_FPAA6_1_GainHold6_1_1_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_1_GainHold6_1_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold6_1_2 */
void* an_6_FPAA6_1_GainHold6_1_2_Components[2] = 
{
   (void*) &an_6_FPAA6_1_GainHold6_1_2_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_1_GainHold6_1_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold6_1_3 */
void* an_6_FPAA6_1_GainHold6_1_3_Components[2] = 
{
   (void*) &an_6_FPAA6_1_GainHold6_1_3_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_1_GainHold6_1_3_Capacitor[1]  /* Cout */
};

/* Component map for Input6_1_1 */
void* an_6_FPAA6_1_Input6_1_1_Components[5] = 
{
   (void*) &an_6_FPAA6_1_Input6_1_1_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_1_Input6_1_1_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_1_Input6_1_1_Capacitor[2]  /* Cout */
};

/* Component map for Input6_1_2 */
void* an_6_FPAA6_1_Input6_1_2_Components[5] = 
{
   (void*) &an_6_FPAA6_1_Input6_1_2_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_1_Input6_1_2_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_1_Input6_1_2_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona6_1_1 */
void* an_6_FPAA6_1_SumadorNeurona6_1_1_Components[5] = 
{
   (void*) &an_6_FPAA6_1_SumadorNeurona6_1_1_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_1_SumadorNeurona6_1_1_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_1_SumadorNeurona6_1_1_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona6_1_2 */
void* an_6_FPAA6_1_SumadorNeurona6_1_2_Components[5] = 
{
   (void*) &an_6_FPAA6_1_SumadorNeurona6_1_2_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_1_SumadorNeurona6_1_2_Capacitor[1],  /* CinB */
   (void*) &an_6_FPAA6_1_SumadorNeurona6_1_2_Capacitor[2],  /* CinC */
   (void*) &an_6_FPAA6_1_SumadorNeurona6_1_2_Capacitor[3],  /* CinD */
   (void*) &an_6_FPAA6_1_SumadorNeurona6_1_2_Capacitor[4]  /* Cout */
};

/* Component map for TransferFunction6_1_1 */
void* an_6_FPAA6_1_TransferFunction6_1_1_Components[1] = 
{
   (void*) &an_6_FPAA6_1_TransferFunction6_1_1_Capacitor[0]  /* Cout */
};

/* Component map for GainHold6_2_1 */
void* an_6_FPAA6_2_GainHold6_2_1_Components[2] = 
{
   (void*) &an_6_FPAA6_2_GainHold6_2_1_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_2_GainHold6_2_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold6_2_2 */
void* an_6_FPAA6_2_GainHold6_2_2_Components[2] = 
{
   (void*) &an_6_FPAA6_2_GainHold6_2_2_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_2_GainHold6_2_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold6_2_3 */
void* an_6_FPAA6_2_GainHold6_2_3_Components[2] = 
{
   (void*) &an_6_FPAA6_2_GainHold6_2_3_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_2_GainHold6_2_3_Capacitor[1]  /* Cout */
};

/* Component map for Input6_2_1 */
void* an_6_FPAA6_2_Input6_2_1_Components[5] = 
{
   (void*) &an_6_FPAA6_2_Input6_2_1_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_2_Input6_2_1_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_2_Input6_2_1_Capacitor[2]  /* Cout */
};

/* Component map for Input6_2_2 */
void* an_6_FPAA6_2_Input6_2_2_Components[5] = 
{
   (void*) &an_6_FPAA6_2_Input6_2_2_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_2_Input6_2_2_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_2_Input6_2_2_Capacitor[2]  /* Cout */
};

/* Component map for Input6_2_3 */
void* an_6_FPAA6_2_Input6_2_3_Components[5] = 
{
   (void*) &an_6_FPAA6_2_Input6_2_3_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_2_Input6_2_3_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_2_Input6_2_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona6_2_1 */
void* an_6_FPAA6_2_SumadorNeurona6_2_1_Components[5] = 
{
   (void*) &an_6_FPAA6_2_SumadorNeurona6_2_1_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_2_SumadorNeurona6_2_1_Capacitor[1],  /* CinB */
   (void*) &an_6_FPAA6_2_SumadorNeurona6_2_1_Capacitor[2],  /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_2_SumadorNeurona6_2_1_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona6_2_2 */
void* an_6_FPAA6_2_SumadorNeurona6_2_2_Components[5] = 
{
   (void*) &an_6_FPAA6_2_SumadorNeurona6_2_2_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_2_SumadorNeurona6_2_2_Capacitor[1],  /* CinB */
   (void*) &an_6_FPAA6_2_SumadorNeurona6_2_2_Capacitor[2],  /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_2_SumadorNeurona6_2_2_Capacitor[3]  /* Cout */
};

/* Component map for GainHold6_3_1 */
void* an_6_FPAA6_3_GainHold6_3_1_Components[2] = 
{
   (void*) &an_6_FPAA6_3_GainHold6_3_1_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_3_GainHold6_3_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold6_3_2 */
void* an_6_FPAA6_3_GainHold6_3_2_Components[2] = 
{
   (void*) &an_6_FPAA6_3_GainHold6_3_2_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_3_GainHold6_3_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold6_3_3 */
void* an_6_FPAA6_3_GainHold6_3_3_Components[2] = 
{
   (void*) &an_6_FPAA6_3_GainHold6_3_3_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_3_GainHold6_3_3_Capacitor[1]  /* Cout */
};

/* Component map for Input6_3_1 */
void* an_6_FPAA6_3_Input6_3_1_Components[5] = 
{
   (void*) &an_6_FPAA6_3_Input6_3_1_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_3_Input6_3_1_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_3_Input6_3_1_Capacitor[2]  /* Cout */
};

/* Component map for Input6_3_2 */
void* an_6_FPAA6_3_Input6_3_2_Components[5] = 
{
   (void*) &an_6_FPAA6_3_Input6_3_2_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_3_Input6_3_2_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_3_Input6_3_2_Capacitor[2]  /* Cout */
};

/* Component map for Input6_3_3 */
void* an_6_FPAA6_3_Input6_3_3_Components[5] = 
{
   (void*) &an_6_FPAA6_3_Input6_3_3_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_3_Input6_3_3_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_3_Input6_3_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona6_3_1 */
void* an_6_FPAA6_3_SumadorNeurona6_3_1_Components[5] = 
{
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_1_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_1_Capacitor[1],  /* CinB */
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_1_Capacitor[2],  /* CinC */
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_1_Capacitor[3],  /* CinD */
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona6_3_2 */
void* an_6_FPAA6_3_SumadorNeurona6_3_2_Components[5] = 
{
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_2_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_2_Capacitor[1],  /* CinB */
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_2_Capacitor[2],  /* CinC */
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_2_Capacitor[3],  /* CinD */
   (void*) &an_6_FPAA6_3_SumadorNeurona6_3_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold6_4_1 */
void* an_6_FPAA6_4_GainHold6_4_1_Components[2] = 
{
   (void*) &an_6_FPAA6_4_GainHold6_4_1_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_4_GainHold6_4_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold6_4_2 */
void* an_6_FPAA6_4_GainHold6_4_2_Components[2] = 
{
   (void*) &an_6_FPAA6_4_GainHold6_4_2_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_4_GainHold6_4_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold6_4_3 */
void* an_6_FPAA6_4_GainHold6_4_3_Components[2] = 
{
   (void*) &an_6_FPAA6_4_GainHold6_4_3_Capacitor[0],  /* Cin */
   (void*) &an_6_FPAA6_4_GainHold6_4_3_Capacitor[1]  /* Cout */
};

/* Component map for Input6_4_1 */
void* an_6_FPAA6_4_Input6_4_1_Components[5] = 
{
   (void*) &an_6_FPAA6_4_Input6_4_1_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_4_Input6_4_1_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_4_Input6_4_1_Capacitor[2]  /* Cout */
};

/* Component map for Input6_4_2 */
void* an_6_FPAA6_4_Input6_4_2_Components[5] = 
{
   (void*) &an_6_FPAA6_4_Input6_4_2_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_4_Input6_4_2_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_4_Input6_4_2_Capacitor[2]  /* Cout */
};

/* Component map for Input6_4_3 */
void* an_6_FPAA6_4_Input6_4_3_Components[5] = 
{
   (void*) &an_6_FPAA6_4_Input6_4_3_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_4_Input6_4_3_Capacitor[1],  /* CinB */
   (void*) an_6_apiInvalid,               /* CinC */
   (void*) an_6_apiInvalid,               /* CinD */
   (void*) &an_6_FPAA6_4_Input6_4_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona6_4_1 */
void* an_6_FPAA6_4_SumadorNeurona6_4_1_Components[5] = 
{
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_1_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_1_Capacitor[1],  /* CinB */
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_1_Capacitor[2],  /* CinC */
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_1_Capacitor[3],  /* CinD */
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona6_4_2 */
void* an_6_FPAA6_4_SumadorNeurona6_4_2_Components[5] = 
{
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_2_Capacitor[0],  /* CinA */
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_2_Capacitor[1],  /* CinB */
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_2_Capacitor[2],  /* CinC */
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_2_Capacitor[3],  /* CinD */
   (void*) &an_6_FPAA6_4_SumadorNeurona6_4_2_Capacitor[4]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_6_apiCAMComponentData[an_6_apiCAMCount] =
{
   an_6_FPAA6_1_GainHold6_1_1_Components,   /* an_6_FPAA6_1_GainHold6_1_1 */
   an_6_FPAA6_1_GainHold6_1_2_Components,   /* an_6_FPAA6_1_GainHold6_1_2 */
   an_6_FPAA6_1_GainHold6_1_3_Components,   /* an_6_FPAA6_1_GainHold6_1_3 */
   an_6_FPAA6_1_Input6_1_1_Components,      /* an_6_FPAA6_1_Input6_1_1 */
   an_6_FPAA6_1_Input6_1_2_Components,      /* an_6_FPAA6_1_Input6_1_2 */
   an_6_FPAA6_1_SumadorNeurona6_1_1_Components, /* an_6_FPAA6_1_SumadorNeurona6_1_1 */
   an_6_FPAA6_1_SumadorNeurona6_1_2_Components, /* an_6_FPAA6_1_SumadorNeurona6_1_2 */
   an_6_FPAA6_1_TransferFunction6_1_1_Components, /* an_6_FPAA6_1_TransferFunction6_1_1 */
   an_6_FPAA6_2_GainHold6_2_1_Components,   /* an_6_FPAA6_2_GainHold6_2_1 */
   an_6_FPAA6_2_GainHold6_2_2_Components,   /* an_6_FPAA6_2_GainHold6_2_2 */
   an_6_FPAA6_2_GainHold6_2_3_Components,   /* an_6_FPAA6_2_GainHold6_2_3 */
   an_6_FPAA6_2_Input6_2_1_Components,      /* an_6_FPAA6_2_Input6_2_1 */
   an_6_FPAA6_2_Input6_2_2_Components,      /* an_6_FPAA6_2_Input6_2_2 */
   an_6_FPAA6_2_Input6_2_3_Components,      /* an_6_FPAA6_2_Input6_2_3 */
   an_6_FPAA6_2_SumadorNeurona6_2_1_Components, /* an_6_FPAA6_2_SumadorNeurona6_2_1 */
   an_6_FPAA6_2_SumadorNeurona6_2_2_Components, /* an_6_FPAA6_2_SumadorNeurona6_2_2 */
   an_6_FPAA6_3_GainHold6_3_1_Components,   /* an_6_FPAA6_3_GainHold6_3_1 */
   an_6_FPAA6_3_GainHold6_3_2_Components,   /* an_6_FPAA6_3_GainHold6_3_2 */
   an_6_FPAA6_3_GainHold6_3_3_Components,   /* an_6_FPAA6_3_GainHold6_3_3 */
   an_6_FPAA6_3_Input6_3_1_Components,      /* an_6_FPAA6_3_Input6_3_1 */
   an_6_FPAA6_3_Input6_3_2_Components,      /* an_6_FPAA6_3_Input6_3_2 */
   an_6_FPAA6_3_Input6_3_3_Components,      /* an_6_FPAA6_3_Input6_3_3 */
   an_6_FPAA6_3_SumadorNeurona6_3_1_Components, /* an_6_FPAA6_3_SumadorNeurona6_3_1 */
   an_6_FPAA6_3_SumadorNeurona6_3_2_Components, /* an_6_FPAA6_3_SumadorNeurona6_3_2 */
   an_6_FPAA6_4_GainHold6_4_1_Components,   /* an_6_FPAA6_4_GainHold6_4_1 */
   an_6_FPAA6_4_GainHold6_4_2_Components,   /* an_6_FPAA6_4_GainHold6_4_2 */
   an_6_FPAA6_4_GainHold6_4_3_Components,   /* an_6_FPAA6_4_GainHold6_4_3 */
   an_6_FPAA6_4_Input6_4_1_Components,      /* an_6_FPAA6_4_Input6_4_1 */
   an_6_FPAA6_4_Input6_4_2_Components,      /* an_6_FPAA6_4_Input6_4_2 */
   an_6_FPAA6_4_Input6_4_3_Components,      /* an_6_FPAA6_4_Input6_4_3 */
   an_6_FPAA6_4_SumadorNeurona6_4_1_Components, /* an_6_FPAA6_4_SumadorNeurona6_4_1 */
   an_6_FPAA6_4_SumadorNeurona6_4_2_Components  /* an_6_FPAA6_4_SumadorNeurona6_4_2 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_6_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_6_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_6_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_6_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_6_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_6_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_6_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_6_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_6_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_6_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_6_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_6_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_6_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_6_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_6_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_6_apiReconfigData[chip]->length = 3;
        an_6_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_6_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_6_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_6_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_6_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_6_apiReconfigData[chip]->length = 3;
        an_6_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_6_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_6_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_6_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_6_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_6_InitializeVortexReconfigData.  |
  |  an_6_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_6_InitializeApexReconfigData.    |
  |  an_6_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_6_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_6_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_SetVortexReconfigControlFlags(an_Chip chip, an_6_VortexControlByte flags)
     {
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_SetApexReconfigControlFlags(an_Chip chip, an_6_ApexControlByte flags)
     {
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_SetApexReconfigControlFlagsNOP(an_Chip chip, an_6_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_6_VortexControlByte an_6_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_6_ApexControlByte an_6_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_6_apiCapacitor* pCap = an_6_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_6_BuildReconfigDataBlock(an_6_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_6_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_6_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_6_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_6_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_6_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_6_FixedDivide(an_6_IntToFixed(capTry1), an_6_IntToFixed(capTry2));
           realizedError = an_6_FixedDivide(an_6_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_6_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_6_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_6_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_6_BuildReconfigDataBlock(an_6_apiChipFromCAM[cam], bank, byte, values, count);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_6_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_6_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_6_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_6_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_6_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_6_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_6_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_6_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_6_apiReconfigInfo* pInfo = an_6_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_6_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
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

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_7_apiAddress1[an_7_apiChipCount] =
{
   0x01,                /* an_7_FPAA7_1: 00000001 */
   0x02,                /* an_7_FPAA7_2: 00000010 */
   0x03,                /* an_7_FPAA7_3: 00000011 */
   0x04                 /* an_7_FPAA7_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA7_1. */
const an_Byte an_7_FPAA7_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5A,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xD7,  0xA5,  0xBA,  0x14,  0xD7,  0x94,  0xE2,  0xDE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x19,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1A,  0x00,  0x20,  0x01,  0xE1,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x76,  0xAF,  0xB1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x49,  0xE7,  0x46,  0xD3,  0x49,  0x96,  0xDA,  0xE1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x17,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0xC1,  0x00,  0x20,  0x01,  0x18,  0x00,  0x20,  
   0x41,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA7_2. */
const an_Byte an_7_FPAA7_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x80,  0x00,  0x05,  0x00,  0x05,  
   0x00,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xB8,  0x0F,  0x41,  0x57,  0xB8,  0xA4,  0xF9,  0xF6,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xB1,  0x00,  0x20,  
   0x01,  0x91,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1A,  0x00,  0x20,  0x01,  0x1E,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xFF,  0x90,  0xDF,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x1B,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x19,  0x00,  0x20,  0x01,  
   0x13,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x00,  0x30,  
   0x01,  0x18,  0x00,  0x05,  0x01,  0x1F,  0x00,  0x10,  
   0x80,  0x5D,  0x7D,  0xC8,  0x80,  0x70,  0xAE,  0xA8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x16, /* Byte count:   22 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x1D,  0x00,  0x20,  
   0x01,  0x71,  0x00,  0x20,  0x01,  0x15,  0x00,  0x10,  
   0x0F,  0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0xC1,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA7_3. */
const an_Byte an_7_FPAA7_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x05,  0x83,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x08,  0x50,  0x80,  0x00,  0x08,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0x9F,  0x7B,  0x97,  0x9F,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x71,  0x00,  0x10,  0x01,  0x1F,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x19,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x18,  0x00,  0x10,  0x80,  0xAA,  0xFF,  0xFF,  
   0x80,  0xC1,  0x4A,  0x5B,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x05, /* Bank address:  5 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x12,  0x00,  
   0x20,  0x02,  0x15,  0x00,  0x20,  0x02,  0xC1,  0x00,  
   0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x06, /* Bank address:  6 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  0x02,  
   0x14,  0x00,  0x20,  0x82,  0x05,  0x02,  0x13,  0x00,  
   0x10,  0x82,  0x05,  0x02,  0xE1,  0x00,  0x10,  0x00,  
   0x00,  0xFF,  0xFF,  0xFF,  0x62,  0x9F,  0x93,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x08,  0x00,  0x00,  
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x90,  0xE8,  0xD8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x0A, /* Bank address: 10 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA7_4. */
const an_Byte an_7_FPAA7_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x05,  0x83,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x08,  0x50,  0x80,  0x00,  0x08,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0x40,  0xA6,  0x2B,  0x40,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x71,  0x00,  0x10,  0x01,  0x1F,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x91,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x18,  0x00,  0x10,  0x80,  0xAA,  0xFF,  0xFF,  
   0x80,  0xA3,  0x61,  0x25,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x05, /* Bank address:  5 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x12,  0x00,  
   0x20,  0x02,  0x15,  0x00,  0x20,  0x02,  0x1C,  0x00,  
   0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x06, /* Bank address:  6 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  0x02,  
   0x14,  0x00,  0x20,  0x82,  0x05,  0x02,  0x13,  0x00,  
   0x10,  0x82,  0x05,  0x02,  0xE1,  0x00,  0x10,  0x00,  
   0x00,  0xFF,  0xFF,  0xFF,  0x6A,  0xA2,  0x9F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x07, /* Bank address:  7 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x17,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  0x00,  0x08,  0x00,  0x00,  
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x08, /* Bank address:  8 */
   0x18, /* Byte count:   24 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  
   0x00,  0x00,  0xFF,  0xFF,  0xFF,  0x60,  0x8F,  0x90,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x13,  0x00,  0x20,  0x01,  
   0x15,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x0A, /* Bank address: 10 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x00,  0x05,  0x01,  0x13,  
   0x00,  0x10,  0x81,  0x05,  0x01,  0x51,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_7_apiPrimaryConfigInfo an_7_apiPrimaryConfigData[an_7_apiChipCount] =
{
   /* FPAA7_1 */
   {
      an_7_FPAA7_1_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA7_2 */
   {
      an_7_FPAA7_2_PrimaryConfigInfo, /* data */
      261,                          /* length */
   },

   /* FPAA7_3 */
   {
      an_7_FPAA7_3_PrimaryConfigInfo, /* data */
      543,                          /* length */
   },

   /* FPAA7_4 */
   {
      an_7_FPAA7_4_PrimaryConfigInfo, /* data */
      543                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_7_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA7_1 */
an_7_apiReconfigInfo an_7_FPAA7_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA7_2 */
an_7_apiReconfigInfo an_7_FPAA7_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA7_3 */
an_7_apiReconfigInfo an_7_FPAA7_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA7_4 */
an_7_apiReconfigInfo an_7_FPAA7_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_7_apiReconfigInfo* an_7_apiReconfigData[an_7_apiChipCount] =
{
   &an_7_FPAA7_1_ReconfigInfo,    /* FPAA7_1 */
   &an_7_FPAA7_2_ReconfigInfo,    /* FPAA7_2 */
   &an_7_FPAA7_3_ReconfigInfo,    /* FPAA7_3 */
   &an_7_FPAA7_4_ReconfigInfo     /* FPAA7_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_7_FPAA7_1_ReconfigBuffer[64] = {0};   /* FPAA7_1 */
an_Byte an_7_FPAA7_2_ReconfigBuffer[64] = {0};   /* FPAA7_2 */
an_Byte an_7_FPAA7_3_ReconfigBuffer[64] = {0};   /* FPAA7_3 */
an_Byte an_7_FPAA7_4_ReconfigBuffer[64] = {0};   /* FPAA7_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_7_apiReconfigBuffer[an_7_apiChipCount] =
{
   an_7_FPAA7_1_ReconfigBuffer,   /* FPAA7_1 */
   an_7_FPAA7_2_ReconfigBuffer,   /* FPAA7_2 */
   an_7_FPAA7_3_ReconfigBuffer,   /* FPAA7_3 */
   an_7_FPAA7_4_ReconfigBuffer    /* FPAA7_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_7_apiChipFromCAM[an_7_apiCAMCount] =
{
   an_7_FPAA7_1,        /* "an_7_FPAA7_1_GainHold7_1_1" in chip "FPAA7_1" */
   an_7_FPAA7_1,        /* "an_7_FPAA7_1_GainHold7_1_2" in chip "FPAA7_1" */
   an_7_FPAA7_1,        /* "an_7_FPAA7_1_GainHold7_1_3" in chip "FPAA7_1" */
   an_7_FPAA7_1,        /* "an_7_FPAA7_1_Input7_1_1" in chip "FPAA7_1" */
   an_7_FPAA7_1,        /* "an_7_FPAA7_1_Input7_1_2" in chip "FPAA7_1" */
   an_7_FPAA7_1,        /* "an_7_FPAA7_1_Input7_1_3" in chip "FPAA7_1" */
   an_7_FPAA7_1,        /* "an_7_FPAA7_1_SumadorNeurona7_1_1" in chip "FPAA7_1" */
   an_7_FPAA7_1,        /* "an_7_FPAA7_1_SumadorNeurona7_1_2" in chip "FPAA7_1" */
   an_7_FPAA7_2,        /* "an_7_FPAA7_2_GainHold7_2_1" in chip "FPAA7_2" */
   an_7_FPAA7_2,        /* "an_7_FPAA7_2_GainHold7_2_2" in chip "FPAA7_2" */
   an_7_FPAA7_2,        /* "an_7_FPAA7_2_GainHold7_2_3" in chip "FPAA7_2" */
   an_7_FPAA7_2,        /* "an_7_FPAA7_2_Input7_2_1" in chip "FPAA7_2" */
   an_7_FPAA7_2,        /* "an_7_FPAA7_2_Input7_2_2" in chip "FPAA7_2" */
   an_7_FPAA7_2,        /* "an_7_FPAA7_2_Input7_2_3" in chip "FPAA7_2" */
   an_7_FPAA7_2,        /* "an_7_FPAA7_2_SumadorNeurona7_2_1" in chip "FPAA7_2" */
   an_7_FPAA7_2,        /* "an_7_FPAA7_2_SumadorNeurona7_2_2" in chip "FPAA7_2" */
   an_7_FPAA7_3,        /* "an_7_FPAA7_3_GainHold7_3_1" in chip "FPAA7_3" */
   an_7_FPAA7_3,        /* "an_7_FPAA7_3_GainHold7_3_2" in chip "FPAA7_3" */
   an_7_FPAA7_3,        /* "an_7_FPAA7_3_GainHold7_3_3" in chip "FPAA7_3" */
   an_7_FPAA7_3,        /* "an_7_FPAA7_3_Input7_3_1" in chip "FPAA7_3" */
   an_7_FPAA7_3,        /* "an_7_FPAA7_3_Input7_3_2" in chip "FPAA7_3" */
   an_7_FPAA7_3,        /* "an_7_FPAA7_3_SumadorNeurona7_3_1" in chip "FPAA7_3" */
   an_7_FPAA7_3,        /* "an_7_FPAA7_3_SumadorNeurona7_3_2" in chip "FPAA7_3" */
   an_7_FPAA7_3,        /* "an_7_FPAA7_3_TransferFunction7_3_1" in chip "FPAA7_3" */
   an_7_FPAA7_4,        /* "an_7_FPAA7_4_GainHold7_4_1" in chip "FPAA7_4" */
   an_7_FPAA7_4,        /* "an_7_FPAA7_4_GainHold7_4_2" in chip "FPAA7_4" */
   an_7_FPAA7_4,        /* "an_7_FPAA7_4_GainHold7_4_3" in chip "FPAA7_4" */
   an_7_FPAA7_4,        /* "an_7_FPAA7_4_Input7_4_1" in chip "FPAA7_4" */
   an_7_FPAA7_4,        /* "an_7_FPAA7_4_Input7_4_2" in chip "FPAA7_4" */
   an_7_FPAA7_4,        /* "an_7_FPAA7_4_SumadorNeurona7_4_1" in chip "FPAA7_4" */
   an_7_FPAA7_4,        /* "an_7_FPAA7_4_SumadorNeurona7_4_2" in chip "FPAA7_4" */
   an_7_FPAA7_4         /* "an_7_FPAA7_4_TransferFunction7_4_1" in chip "FPAA7_4" */
};

/* Component data table for the apiCapacitor's of GainHold7_1_1. */
extern const an_7_apiCapacitor an_7_FPAA7_1_GainHold7_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold7_1_2. */
extern const an_7_apiCapacitor an_7_FPAA7_1_GainHold7_1_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold7_1_3. */
extern const an_7_apiCapacitor an_7_FPAA7_1_GainHold7_1_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input7_1_1. */
extern const an_7_apiCapacitor an_7_FPAA7_1_Input7_1_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input7_1_2. */
extern const an_7_apiCapacitor an_7_FPAA7_1_Input7_1_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input7_1_3. */
extern const an_7_apiCapacitor an_7_FPAA7_1_Input7_1_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona7_1_1. */
extern const an_7_apiCapacitor an_7_FPAA7_1_SumadorNeurona7_1_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona7_1_2. */
extern const an_7_apiCapacitor an_7_FPAA7_1_SumadorNeurona7_1_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold7_2_1. */
extern const an_7_apiCapacitor an_7_FPAA7_2_GainHold7_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of GainHold7_2_2. */
extern const an_7_apiCapacitor an_7_FPAA7_2_GainHold7_2_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x07, }, /* 7, 7 */
   /* Cout  */ { 0x07, 0x06  }  /* 7, 6 */
};

/* Component data table for the apiCapacitor's of GainHold7_2_3. */
extern const an_7_apiCapacitor an_7_FPAA7_2_GainHold7_2_3_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of Input7_2_1. */
extern const an_7_apiCapacitor an_7_FPAA7_2_Input7_2_1_Capacitor[3] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of Input7_2_2. */
extern const an_7_apiCapacitor an_7_FPAA7_2_Input7_2_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input7_2_3. */
extern const an_7_apiCapacitor an_7_FPAA7_2_Input7_2_3_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona7_2_1. */
extern const an_7_apiCapacitor an_7_FPAA7_2_SumadorNeurona7_2_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x04, }, /* 3, 4 */
   /* CinB  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinC  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinD  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona7_2_2. */
extern const an_7_apiCapacitor an_7_FPAA7_2_SumadorNeurona7_2_2_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinC  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinD  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of GainHold7_3_1. */
extern const an_7_apiCapacitor an_7_FPAA7_3_GainHold7_3_1_Capacitor[2] = 
{
   /* Cin   */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of GainHold7_3_2. */
extern const an_7_apiCapacitor an_7_FPAA7_3_GainHold7_3_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of GainHold7_3_3. */
extern const an_7_apiCapacitor an_7_FPAA7_3_GainHold7_3_3_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of Input7_3_1. */
extern const an_7_apiCapacitor an_7_FPAA7_3_Input7_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input7_3_2. */
extern const an_7_apiCapacitor an_7_FPAA7_3_Input7_3_2_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona7_3_1. */
extern const an_7_apiCapacitor an_7_FPAA7_3_SumadorNeurona7_3_1_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona7_3_2. */
extern const an_7_apiCapacitor an_7_FPAA7_3_SumadorNeurona7_3_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of TransferFunction7_3_1. */
extern const an_7_apiCapacitor an_7_FPAA7_3_TransferFunction7_3_1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x02  }  /* 5, 2 */
};

/* Component data table for the apiCapacitor's of GainHold7_4_1. */
extern const an_7_apiCapacitor an_7_FPAA7_4_GainHold7_4_1_Capacitor[2] = 
{
   /* Cin   */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of GainHold7_4_2. */
extern const an_7_apiCapacitor an_7_FPAA7_4_GainHold7_4_2_Capacitor[2] = 
{
   /* Cin   */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of GainHold7_4_3. */
extern const an_7_apiCapacitor an_7_FPAA7_4_GainHold7_4_3_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of Input7_4_1. */
extern const an_7_apiCapacitor an_7_FPAA7_4_Input7_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of Input7_4_2. */
extern const an_7_apiCapacitor an_7_FPAA7_4_Input7_4_2_Capacitor[3] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* Cout  */ { 0x07, 0x05  }  /* 7, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona7_4_1. */
extern const an_7_apiCapacitor an_7_FPAA7_4_SumadorNeurona7_4_1_Capacitor[3] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona7_4_2. */
extern const an_7_apiCapacitor an_7_FPAA7_4_SumadorNeurona7_4_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of TransferFunction7_4_1. */
extern const an_7_apiCapacitor an_7_FPAA7_4_TransferFunction7_4_1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x02  }  /* 5, 2 */
};

/* Component map for GainHold7_1_1 */
void* an_7_FPAA7_1_GainHold7_1_1_Components[2] = 
{
   (void*) &an_7_FPAA7_1_GainHold7_1_1_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_1_GainHold7_1_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold7_1_2 */
void* an_7_FPAA7_1_GainHold7_1_2_Components[2] = 
{
   (void*) &an_7_FPAA7_1_GainHold7_1_2_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_1_GainHold7_1_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold7_1_3 */
void* an_7_FPAA7_1_GainHold7_1_3_Components[2] = 
{
   (void*) &an_7_FPAA7_1_GainHold7_1_3_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_1_GainHold7_1_3_Capacitor[1]  /* Cout */
};

/* Component map for Input7_1_1 */
void* an_7_FPAA7_1_Input7_1_1_Components[5] = 
{
   (void*) &an_7_FPAA7_1_Input7_1_1_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_1_Input7_1_1_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_1_Input7_1_1_Capacitor[2]  /* Cout */
};

/* Component map for Input7_1_2 */
void* an_7_FPAA7_1_Input7_1_2_Components[5] = 
{
   (void*) &an_7_FPAA7_1_Input7_1_2_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_1_Input7_1_2_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_1_Input7_1_2_Capacitor[2]  /* Cout */
};

/* Component map for Input7_1_3 */
void* an_7_FPAA7_1_Input7_1_3_Components[5] = 
{
   (void*) &an_7_FPAA7_1_Input7_1_3_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_1_Input7_1_3_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_1_Input7_1_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona7_1_1 */
void* an_7_FPAA7_1_SumadorNeurona7_1_1_Components[5] = 
{
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_1_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_1_Capacitor[1],  /* CinB */
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_1_Capacitor[2],  /* CinC */
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_1_Capacitor[3],  /* CinD */
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona7_1_2 */
void* an_7_FPAA7_1_SumadorNeurona7_1_2_Components[5] = 
{
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_2_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_2_Capacitor[1],  /* CinB */
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_2_Capacitor[2],  /* CinC */
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_2_Capacitor[3],  /* CinD */
   (void*) &an_7_FPAA7_1_SumadorNeurona7_1_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold7_2_1 */
void* an_7_FPAA7_2_GainHold7_2_1_Components[2] = 
{
   (void*) &an_7_FPAA7_2_GainHold7_2_1_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_2_GainHold7_2_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold7_2_2 */
void* an_7_FPAA7_2_GainHold7_2_2_Components[2] = 
{
   (void*) &an_7_FPAA7_2_GainHold7_2_2_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_2_GainHold7_2_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold7_2_3 */
void* an_7_FPAA7_2_GainHold7_2_3_Components[2] = 
{
   (void*) &an_7_FPAA7_2_GainHold7_2_3_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_2_GainHold7_2_3_Capacitor[1]  /* Cout */
};

/* Component map for Input7_2_1 */
void* an_7_FPAA7_2_Input7_2_1_Components[5] = 
{
   (void*) &an_7_FPAA7_2_Input7_2_1_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_2_Input7_2_1_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_2_Input7_2_1_Capacitor[2]  /* Cout */
};

/* Component map for Input7_2_2 */
void* an_7_FPAA7_2_Input7_2_2_Components[5] = 
{
   (void*) &an_7_FPAA7_2_Input7_2_2_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_2_Input7_2_2_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_2_Input7_2_2_Capacitor[2]  /* Cout */
};

/* Component map for Input7_2_3 */
void* an_7_FPAA7_2_Input7_2_3_Components[5] = 
{
   (void*) &an_7_FPAA7_2_Input7_2_3_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_2_Input7_2_3_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_2_Input7_2_3_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona7_2_1 */
void* an_7_FPAA7_2_SumadorNeurona7_2_1_Components[5] = 
{
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_1_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_1_Capacitor[1],  /* CinB */
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_1_Capacitor[2],  /* CinC */
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_1_Capacitor[3],  /* CinD */
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona7_2_2 */
void* an_7_FPAA7_2_SumadorNeurona7_2_2_Components[5] = 
{
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_2_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_2_Capacitor[1],  /* CinB */
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_2_Capacitor[2],  /* CinC */
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_2_Capacitor[3],  /* CinD */
   (void*) &an_7_FPAA7_2_SumadorNeurona7_2_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold7_3_1 */
void* an_7_FPAA7_3_GainHold7_3_1_Components[2] = 
{
   (void*) &an_7_FPAA7_3_GainHold7_3_1_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_3_GainHold7_3_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold7_3_2 */
void* an_7_FPAA7_3_GainHold7_3_2_Components[2] = 
{
   (void*) &an_7_FPAA7_3_GainHold7_3_2_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_3_GainHold7_3_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold7_3_3 */
void* an_7_FPAA7_3_GainHold7_3_3_Components[2] = 
{
   (void*) &an_7_FPAA7_3_GainHold7_3_3_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_3_GainHold7_3_3_Capacitor[1]  /* Cout */
};

/* Component map for Input7_3_1 */
void* an_7_FPAA7_3_Input7_3_1_Components[5] = 
{
   (void*) &an_7_FPAA7_3_Input7_3_1_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_3_Input7_3_1_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_3_Input7_3_1_Capacitor[2]  /* Cout */
};

/* Component map for Input7_3_2 */
void* an_7_FPAA7_3_Input7_3_2_Components[5] = 
{
   (void*) &an_7_FPAA7_3_Input7_3_2_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_3_Input7_3_2_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_3_Input7_3_2_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona7_3_1 */
void* an_7_FPAA7_3_SumadorNeurona7_3_1_Components[5] = 
{
   (void*) &an_7_FPAA7_3_SumadorNeurona7_3_1_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_3_SumadorNeurona7_3_1_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_3_SumadorNeurona7_3_1_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona7_3_2 */
void* an_7_FPAA7_3_SumadorNeurona7_3_2_Components[5] = 
{
   (void*) &an_7_FPAA7_3_SumadorNeurona7_3_2_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_3_SumadorNeurona7_3_2_Capacitor[1],  /* CinB */
   (void*) &an_7_FPAA7_3_SumadorNeurona7_3_2_Capacitor[2],  /* CinC */
   (void*) &an_7_FPAA7_3_SumadorNeurona7_3_2_Capacitor[3],  /* CinD */
   (void*) &an_7_FPAA7_3_SumadorNeurona7_3_2_Capacitor[4]  /* Cout */
};

/* Component map for TransferFunction7_3_1 */
void* an_7_FPAA7_3_TransferFunction7_3_1_Components[1] = 
{
   (void*) &an_7_FPAA7_3_TransferFunction7_3_1_Capacitor[0]  /* Cout */
};

/* Component map for GainHold7_4_1 */
void* an_7_FPAA7_4_GainHold7_4_1_Components[2] = 
{
   (void*) &an_7_FPAA7_4_GainHold7_4_1_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_4_GainHold7_4_1_Capacitor[1]  /* Cout */
};

/* Component map for GainHold7_4_2 */
void* an_7_FPAA7_4_GainHold7_4_2_Components[2] = 
{
   (void*) &an_7_FPAA7_4_GainHold7_4_2_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_4_GainHold7_4_2_Capacitor[1]  /* Cout */
};

/* Component map for GainHold7_4_3 */
void* an_7_FPAA7_4_GainHold7_4_3_Components[2] = 
{
   (void*) &an_7_FPAA7_4_GainHold7_4_3_Capacitor[0],  /* Cin */
   (void*) &an_7_FPAA7_4_GainHold7_4_3_Capacitor[1]  /* Cout */
};

/* Component map for Input7_4_1 */
void* an_7_FPAA7_4_Input7_4_1_Components[5] = 
{
   (void*) &an_7_FPAA7_4_Input7_4_1_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_4_Input7_4_1_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_4_Input7_4_1_Capacitor[2]  /* Cout */
};

/* Component map for Input7_4_2 */
void* an_7_FPAA7_4_Input7_4_2_Components[5] = 
{
   (void*) &an_7_FPAA7_4_Input7_4_2_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_4_Input7_4_2_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_4_Input7_4_2_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona7_4_1 */
void* an_7_FPAA7_4_SumadorNeurona7_4_1_Components[5] = 
{
   (void*) &an_7_FPAA7_4_SumadorNeurona7_4_1_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_4_SumadorNeurona7_4_1_Capacitor[1],  /* CinB */
   (void*) an_7_apiInvalid,               /* CinC */
   (void*) an_7_apiInvalid,               /* CinD */
   (void*) &an_7_FPAA7_4_SumadorNeurona7_4_1_Capacitor[2]  /* Cout */
};

/* Component map for SumadorNeurona7_4_2 */
void* an_7_FPAA7_4_SumadorNeurona7_4_2_Components[5] = 
{
   (void*) &an_7_FPAA7_4_SumadorNeurona7_4_2_Capacitor[0],  /* CinA */
   (void*) &an_7_FPAA7_4_SumadorNeurona7_4_2_Capacitor[1],  /* CinB */
   (void*) &an_7_FPAA7_4_SumadorNeurona7_4_2_Capacitor[2],  /* CinC */
   (void*) &an_7_FPAA7_4_SumadorNeurona7_4_2_Capacitor[3],  /* CinD */
   (void*) &an_7_FPAA7_4_SumadorNeurona7_4_2_Capacitor[4]  /* Cout */
};

/* Component map for TransferFunction7_4_1 */
void* an_7_FPAA7_4_TransferFunction7_4_1_Components[1] = 
{
   (void*) &an_7_FPAA7_4_TransferFunction7_4_1_Capacitor[0]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_7_apiCAMComponentData[an_7_apiCAMCount] =
{
   an_7_FPAA7_1_GainHold7_1_1_Components,   /* an_7_FPAA7_1_GainHold7_1_1 */
   an_7_FPAA7_1_GainHold7_1_2_Components,   /* an_7_FPAA7_1_GainHold7_1_2 */
   an_7_FPAA7_1_GainHold7_1_3_Components,   /* an_7_FPAA7_1_GainHold7_1_3 */
   an_7_FPAA7_1_Input7_1_1_Components,      /* an_7_FPAA7_1_Input7_1_1 */
   an_7_FPAA7_1_Input7_1_2_Components,      /* an_7_FPAA7_1_Input7_1_2 */
   an_7_FPAA7_1_Input7_1_3_Components,      /* an_7_FPAA7_1_Input7_1_3 */
   an_7_FPAA7_1_SumadorNeurona7_1_1_Components, /* an_7_FPAA7_1_SumadorNeurona7_1_1 */
   an_7_FPAA7_1_SumadorNeurona7_1_2_Components, /* an_7_FPAA7_1_SumadorNeurona7_1_2 */
   an_7_FPAA7_2_GainHold7_2_1_Components,   /* an_7_FPAA7_2_GainHold7_2_1 */
   an_7_FPAA7_2_GainHold7_2_2_Components,   /* an_7_FPAA7_2_GainHold7_2_2 */
   an_7_FPAA7_2_GainHold7_2_3_Components,   /* an_7_FPAA7_2_GainHold7_2_3 */
   an_7_FPAA7_2_Input7_2_1_Components,      /* an_7_FPAA7_2_Input7_2_1 */
   an_7_FPAA7_2_Input7_2_2_Components,      /* an_7_FPAA7_2_Input7_2_2 */
   an_7_FPAA7_2_Input7_2_3_Components,      /* an_7_FPAA7_2_Input7_2_3 */
   an_7_FPAA7_2_SumadorNeurona7_2_1_Components, /* an_7_FPAA7_2_SumadorNeurona7_2_1 */
   an_7_FPAA7_2_SumadorNeurona7_2_2_Components, /* an_7_FPAA7_2_SumadorNeurona7_2_2 */
   an_7_FPAA7_3_GainHold7_3_1_Components,   /* an_7_FPAA7_3_GainHold7_3_1 */
   an_7_FPAA7_3_GainHold7_3_2_Components,   /* an_7_FPAA7_3_GainHold7_3_2 */
   an_7_FPAA7_3_GainHold7_3_3_Components,   /* an_7_FPAA7_3_GainHold7_3_3 */
   an_7_FPAA7_3_Input7_3_1_Components,      /* an_7_FPAA7_3_Input7_3_1 */
   an_7_FPAA7_3_Input7_3_2_Components,      /* an_7_FPAA7_3_Input7_3_2 */
   an_7_FPAA7_3_SumadorNeurona7_3_1_Components, /* an_7_FPAA7_3_SumadorNeurona7_3_1 */
   an_7_FPAA7_3_SumadorNeurona7_3_2_Components, /* an_7_FPAA7_3_SumadorNeurona7_3_2 */
   an_7_FPAA7_3_TransferFunction7_3_1_Components, /* an_7_FPAA7_3_TransferFunction7_3_1 */
   an_7_FPAA7_4_GainHold7_4_1_Components,   /* an_7_FPAA7_4_GainHold7_4_1 */
   an_7_FPAA7_4_GainHold7_4_2_Components,   /* an_7_FPAA7_4_GainHold7_4_2 */
   an_7_FPAA7_4_GainHold7_4_3_Components,   /* an_7_FPAA7_4_GainHold7_4_3 */
   an_7_FPAA7_4_Input7_4_1_Components,      /* an_7_FPAA7_4_Input7_4_1 */
   an_7_FPAA7_4_Input7_4_2_Components,      /* an_7_FPAA7_4_Input7_4_2 */
   an_7_FPAA7_4_SumadorNeurona7_4_1_Components, /* an_7_FPAA7_4_SumadorNeurona7_4_1 */
   an_7_FPAA7_4_SumadorNeurona7_4_2_Components, /* an_7_FPAA7_4_SumadorNeurona7_4_2 */
   an_7_FPAA7_4_TransferFunction7_4_1_Components  /* an_7_FPAA7_4_TransferFunction7_4_1 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_7_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_7_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_7_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_7_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_7_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_7_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_7_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_7_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_7_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_7_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_7_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_7_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_7_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_7_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_7_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_7_apiReconfigData[chip]->length = 3;
        an_7_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_7_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_7_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_7_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_7_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_7_apiReconfigData[chip]->length = 3;
        an_7_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_7_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_7_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_7_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_7_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_7_InitializeVortexReconfigData.  |
  |  an_7_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_7_InitializeApexReconfigData.    |
  |  an_7_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_7_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_7_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_SetVortexReconfigControlFlags(an_Chip chip, an_7_VortexControlByte flags)
     {
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_SetApexReconfigControlFlags(an_Chip chip, an_7_ApexControlByte flags)
     {
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_SetApexReconfigControlFlagsNOP(an_Chip chip, an_7_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_7_VortexControlByte an_7_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_7_ApexControlByte an_7_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_7_apiCapacitor* pCap = an_7_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_7_BuildReconfigDataBlock(an_7_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_7_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_7_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_7_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_7_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_7_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_7_FixedDivide(an_7_IntToFixed(capTry1), an_7_IntToFixed(capTry2));
           realizedError = an_7_FixedDivide(an_7_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_7_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_7_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_7_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_7_BuildReconfigDataBlock(an_7_apiChipFromCAM[cam], bank, byte, values, count);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_7_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_7_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_7_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_7_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_7_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_7_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_7_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_7_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_7_apiReconfigInfo* pInfo = an_7_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_7_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
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

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_8_apiAddress1[an_8_apiChipCount] =
{
   0x01,                /* an_8_FPAA8_1: 00000001 */
   0x02,                /* an_8_FPAA8_2: 00000010 */
   0x03,                /* an_8_FPAA8_3: 00000011 */
   0x04                 /* an_8_FPAA8_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA8_1. */
const an_Byte an_8_FPAA8_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x80,  0x05,  0x00,  0x10,  0x00,  0x10,  
   0x80,  0x05,  0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0xFF,  0x64,  0xFB,  0xBB,  0x7E,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x03, /* Bank address:  3 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x01,  0x2D,  0x01,  0x28,  0x01,  0x1F,  0x00,  0x10,  
   0x01,  0xB1,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x04, /* Bank address:  4 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0xA1,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x1E,  0x00,  0x10,  0x00,  0x00,  0x00,  0x00,  0xFF,  
   0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x05, /* Bank address:  5 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x00,  0x30,  0x01,  0x81,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x06, /* Bank address:  6 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x05,  0x01,  0x29,  0x01,  0x28,  0x00,  0x05,  0x01,  
   0x37,  0x01,  0x18,  0x00,  0x00,  0x00,  0x00,  0xFF,  
   0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x07, /* Bank address:  7 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x00,  0x30,  0x01,  0x81,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x08, /* Bank address:  8 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x05,  0x01,  0x2D,  0x01,  0x28,  0x00,  0x05,  0x01,  
   0x37,  0x01,  0x18,  0x00,  0xFF,  0xFF,  0x92,  0x8C,  
   0xA0,  0xF3,  0xF4,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x09, /* Bank address:  9 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x01,  0x2B,  0x01,  0x28,  0x01,  0x19,  0x00,  0x10,  
   0x01,  0xD1,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8D, /* Byte address: 13 */
   0x0A, /* Bank address: 10 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0x1C,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x18,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA8_2. */
const an_Byte an_8_FPAA8_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x09,  0x86,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x50,  0x0C,  0x00,  0x50,  0x08,  0x12,  
   0x60,  0x12,  0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x08,  0x08,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xBE,  0xA4,  0x30,  0xBE,  0xBE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x81,  0x00,  0x10,  0x01,  0x17,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x02,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x91,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x16,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0x83,  0x5D,  0x71,  0x83,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x31,  0x00,  0x10,  0x01,  
   0x19,  0x00,  0x10,  0x0F,  0x00,  0x00,  0x00,  0x00,  
   0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x32,  0x01,  0x82,  0x00,  0x05,  0x01,  0x81,  
   0x00,  0x10,  0x41,  0x05,  0x01,  0x17,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x80,  0xAA,  0x00,  0x00,  0x00,  0xFF,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x09, /* Bank address:  9 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDC, /* Byte address: 28 */
   0x09, /* Bank address:  9 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x02,  0x14,  0x00,  0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x0A, /* Bank address: 10 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD6, /* Byte address: 22 */
   0x0A, /* Bank address: 10 */
   0x0A, /* Byte count:   10 */

   /* Data bytes for block */
   0x02,  0x13,  0x00,  0x10,  0x82,  0x05,  0x02,  0x15,  
   0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA8_3. */
const an_Byte an_8_FPAA8_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x09,  0x86,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x8C,  0x00,  0x00,  0x00,  0x56,  
   0x10,  0x56,  0x00,  0x5E,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x00,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0x59,  0x6E,  0x85,  0x59,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x03, /* Bank address:  3 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x01,  0x71,  0x00,  0x10,  0x0F,  0x00,  0x00,  0x00,  
   0x02,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x04, /* Bank address:  4 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x00,  
   0x05,  0x01,  0x61,  0x00,  0x10,  0x41,  0x05,  0x01,  
   0x19,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x80,  0xAA,  0x91,  0x6C,  0xFE,  0xFF,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x09, /* Bank address:  9 */
   0x31, /* Byte count:   49 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x21,  0x00,  
   0x20,  0x02,  0x71,  0x00,  0x20,  0x02,  0x14,  0x00,  
   0x10,  0xFE,  0x00,  0x00,  0x00,  0x02,  0x01,  0x00,  
   0x00,  0x00,  0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  
   0x48,  0x02,  0x61,  0x00,  0x20,  0x42,  0x05,  0x02,  
   0x13,  0x00,  0x10,  0x82,  0x05,  0x02,  0x15,  0x00,  
   0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA8_4. */
const an_Byte an_8_FPAA8_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x12,  0x80,  0x00,  0x80,  0x00,  
   0x00,  0x12,  0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x03, /* Bank address:  3 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x00,  0x30,  0x01,  0x81,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x04, /* Bank address:  4 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x05,  0x01,  0x29,  0x01,  0x28,  0x00,  0x05,  0x01,  
   0x38,  0x01,  0x18,  0x00,  0xFF,  0xFF,  0x4B,  0xFF,  
   0x65,  0x06,  0x20,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x05, /* Bank address:  5 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x01,  0x2D,  0x01,  0x28,  0x01,  0x1F,  0x00,  0x10,  
   0x01,  0x1B,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x06, /* Bank address:  6 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0xE1,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0xA1,  0x00,  0x10,  0x00,  0xFF,  0xFF,  0x37,  0x69,  
   0x98,  0x15,  0x2C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x07, /* Bank address:  7 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x01,  0x29,  0x01,  0x28,  0x01,  0x1F,  0x00,  0x10,  
   0x01,  0x1B,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x08, /* Bank address:  8 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0x1E,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0xA1,  0x00,  0x10,  0x00,  0x00,  0x00,  0x00,  0xFF,  
   0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x00,  0x30,  0x01,  0x81,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x95, /* Byte address: 21 */
   0x0A, /* Bank address: 10 */
   0x0B, /* Byte count:   11 */

   /* Data bytes for block */
   0x05,  0x01,  0x2F,  0x01,  0x28,  0x00,  0x05,  0x01,  
   0x3E,  0x01,  0x18,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_8_apiPrimaryConfigInfo an_8_apiPrimaryConfigData[an_8_apiChipCount] =
{
   /* FPAA8_1 */
   {
      an_8_FPAA8_1_PrimaryConfigInfo, /* data */
      238,                          /* length */
   },

   /* FPAA8_2 */
   {
      an_8_FPAA8_2_PrimaryConfigInfo, /* data */
      497,                          /* length */
   },

   /* FPAA8_3 */
   {
      an_8_FPAA8_3_PrimaryConfigInfo, /* data */
      453,                          /* length */
   },

   /* FPAA8_4 */
   {
      an_8_FPAA8_4_PrimaryConfigInfo, /* data */
      225                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_8_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA8_1 */
an_8_apiReconfigInfo an_8_FPAA8_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA8_2 */
an_8_apiReconfigInfo an_8_FPAA8_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA8_3 */
an_8_apiReconfigInfo an_8_FPAA8_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA8_4 */
an_8_apiReconfigInfo an_8_FPAA8_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_8_apiReconfigInfo* an_8_apiReconfigData[an_8_apiChipCount] =
{
   &an_8_FPAA8_1_ReconfigInfo,    /* FPAA8_1 */
   &an_8_FPAA8_2_ReconfigInfo,    /* FPAA8_2 */
   &an_8_FPAA8_3_ReconfigInfo,    /* FPAA8_3 */
   &an_8_FPAA8_4_ReconfigInfo     /* FPAA8_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_8_FPAA8_1_ReconfigBuffer[64] = {0};   /* FPAA8_1 */
an_Byte an_8_FPAA8_2_ReconfigBuffer[64] = {0};   /* FPAA8_2 */
an_Byte an_8_FPAA8_3_ReconfigBuffer[64] = {0};   /* FPAA8_3 */
an_Byte an_8_FPAA8_4_ReconfigBuffer[64] = {0};   /* FPAA8_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_8_apiReconfigBuffer[an_8_apiChipCount] =
{
   an_8_FPAA8_1_ReconfigBuffer,   /* FPAA8_1 */
   an_8_FPAA8_2_ReconfigBuffer,   /* FPAA8_2 */
   an_8_FPAA8_3_ReconfigBuffer,   /* FPAA8_3 */
   an_8_FPAA8_4_ReconfigBuffer    /* FPAA8_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_8_apiChipFromCAM[an_8_apiCAMCount] =
{
   an_8_FPAA8_1,        /* "an_8_FPAA8_1_SumadorNeurona8_1_1" in chip "FPAA8_1" */
   an_8_FPAA8_1,        /* "an_8_FPAA8_1_SumadorNeurona8_1_2" in chip "FPAA8_1" */
   an_8_FPAA8_2,        /* "an_8_FPAA8_2_GainHold8_2_1" in chip "FPAA8_2" */
   an_8_FPAA8_2,        /* "an_8_FPAA8_2_SumadorNeurona8_2_1" in chip "FPAA8_2" */
   an_8_FPAA8_2,        /* "an_8_FPAA8_2_SumadorNeurona8_2_2" in chip "FPAA8_2" */
   an_8_FPAA8_2,        /* "an_8_FPAA8_2_TransferFunction8_2_1" in chip "FPAA8_2" */
   an_8_FPAA8_3,        /* "an_8_FPAA8_3_GainHold8_3_1" in chip "FPAA8_3" */
   an_8_FPAA8_3,        /* "an_8_FPAA8_3_SumadorNeurona8_3_1" in chip "FPAA8_3" */
   an_8_FPAA8_3,        /* "an_8_FPAA8_3_SumadorNeurona8_3_2" in chip "FPAA8_3" */
   an_8_FPAA8_3,        /* "an_8_FPAA8_3_TransferFunction8_3_1" in chip "FPAA8_3" */
   an_8_FPAA8_4,        /* "an_8_FPAA8_4_SumadorNeurona8_4_1" in chip "FPAA8_4" */
   an_8_FPAA8_4         /* "an_8_FPAA8_4_SumadorNeurona8_4_2" in chip "FPAA8_4" */
};

/* Component data table for the apiCapacitor's of SumadorNeurona8_1_1. */
extern const an_8_apiCapacitor an_8_FPAA8_1_SumadorNeurona8_1_1_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* CinC  */ { 0x09, 0x05, }, /* 9, 5 */
   /* CinD  */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona8_1_2. */
extern const an_8_apiCapacitor an_8_FPAA8_1_SumadorNeurona8_1_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of GainHold8_2_1. */
extern const an_8_apiCapacitor an_8_FPAA8_2_GainHold8_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona8_2_1. */
extern const an_8_apiCapacitor an_8_FPAA8_2_SumadorNeurona8_2_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona8_2_2. */
extern const an_8_apiCapacitor an_8_FPAA8_2_SumadorNeurona8_2_2_Capacitor[4] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* CinC  */ { 0x05, 0x05, }, /* 5, 5 */
   /* Cout  */ { 0x05, 0x04  }  /* 5, 4 */
};

/* Component data table for the apiCapacitor's of TransferFunction8_2_1. */
extern const an_8_apiCapacitor an_8_FPAA8_2_TransferFunction8_2_1_Capacitor[1] = 
{
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of GainHold8_3_1. */
extern const an_8_apiCapacitor an_8_FPAA8_3_GainHold8_3_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cout  */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona8_3_1. */
extern const an_8_apiCapacitor an_8_FPAA8_3_SumadorNeurona8_3_1_Capacitor[4] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* Cout  */ { 0x03, 0x04  }  /* 3, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona8_3_2. */
extern const an_8_apiCapacitor an_8_FPAA8_3_SumadorNeurona8_3_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* Cout  */ { 0x09, 0x02  }  /* 9, 2 */
};

/* Component data table for the apiCapacitor's of TransferFunction8_3_1. */
extern const an_8_apiCapacitor an_8_FPAA8_3_TransferFunction8_3_1_Capacitor[1] = 
{
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona8_4_1. */
extern const an_8_apiCapacitor an_8_FPAA8_4_SumadorNeurona8_4_1_Capacitor[5] = 
{
   /* CinA  */ { 0x07, 0x07, }, /* 7, 7 */
   /* CinB  */ { 0x07, 0x06, }, /* 7, 6 */
   /* CinC  */ { 0x07, 0x05, }, /* 7, 5 */
   /* CinD  */ { 0x07, 0x04, }, /* 7, 4 */
   /* Cout  */ { 0x07, 0x03  }  /* 7, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona8_4_2. */
extern const an_8_apiCapacitor an_8_FPAA8_4_SumadorNeurona8_4_2_Capacitor[5] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* CinC  */ { 0x05, 0x05, }, /* 5, 5 */
   /* CinD  */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component map for SumadorNeurona8_1_1 */
void* an_8_FPAA8_1_SumadorNeurona8_1_1_Components[5] = 
{
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_1_Capacitor[0],  /* CinA */
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_1_Capacitor[1],  /* CinB */
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_1_Capacitor[2],  /* CinC */
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_1_Capacitor[3],  /* CinD */
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona8_1_2 */
void* an_8_FPAA8_1_SumadorNeurona8_1_2_Components[5] = 
{
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_2_Capacitor[0],  /* CinA */
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_2_Capacitor[1],  /* CinB */
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_2_Capacitor[2],  /* CinC */
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_2_Capacitor[3],  /* CinD */
   (void*) &an_8_FPAA8_1_SumadorNeurona8_1_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold8_2_1 */
void* an_8_FPAA8_2_GainHold8_2_1_Components[2] = 
{
   (void*) &an_8_FPAA8_2_GainHold8_2_1_Capacitor[0],  /* Cin */
   (void*) &an_8_FPAA8_2_GainHold8_2_1_Capacitor[1]  /* Cout */
};

/* Component map for SumadorNeurona8_2_1 */
void* an_8_FPAA8_2_SumadorNeurona8_2_1_Components[5] = 
{
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_1_Capacitor[0],  /* CinA */
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_1_Capacitor[1],  /* CinB */
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_1_Capacitor[2],  /* CinC */
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_1_Capacitor[3],  /* CinD */
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona8_2_2 */
void* an_8_FPAA8_2_SumadorNeurona8_2_2_Components[5] = 
{
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_2_Capacitor[0],  /* CinA */
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_2_Capacitor[1],  /* CinB */
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_2_Capacitor[2],  /* CinC */
   (void*) an_8_apiInvalid,               /* CinD */
   (void*) &an_8_FPAA8_2_SumadorNeurona8_2_2_Capacitor[3]  /* Cout */
};

/* Component map for TransferFunction8_2_1 */
void* an_8_FPAA8_2_TransferFunction8_2_1_Components[1] = 
{
   (void*) &an_8_FPAA8_2_TransferFunction8_2_1_Capacitor[0]  /* Cout */
};

/* Component map for GainHold8_3_1 */
void* an_8_FPAA8_3_GainHold8_3_1_Components[2] = 
{
   (void*) &an_8_FPAA8_3_GainHold8_3_1_Capacitor[0],  /* Cin */
   (void*) &an_8_FPAA8_3_GainHold8_3_1_Capacitor[1]  /* Cout */
};

/* Component map for SumadorNeurona8_3_1 */
void* an_8_FPAA8_3_SumadorNeurona8_3_1_Components[5] = 
{
   (void*) &an_8_FPAA8_3_SumadorNeurona8_3_1_Capacitor[0],  /* CinA */
   (void*) &an_8_FPAA8_3_SumadorNeurona8_3_1_Capacitor[1],  /* CinB */
   (void*) &an_8_FPAA8_3_SumadorNeurona8_3_1_Capacitor[2],  /* CinC */
   (void*) an_8_apiInvalid,               /* CinD */
   (void*) &an_8_FPAA8_3_SumadorNeurona8_3_1_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona8_3_2 */
void* an_8_FPAA8_3_SumadorNeurona8_3_2_Components[5] = 
{
   (void*) &an_8_FPAA8_3_SumadorNeurona8_3_2_Capacitor[0],  /* CinA */
   (void*) &an_8_FPAA8_3_SumadorNeurona8_3_2_Capacitor[1],  /* CinB */
   (void*) an_8_apiInvalid,               /* CinC */
   (void*) an_8_apiInvalid,               /* CinD */
   (void*) &an_8_FPAA8_3_SumadorNeurona8_3_2_Capacitor[2]  /* Cout */
};

/* Component map for TransferFunction8_3_1 */
void* an_8_FPAA8_3_TransferFunction8_3_1_Components[1] = 
{
   (void*) &an_8_FPAA8_3_TransferFunction8_3_1_Capacitor[0]  /* Cout */
};

/* Component map for SumadorNeurona8_4_1 */
void* an_8_FPAA8_4_SumadorNeurona8_4_1_Components[5] = 
{
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_1_Capacitor[0],  /* CinA */
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_1_Capacitor[1],  /* CinB */
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_1_Capacitor[2],  /* CinC */
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_1_Capacitor[3],  /* CinD */
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona8_4_2 */
void* an_8_FPAA8_4_SumadorNeurona8_4_2_Components[5] = 
{
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_2_Capacitor[0],  /* CinA */
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_2_Capacitor[1],  /* CinB */
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_2_Capacitor[2],  /* CinC */
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_2_Capacitor[3],  /* CinD */
   (void*) &an_8_FPAA8_4_SumadorNeurona8_4_2_Capacitor[4]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_8_apiCAMComponentData[an_8_apiCAMCount] =
{
   an_8_FPAA8_1_SumadorNeurona8_1_1_Components, /* an_8_FPAA8_1_SumadorNeurona8_1_1 */
   an_8_FPAA8_1_SumadorNeurona8_1_2_Components, /* an_8_FPAA8_1_SumadorNeurona8_1_2 */
   an_8_FPAA8_2_GainHold8_2_1_Components,   /* an_8_FPAA8_2_GainHold8_2_1 */
   an_8_FPAA8_2_SumadorNeurona8_2_1_Components, /* an_8_FPAA8_2_SumadorNeurona8_2_1 */
   an_8_FPAA8_2_SumadorNeurona8_2_2_Components, /* an_8_FPAA8_2_SumadorNeurona8_2_2 */
   an_8_FPAA8_2_TransferFunction8_2_1_Components, /* an_8_FPAA8_2_TransferFunction8_2_1 */
   an_8_FPAA8_3_GainHold8_3_1_Components,   /* an_8_FPAA8_3_GainHold8_3_1 */
   an_8_FPAA8_3_SumadorNeurona8_3_1_Components, /* an_8_FPAA8_3_SumadorNeurona8_3_1 */
   an_8_FPAA8_3_SumadorNeurona8_3_2_Components, /* an_8_FPAA8_3_SumadorNeurona8_3_2 */
   an_8_FPAA8_3_TransferFunction8_3_1_Components, /* an_8_FPAA8_3_TransferFunction8_3_1 */
   an_8_FPAA8_4_SumadorNeurona8_4_1_Components, /* an_8_FPAA8_4_SumadorNeurona8_4_1 */
   an_8_FPAA8_4_SumadorNeurona8_4_2_Components  /* an_8_FPAA8_4_SumadorNeurona8_4_2 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_8_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_8_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_8_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_8_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_8_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_8_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_8_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_8_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_8_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_8_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_8_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_8_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_8_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_8_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_8_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_8_apiReconfigData[chip]->length = 3;
        an_8_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_8_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_8_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_8_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_8_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_8_apiReconfigData[chip]->length = 3;
        an_8_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_8_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_8_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_8_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_8_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_8_InitializeVortexReconfigData.  |
  |  an_8_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_8_InitializeApexReconfigData.    |
  |  an_8_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_8_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_8_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_SetVortexReconfigControlFlags(an_Chip chip, an_8_VortexControlByte flags)
     {
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_SetApexReconfigControlFlags(an_Chip chip, an_8_ApexControlByte flags)
     {
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_SetApexReconfigControlFlagsNOP(an_Chip chip, an_8_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_8_VortexControlByte an_8_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_8_ApexControlByte an_8_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_8_apiCapacitor* pCap = an_8_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_8_BuildReconfigDataBlock(an_8_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_8_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_8_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_8_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_8_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_8_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_8_FixedDivide(an_8_IntToFixed(capTry1), an_8_IntToFixed(capTry2));
           realizedError = an_8_FixedDivide(an_8_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_8_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_8_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_8_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_8_BuildReconfigDataBlock(an_8_apiChipFromCAM[cam], bank, byte, values, count);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_8_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_8_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_8_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_8_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_8_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_8_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_8_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_8_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_8_apiReconfigInfo* pInfo = an_8_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_8_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }



/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
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

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_9_apiAddress1[an_9_apiChipCount] =
{
   0x01,                /* an_9_FPAA9_1: 00000001 */
   0x02,                /* an_9_FPAA9_2: 00000010 */
   0x03,                /* an_9_FPAA9_3: 00000011 */
   0x04                 /* an_9_FPAA9_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA9_1. */
const an_Byte an_9_FPAA9_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x09,  0x86,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x50,  0x0C,  0x00,  0x50,  0x08,  0x12,  
   0x60,  0x12,  0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x08,  0x08,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xB5,  0xDD,  0xD9,  0xB5,  0xB5,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x81,  0x00,  0x10,  0x01,  0x17,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x02,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x91,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x16,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0xEF,  0xE5,  0xFF,  0xEF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x31,  0x00,  0x10,  0x01,  
   0x91,  0x00,  0x10,  0x0F,  0x00,  0x00,  0x00,  0x00,  
   0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x32,  0x01,  0x82,  0x00,  0x05,  0x01,  0x81,  
   0x00,  0x10,  0x41,  0x05,  0x01,  0x17,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x80,  0xAA,  0x00,  0x00,  0x00,  0xFF,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x09, /* Bank address:  9 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDC, /* Byte address: 28 */
   0x09, /* Bank address:  9 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x02,  0x14,  0x00,  0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x0A, /* Bank address: 10 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD6, /* Byte address: 22 */
   0x0A, /* Bank address: 10 */
   0x0A, /* Byte count:   10 */

   /* Data bytes for block */
   0x02,  0x13,  0x00,  0x10,  0x82,  0x05,  0x02,  0x15,  
   0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA9_2. */
const an_Byte an_9_FPAA9_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x09,  0x86,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x8C,  0x00,  0x00,  0x00,  0x56,  
   0x10,  0x56,  0x00,  0x5E,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x00,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0x64,  0x51,  0x8A,  0x64,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x03, /* Bank address:  3 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x01,  0x17,  0x00,  0x10,  0x0F,  0x00,  0x00,  0x00,  
   0x02,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x04, /* Bank address:  4 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x00,  
   0x05,  0x01,  0x16,  0x00,  0x10,  0x41,  0x05,  0x01,  
   0x19,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x80,  0xAA,  0x97,  0xF4,  0xB1,  0xFF,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x09, /* Bank address:  9 */
   0x31, /* Byte count:   49 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x21,  0x00,  
   0x20,  0x02,  0x17,  0x00,  0x20,  0x02,  0x14,  0x00,  
   0x10,  0xFE,  0x00,  0x00,  0x00,  0x02,  0x01,  0x00,  
   0x00,  0x00,  0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  
   0x48,  0x02,  0x61,  0x00,  0x20,  0x42,  0x05,  0x02,  
   0x13,  0x00,  0x10,  0x82,  0x05,  0x02,  0x15,  0x00,  
   0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA9_3. */
const an_Byte an_9_FPAA9_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x80,  0x05,  0x00,  0x10,  0x00,  0x10,  
   0x80,  0x05,  0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x08,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0xFF,  0x7F,  0x4C,  0xC8,  0xDA,  0x8D,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x03, /* Bank address:  3 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x01,  0x2D,  0x01,  0x28,  0x01,  0x1F,  0x00,  0x10,  
   0x01,  0x1B,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x04, /* Bank address:  4 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0x1A,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x1E,  0x00,  0x10,  0x00,  0x00,  0x00,  0x00,  0xFF,  
   0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x05, /* Bank address:  5 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x00,  0x30,  0x01,  0x81,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x06, /* Bank address:  6 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x05,  0x01,  0x29,  0x01,  0x28,  0x00,  0x05,  0x01,  
   0x37,  0x01,  0x18,  0x00,  0x00,  0x00,  0x00,  0xFF,  
   0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x07, /* Bank address:  7 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x00,  0x30,  0x01,  0x81,  0x0F,  
   0x00,  0x00,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x08, /* Bank address:  8 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x05,  0x01,  0x2D,  0x01,  0x28,  0x00,  0x05,  0x01,  
   0x37,  0x01,  0x18,  0x00,  0xFF,  0xFF,  0xAC,  0x50,  
   0xD0,  0xB5,  0x12,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x09, /* Bank address:  9 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x01,  0x2B,  0x01,  0x28,  0x01,  0x91,  0x00,  0x10,  
   0x01,  0x1D,  0x00,  0x10,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8D, /* Byte address: 13 */
   0x0A, /* Bank address: 10 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0x1C,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x81,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA9_4. */
const an_Byte an_9_FPAA9_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x09,  0x86,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x50,  0x0C,  0x00,  0x50,  0x08,  0x12,  
   0x60,  0x12,  0x00,  0x5E,  0x03,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x08,  0x08,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xF9,  0xBC,  0xC9,  0xF9,  0xF9,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x03, /* Bank address:  3 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x01,  
   0x18,  0x00,  0x10,  0x01,  0x17,  0x00,  0x10,  0x0F,  
   0x00,  0x00,  0x00,  0x02,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x00,  0x05,  0x01,  0x91,  0x00,  0x10,  0x41,  0x05,  
   0x01,  0x16,  0x00,  0x10,  0x00,  0x00,  0xFF,  0xFF,  
   0x83,  0xD5,  0x2E,  0x83,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x05, /* Bank address:  5 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x20,  0x01,  0x28,  0x01,  0x31,  0x00,  0x10,  0x01,  
   0x19,  0x00,  0x10,  0x0F,  0x00,  0x00,  0x00,  0x00,  
   0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x06, /* Bank address:  6 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x01,  0x32,  0x01,  0x82,  0x00,  0x05,  0x01,  0x18,  
   0x00,  0x10,  0x41,  0x05,  0x01,  0x17,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x80,  0xAA,  0x00,  0x00,  0x00,  0xFF,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x09, /* Bank address:  9 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDC, /* Byte address: 28 */
   0x09, /* Bank address:  9 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x02,  0x14,  0x00,  0x10,  0xFE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x0A, /* Bank address: 10 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  0x48,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD6, /* Byte address: 22 */
   0x0A, /* Bank address: 10 */
   0x0A, /* Byte count:   10 */

   /* Data bytes for block */
   0x02,  0x13,  0x00,  0x10,  0x82,  0x05,  0x02,  0x15,  
   0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_9_apiPrimaryConfigInfo an_9_apiPrimaryConfigData[an_9_apiChipCount] =
{
   /* FPAA9_1 */
   {
      an_9_FPAA9_1_PrimaryConfigInfo, /* data */
      497,                          /* length */
   },

   /* FPAA9_2 */
   {
      an_9_FPAA9_2_PrimaryConfigInfo, /* data */
      453,                          /* length */
   },

   /* FPAA9_3 */
   {
      an_9_FPAA9_3_PrimaryConfigInfo, /* data */
      238,                          /* length */
   },

   /* FPAA9_4 */
   {
      an_9_FPAA9_4_PrimaryConfigInfo, /* data */
      497                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_9_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA9_1 */
an_9_apiReconfigInfo an_9_FPAA9_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA9_2 */
an_9_apiReconfigInfo an_9_FPAA9_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA9_3 */
an_9_apiReconfigInfo an_9_FPAA9_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA9_4 */
an_9_apiReconfigInfo an_9_FPAA9_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_9_apiReconfigInfo* an_9_apiReconfigData[an_9_apiChipCount] =
{
   &an_9_FPAA9_1_ReconfigInfo,    /* FPAA9_1 */
   &an_9_FPAA9_2_ReconfigInfo,    /* FPAA9_2 */
   &an_9_FPAA9_3_ReconfigInfo,    /* FPAA9_3 */
   &an_9_FPAA9_4_ReconfigInfo     /* FPAA9_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_9_FPAA9_1_ReconfigBuffer[64] = {0};   /* FPAA9_1 */
an_Byte an_9_FPAA9_2_ReconfigBuffer[64] = {0};   /* FPAA9_2 */
an_Byte an_9_FPAA9_3_ReconfigBuffer[64] = {0};   /* FPAA9_3 */
an_Byte an_9_FPAA9_4_ReconfigBuffer[64] = {0};   /* FPAA9_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_9_apiReconfigBuffer[an_9_apiChipCount] =
{
   an_9_FPAA9_1_ReconfigBuffer,   /* FPAA9_1 */
   an_9_FPAA9_2_ReconfigBuffer,   /* FPAA9_2 */
   an_9_FPAA9_3_ReconfigBuffer,   /* FPAA9_3 */
   an_9_FPAA9_4_ReconfigBuffer    /* FPAA9_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_9_apiChipFromCAM[an_9_apiCAMCount] =
{
   an_9_FPAA9_1,        /* "an_9_FPAA9_1_GainHold9_1_1" in chip "FPAA9_1" */
   an_9_FPAA9_1,        /* "an_9_FPAA9_1_SumadorNeurona9_1_1" in chip "FPAA9_1" */
   an_9_FPAA9_1,        /* "an_9_FPAA9_1_SumadorNeurona9_1_2" in chip "FPAA9_1" */
   an_9_FPAA9_1,        /* "an_9_FPAA9_1_TransferFunction9_1_1" in chip "FPAA9_1" */
   an_9_FPAA9_2,        /* "an_9_FPAA9_2_GainHold9_2_1" in chip "FPAA9_2" */
   an_9_FPAA9_2,        /* "an_9_FPAA9_2_SumadorNeurona9_2_1" in chip "FPAA9_2" */
   an_9_FPAA9_2,        /* "an_9_FPAA9_2_SumadorNeurona9_2_2" in chip "FPAA9_2" */
   an_9_FPAA9_2,        /* "an_9_FPAA9_2_TransferFunction9_2_1" in chip "FPAA9_2" */
   an_9_FPAA9_3,        /* "an_9_FPAA9_3_SumadorNeurona9_3_1" in chip "FPAA9_3" */
   an_9_FPAA9_3,        /* "an_9_FPAA9_3_SumadorNeurona9_3_2" in chip "FPAA9_3" */
   an_9_FPAA9_4,        /* "an_9_FPAA9_4_GainHold9_4_1" in chip "FPAA9_4" */
   an_9_FPAA9_4,        /* "an_9_FPAA9_4_SumadorNeurona9_4_1" in chip "FPAA9_4" */
   an_9_FPAA9_4,        /* "an_9_FPAA9_4_SumadorNeurona9_4_2" in chip "FPAA9_4" */
   an_9_FPAA9_4         /* "an_9_FPAA9_4_TransferFunction9_4_1" in chip "FPAA9_4" */
};

/* Component data table for the apiCapacitor's of GainHold9_1_1. */
extern const an_9_apiCapacitor an_9_FPAA9_1_GainHold9_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona9_1_1. */
extern const an_9_apiCapacitor an_9_FPAA9_1_SumadorNeurona9_1_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona9_1_2. */
extern const an_9_apiCapacitor an_9_FPAA9_1_SumadorNeurona9_1_2_Capacitor[4] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* CinC  */ { 0x05, 0x05, }, /* 5, 5 */
   /* Cout  */ { 0x05, 0x04  }  /* 5, 4 */
};

/* Component data table for the apiCapacitor's of TransferFunction9_1_1. */
extern const an_9_apiCapacitor an_9_FPAA9_1_TransferFunction9_1_1_Capacitor[1] = 
{
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of GainHold9_2_1. */
extern const an_9_apiCapacitor an_9_FPAA9_2_GainHold9_2_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cout  */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona9_2_1. */
extern const an_9_apiCapacitor an_9_FPAA9_2_SumadorNeurona9_2_1_Capacitor[4] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* Cout  */ { 0x03, 0x04  }  /* 3, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona9_2_2. */
extern const an_9_apiCapacitor an_9_FPAA9_2_SumadorNeurona9_2_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* Cout  */ { 0x09, 0x02  }  /* 9, 2 */
};

/* Component data table for the apiCapacitor's of TransferFunction9_2_1. */
extern const an_9_apiCapacitor an_9_FPAA9_2_TransferFunction9_2_1_Capacitor[1] = 
{
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona9_3_1. */
extern const an_9_apiCapacitor an_9_FPAA9_3_SumadorNeurona9_3_1_Capacitor[5] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* CinC  */ { 0x09, 0x05, }, /* 9, 5 */
   /* CinD  */ { 0x09, 0x04, }, /* 9, 4 */
   /* Cout  */ { 0x09, 0x03  }  /* 9, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona9_3_2. */
extern const an_9_apiCapacitor an_9_FPAA9_3_SumadorNeurona9_3_2_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of GainHold9_4_1. */
extern const an_9_apiCapacitor an_9_FPAA9_4_GainHold9_4_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x02, }, /* 3, 2 */
   /* Cout  */ { 0x03, 0x01  }  /* 3, 1 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona9_4_1. */
extern const an_9_apiCapacitor an_9_FPAA9_4_SumadorNeurona9_4_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona9_4_2. */
extern const an_9_apiCapacitor an_9_FPAA9_4_SumadorNeurona9_4_2_Capacitor[4] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* CinC  */ { 0x05, 0x05, }, /* 5, 5 */
   /* Cout  */ { 0x05, 0x04  }  /* 5, 4 */
};

/* Component data table for the apiCapacitor's of TransferFunction9_4_1. */
extern const an_9_apiCapacitor an_9_FPAA9_4_TransferFunction9_4_1_Capacitor[1] = 
{
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component map for GainHold9_1_1 */
void* an_9_FPAA9_1_GainHold9_1_1_Components[2] = 
{
   (void*) &an_9_FPAA9_1_GainHold9_1_1_Capacitor[0],  /* Cin */
   (void*) &an_9_FPAA9_1_GainHold9_1_1_Capacitor[1]  /* Cout */
};

/* Component map for SumadorNeurona9_1_1 */
void* an_9_FPAA9_1_SumadorNeurona9_1_1_Components[5] = 
{
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_1_Capacitor[0],  /* CinA */
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_1_Capacitor[1],  /* CinB */
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_1_Capacitor[2],  /* CinC */
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_1_Capacitor[3],  /* CinD */
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona9_1_2 */
void* an_9_FPAA9_1_SumadorNeurona9_1_2_Components[5] = 
{
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_2_Capacitor[0],  /* CinA */
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_2_Capacitor[1],  /* CinB */
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_2_Capacitor[2],  /* CinC */
   (void*) an_9_apiInvalid,               /* CinD */
   (void*) &an_9_FPAA9_1_SumadorNeurona9_1_2_Capacitor[3]  /* Cout */
};

/* Component map for TransferFunction9_1_1 */
void* an_9_FPAA9_1_TransferFunction9_1_1_Components[1] = 
{
   (void*) &an_9_FPAA9_1_TransferFunction9_1_1_Capacitor[0]  /* Cout */
};

/* Component map for GainHold9_2_1 */
void* an_9_FPAA9_2_GainHold9_2_1_Components[2] = 
{
   (void*) &an_9_FPAA9_2_GainHold9_2_1_Capacitor[0],  /* Cin */
   (void*) &an_9_FPAA9_2_GainHold9_2_1_Capacitor[1]  /* Cout */
};

/* Component map for SumadorNeurona9_2_1 */
void* an_9_FPAA9_2_SumadorNeurona9_2_1_Components[5] = 
{
   (void*) &an_9_FPAA9_2_SumadorNeurona9_2_1_Capacitor[0],  /* CinA */
   (void*) &an_9_FPAA9_2_SumadorNeurona9_2_1_Capacitor[1],  /* CinB */
   (void*) &an_9_FPAA9_2_SumadorNeurona9_2_1_Capacitor[2],  /* CinC */
   (void*) an_9_apiInvalid,               /* CinD */
   (void*) &an_9_FPAA9_2_SumadorNeurona9_2_1_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona9_2_2 */
void* an_9_FPAA9_2_SumadorNeurona9_2_2_Components[5] = 
{
   (void*) &an_9_FPAA9_2_SumadorNeurona9_2_2_Capacitor[0],  /* CinA */
   (void*) &an_9_FPAA9_2_SumadorNeurona9_2_2_Capacitor[1],  /* CinB */
   (void*) an_9_apiInvalid,               /* CinC */
   (void*) an_9_apiInvalid,               /* CinD */
   (void*) &an_9_FPAA9_2_SumadorNeurona9_2_2_Capacitor[2]  /* Cout */
};

/* Component map for TransferFunction9_2_1 */
void* an_9_FPAA9_2_TransferFunction9_2_1_Components[1] = 
{
   (void*) &an_9_FPAA9_2_TransferFunction9_2_1_Capacitor[0]  /* Cout */
};

/* Component map for SumadorNeurona9_3_1 */
void* an_9_FPAA9_3_SumadorNeurona9_3_1_Components[5] = 
{
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_1_Capacitor[0],  /* CinA */
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_1_Capacitor[1],  /* CinB */
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_1_Capacitor[2],  /* CinC */
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_1_Capacitor[3],  /* CinD */
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona9_3_2 */
void* an_9_FPAA9_3_SumadorNeurona9_3_2_Components[5] = 
{
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_2_Capacitor[0],  /* CinA */
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_2_Capacitor[1],  /* CinB */
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_2_Capacitor[2],  /* CinC */
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_2_Capacitor[3],  /* CinD */
   (void*) &an_9_FPAA9_3_SumadorNeurona9_3_2_Capacitor[4]  /* Cout */
};

/* Component map for GainHold9_4_1 */
void* an_9_FPAA9_4_GainHold9_4_1_Components[2] = 
{
   (void*) &an_9_FPAA9_4_GainHold9_4_1_Capacitor[0],  /* Cin */
   (void*) &an_9_FPAA9_4_GainHold9_4_1_Capacitor[1]  /* Cout */
};

/* Component map for SumadorNeurona9_4_1 */
void* an_9_FPAA9_4_SumadorNeurona9_4_1_Components[5] = 
{
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_1_Capacitor[0],  /* CinA */
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_1_Capacitor[1],  /* CinB */
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_1_Capacitor[2],  /* CinC */
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_1_Capacitor[3],  /* CinD */
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona9_4_2 */
void* an_9_FPAA9_4_SumadorNeurona9_4_2_Components[5] = 
{
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_2_Capacitor[0],  /* CinA */
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_2_Capacitor[1],  /* CinB */
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_2_Capacitor[2],  /* CinC */
   (void*) an_9_apiInvalid,               /* CinD */
   (void*) &an_9_FPAA9_4_SumadorNeurona9_4_2_Capacitor[3]  /* Cout */
};

/* Component map for TransferFunction9_4_1 */
void* an_9_FPAA9_4_TransferFunction9_4_1_Components[1] = 
{
   (void*) &an_9_FPAA9_4_TransferFunction9_4_1_Capacitor[0]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_9_apiCAMComponentData[an_9_apiCAMCount] =
{
   an_9_FPAA9_1_GainHold9_1_1_Components,   /* an_9_FPAA9_1_GainHold9_1_1 */
   an_9_FPAA9_1_SumadorNeurona9_1_1_Components, /* an_9_FPAA9_1_SumadorNeurona9_1_1 */
   an_9_FPAA9_1_SumadorNeurona9_1_2_Components, /* an_9_FPAA9_1_SumadorNeurona9_1_2 */
   an_9_FPAA9_1_TransferFunction9_1_1_Components, /* an_9_FPAA9_1_TransferFunction9_1_1 */
   an_9_FPAA9_2_GainHold9_2_1_Components,   /* an_9_FPAA9_2_GainHold9_2_1 */
   an_9_FPAA9_2_SumadorNeurona9_2_1_Components, /* an_9_FPAA9_2_SumadorNeurona9_2_1 */
   an_9_FPAA9_2_SumadorNeurona9_2_2_Components, /* an_9_FPAA9_2_SumadorNeurona9_2_2 */
   an_9_FPAA9_2_TransferFunction9_2_1_Components, /* an_9_FPAA9_2_TransferFunction9_2_1 */
   an_9_FPAA9_3_SumadorNeurona9_3_1_Components, /* an_9_FPAA9_3_SumadorNeurona9_3_1 */
   an_9_FPAA9_3_SumadorNeurona9_3_2_Components, /* an_9_FPAA9_3_SumadorNeurona9_3_2 */
   an_9_FPAA9_4_GainHold9_4_1_Components,   /* an_9_FPAA9_4_GainHold9_4_1 */
   an_9_FPAA9_4_SumadorNeurona9_4_1_Components, /* an_9_FPAA9_4_SumadorNeurona9_4_1 */
   an_9_FPAA9_4_SumadorNeurona9_4_2_Components, /* an_9_FPAA9_4_SumadorNeurona9_4_2 */
   an_9_FPAA9_4_TransferFunction9_4_1_Components  /* an_9_FPAA9_4_TransferFunction9_4_1 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_9_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_9_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_9_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_9_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_9_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_9_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_9_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_9_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_9_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_9_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_9_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_9_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_9_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_9_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_9_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_9_apiReconfigData[chip]->length = 3;
        an_9_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_9_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_9_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_9_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_9_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_9_apiReconfigData[chip]->length = 3;
        an_9_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_9_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_9_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_9_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_9_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_9_InitializeVortexReconfigData.  |
  |  an_9_InitializeVortexReconfigData must be called again prior  |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_9_InitializeApexReconfigData.    |
  |  an_9_InitializeApexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_9_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_9_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_SetVortexReconfigControlFlags(an_Chip chip, an_9_VortexControlByte flags)
     {
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_SetApexReconfigControlFlags(an_Chip chip, an_9_ApexControlByte flags)
     {
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_SetApexReconfigControlFlagsNOP(an_Chip chip, an_9_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_9_VortexControlByte an_9_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_9_ApexControlByte an_9_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_9_apiCapacitor* pCap = an_9_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_9_BuildReconfigDataBlock(an_9_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_9_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_9_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_9_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_9_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_9_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_9_FixedDivide(an_9_IntToFixed(capTry1), an_9_IntToFixed(capTry2));
           realizedError = an_9_FixedDivide(an_9_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_9_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_9_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_9_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_9_BuildReconfigDataBlock(an_9_apiChipFromCAM[cam], bank, byte, values, count);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_9_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_9_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_9_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_9_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_9_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_9_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_9_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_9_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_9_apiReconfigInfo* pInfo = an_9_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_9_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
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

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_10_apiAddress1[an_10_apiChipCount] =
{
   0x01,                /* an_10_FPAA10_1: 00000001 */
   0x02,                /* an_10_FPAA10_2: 00000010 */
   0x03,                /* an_10_FPAA10_3: 00000011 */
   0x04                 /* an_10_FPAA10_4: 00000100 */
};

/* This is the initial full configuration stream for FPAA10_1. */
const an_Byte an_10_FPAA10_1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x40,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x06, /* Byte count:    6 */

   /* Data bytes for block */
   0x09,  0x86,  0xC0,  0x30,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x8C,  0x00,  0x00,  0x00,  0x56,  
   0x10,  0x56,  0x00,  0x5E,  0x03,  0x00,  0x5A,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x00,  0x00,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0x33,  0xFF,  0xF3,  0xBC,  0xAC,  0xF3,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x03, /* Bank address:  3 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0x01,  0x21,  0x00,  0x20,  0x01,  0x31,  0x00,  0x10,  
   0x01,  0x17,  0x00,  0x10,  0x0F,  0x00,  0x00,  0x00,  
   0x02,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x04, /* Bank address:  4 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x31,  0x00,  0x20,  0x00,  
   0x05,  0x01,  0x16,  0x00,  0x10,  0x41,  0x05,  0x01,  
   0x19,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x80,  0xAA,  0xFF,  0xFF,  0xFF,  0xFF,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCF, /* Byte address: 15 */
   0x09, /* Bank address:  9 */
   0x31, /* Byte count:   49 */

   /* Data bytes for block */
   0xA8,  0x05,  0x14,  0x2D,  0x48,  0x02,  0x21,  0x00,  
   0x20,  0x02,  0x71,  0x00,  0x20,  0x02,  0x14,  0x00,  
   0x10,  0xFE,  0x00,  0x00,  0x00,  0x02,  0x01,  0x00,  
   0x00,  0x00,  0x1B,  0x00,  0x03,  0x01,  0x1A,  0x01,  
   0x48,  0x02,  0x61,  0x00,  0x20,  0x42,  0x05,  0x02,  
   0x13,  0x00,  0x10,  0x82,  0x05,  0x02,  0x15,  0x00,  
   0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0xFA,  0xF9,  0xF9,  0xF9,  0xF9,  0xF9,  0xF8,  0xF8,  
   0xF8,  0xF8,  0xF8,  0xF8,  0xF7,  0xF7,  0xF7,  0xF7,  
   0xF7,  0xF7,  0xF6,  0xF6,  0xF6,  0xF6,  0xF6,  0xF5,  
   0xF5,  0xF5,  0xF5,  0xF4,  0xF4,  0xF4,  0xF4,  0xF3,  
   0xF3,  0xF3,  0xF3,  0xF2,  0xF2,  0xF2,  0xF1,  0xF1,  
   0xF1,  0xF1,  0xF0,  0xF0,  0xF0,  0xEF,  0xEF,  0xEF,  
   0xEE,  0xEE,  0xEE,  0xED,  0xED,  0xED,  0xEC,  0xEC,  
   0xEB,  0xEB,  0xEA,  0xEA,  0xEA,  0xE9,  0xE9,  0xE8,  
   0xE8,  0xE8,  0xE7,  0xE7,  0xE6,  0xE6,  0xE5,  0xE5,  
   0xE4,  0xE4,  0xE3,  0xE3,  0xE2,  0xE2,  0xE1,  0xE1,  
   0xE0,  0xDF,  0xDF,  0xDE,  0xDE,  0xDD,  0xDC,  0xDC,  
   0xDB,  0xDB,  0xDA,  0xD9,  0xD9,  0xD8,  0xD8,  0xD7,  
   0xD6,  0xD6,  0xD5,  0xD4,  0xD4,  0xD3,  0xD2,  0xD1,  
   0xD1,  0xD0,  0xCF,  0xCF,  0xCE,  0xCD,  0xCD,  0xCC,  
   0xCB,  0xCA,  0xCA,  0xC9,  0xC8,  0xC8,  0xC7,  0xC6,  
   0xC5,  0xC5,  0xC4,  0xC3,  0xC2,  0xC2,  0xC1,  0xC0,  
   0xBF,  0xBF,  0xBE,  0xBD,  0xBC,  0xBC,  0xBB,  0xBA,  
   0xB9,  0xB9,  0xB8,  0xB7,  0xB6,  0xB6,  0xB5,  0xB4,  
   0xB4,  0xB3,  0xB2,  0xB1,  0xB1,  0xB0,  0xAF,  0xAF,  
   0xAE,  0xAD,  0xAD,  0xAC,  0xAB,  0xAB,  0xAA,  0xA9,  
   0xA9,  0xA8,  0xA7,  0xA7,  0xA6,  0xA5,  0xA5,  0xA4,  
   0xA4,  0xA3,  0xA2,  0xA2,  0xA1,  0xA1,  0xA0,  0xA0,  
   0x9F,  0x9E,  0x9E,  0x9D,  0x9D,  0x9C,  0x9C,  0x9B,  
   0x9B,  0x9A,  0x9A,  0x99,  0x99,  0x98,  0x98,  0x98,  
   0x97,  0x97,  0x96,  0x96,  0x95,  0x95,  0x95,  0x94,  
   0x94,  0x93,  0x93,  0x93,  0x92,  0x92,  0x91,  0x91,  
   0x91,  0x90,  0x90,  0x90,  0x90,  0x8F,  0x8F,  0x8F,  
   0x8E,  0x8E,  0x8E,  0x8D,  0x8D,  0x8D,  0x8D,  0x8C,  
   0x8C,  0x8C,  0x8C,  0x8B,  0x8B,  0x8B,  0x8B,  0x8A,  
   0x8A,  0x8A,  0x8A,  0x8A,  0x89,  0x89,  0x89,  0x89,  
   0x89,  0x88,  0x88,  0x88,  0x88,  0x88,  0x88,  0x87,  
   0x87,  0x87,  0x87,  0x87,  0x87,  0x86,  0x86,  0x85,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA10_2. */
const an_Byte an_10_FPAA10_2_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x02, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0xC8,  0x10,  0x00,  0x12,  0x00,  
   0x00,  0xC8,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  0x08,  0x08,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC0, /* Byte address:  0 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xB0,  0xA0,  0x05,  0x8D,  0xD1,  0xD0,  0x03,  0x2D,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x03, /* Bank address:  3 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0xE1,  0x00,  0x20,  
   0x01,  0x13,  0x00,  0x10,  0x01,  0x1E,  0x00,  0x10,  
   0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCC, /* Byte address: 12 */
   0x04, /* Bank address:  4 */
   0x1C, /* Byte count:   28 */

   /* Data bytes for block */
   0x01,  0x1B,  0x00,  0x20,  0x01,  0xF1,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0xB1,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x1F,  0x00,  0x10,  0x00,  0x00,  0x00,  0x00,  
   0xFF,  0xFF,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x05, /* Bank address:  5 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x00,  0x30,  0x01,  0x81,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x06, /* Bank address:  6 */
   0x0B, /* Byte count:   11 */

   /* Data bytes for block */
   0x05,  0x01,  0x28,  0x01,  0x28,  0x00,  0x05,  0x01,  
   0x39,  0x01,  0x18,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x07, /* Bank address:  7 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x07, /* Bank address:  7 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x30,  0x01,  0x81,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDB, /* Byte address: 27 */
   0x08, /* Bank address:  8 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x05,  0x01,  0x3D,  0x01,  0x18,  0xC8,  0x18,  0xCB,  
   0x02,  0xC7,  0x0A,  0x0C,  0xCB,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x09, /* Bank address:  9 */
   0x11, /* Byte count:   17 */

   /* Data bytes for block */
   0x01,  0x12,  0x00,  0x20,  0x01,  0x81,  0x00,  0x20,  
   0x01,  0x13,  0x00,  0x10,  0x01,  0x18,  0x00,  0x10,  
   0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x8C, /* Byte address: 12 */
   0x0A, /* Bank address: 10 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x01,  0x1D,  0x00,  0x20,  0x01,  0x91,  0x00,  0x20,  
   0x81,  0x05,  0x01,  0x1D,  0x00,  0x10,  0x81,  0x05,  
   0x01,  0x91,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA10_3. */
const an_Byte an_10_FPAA10_3_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x03, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x10,  0x05,  0x00,  0x50,  0x02,  0x01,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x08,  0x08,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0xFF,  0xCD,  0x02,  0x06,  0x02,  0xCD,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x03, /* Bank address:  3 */
   0x0F, /* Byte count:   15 */

   /* Data bytes for block */
   0x01,  0x28,  0x01,  0x28,  0x01,  0x1D,  0x00,  0x10,  
   0x01,  0x21,  0x00,  0x10,  0x0F,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x04, /* Bank address:  4 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0x1E,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x91,  0x00,  0x10,  0x00,  0xFF,  0xFF,  0xE0,  0x03,  
   0x08,  0xDA,  0xE0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x05, /* Bank address:  5 */
   0x0F, /* Byte count:   15 */

   /* Data bytes for block */
   0x01,  0x28,  0x01,  0x28,  0x01,  0xF1,  0x00,  0x10,  
   0x01,  0xA1,  0x00,  0x10,  0x0F,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x06, /* Bank address:  6 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0x12,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x91,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x09, /* Bank address:  9 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x09, /* Bank address:  9 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x30,  0x01,  0x81,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x9B, /* Byte address: 27 */
   0x0A, /* Bank address: 10 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x05,  0x01,  0x3F,  0x01,  0x18,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This is the initial full configuration stream for FPAA10_4. */
const an_Byte an_10_FPAA10_4_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x04, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x40,  0x04,  0x00,  0x02,  0x31,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x10,  0x05,  0x00,  0x50,  0x02,  0x01,  
   0x20,  0x10,  0x00,  0x5E,  0x03,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x40,  0x00,  0x00,  0x40,  0x08,  0x08,  
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0xFF,  0xEA,  0xDF,  0x1E,  0x0B,  0xEA,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x03, /* Bank address:  3 */
   0x0F, /* Byte count:   15 */

   /* Data bytes for block */
   0x01,  0x28,  0x01,  0x28,  0x01,  0xD1,  0x00,  0x10,  
   0x01,  0x21,  0x00,  0x10,  0x0F,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x04, /* Bank address:  4 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0xE1,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x91,  0x00,  0x10,  0x00,  0xFF,  0xFF,  0xC8,  0x02,  
   0xC9,  0x02,  0xC8,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x05, /* Bank address:  5 */
   0x0F, /* Byte count:   15 */

   /* Data bytes for block */
   0x01,  0x28,  0x01,  0x28,  0x01,  0xF1,  0x00,  0x10,  
   0x01,  0xA1,  0x00,  0x10,  0x0F,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x06, /* Bank address:  6 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x20,  0x01,  0x82,  0x01,  0x13,  0x00,  0x10,  0x00,  
   0x05,  0x01,  0x21,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x91,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x09, /* Bank address:  9 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x09, /* Bank address:  9 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x30,  0x01,  0x81,  0x0F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x9B, /* Byte address: 27 */
   0x0A, /* Bank address: 10 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x05,  0x01,  0x3F,  0x01,  0x18,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_10_apiPrimaryConfigInfo an_10_apiPrimaryConfigData[an_10_apiChipCount] =
{
   /* FPAA10_1 */
   {
      an_10_FPAA10_1_PrimaryConfigInfo, /* data */
      453,                          /* length */
   },

   /* FPAA10_2 */
   {
      an_10_FPAA10_2_PrimaryConfigInfo, /* data */
      227,                          /* length */
   },

   /* FPAA10_3 */
   {
      an_10_FPAA10_3_PrimaryConfigInfo, /* data */
      185,                          /* length */
   },

   /* FPAA10_4 */
   {
      an_10_FPAA10_4_PrimaryConfigInfo, /* data */
      185                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_10_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA10_1 */
an_10_apiReconfigInfo an_10_FPAA10_1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA10_2 */
an_10_apiReconfigInfo an_10_FPAA10_2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA10_3 */
an_10_apiReconfigInfo an_10_FPAA10_3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA10_4 */
an_10_apiReconfigInfo an_10_FPAA10_4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_10_apiReconfigInfo* an_10_apiReconfigData[an_10_apiChipCount] =
{
   &an_10_FPAA10_1_ReconfigInfo,  /* FPAA10_1 */
   &an_10_FPAA10_2_ReconfigInfo,  /* FPAA10_2 */
   &an_10_FPAA10_3_ReconfigInfo,  /* FPAA10_3 */
   &an_10_FPAA10_4_ReconfigInfo   /* FPAA10_4 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_10_FPAA10_1_ReconfigBuffer[64] = {0}; /* FPAA10_1 */
an_Byte an_10_FPAA10_2_ReconfigBuffer[64] = {0}; /* FPAA10_2 */
an_Byte an_10_FPAA10_3_ReconfigBuffer[64] = {0}; /* FPAA10_3 */
an_Byte an_10_FPAA10_4_ReconfigBuffer[64] = {0}; /* FPAA10_4 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_10_apiReconfigBuffer[an_10_apiChipCount] =
{
   an_10_FPAA10_1_ReconfigBuffer, /* FPAA10_1 */
   an_10_FPAA10_2_ReconfigBuffer, /* FPAA10_2 */
   an_10_FPAA10_3_ReconfigBuffer, /* FPAA10_3 */
   an_10_FPAA10_4_ReconfigBuffer  /* FPAA10_4 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_10_apiChipFromCAM[an_10_apiCAMCount] =
{
   an_10_FPAA10_1,      /* "an_10_FPAA10_1_GainHold10_1_1" in chip "FPAA10_1" */
   an_10_FPAA10_1,      /* "an_10_FPAA10_1_SumadorNeurona10_1_1" in chip "FPAA10_1" */
   an_10_FPAA10_1,      /* "an_10_FPAA10_1_SumadorNeurona10_1_2" in chip "FPAA10_1" */
   an_10_FPAA10_1,      /* "an_10_FPAA10_1_TransferFunction10_1_1" in chip "FPAA10_1" */
   an_10_FPAA10_2,      /* "an_10_FPAA10_2_SumadorNeurona10_2_1" in chip "FPAA10_2" */
   an_10_FPAA10_2,      /* "an_10_FPAA10_2_SumadorNeurona10_2_2" in chip "FPAA10_2" */
   an_10_FPAA10_2,      /* "an_10_FPAA10_2_SumadorNeurona10_2_3" in chip "FPAA10_2" */
   an_10_FPAA10_2,      /* "an_10_FPAA10_2_SumadorNeurona10_2_4" in chip "FPAA10_2" */
   an_10_FPAA10_3,      /* "an_10_FPAA10_3_SumadorNeurona0_3_11" in chip "FPAA10_3" */
   an_10_FPAA10_3,      /* "an_10_FPAA10_3_SumadorNeurona10_3_1" in chip "FPAA10_3" */
   an_10_FPAA10_4,      /* "an_10_FPAA10_4_SumadorNeurona10_4_1" in chip "FPAA10_4" */
   an_10_FPAA10_4       /* "an_10_FPAA10_4_SumadorNeurona10_4_2" in chip "FPAA10_4" */
};

/* Component data table for the apiCapacitor's of GainHold10_1_1. */
extern const an_10_apiCapacitor an_10_FPAA10_1_GainHold10_1_1_Capacitor[2] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cout  */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_1_1. */
extern const an_10_apiCapacitor an_10_FPAA10_1_SumadorNeurona10_1_1_Capacitor[4] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* Cout  */ { 0x03, 0x04  }  /* 3, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_1_2. */
extern const an_10_apiCapacitor an_10_FPAA10_1_SumadorNeurona10_1_2_Capacitor[3] = 
{
   /* CinA  */ { 0x09, 0x04, }, /* 9, 4 */
   /* CinB  */ { 0x09, 0x03, }, /* 9, 3 */
   /* Cout  */ { 0x09, 0x02  }  /* 9, 2 */
};

/* Component data table for the apiCapacitor's of TransferFunction10_1_1. */
extern const an_10_apiCapacitor an_10_FPAA10_1_TransferFunction10_1_1_Capacitor[1] = 
{
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_2_1. */
extern const an_10_apiCapacitor an_10_FPAA10_2_SumadorNeurona10_2_1_Capacitor[4] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* Cout  */ { 0x03, 0x04  }  /* 3, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_2_2. */
extern const an_10_apiCapacitor an_10_FPAA10_2_SumadorNeurona10_2_2_Capacitor[4] = 
{
   /* CinA  */ { 0x03, 0x03, }, /* 3, 3 */
   /* CinB  */ { 0x03, 0x02, }, /* 3, 2 */
   /* CinC  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x00  }  /* 3, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_2_3. */
extern const an_10_apiCapacitor an_10_FPAA10_2_SumadorNeurona10_2_3_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x07, }, /* 9, 7 */
   /* CinB  */ { 0x09, 0x06, }, /* 9, 6 */
   /* CinC  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_2_4. */
extern const an_10_apiCapacitor an_10_FPAA10_2_SumadorNeurona10_2_4_Capacitor[4] = 
{
   /* CinA  */ { 0x09, 0x03, }, /* 9, 3 */
   /* CinB  */ { 0x09, 0x02, }, /* 9, 2 */
   /* CinC  */ { 0x09, 0x01, }, /* 9, 1 */
   /* Cout  */ { 0x09, 0x00  }  /* 9, 0 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona0_3_11. */
extern const an_10_apiCapacitor an_10_FPAA10_3_SumadorNeurona0_3_11_Capacitor[5] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* CinC  */ { 0x05, 0x05, }, /* 5, 5 */
   /* CinD  */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_3_1. */
extern const an_10_apiCapacitor an_10_FPAA10_3_SumadorNeurona10_3_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_4_1. */
extern const an_10_apiCapacitor an_10_FPAA10_4_SumadorNeurona10_4_1_Capacitor[5] = 
{
   /* CinA  */ { 0x03, 0x07, }, /* 3, 7 */
   /* CinB  */ { 0x03, 0x06, }, /* 3, 6 */
   /* CinC  */ { 0x03, 0x05, }, /* 3, 5 */
   /* CinD  */ { 0x03, 0x04, }, /* 3, 4 */
   /* Cout  */ { 0x03, 0x03  }  /* 3, 3 */
};

/* Component data table for the apiCapacitor's of SumadorNeurona10_4_2. */
extern const an_10_apiCapacitor an_10_FPAA10_4_SumadorNeurona10_4_2_Capacitor[5] = 
{
   /* CinA  */ { 0x05, 0x07, }, /* 5, 7 */
   /* CinB  */ { 0x05, 0x06, }, /* 5, 6 */
   /* CinC  */ { 0x05, 0x05, }, /* 5, 5 */
   /* CinD  */ { 0x05, 0x04, }, /* 5, 4 */
   /* Cout  */ { 0x05, 0x03  }  /* 5, 3 */
};

/* Component map for GainHold10_1_1 */
void* an_10_FPAA10_1_GainHold10_1_1_Components[2] = 
{
   (void*) &an_10_FPAA10_1_GainHold10_1_1_Capacitor[0],  /* Cin */
   (void*) &an_10_FPAA10_1_GainHold10_1_1_Capacitor[1]  /* Cout */
};

/* Component map for SumadorNeurona10_1_1 */
void* an_10_FPAA10_1_SumadorNeurona10_1_1_Components[5] = 
{
   (void*) &an_10_FPAA10_1_SumadorNeurona10_1_1_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_1_SumadorNeurona10_1_1_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_1_SumadorNeurona10_1_1_Capacitor[2],  /* CinC */
   (void*) an_10_apiInvalid,              /* CinD */
   (void*) &an_10_FPAA10_1_SumadorNeurona10_1_1_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona10_1_2 */
void* an_10_FPAA10_1_SumadorNeurona10_1_2_Components[5] = 
{
   (void*) &an_10_FPAA10_1_SumadorNeurona10_1_2_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_1_SumadorNeurona10_1_2_Capacitor[1],  /* CinB */
   (void*) an_10_apiInvalid,              /* CinC */
   (void*) an_10_apiInvalid,              /* CinD */
   (void*) &an_10_FPAA10_1_SumadorNeurona10_1_2_Capacitor[2]  /* Cout */
};

/* Component map for TransferFunction10_1_1 */
void* an_10_FPAA10_1_TransferFunction10_1_1_Components[1] = 
{
   (void*) &an_10_FPAA10_1_TransferFunction10_1_1_Capacitor[0]  /* Cout */
};

/* Component map for SumadorNeurona10_2_1 */
void* an_10_FPAA10_2_SumadorNeurona10_2_1_Components[5] = 
{
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_1_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_1_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_1_Capacitor[2],  /* CinC */
   (void*) an_10_apiInvalid,              /* CinD */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_1_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona10_2_2 */
void* an_10_FPAA10_2_SumadorNeurona10_2_2_Components[5] = 
{
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_2_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_2_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_2_Capacitor[2],  /* CinC */
   (void*) an_10_apiInvalid,              /* CinD */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_2_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona10_2_3 */
void* an_10_FPAA10_2_SumadorNeurona10_2_3_Components[5] = 
{
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_3_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_3_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_3_Capacitor[2],  /* CinC */
   (void*) an_10_apiInvalid,              /* CinD */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_3_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona10_2_4 */
void* an_10_FPAA10_2_SumadorNeurona10_2_4_Components[5] = 
{
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_4_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_4_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_4_Capacitor[2],  /* CinC */
   (void*) an_10_apiInvalid,              /* CinD */
   (void*) &an_10_FPAA10_2_SumadorNeurona10_2_4_Capacitor[3]  /* Cout */
};

/* Component map for SumadorNeurona0_3_11 */
void* an_10_FPAA10_3_SumadorNeurona0_3_11_Components[5] = 
{
   (void*) &an_10_FPAA10_3_SumadorNeurona0_3_11_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_3_SumadorNeurona0_3_11_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_3_SumadorNeurona0_3_11_Capacitor[2],  /* CinC */
   (void*) &an_10_FPAA10_3_SumadorNeurona0_3_11_Capacitor[3],  /* CinD */
   (void*) &an_10_FPAA10_3_SumadorNeurona0_3_11_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona10_3_1 */
void* an_10_FPAA10_3_SumadorNeurona10_3_1_Components[5] = 
{
   (void*) &an_10_FPAA10_3_SumadorNeurona10_3_1_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_3_SumadorNeurona10_3_1_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_3_SumadorNeurona10_3_1_Capacitor[2],  /* CinC */
   (void*) &an_10_FPAA10_3_SumadorNeurona10_3_1_Capacitor[3],  /* CinD */
   (void*) &an_10_FPAA10_3_SumadorNeurona10_3_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona10_4_1 */
void* an_10_FPAA10_4_SumadorNeurona10_4_1_Components[5] = 
{
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_1_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_1_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_1_Capacitor[2],  /* CinC */
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_1_Capacitor[3],  /* CinD */
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_1_Capacitor[4]  /* Cout */
};

/* Component map for SumadorNeurona10_4_2 */
void* an_10_FPAA10_4_SumadorNeurona10_4_2_Components[5] = 
{
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_2_Capacitor[0],  /* CinA */
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_2_Capacitor[1],  /* CinB */
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_2_Capacitor[2],  /* CinC */
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_2_Capacitor[3],  /* CinD */
   (void*) &an_10_FPAA10_4_SumadorNeurona10_4_2_Capacitor[4]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_10_apiCAMComponentData[an_10_apiCAMCount] =
{
   an_10_FPAA10_1_GainHold10_1_1_Components, /* an_10_FPAA10_1_GainHold10_1_1 */
   an_10_FPAA10_1_SumadorNeurona10_1_1_Components, /* an_10_FPAA10_1_SumadorNeurona10_1_1 */
   an_10_FPAA10_1_SumadorNeurona10_1_2_Components, /* an_10_FPAA10_1_SumadorNeurona10_1_2 */
   an_10_FPAA10_1_TransferFunction10_1_1_Components, /* an_10_FPAA10_1_TransferFunction10_1_1 */
   an_10_FPAA10_2_SumadorNeurona10_2_1_Components, /* an_10_FPAA10_2_SumadorNeurona10_2_1 */
   an_10_FPAA10_2_SumadorNeurona10_2_2_Components, /* an_10_FPAA10_2_SumadorNeurona10_2_2 */
   an_10_FPAA10_2_SumadorNeurona10_2_3_Components, /* an_10_FPAA10_2_SumadorNeurona10_2_3 */
   an_10_FPAA10_2_SumadorNeurona10_2_4_Components, /* an_10_FPAA10_2_SumadorNeurona10_2_4 */
   an_10_FPAA10_3_SumadorNeurona0_3_11_Components, /* an_10_FPAA10_3_SumadorNeurona0_3_11 */
   an_10_FPAA10_3_SumadorNeurona10_3_1_Components, /* an_10_FPAA10_3_SumadorNeurona10_3_1 */
   an_10_FPAA10_4_SumadorNeurona10_4_1_Components, /* an_10_FPAA10_4_SumadorNeurona10_4_1 */
   an_10_FPAA10_4_SumadorNeurona10_4_2_Components  /* an_10_FPAA10_4_SumadorNeurona10_4_2 */
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_10_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_10_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_10_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_10_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_10_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_10_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_10_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_10_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_10_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_10_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_10_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_10_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_10_ClearVortexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_10_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_10_ClearApexReconfigData(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_10_apiReconfigData[chip]->length = 3;
        an_10_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_10_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_10_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_10_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_10_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_10_apiReconfigData[chip]->length = 3;
        an_10_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_10_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_10_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_10_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_10_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_10_InitializeVortexReconfigData. |
  |  an_10_InitializeVortexReconfigData must be called again prior |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_10_InitializeApexReconfigData.   |
  |  an_10_InitializeApexReconfigData must be called again prior   |
  |  to using any other reconfiguration functions for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_10_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_10_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_SetVortexReconfigControlFlags(an_Chip chip, an_10_VortexControlByte flags)
     {
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_SetApexReconfigControlFlags(an_Chip chip, an_10_ApexControlByte flags)
     {
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_SetApexReconfigControlFlagsNOP(an_Chip chip, an_10_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_10_VortexControlByte an_10_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_10_ApexControlByte an_10_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_10_apiCapacitor* pCap = an_10_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_10_BuildReconfigDataBlock(an_10_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_10_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_10_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_10_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_10_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_10_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_10_FixedDivide(an_10_IntToFixed(capTry1), an_10_IntToFixed(capTry2));
           realizedError = an_10_FixedDivide(an_10_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_10_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_10_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_10_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_10_BuildReconfigDataBlock(an_10_apiChipFromCAM[cam], bank, byte, values, count);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_10_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_10_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_10_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_10_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_10_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                         FixedMultiply                          |
  +----------------------------------------------------------------+
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

     an_Fixed an_10_FixedMultiply(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned short left_l, left_r, right_l, right_r;
        unsigned long left_r_right_r, left_r_right_l, left_l_right_r, left_l_right_l;
        
        an_Fixed result = 0;
        
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
        
        /* In order to assure correct values, we're going to make all numbers positive, and
         * take care of the sign at the end. */
        if (left_neg) fLeft = -fLeft;
        if (right_neg) fRight = -fRight;
        
        /* Like elementary math, we're going to do this one word at a time. For example, 
         * we'll calculate the result of 660.33777 by 20.6752929, which is 13652.67680768.
         * In fixed-point notation, this is equivalent to multiplying 0x12345678 by 0x0140ACE0. So:
         *           0294 5678   (fLeft)
         *        *  0014 ACE0   (fRight)
         *           ---------
         *           3A64 4900   (left_r * right_r = left_r_right_r)
         *      01BD B180        (left_l * right_r = left_l_right_r)
         *      0006 C160        (left_r * right_l = left_r_right_l)
         *   0000 3390              (left_l * right_l = Left_l_right_l)
         *   -------------------
         *   0000 3554 AD44 4900 
         *
         * Since this result in is 32:32 notation, we chop off the upper word and lower word
         * to give us the correct final result: 3554 AD44 = 13652.67681885, which is fairly
         * close to our floating-point result.
         *
         * Note that there are limitations to what can be done here. For example, the largest
         * number that can be represented in fixed-point 16:16 notation is 32767.99998474
         * (0x7FFFFFFF), therefore any result that might go over that amount will yield an
         * invalid result. No check is made to ensure that the result will be correct even
         * if the result overflows. No error is generated either.
         */
         
        left_l = (unsigned short)(fLeft >> 16);
        left_r = (unsigned short)(fLeft & 0xFFFF);
        
        right_l = (unsigned short)(fRight >> 16);
        right_r = (unsigned short)(fRight & 0xFFFF);
        
        left_r_right_r = (unsigned long)left_r * (unsigned long)right_r;
        left_r_right_l = (unsigned long)left_r * (unsigned long)right_l;
        left_l_right_r = (unsigned long)left_l * (unsigned long)right_r;
        left_l_right_l = (unsigned long)left_l * (unsigned long)right_l;
        
        /* Combine our individual lines to get the result */
        result = (left_r_right_r >> 16) +
                 (left_r_right_l) +
                 (left_l_right_r) +
                 (left_l_right_l << 16);
        
        /* If the left or the right (but not both) were negative, negate the result
         * to give us a negative number as a result. */
        if (left_neg ^ right_neg)
           result = -result;
         
        return result;
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_10_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)  
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_10_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_10_apiReconfigInfo* pInfo = an_10_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_10_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

