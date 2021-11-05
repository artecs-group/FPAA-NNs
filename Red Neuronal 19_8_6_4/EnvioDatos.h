#ifndef ENVIODATOS_H
#define ENVIODATOS_H

#include <windows.h>
#include <time.h>

#include "ApiCode.h"
//#include "CAMCode.h"

#ifdef __cplusplus
extern "C" {
#endif


	//DEFINICIONES RUTINAS
	void SendChar(unsigned char AscChar, HANDLE HdComm);
	void SendData(unsigned char ConfigData, HANDLE HdComm);
	unsigned char ConvChar2Asc(unsigned char data);
	unsigned char ConvAsc2Char(unsigned char data);
	void RecvChar(unsigned char *data, HANDLE HdComm);
	int RecvCharTEMPORIZADO(unsigned char *data, HANDLE HdComm, int temp);
	void Configure_FPAA(int Primary, const an_Byte* Data, int Size, HANDLE Hdcomm);


#ifdef __cplusplus
}
#endif

#endif /* ENVIODATOS_H */
