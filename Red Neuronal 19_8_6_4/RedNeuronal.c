#include "RedNeuronal.h"

extern char *urlDataSets;
extern char *urlWC1, *urlWC2, *urlWC3;
extern char *fileDataSet;
extern double *dataSet;
extern int numClasificaciones;

extern int numNeuronasCapa1;
extern int numNeuronasCapa2;
extern int numNeuronasCapa3;

extern double *pesosCapa1, *pesosCapa2, *pesosCapa3;
extern double *sigmoidesInvertidos, *sigmoidesInvertidos0;

/******************************************************************************
*                                                                            *
* Procedure Name : enviarEntradaRedNeuronalSumDiff                           *
*                                                                            *
* Purpose        : Configures the whole CAMs in order to generate analog     * 
*				   direct current signals with voltages received by parameter*
*                                                                            *
* Inputs         : double *imagen - voltages which will be generated		 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void enviarEntradasRedNeuronalSumDiff(double *imagen) {

	int slee = 0;

	//FPAA1_1 && FPAA2_4 && FPAA4_3 && FPAA6_2 //////////////////
	//Input1
	generarInput(an_1_FPAA1_1, an_1_FPAA1_1_Input1_1_1, 1, imagen[0]);
	Sleep(slee);
	generarInput(an_2_FPAA2_4, an_2_FPAA2_4_Input2_4_1, 2, imagen[0]);
	Sleep(slee);
	generarInput(an_4_FPAA4_3, an_4_FPAA4_3_Input4_3_1, 4, imagen[0]);
	Sleep(slee);
	generarInput(an_6_FPAA6_2, an_6_FPAA6_2_Input6_2_1, 6, imagen[0]);
	Sleep(slee);
	//Input2
	generarInput(an_1_FPAA1_1, an_1_FPAA1_1_Input1_1_2, 1, imagen[1]);
	Sleep(slee);
	generarInput(an_2_FPAA2_4, an_2_FPAA2_4_Input2_4_2, 2, imagen[1]);
	Sleep(slee);
	generarInput(an_4_FPAA4_3, an_4_FPAA4_3_Input4_3_2, 4, imagen[1]);
	Sleep(slee);
	generarInput(an_6_FPAA6_2, an_6_FPAA6_2_Input6_2_2, 6, imagen[1]);
	Sleep(slee);
	//Input3
	generarInput(an_1_FPAA1_1, an_1_FPAA1_1_Input1_1_3, 1, imagen[2]);
	Sleep(slee);
	generarInput(an_2_FPAA2_4, an_2_FPAA2_4_Input2_4_3, 2, imagen[2]);
	Sleep(slee);
	generarInput(an_4_FPAA4_3, an_4_FPAA4_3_Input4_3_3, 4, imagen[2]);
	Sleep(slee);
	generarInput(an_6_FPAA6_2, an_6_FPAA6_2_Input6_2_3, 6, imagen[2]);
	Sleep(slee);

	//FPAA1_2 && FPAA3_1 && FPAA4_4 && FPAA6_3 //////////////////
	//Input4
	generarInput(an_1_FPAA1_2, an_1_FPAA1_2_Input1_2_1, 1, imagen[3]);
	Sleep(slee);
	generarInput(an_3_FPAA3_1, an_3_FPAA3_1_Input3_1_1, 3, imagen[3]);
	Sleep(slee);
	generarInput(an_4_FPAA4_4, an_4_FPAA4_4_Input4_4_1, 4, imagen[3]);
	Sleep(slee);
	generarInput(an_6_FPAA6_3, an_6_FPAA6_3_Input6_3_1, 6, imagen[3]);
	Sleep(slee);
	//Input5
	generarInput(an_1_FPAA1_2, an_1_FPAA1_2_Input1_2_2, 1, imagen[4]);
	Sleep(slee);
	generarInput(an_3_FPAA3_1, an_3_FPAA3_1_Input3_1_2, 3, imagen[4]);
	Sleep(slee);
	generarInput(an_4_FPAA4_4, an_4_FPAA4_4_Input4_4_2, 4, imagen[4]);
	Sleep(slee);
	generarInput(an_6_FPAA6_3, an_6_FPAA6_3_Input6_3_2, 6, imagen[4]);
	Sleep(slee);
	//Input6
	generarInput(an_1_FPAA1_2, an_1_FPAA1_2_Input1_2_3, 1, imagen[5]);
	Sleep(slee);
	generarInput(an_3_FPAA3_1, an_3_FPAA3_1_Input3_1_3, 3, imagen[5]);
	Sleep(slee);
	generarInput(an_4_FPAA4_4, an_4_FPAA4_4_Input4_4_3, 4, imagen[5]);
	Sleep(slee);
	generarInput(an_6_FPAA6_3, an_6_FPAA6_3_Input6_3_3, 6, imagen[5]);
	Sleep(slee);

	//FPAA1_3 && FPAA3_2 && FPAA5_1 && FPAA6_4 //////////////////
	//Input7
	generarInput(an_1_FPAA1_3, an_1_FPAA1_3_Input1_3_1, 1, imagen[6]);
	Sleep(slee);
	generarInput(an_3_FPAA3_2, an_3_FPAA3_2_Input3_2_1, 3, imagen[6]);
	Sleep(slee);
	generarInput(an_5_FPAA5_1, an_5_FPAA5_1_Input5_1_1, 5, imagen[6]);
	Sleep(slee);
	generarInput(an_6_FPAA6_4, an_6_FPAA6_4_Input6_4_1, 6, imagen[6]);
	Sleep(slee);
	//Input8
	generarInput(an_1_FPAA1_3, an_1_FPAA1_3_Input1_3_2, 1, imagen[7]);
	Sleep(slee);
	generarInput(an_3_FPAA3_2, an_3_FPAA3_2_Input3_2_2, 3, imagen[7]);
	Sleep(slee);
	generarInput(an_5_FPAA5_1, an_5_FPAA5_1_Input5_1_2, 5, imagen[7]);
	Sleep(slee);
	generarInput(an_6_FPAA6_4, an_6_FPAA6_4_Input6_4_2, 6, imagen[7]);
	Sleep(slee);
	//Input9
	generarInput(an_1_FPAA1_3, an_1_FPAA1_3_Input1_3_3, 1, imagen[8]);
	Sleep(slee);
	generarInput(an_3_FPAA3_2, an_3_FPAA3_2_Input3_2_3, 3, imagen[8]);
	Sleep(slee);
	generarInput(an_5_FPAA5_1, an_5_FPAA5_1_Input5_1_3, 5, imagen[8]);
	Sleep(slee);
	generarInput(an_6_FPAA6_4, an_6_FPAA6_4_Input6_4_3, 6, imagen[8]);
	Sleep(slee);

	//FPAA1_4 && FPAA3_3 && FPAA5_2 && FPAA7_1 //////////////////
	//Input10
	generarInput(an_1_FPAA1_4, an_1_FPAA1_4_Input1_4_1, 1, imagen[9]);
	Sleep(slee);
	generarInput(an_3_FPAA3_3, an_3_FPAA3_3_Input3_3_1, 3, imagen[9]);
	Sleep(slee);
	generarInput(an_5_FPAA5_2, an_5_FPAA5_2_Input5_2_1, 5, imagen[9]);
	Sleep(slee);
	generarInput(an_7_FPAA7_1, an_7_FPAA7_1_Input7_1_1, 7, imagen[9]);
	Sleep(slee);
	//Input11
	generarInput(an_1_FPAA1_4, an_1_FPAA1_4_Input1_4_2, 1, imagen[10]);
	Sleep(slee);
	generarInput(an_3_FPAA3_3, an_3_FPAA3_3_Input3_3_2, 3, imagen[10]);
	Sleep(slee);
	generarInput(an_5_FPAA5_2, an_5_FPAA5_2_Input5_2_2, 5, imagen[10]);
	Sleep(slee);
	generarInput(an_7_FPAA7_1, an_7_FPAA7_1_Input7_1_2, 7, imagen[10]);
	Sleep(slee);
	//Input12
	generarInput(an_1_FPAA1_4, an_1_FPAA1_4_Input1_4_3, 1, imagen[11]);
	Sleep(slee);
	generarInput(an_3_FPAA3_3, an_3_FPAA3_3_Input3_3_3, 3, imagen[11]);
	Sleep(slee);
	generarInput(an_5_FPAA5_2, an_5_FPAA5_2_Input5_2_3, 5, imagen[11]);
	Sleep(slee);
	generarInput(an_7_FPAA7_1, an_7_FPAA7_1_Input7_1_3, 7, imagen[11]);
	Sleep(slee);

	//FPAA2_1 && FPAA3_4 && FPAA5_3 && FPAA7_2 //////////////////
	//Input13
	generarInput(an_2_FPAA2_1, an_2_FPAA2_1_Input2_1_1, 2, imagen[12]);
	Sleep(slee);
	generarInput(an_3_FPAA3_4, an_3_FPAA3_4_Input3_4_1, 3, imagen[12]);
	Sleep(slee);
	generarInput(an_5_FPAA5_3, an_5_FPAA5_3_Input5_3_1, 5, imagen[12]);
	Sleep(slee);
	generarInput(an_7_FPAA7_2, an_7_FPAA7_2_Input7_2_1, 7, imagen[12]);
	Sleep(slee);
	//Input14
	generarInput(an_2_FPAA2_1, an_2_FPAA2_1_Input2_1_2, 2, imagen[13]);
	Sleep(slee);
	generarInput(an_3_FPAA3_4, an_3_FPAA3_4_Input3_4_2, 3, imagen[13]);
	Sleep(slee);
	generarInput(an_5_FPAA5_3, an_5_FPAA5_3_Input5_3_2, 5, imagen[13]);
	Sleep(slee);
	generarInput(an_7_FPAA7_2, an_7_FPAA7_2_Input7_2_2, 7, imagen[13]);
	Sleep(slee);
	//Input15
	generarInput(an_2_FPAA2_1, an_2_FPAA2_1_Input2_1_3, 2, imagen[14]);
	Sleep(slee);
	generarInput(an_3_FPAA3_4, an_3_FPAA3_4_Input3_4_3, 3, imagen[14]);
	Sleep(slee);
	generarInput(an_5_FPAA5_3, an_5_FPAA5_3_Input5_3_3, 5, imagen[14]);
	Sleep(slee);
	generarInput(an_7_FPAA7_2, an_7_FPAA7_2_Input7_2_3, 7, imagen[14]);
	Sleep(slee);

	//FPAA2_2 && FPAA4_1 && FPAA5_4 && FPAA7_3 //////////////////
	//Input16
	generarInput(an_2_FPAA2_2, an_2_FPAA2_2_Input2_2_1, 2, imagen[15]);
	Sleep(slee);
	generarInput(an_4_FPAA4_1, an_4_FPAA4_1_Input4_1_1, 4, imagen[15]);
	Sleep(slee);
	generarInput(an_5_FPAA5_4, an_5_FPAA5_4_Input5_4_1, 5, imagen[15]);
	Sleep(slee);
	generarInput(an_7_FPAA7_3, an_7_FPAA7_3_Input7_3_1, 7, imagen[15]);
	Sleep(slee);
	//Input17
	generarInput(an_2_FPAA2_2, an_2_FPAA2_2_Input2_2_2, 2, imagen[16]);
	Sleep(slee);
	generarInput(an_4_FPAA4_1, an_4_FPAA4_1_Input4_1_2, 4, imagen[16]);
	Sleep(slee);
	generarInput(an_5_FPAA5_4, an_5_FPAA5_4_Input5_4_2, 5, imagen[16]);
	Sleep(slee);
	generarInput(an_7_FPAA7_3, an_7_FPAA7_3_Input7_3_2, 7, imagen[16]);
	Sleep(slee);

	//FPAA2_3 && FPAA4_2 && FPAA6_1 && FPAA7_4 //////////////////
	//Input18
	generarInput(an_2_FPAA2_3, an_2_FPAA2_3_Input2_3_1, 2, imagen[17]);
	Sleep(slee);
	generarInput(an_4_FPAA4_2, an_4_FPAA4_2_Input4_2_1, 4, imagen[17]);
	Sleep(slee);
	generarInput(an_6_FPAA6_1, an_6_FPAA6_1_Input6_1_1, 6, imagen[17]);
	Sleep(slee);
	generarInput(an_7_FPAA7_4, an_7_FPAA7_4_Input7_4_1, 7, imagen[17]);
	Sleep(slee);
	//Input19
	generarInput(an_2_FPAA2_3, an_2_FPAA2_3_Input2_3_2, 2, imagen[18]);
	Sleep(slee);
	generarInput(an_4_FPAA4_2, an_4_FPAA4_2_Input4_2_2, 4, imagen[18]);
	Sleep(slee);
	generarInput(an_6_FPAA6_1, an_6_FPAA6_1_Input6_1_2, 6, imagen[18]);
	Sleep(slee);
	generarInput(an_7_FPAA7_4, an_7_FPAA7_4_Input7_4_2, 7, imagen[18]);
	Sleep(slee);
}

void establecerPesos(int reduccion) {
	
	if (reduccion <= 0) {
		reduccion = 1;
	}

	// CAPA 1 ////////////////////////////////////////////
	//NEURONAS 1 & 2 /////////////////////////////////////
	
	//FPAA1_1
	modificarPeso(an_1_FPAA1_1, an_1_FPAA1_1_SumadorNeurona1_1_1, 1, pesosCapa1[0 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[1 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[2 * numNeuronasCapa1 + 0] / reduccion, -1);
	modificarPeso(an_1_FPAA1_1, an_1_FPAA1_1_SumadorNeurona1_1_2, 1, pesosCapa1[0 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[1 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[2 * numNeuronasCapa1 + 1] / reduccion, -1);

	//FPAA1_2
	modificarPeso(an_1_FPAA1_2, an_1_FPAA1_2_SumadorNeurona1_2_1, 1, 1, pesosCapa1[3 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[4 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[5 * numNeuronasCapa1 + 0] / reduccion);
	modificarPeso(an_1_FPAA1_2, an_1_FPAA1_2_SumadorNeurona1_2_2, 1, 1, pesosCapa1[3 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[4 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[5 * numNeuronasCapa1 + 1] / reduccion);

	//FPAA1_3
	modificarPeso(an_1_FPAA1_3, an_1_FPAA1_3_SumadorNeurona1_3_1, 1, 1, pesosCapa1[6 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[7 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[8 * numNeuronasCapa1 + 0] / reduccion);
	modificarPeso(an_1_FPAA1_3, an_1_FPAA1_3_SumadorNeurona1_3_2, 1, 1, pesosCapa1[6 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[7 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[8 * numNeuronasCapa1 + 1] / reduccion);

	//FPAA1_4
	modificarPeso(an_1_FPAA1_4, an_1_FPAA1_4_SumadorNeurona1_4_1, 1, 1, pesosCapa1[9 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[10 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[11 * numNeuronasCapa1 + 0] / reduccion);
	modificarPeso(an_1_FPAA1_4, an_1_FPAA1_4_SumadorNeurona1_4_2, 1, 1, pesosCapa1[9 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[10 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[11 * numNeuronasCapa1 + 1] / reduccion);

	////////////

	//FPAA2_1
	modificarPeso(an_2_FPAA2_1, an_2_FPAA2_1_SumadorNeurona2_1_1, 2, 1, pesosCapa1[12 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[13 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[14 * numNeuronasCapa1 + 0] / reduccion);
	modificarPeso(an_2_FPAA2_1, an_2_FPAA2_1_SumadorNeurona2_1_2, 2, 1, pesosCapa1[12 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[13 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[14 * numNeuronasCapa1 + 1] / reduccion);

	//FPAA2_2 *
	modificarPeso(an_2_FPAA2_2, an_2_FPAA2_2_SumadorNeurona2_2_1, 2, pesosCapa1[15 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[16 * numNeuronasCapa1 + 0] / reduccion, -1, -1);
	modificarPeso(an_2_FPAA2_2, an_2_FPAA2_2_SumadorNeurona2_2_2, 2, 1, 1, pesosCapa1[17 * numNeuronasCapa1 + 0] / reduccion, pesosCapa1[18 * numNeuronasCapa1 + 0] / reduccion);

	//FPAA2_3 *
	modificarPeso(an_2_FPAA2_3, an_2_FPAA2_3_SumadorNeurona2_3_1, 2, pesosCapa1[17 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[18 * numNeuronasCapa1 + 1] / reduccion, -1, -1);
	modificarPeso(an_2_FPAA2_3, an_2_FPAA2_3_SumadorNeurona2_3_2, 2, 1, 1, pesosCapa1[15 * numNeuronasCapa1 + 1] / reduccion, pesosCapa1[16 * numNeuronasCapa1 + 1] / reduccion);

	//NEURONAS 3 & 4 /////////////////////////////////////

	//FPAA2_4
	modificarPeso(an_2_FPAA2_4, an_2_FPAA2_4_SumadorNeurona2_4_1, 2, pesosCapa1[0 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[1 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[2 * numNeuronasCapa1 + 2] / reduccion, -1);
	modificarPeso(an_2_FPAA2_4, an_2_FPAA2_4_SumadorNeurona2_4_2, 2, pesosCapa1[0 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[1 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[2 * numNeuronasCapa1 + 3] / reduccion, -1);

	////////////

	//FPAA3_1
	modificarPeso(an_3_FPAA3_1, an_3_FPAA3_1_SumadorNeurona3_1_1, 3, 1, pesosCapa1[3 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[4 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[5 * numNeuronasCapa1 + 2] / reduccion);
	modificarPeso(an_3_FPAA3_1, an_3_FPAA3_1_SumadorNeurona3_1_2, 3, 1, pesosCapa1[3 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[4 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[5 * numNeuronasCapa1 + 3] / reduccion);

	//FPAA3_2
	modificarPeso(an_3_FPAA3_2, an_3_FPAA3_2_SumadorNeurona3_2_1, 3, 1, pesosCapa1[6 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[7 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[8 * numNeuronasCapa1 + 2] / reduccion);
	modificarPeso(an_3_FPAA3_2, an_3_FPAA3_2_SumadorNeurona3_2_2, 3, 1, pesosCapa1[6 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[7 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[8 * numNeuronasCapa1 + 3] / reduccion);

	//FPAA3_3
	modificarPeso(an_3_FPAA3_3, an_3_FPAA3_3_SumadorNeurona3_3_1, 3, 1, pesosCapa1[9 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[10 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[11 * numNeuronasCapa1 + 2] / reduccion);
	modificarPeso(an_3_FPAA3_3, an_3_FPAA3_3_SumadorNeurona3_3_2, 3, 1, pesosCapa1[9 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[10 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[11 * numNeuronasCapa1 + 3] / reduccion);

	//FPAA3_4
	modificarPeso(an_3_FPAA3_4, an_3_FPAA3_4_SumadorNeurona3_4_1, 3, 1, pesosCapa1[12 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[13 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[14 * numNeuronasCapa1 + 2] / reduccion);
	modificarPeso(an_3_FPAA3_4, an_3_FPAA3_4_SumadorNeurona3_4_2, 3, 1, pesosCapa1[12 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[13 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[14 * numNeuronasCapa1 + 3] / reduccion);

	////////////

	//FPAA4_1 *
	modificarPeso(an_4_FPAA4_1, an_4_FPAA4_1_SumadorNeurona4_1_1, 4, pesosCapa1[15 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[16 * numNeuronasCapa1 + 2] / reduccion, -1, -1);
	modificarPeso(an_4_FPAA4_1, an_4_FPAA4_1_SumadorNeurona4_1_2, 4, 1, 1, pesosCapa1[17 * numNeuronasCapa1 + 2] / reduccion, pesosCapa1[18 * numNeuronasCapa1 + 2] / reduccion);

	//FPAA4_2 *
	modificarPeso(an_4_FPAA4_2, an_4_FPAA4_2_SumadorNeurona4_2_1, 4, pesosCapa1[17 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[18 * numNeuronasCapa1 + 3] / reduccion, -1, -1);
	modificarPeso(an_4_FPAA4_2, an_4_FPAA4_2_SumadorNeurona4_2_2, 4, 1, 1, pesosCapa1[15 * numNeuronasCapa1 + 3] / reduccion, pesosCapa1[16 * numNeuronasCapa1 + 3] / reduccion);

	//NEURONAS 5 & 6 /////////////////////////////////////

	//FPAA4_3
	modificarPeso(an_4_FPAA4_3, an_4_FPAA4_3_SumadorNeurona4_3_1, 4, pesosCapa1[0 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[1 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[2 * numNeuronasCapa1 + 4] / reduccion, -1);
	modificarPeso(an_4_FPAA4_3, an_4_FPAA4_3_SumadorNeurona4_3_2, 4, pesosCapa1[0 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[1 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[2 * numNeuronasCapa1 + 5] / reduccion, -1);

	//FPAA4_4
	modificarPeso(an_4_FPAA4_4, an_4_FPAA4_4_SumadorNeurona4_4_1, 4, 1, pesosCapa1[3 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[4 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[5 * numNeuronasCapa1 + 4] / reduccion);
	modificarPeso(an_4_FPAA4_4, an_4_FPAA4_4_SumadorNeurona4_4_2, 4, 1, pesosCapa1[3 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[4 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[5 * numNeuronasCapa1 + 5] / reduccion);

	///////////

	//FPAA5_1
	modificarPeso(an_5_FPAA5_1, an_5_FPAA5_1_SumadorNeurona5_1_1, 5, 1, pesosCapa1[6 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[7 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[8 * numNeuronasCapa1 + 4] / reduccion);
	modificarPeso(an_5_FPAA5_1, an_5_FPAA5_1_SumadorNeurona5_1_2, 5, 1, pesosCapa1[6 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[7 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[8 * numNeuronasCapa1 + 5] / reduccion);

	//FPAA5_2
	modificarPeso(an_5_FPAA5_2, an_5_FPAA5_2_SumadorNeurona5_2_1, 5, 1, pesosCapa1[9 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[10 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[11 * numNeuronasCapa1 + 4] / reduccion);
	modificarPeso(an_5_FPAA5_2, an_5_FPAA5_2_SumadorNeurona5_2_2, 5, 1, pesosCapa1[9 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[10 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[11 * numNeuronasCapa1 + 5] / reduccion);

	//FPAA5_3
	modificarPeso(an_5_FPAA5_3, an_5_FPAA5_3_SumadorNeurona5_3_1, 5, 1, pesosCapa1[12 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[13 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[14 * numNeuronasCapa1 + 4] / reduccion);
	modificarPeso(an_5_FPAA5_3, an_5_FPAA5_3_SumadorNeurona5_3_2, 5, 1, pesosCapa1[12 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[13 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[14 * numNeuronasCapa1 + 5] / reduccion);

	//FPAA5_4 *
	modificarPeso(an_5_FPAA5_4, an_5_FPAA5_4_SumadorNeurona5_4_1, 5, pesosCapa1[15 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[16 * numNeuronasCapa1 + 4] / reduccion, -1, -1);
	modificarPeso(an_5_FPAA5_4, an_5_FPAA5_4_SumadorNeurona5_4_2, 5, 1, 1, pesosCapa1[17 * numNeuronasCapa1 + 4] / reduccion, pesosCapa1[18 * numNeuronasCapa1 + 4] / reduccion);

	///////////

	//FPAA6_1 *
	modificarPeso(an_6_FPAA6_1, an_6_FPAA6_1_SumadorNeurona6_1_1, 6, pesosCapa1[17 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[18 * numNeuronasCapa1 + 5] / reduccion, -1, -1);
	modificarPeso(an_6_FPAA6_1, an_6_FPAA6_1_SumadorNeurona6_1_2, 6, 1, 1, pesosCapa1[15 * numNeuronasCapa1 + 5] / reduccion, pesosCapa1[16 * numNeuronasCapa1 + 5] / reduccion);

	//NEURONAS 7 & 8 /////////////////////////////////////

	//FPAA6_2
	modificarPeso(an_6_FPAA6_2, an_6_FPAA6_2_SumadorNeurona6_2_1, 6, pesosCapa1[0 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[1 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[2 * numNeuronasCapa1 + 6] / reduccion, -1);
	modificarPeso(an_6_FPAA6_2, an_6_FPAA6_2_SumadorNeurona6_2_2, 6, pesosCapa1[0 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[1 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[2 * numNeuronasCapa1 + 7] / reduccion, -1);

	//FPAA6_3
	modificarPeso(an_6_FPAA6_3, an_6_FPAA6_3_SumadorNeurona6_3_1, 6, 1, pesosCapa1[3 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[4 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[5 * numNeuronasCapa1 + 6] / reduccion);
	modificarPeso(an_6_FPAA6_3, an_6_FPAA6_3_SumadorNeurona6_3_2, 6, 1, pesosCapa1[3 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[4 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[5 * numNeuronasCapa1 + 7] / reduccion);

	//FPAA6_4
	modificarPeso(an_6_FPAA6_4, an_6_FPAA6_4_SumadorNeurona6_4_1, 6, 1, pesosCapa1[6 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[7 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[8 * numNeuronasCapa1 + 6] / reduccion);
	modificarPeso(an_6_FPAA6_4, an_6_FPAA6_4_SumadorNeurona6_4_2, 6, 1, pesosCapa1[6 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[7 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[8 * numNeuronasCapa1 + 7] / reduccion);

	///////////

	//FPAA7_1
	modificarPeso(an_7_FPAA7_1, an_7_FPAA7_1_SumadorNeurona7_1_1, 7, 1, pesosCapa1[9 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[10 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[11 * numNeuronasCapa1 + 6] / reduccion);
	modificarPeso(an_7_FPAA7_1, an_7_FPAA7_1_SumadorNeurona7_1_2, 7, 1, pesosCapa1[9 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[10 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[11 * numNeuronasCapa1 + 7] / reduccion);

	//FPAA7_2
	modificarPeso(an_7_FPAA7_2, an_7_FPAA7_2_SumadorNeurona7_2_1, 7, 1, pesosCapa1[12 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[13 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[14 * numNeuronasCapa1 + 6] / reduccion);
	modificarPeso(an_7_FPAA7_2, an_7_FPAA7_2_SumadorNeurona7_2_2, 7, 1, pesosCapa1[12 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[13 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[14 * numNeuronasCapa1 + 7] / reduccion);

	//FPAA7_3 *
	modificarPeso(an_7_FPAA7_3, an_7_FPAA7_3_SumadorNeurona7_3_1, 7, pesosCapa1[15 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[16 * numNeuronasCapa1 + 6] / reduccion, -1, -1);
	modificarPeso(an_7_FPAA7_3, an_7_FPAA7_3_SumadorNeurona7_3_2, 7, 1, 1, pesosCapa1[17 * numNeuronasCapa1 + 6] / reduccion, pesosCapa1[18 * numNeuronasCapa1 + 6] / reduccion);

	//FPAA7_4 *
	modificarPeso(an_7_FPAA7_4, an_7_FPAA7_4_SumadorNeurona7_4_1, 7, pesosCapa1[17 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[18 * numNeuronasCapa1 + 7] / reduccion, -1, -1);
	modificarPeso(an_7_FPAA7_4, an_7_FPAA7_4_SumadorNeurona7_4_2, 7, 1, 1, pesosCapa1[15 * numNeuronasCapa1 + 7] / reduccion, pesosCapa1[16 * numNeuronasCapa1 + 7] / reduccion);

	//CAPA 2////////////////////////////////////////////////////////////
	//NEURONAS 1 & 2 ///////////////////////////////////////////////////

	//FPAA8_1
	modificarPeso(an_8_FPAA8_1, an_8_FPAA8_1_SumadorNeurona8_1_1, 8, pesosCapa2[0 * numNeuronasCapa2 + 0] / reduccion, pesosCapa2[1 * numNeuronasCapa2 + 0] / reduccion, pesosCapa2[2 * numNeuronasCapa2 + 0] / reduccion, pesosCapa2[3 * numNeuronasCapa2 + 0] / reduccion);
	//modificarPeso(an_8_FPAA8_1, an_8_FPAA8_1_SumadorNeurona8_1_2, 8, pesosCapa2[0 * numNeuronasCapa2 + 1] / reduccion, pesosCapa2[1 * numNeuronasCapa2 + 1] / reduccion, pesosCapa2[2 * numNeuronasCapa2 + 1] / reduccion, pesosCapa2[3 * numNeuronasCapa2 + 1] / reduccion);
	modificarPeso(an_8_FPAA8_1, an_8_FPAA8_1_SumadorNeurona8_1_2, 8, 0.01, pesosCapa2[1 * numNeuronasCapa2 + 1] / reduccion, pesosCapa2[2 * numNeuronasCapa2 + 1] / reduccion, pesosCapa2[3 * numNeuronasCapa2 + 1] / reduccion);

	//FPAA8_2
	modificarPeso(an_8_FPAA8_2, an_8_FPAA8_2_SumadorNeurona8_2_1, 8, 1, 1, pesosCapa2[4 * numNeuronasCapa2 + 0] / reduccion, pesosCapa2[5 * numNeuronasCapa2 + 0] / reduccion);
	modificarPeso(an_8_FPAA8_2, an_8_FPAA8_2_SumadorNeurona8_2_2, 8, 1, pesosCapa2[4 * numNeuronasCapa2 + 1] / reduccion, pesosCapa2[5 * numNeuronasCapa2 + 1] / reduccion, -1);

	//FPAA8_3
	modificarPeso(an_8_FPAA8_3, an_8_FPAA8_3_SumadorNeurona8_3_1, 8, 1, pesosCapa2[6 * numNeuronasCapa2 + 1] / reduccion, pesosCapa2[7 * numNeuronasCapa2 + 1] / reduccion, -1);
	modificarPeso(an_8_FPAA8_3, an_8_FPAA8_3_SumadorNeurona8_3_2, 8, pesosCapa2[6 * numNeuronasCapa2 + 0] / reduccion, pesosCapa2[7 * numNeuronasCapa2 + 0] / reduccion, -1, -1);

	//NEURONAS 3 & 4 ////////////////////////////////////////////////////

	//FPAA8_4
	modificarPeso(an_8_FPAA8_4, an_8_FPAA8_4_SumadorNeurona8_4_1, 8, pesosCapa2[0 * numNeuronasCapa2 + 2] / reduccion, pesosCapa2[1 * numNeuronasCapa2 + 2] / reduccion, pesosCapa2[2 * numNeuronasCapa2 + 2] / reduccion, pesosCapa2[3 * numNeuronasCapa2 + 2] / reduccion);
	modificarPeso(an_8_FPAA8_4, an_8_FPAA8_4_SumadorNeurona8_4_2, 8, pesosCapa2[0 * numNeuronasCapa2 + 3] / reduccion, pesosCapa2[1 * numNeuronasCapa2 + 3] / reduccion, pesosCapa2[2 * numNeuronasCapa2 + 3] / reduccion, pesosCapa2[3 * numNeuronasCapa2 + 3] / reduccion);

	///////////////

	//FPAA9_1
	modificarPeso(an_9_FPAA9_1, an_9_FPAA9_1_SumadorNeurona9_1_1, 9, 1, 1, pesosCapa2[4 * numNeuronasCapa2 + 2] / reduccion, pesosCapa2[5 * numNeuronasCapa2 + 2] / reduccion);
	modificarPeso(an_9_FPAA9_1, an_9_FPAA9_1_SumadorNeurona9_1_2, 9, 1, pesosCapa2[4 * numNeuronasCapa2 + 3] / reduccion, pesosCapa2[5 * numNeuronasCapa2 + 3] / reduccion, -1);

	//FPAA9_2
	modificarPeso(an_9_FPAA9_2, an_9_FPAA9_2_SumadorNeurona9_2_1, 9, 1, pesosCapa2[6 * numNeuronasCapa2 + 3] / reduccion, pesosCapa2[7 * numNeuronasCapa2 + 3] / reduccion, -1);
	modificarPeso(an_9_FPAA9_2, an_9_FPAA9_2_SumadorNeurona9_2_2, 9, pesosCapa2[6 * numNeuronasCapa2 + 2] / reduccion, pesosCapa2[7 * numNeuronasCapa2 + 2] / reduccion, -1, -1);

	//NEURONAS 5 & 6 ////////////////////////////////////////////////////

	//FPAA9_3
	modificarPeso(an_9_FPAA9_3, an_9_FPAA9_3_SumadorNeurona9_3_1, 9, pesosCapa2[0 * numNeuronasCapa2 + 4] / reduccion, pesosCapa2[1 * numNeuronasCapa2 + 4] / reduccion, pesosCapa2[2 * numNeuronasCapa2 + 4] / reduccion, pesosCapa2[3 * numNeuronasCapa2 + 4] / reduccion);
	modificarPeso(an_9_FPAA9_3, an_9_FPAA9_3_SumadorNeurona9_3_2, 9, pesosCapa2[0 * numNeuronasCapa2 + 5] / reduccion, pesosCapa2[1 * numNeuronasCapa2 + 5] / reduccion, pesosCapa2[2 * numNeuronasCapa2 + 5] / reduccion, pesosCapa2[3 * numNeuronasCapa2 + 5] / reduccion);

	//FPAA9_4
	modificarPeso(an_9_FPAA9_4, an_9_FPAA9_4_SumadorNeurona9_4_1, 9, 1, 1, pesosCapa2[4 * numNeuronasCapa2 + 4] / reduccion, pesosCapa2[5 * numNeuronasCapa2 + 4] / reduccion);
	modificarPeso(an_9_FPAA9_4, an_9_FPAA9_4_SumadorNeurona9_4_2, 9, 1, pesosCapa2[4 * numNeuronasCapa2 + 5] / reduccion, pesosCapa2[5 * numNeuronasCapa2 + 5] / reduccion, -1);

	///////////////

	//FPAA10_1
	modificarPeso(an_10_FPAA10_1, an_10_FPAA10_1_SumadorNeurona10_1_1, 10, 1, pesosCapa2[6 * numNeuronasCapa2 + 5] / reduccion, pesosCapa2[7 * numNeuronasCapa2 + 5] / reduccion, -1);
	modificarPeso(an_10_FPAA10_1, an_10_FPAA10_1_SumadorNeurona10_1_2, 10, pesosCapa2[6 * numNeuronasCapa2 + 4] / reduccion, pesosCapa2[7 * numNeuronasCapa2 + 4] / reduccion, -1, -1);
}

void establecerValoresTransferFunction(int defecto) {
	double *sigmoides;
	
	
	if (defecto == 1) {
		sigmoides = sigmoidesInvertidos;
	}
	else {
		sigmoides = sigmoidesInvertidos0;
	}

	//PLACA2 - NEURONAS 1.1 & 1.2
	establecerValoresLUT(an_2_FPAA2_2, an_2_FPAA2_2_TransferFunction2_2_1, 2, sigmoides);
	establecerValoresLUT(an_2_FPAA2_3, an_2_FPAA2_3_TransferFunction2_3_1, 2, sigmoides);

	//PLACA4 - NEURONAS 1.3 & 1.4
	establecerValoresLUT(an_4_FPAA4_1, an_4_FPAA4_1_TransferFunction4_1_1, 4, sigmoides);
	establecerValoresLUT(an_4_FPAA4_2, an_4_FPAA4_2_TransferFunction4_2_1, 4, sigmoides);

	//PLACA5&6 - NEURONAS 1.5 & 1.6
	establecerValoresLUT(an_5_FPAA5_4, an_5_FPAA5_4_TransferFunction5_4_1, 5, sigmoides);
	establecerValoresLUT(an_6_FPAA6_1, an_6_FPAA6_1_TransferFunction6_1_1, 6, sigmoides);

	//PLACA 7 - NEURONAS 1.7 & 1.8
	establecerValoresLUT(an_7_FPAA7_3, an_7_FPAA7_3_TransferFunction7_3_1, 7, sigmoides);
	establecerValoresLUT(an_7_FPAA7_4, an_7_FPAA7_4_TransferFunction7_4_1, 7, sigmoides);

	//PLACA 8 - NEURONAS 2.1 & 2.2
	establecerValoresLUT(an_8_FPAA8_2, an_8_FPAA8_2_TransferFunction8_2_1, 8, sigmoides);
	establecerValoresLUT(an_8_FPAA8_3, an_8_FPAA8_3_TransferFunction8_3_1, 8, sigmoides);

	//PLACA 9 - NEURONAS 2.3 & 2.4
	establecerValoresLUT(an_9_FPAA9_1, an_9_FPAA9_1_TransferFunction9_1_1, 9, sigmoides);
	establecerValoresLUT(an_9_FPAA9_2, an_9_FPAA9_2_TransferFunction9_2_1, 9, sigmoides);

	//PLACA 9&10 - NEURONAS 2.5 & 2.6
	establecerValoresLUT(an_9_FPAA9_4, an_9_FPAA9_4_TransferFunction9_4_1, 9, sigmoides);
	establecerValoresLUT(an_10_FPAA10_1, an_10_FPAA10_1_TransferFunction10_1_1, 10, sigmoides);
}

/******************************************************************************
*                                                                            *
* Procedure Name : leerDatosEntradaFichero		                             *
*                                                                            *
* Purpose        : Configures the whole CAMs in order to generate analog     *
*				   direct current signals with voltages received by parameter*
*                                                                            *
* Inputs         : double *imagen - Variable that stores the values read	 * 
*				   from the file specified in the URL. Memory blocks		 *
*				   of the variable have to be allocated previosly			 *
*				   int rows - number of lines to be read				     *
*                  int columns - number of columns to be read                *
*                  const char *url - location of the file to be read         *
*                                                                            *
* Outputs        : double *imagen - array with the values read from the file *
*				   int - number of inputs read								 * 
*                                                                            *
******************************************************************************/
int leerDatosEntradaFichero(double *imagen, int rows, int columns, const char *url) {
	FILE *archivo = NULL;
	int i = 0;
	
	errno_t errOpen;
	int errScan = 0;

	errOpen = fopen_s(&archivo, url, "r");

	if (errOpen == 0) {
		while (i < rows && errScan != EOF) {
			errScan = fscanf_s(archivo, "%lf", &imagen[i * columns]);

			if (errScan == EOF) {
				fprintf(stderr, "Value of errno: %d\n", errno);

				if (errno == EINVAL) {
					fprintf(stderr, "Argumentos inválidos para leer el documento de inputs.\n");
				}
			}
			
			for (int j = 1; j < columns && errScan != EOF; j++) {							
				errScan = fscanf_s(archivo, ",%lf", &imagen[i * columns + j]);
			}

			i++;
		}

		fclose(archivo);
	}
	else {
		fprintf(stderr, "Value of errno: %d\n", errno);
	}

	return i;
}

/******************************************************************************
*                                                                            *
* Procedure Name : establecerInfoRedNeuronal		                         *
*                                                                            *
* Purpose        : Collect the data stored in the arguments of main			 * 
*				   application and stores it in the variables of the		 *
*				   application												 *
*                                                                            *
* Inputs         : const char *url - Location of file containing			 *
*				   the input data 											 *
*				   double *imagen - Variable that stores the values read	 *
*				   from the file specified in the URL. Memory blocks		 *
*				   of the variable have to be allocated previosly			 *
*				   int num - number of lines to be read						 *
*                                                                            *
* Outputs        : int - ''0'' if all went well, and ''-1'' if				 *
*				   there was an error										 *
*                                                                            *
******************************************************************************/
int establecerInfoRedNeuronal(const char *url, const char *fileName, const char *numWS, const char *fc1_w, const char *fc2_w, const char *fc3_w, int numNeuronasC1, int numNeuronasC2, int numNeuronasC3, const char *sigmInv, const char *sigmInv0) {
	
	errno_t errStrCp, errCat;
	int ret = -1;
	
	//(reserva de memoria)RUTA DE LA CARPETA CON LOS DATASET
	urlDataSets = malloc((strlen(url) + 1) * sizeof(char));
	
	//(reserva de memoria)RUTA DE LOS ARCHIVOS DE LOS DATASETS (carpeta + nombre de archivo)
	fileDataSet = malloc((strlen(url) + strlen(fileName) + 1) * sizeof(char));
	fileWC1 = malloc((strlen(url) + strlen(fc1_w) + 1) * sizeof(char));
	fileWC2 = malloc((strlen(url) + strlen(fc2_w) + 1) * sizeof(char));
	fileWC3 = malloc((strlen(url) + strlen(fc3_w) + 1) * sizeof(char));
	fileSigmoidesInvertidos = malloc((strlen(url) + strlen(sigmInv) + 1) * sizeof(char));
	fileSigmoidesInvertidos0 = malloc((strlen(url) + strlen(sigmInv0) + 1) * sizeof(char));

	
	//(copia)RUTA DE LA UBICACION
	errStrCp  = strcpy_s(urlDataSets, (strlen(url) + 1) * sizeof(char), url);										//url para guardar archivos
	errStrCp &= strcpy_s(fileDataSet, (strlen(url) + strlen(fileName) + 1) * sizeof(char), url);					//url del dataset de inputs
	errStrCp &= strcpy_s(fileWC1, (strlen(url) + strlen(fc1_w) + 1) * sizeof(char), url);							//url del dataset de pesos capa 1
	errStrCp &= strcpy_s(fileWC2, (strlen(url) + strlen(fc2_w) + 1) * sizeof(char), url);							//url del dataset de pesos capa 2
	errStrCp &= strcpy_s(fileWC3, (strlen(url) + strlen(fc3_w) + 1) * sizeof(char), url);							//url del dataset de pesos capa 3
	errStrCp &= strcpy_s(fileSigmoidesInvertidos, (strlen(url) + strlen(sigmInv) + 1) * sizeof(char), url);         //url de los valores de sigmoide original
	errStrCp &= strcpy_s(fileSigmoidesInvertidos0, (strlen(url) + strlen(sigmInv0) + 1) * sizeof(char), url);         //url de los valores de sigmoide alterado



	if (errStrCp == 0) {
		//(concatenacion)RUTA DE LA UBICACION + NOMBRE
		errCat  = strcat_s(fileDataSet, (strlen(url) + strlen(fileName) + 1) * sizeof(char), fileName);
		errCat &= strcat_s(fileWC1, (strlen(url) + strlen(fc1_w) + 1) * sizeof(char), fc1_w);
		errCat &= strcat_s(fileWC2, (strlen(url) + strlen(fc2_w) + 1) * sizeof(char), fc2_w);
		errCat &= strcat_s(fileWC3, (strlen(url) + strlen(fc3_w) + 1) * sizeof(char), fc3_w);
		errCat &= strcat_s(fileSigmoidesInvertidos, (strlen(url) + strlen(sigmInv) + 1) * sizeof(char), sigmInv);
		errCat &= strcat_s(fileSigmoidesInvertidos0, (strlen(url) + strlen(sigmInv0) + 1) * sizeof(char), sigmInv0);

		if (errCat == 0) {
			numClasificaciones = atoi(numWS);
			numNeuronasCapa1 = atoi(numNeuronasC1);
			numNeuronasCapa2 = atoi(numNeuronasC2);
			numNeuronasCapa3 = atoi(numNeuronasC3);

			if (numClasificaciones == 0) {
				fprintf(stderr, "No se pudo establecer la info de WS de la aplicación (numSumas). Value of errno: %d\n", errno);
			}
			else {
				
				dataSet = malloc(sizeof(double) * numClasificaciones * NUM_ENTRADAS);
				pesosCapa1 = malloc(sizeof(double) * numNeuronasCapa1 * NUM_ENTRADAS);
				pesosCapa2 = malloc(sizeof(double) * numNeuronasCapa1 * numNeuronasCapa2);
				pesosCapa3 = malloc(sizeof(double) * numNeuronasCapa2 * numNeuronasCapa3);
				sigmoidesInvertidos = malloc(sizeof(double) * 256);
				sigmoidesInvertidos0 = malloc(sizeof(double) * 256);

				if(
					leerDatosEntradaFichero(dataSet, numClasificaciones, NUM_ENTRADAS, fileDataSet) == numClasificaciones &&
				    leerDatosEntradaFichero(pesosCapa1, NUM_ENTRADAS, numNeuronasCapa1, fileWC1) == NUM_ENTRADAS &&
				    leerDatosEntradaFichero(pesosCapa2, numNeuronasCapa1, numNeuronasCapa2, fileWC2) == numNeuronasCapa1 &&
					leerDatosEntradaFichero(pesosCapa3, numNeuronasCapa2, numNeuronasCapa3, fileWC3) == numNeuronasCapa2 &&
					leerDatosEntradaFichero(sigmoidesInvertidos, 256, 1, fileSigmoidesInvertidos) == 256 &&
					leerDatosEntradaFichero(sigmoidesInvertidos0, 256, 1, fileSigmoidesInvertidos0) == 256
				)
					ret = 0;
			}
		}
		else {
			fprintf(stderr, "No se pudo establecer la info de WS de la aplicación (URL + NOMBRE ARCHIVO). Value of errno: %d\n", errno);
		}
	}
	else {
		fprintf(stderr, "No se pudo establecer la info de WS de la aplicación(URL). Value of errno: %d\n", errno);
	}

	return ret;
}

/******************************************************************************
*                                                                            *
* Procedure Name : realizarClasificacionAnalogico						     *
*                                                                            *
* Purpose        : Reconfigures FPAAs and reads values from ADC and returns  * 
*				   the difference between them.								 *
*                                                                            *
* Inputs         : int inicio - position of the first set of inputs to be    *
*				   calculated												 *
*				   int nClas - number of weighted sum to be done			 *
*                                                                            *
* Outputs        : int ret - if weighted sum is realized, 0 will be returned,*
*				  -1 in otherwise											 *
*				   double *resultados - variable in which the results are    *
*				   stored. Initialization is done here						 *
*                                                                            *
******************************************************************************/
int realizarClasificacionAnalogico(int inicio, int nClas, double **resultados) {
	
	*resultados = (double *)malloc(sizeof(double) * nClas * 4);

	double resClas1, resClas2, resClas3, resClas4;
	int ret = -1;
	int precaucion = 0;

	if (inicio >= 0 && inicio < numClasificaciones && nClas > 0 && nClas <= numClasificaciones) {
		
		float porcentaje = (((float)0) / (float)numClasificaciones) * 100.0;
		printf("\r--- %.1f%% completado.", porcentaje);
		
		for (int i = 0; i < nClas; i++) {

			/*unsigned char data = 0xFF;
			SendChar(0x02, HdComm1);
			SendChar('?', HdComm1);
			while (data) {
				RecvCharTEMPORIZADO(&data, HdComm1, 5000);
			}
			SendChar(0x03, HdComm1);
			data = 0xFF;

			SendChar(0x02, HdComm2);
			SendChar('?', HdComm2);
			while (data) {
				RecvCharTEMPORIZADO(&data, HdComm2, 5000);
			}
			SendChar(0x03, HdComm2);
			data = 0xFF;

			SendChar(0x02, HdComm3);
			SendChar('?', HdComm3);
			while (data) {
				RecvCharTEMPORIZADO(&data, HdComm3, 5000);
			}
			SendChar(0x03, HdComm3);
			data = 0xFF;

			SendChar(0x02, HdComm4);
			SendChar('?', HdComm4);
			while (data) {
				RecvCharTEMPORIZADO(&data, HdComm4, 5000);
			}
			SendChar(0x03, HdComm4);
			data = 0xFF;

			SendChar(0x02, HdComm5);
			SendChar('?', HdComm5);
			while (data) {
				RecvCharTEMPORIZADO(&data, HdComm5, 5000);
			}
			SendChar(0x03, HdComm5);
			data = 0xFF;

			SendChar(0x02, HdComm6);
			SendChar('?', HdComm6);
			while (data) {
				RecvCharTEMPORIZADO(&data, HdComm6, 5000);
			}
			SendChar(0x03, HdComm6);
			data = 0xFF;

			SendChar(0x02, HdComm7);
			SendChar('?', HdComm7);
			while (data) {
				RecvCharTEMPORIZADO(&data, HdComm7, 5000);
			}
			SendChar(0x03, HdComm7);
			data = 0xFF;*/
			
			//1º Enviamos las entradas a las FPAAs
			enviarEntradasRedNeuronalSumDiff(&dataSet[inicio * NUM_ENTRADAS]);
			inicio++;
			
			//2º Leemos la señal resultante mediante el ADC de la placa que contiene las FPAAs
			calcularValoresClasificacionADC(&resClas1, &resClas2, &resClas3, &resClas4, 10);

			//3º Guardar el resultado en el array de resultados
			resultados[0][i * 4] = resClas1;
			resultados[0][i * 4 + 1] = resClas2;
			resultados[0][i * 4 + 2] = resClas3;
			resultados[0][i * 4 + 3] = resClas4;

			//4º Mostrar porcentaje de sumas calculadas
			//char porc[6];
			//float l = (float)i + 1;
			float porcentaje = (((float)i + 1)/(float)nClas) * 100.0;
			printf("\r--- %.1f%% completado.", porcentaje);
		}
		
		printf("\n");
		ret = 0;
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : realizarClasificacionDigital						         *
*                                                                            *
* Purpose        : Calculates the weighted sums digitally.					 *
*                                                                            *
* Inputs         : int inicio - position of the first set of inputs to be    *
*				   calculated												 *
*				   int nClasif - number of weighted sum to be done			 *
*                                                                            *
* Outputs        : int ret - if weighted sum is realized, 0 will be returned,*
*				  -1 in otherwise											 *
*				   double *resultados - variable in which the results are    *
*				   stored. Initialization is done here						 *
*                                                                            *
******************************************************************************/
int realizarClasificacionDigital(int inicio, int nClasif, double **resultados) {

	*resultados = (double *)malloc(sizeof(double) * nClasif * numNeuronasCapa2);
	double *resCapa1 = malloc(sizeof(double) * numNeuronasCapa1);
	double *resCapa2 = malloc(sizeof(double) * numNeuronasCapa2);
	double *resCapa3 = malloc(sizeof(double) * numNeuronasCapa3);

	int ret = -1;

	if (inicio >= 0 && inicio < numClasificaciones && nClasif > 0 && nClasif <= numClasificaciones) {

		float porcentaje = (((float)0) / (float)numClasificaciones) * 100.0;
		printf("\r--- %.1f%% completado.", porcentaje);

		for (int l = 0; l < nClasif; l++) {

			resCapa1[0] = 0; resCapa2[0] = 0; resCapa3[0] = 0;
			resCapa1[1] = 0; resCapa2[1] = 0; resCapa3[1] = 0;
			resCapa1[2] = 0; resCapa2[2] = 0; resCapa3[2] = 0;
			resCapa1[3] = 0; resCapa2[3] = 0; resCapa3[3] = 0;
			resCapa1[4] = 0; resCapa2[4] = 0;
			resCapa1[5] = 0; resCapa2[5] = 0;
			resCapa1[6] = 0;
			resCapa1[7] = 0;
			
			//1Aº Calcular la suma ponderada de la primera capa
			for (int i = 0; i < NUM_ENTRADAS; i++) {
				for (int j = 0; j < numNeuronasCapa1; j++) {
					double bb = dataSet[inicio * NUM_ENTRADAS + i];
					double tita = pesosCapa1[numNeuronasCapa1 * i + j];
					
					resCapa1[j] += dataSet[inicio * NUM_ENTRADAS + i] * pesosCapa1[numNeuronasCapa1 * i + j];
				}
			}

			//1Bº Calcular la sigmoide de los resultados de la primera capa
			for (int j = 0; j < numNeuronasCapa1; j++) {
				resCapa1[j] = 1 / (1 + exp(-resCapa1[j]));
			}

			//1Cº Calcular la suma ponderada de la segunda capa
			for (int i = 0; i < numNeuronasCapa1; i++) {
				for (int j = 0; j < numNeuronasCapa2; j++) {
					resCapa2[j] += resCapa1[i] * pesosCapa2[numNeuronasCapa2 * i + j];
				}
			}

			//1Dº Calcular la sigmoide de los resultados de la segunda capa
			for (int j = 0; j < numNeuronasCapa2; j++) {
				resCapa2[j] = 1 / (1 + exp(-resCapa2[j]));
			}

			//1Cº Calcular la suma ponderada de la tercera capa -> RESULTADOS FINAL
			for (int i = 0; i < numNeuronasCapa2; i++) {
				for (int j = 0; j < numNeuronasCapa3; j++) {
					resCapa3[j] += resCapa2[i] * pesosCapa3[numNeuronasCapa3 * i + j];
				}
			}

			inicio++;

			//2º Guardar el resultado en el array de resultados
			//resultados[0][l] = resWS;
			memcpy(resultados[0] + l * numNeuronasCapa3, resCapa3, sizeof(double) * numNeuronasCapa3);

			//3º Mostrar porcentaje de sumas calculadas
			//char porc[6];
			//float l = (float)i + 1;
			float porcentaje = (((float)l + 1) / (float)numClasificaciones) * 100.0;
			printf("\r--- %.1f%% completado.", porcentaje);
		}

		printf("\n");
		ret = 0;

		free(resCapa1);
		free(resCapa2);
		free(resCapa3);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : calcularValoresClasificacionADC		                     *
*                                                                            *
* Purpose        : Reads values from ADC and returns the difference          *
*				   between them.											 *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : double *valor - Initialized variable in which the read    * 
				   value will be stored										 *
*                                                                            *
******************************************************************************/
void calcularValoresClasificacionADC(double *valor1, double *valor2, double *valor3, double *valor4, int placaADC) {
	
	double voltP1, voltN1, voltP2, voltN2, voltP3, voltN3, voltP4, voltN4, lecturaP1, lecturaN1, lecturaP2, lecturaN2, lecturaP3, lecturaN3, lecturaP4, lecturaN4;
	int numIteraciones = 10;

	voltP1 = 0;
	voltN1 = 0;
	voltP2 = 0;
	voltN2 = 0;
	voltP3 = 0;
	voltN3 = 0;
	voltP4 = 0;
	voltN4 = 0;

	for (int i = 0; i < numIteraciones; i++) {
		leerADC('0', &lecturaP1, placaADC);
		leerADC('1', &lecturaN1, placaADC);
		leerADC('2', &lecturaP2, placaADC);
		leerADC('3', &lecturaN2, placaADC);
		leerADC('4', &lecturaP3, placaADC);
		leerADC('5', &lecturaN3, placaADC);
		leerADC('6', &lecturaP4, placaADC);
		leerADC('7', &lecturaN4, placaADC);

		voltP1 = voltP1 + lecturaP1;
		voltN1 = voltN1 + lecturaN1;

		voltP2 = voltP2 + lecturaP2;
		voltN2 = voltN2 + lecturaN2;

		voltP3 = voltP3 + lecturaP3;
		voltN3 = voltN3 + lecturaN3;

		voltP4 = voltP4 + lecturaP4;
		voltN4 = voltN4 + lecturaN4;
	}

	voltP1 = voltP1 / numIteraciones;
	voltN1 = voltN1 / numIteraciones;

	voltP2 = voltP2 / numIteraciones;
	voltN2 = voltN2 / numIteraciones;

	voltP3 = voltP3 / numIteraciones;
	voltN3 = voltN3 / numIteraciones;

	voltP4 = voltP4 / numIteraciones;
	voltN4 = voltN4 / numIteraciones;

	*valor1 = voltP1 - voltN1;
	*valor2 = voltP2 - voltN2;
	*valor3 = voltP3 - voltN3;
	*valor4 = voltP4 - voltN4;
}

/******************************************************************************
*                                                                            *
* Procedure Name : almacenarResultadorFichero							     *
*                                                                            *
* Purpose        : Writes the results to a txt file placed in the same		 *
*				   directory as the input data file.						 *
*                                                                            *
* Inputs         : double *resultados - variable with the data that will     *
*				   be written												 *
*                  const char *ficheroNombre - name of the output file       *
*                                                                            *
* Outputs        : double *valor - Initialized variable in which the read    *
*				   value will be stored										 *
*                                                                            *
******************************************************************************/
int almacenarResultadorFichero(double *resultados, int inicio, int nClasif, const char *ficheroNombre) {
	int ret = -1;
	errno_t cpy, cat, errOpen;
	
	FILE *ficheroResultados = NULL;

	char *urlFichero;

	urlFichero = malloc((strlen(urlDataSets) + strlen(ficheroNombre) + 1) * sizeof(char));
	
	cpy = strcpy_s(urlFichero, (strlen(urlDataSets) + strlen(ficheroNombre) + 1) * sizeof(char), urlDataSets);
	cat = strcat_s(urlFichero, (strlen(urlDataSets) + strlen(ficheroNombre) + 1) * sizeof(char), ficheroNombre);

	if (cpy == 0 && cat == 0) {
		errOpen = fopen_s(&ficheroResultados, urlFichero, "wb");

		if (errOpen == 0) {

			for (int i = 0; i < nClasif; i++) {
				for (int j = 0; j < numNeuronasCapa3; j++) {
					char v1[_CVTBUFSIZE];

					_gcvt_s(v1, _CVTBUFSIZE, resultados[inicio * numNeuronasCapa3 + j], 4);
					
					fputs(v1, ficheroResultados);

					if (j < numNeuronasCapa3 - 1) {
						fputs(",", ficheroResultados);
					}
					else {
						fputs("\n", ficheroResultados);
					}

				}
				
				//if(i < nClasif - 1)
					//fputs("\n", ficheroResultados);

				inicio++;
			}

			ret = 0;
			fclose(ficheroResultados);
		}
	}
	else {
		fprintf(stderr, "No se pudo generar archivo de resultados. Value of errno: %d\n", errno);
	}

	free(urlFichero);
}

/******************************************************************************
*                                                                            *
* Procedure Name : limpiarVariablesWeightedSum		                         *
*                                                                            *
* Purpose        : Frees the memory used by variables of WeightedSum		 *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none														 *
*                                                                            *
******************************************************************************/
void limpiarVariablesRedNeuronal(void) {
	free(urlDataSets);
	free(fileDataSet);
	free(dataSet);
	free(fileWC1);
	free(fileWC2);
	free(pesosCapa1);
	free(pesosCapa2);
	free(sigmoidesInvertidos);
	free(sigmoidesInvertidos0);
}