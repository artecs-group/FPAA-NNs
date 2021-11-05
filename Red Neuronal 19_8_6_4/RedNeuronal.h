#ifndef REDNEURONAL_H
#define REDNEURONAL_H

#include <windows.h>
#include <stdio.h>
#include <errno.h>
#include <math.h>

#include "ApiCode.h"
#include "CAMCode.h"
#include "EnvioDatos.h"
#include "FPAA_anadigm.h"

#ifdef __cplusplus
extern "C" {
#endif

	void enviarEntradasRedNeuronalSumDiff(double *imagen);
	void establecerPesos(int reduccion);
	void establecerValoresTransferFunction(int defecto);
	int leerDatosEntradaFichero(double *imagen, int num, int columns, const char *url);
	int establecerInfoRedNeuronal(const char *url, const char *fileName, const char *numWS, const char *fc1_w, const char *fc2_w, const char *fc3_w, int numNeuronasC1, int numNeuronasC2, int numNeuronasC3, const char *sigmInv, const char *sigmInv0);
	int realizarClasificacionAnalogico(int inicio, int numSumas, double **resultados);
	int realizarClasificacionDigital(int inicio, int nSumas, double **resultados);
	void calcularValoresClasificacionADC(double *valor1, double *valor2, double *valor3, double *valor4, int placaADC);
	int almacenarResultadorFichero(double *resultados, int inicio, int nSum, const char *ficheroNombre);
	void limpiarVariablesRedNeuronal(void);

	char *urlDataSets;
	char *fileDataSet;
	char *fileWC1;
	char *fileWC2;
	char *fileWC3;
	char *fileSigmoidesInvertidos;
	char *fileSigmoidesInvertidos0;
	
	double *dataSet;
	int numClasificaciones;
	int numNeuronasCapa1;
	int numNeuronasCapa2;
	int numNeuronasCapa3;

	double *pesosCapa1, *pesosCapa2, *pesosCapa3;
	double *sigmoidesInvertidos, *sigmoidesInvertidos0;

	extern int errno;

#define NUM_ENTRADAS		19

#ifdef __cplusplus
}
#endif

#endif REDNEURONAL_H