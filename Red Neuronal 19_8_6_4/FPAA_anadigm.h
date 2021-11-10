#ifndef FPAA_ANADIGM_H
#define FPAA_ANADIGM_H

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "ApiCode.h"
#include "CAMCode.h"
#include "EnvioDatos.h"

#ifdef __cplusplus
extern "C" {
#endif

	char ShowAvailablePorts(void);
	void seleccionarPortComInicializar(void);
	void detectarNumFPAA(HANDLE *HdComm, int *Num_FPAAs);
	int InitRS232(int portNum, HANDLE *HdComm);
	unsigned short leerADC(unsigned char channel, double* adc_voltage, int placa);
	void establecerConfiguracionPrimariaFPAAs();
	void configuracionPrimariaPlaca1();
	void configuracionPrimariaPlaca2();
	void configuracionPrimariaPlaca3();
	void configuracionPrimariaPlaca4();
	void configuracionPrimariaPlaca5();
	void configuracionPrimariaPlaca6();
	void configuracionPrimariaPlaca7();
	void configuracionPrimariaPlaca8();
	void configuracionPrimariaPlaca9();
	void configuracionPrimariaPlaca10();
	void resetearFPAAs(int placa);
	void generarInput(an_Chip FPAA, an_CAM cam, int numPlaca, double voltOut);
	void modificarPeso(an_Chip FPAA, an_CAM cam, int numPlaca, double peso1, double peso2, double peso3, double peso4);
	void establecerValoresLUT(an_Chip FPAA, an_CAM cam, int numPlaca, double *valores);
	void modificarFactorPrevioLUT(an_Chip FPAA, an_CAM cam, int numPlaca, double factor);

	HANDLE HdComm1;
	HANDLE HdComm2;
	HANDLE HdComm3;
	HANDLE HdComm4;
	HANDLE HdComm5;
	HANDLE HdComm6;
	HANDLE HdComm7;
	HANDLE HdComm8;
	HANDLE HdComm9;
	HANDLE HdComm10;

	int Num_FPAAs_1;
	int Num_FPAAs_2;
	int Num_FPAAs_3;
	int Num_FPAAs_4;
	int Num_FPAAs_5;
	int Num_FPAAs_6;
	int Num_FPAAs_7;
	int Num_FPAAs_8;
	int Num_FPAAs_9;
	int Num_FPAAs_10;

	int placa1Activa;
	int placa2Activa;
	int placa3Activa;
	int placa4Activa;
	int placa5Activa;
	int placa6Activa;
	int placa7Activa;
	int placa8Activa;
	int placa9Activa;
	int placa10Activa;
	
#define PRI		1
#define UPD		0

#ifdef __cplusplus
}
#endif

#endif FPAA_ANADIGM_H