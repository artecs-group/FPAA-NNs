#include <stdlib.h>

#include "ApiCode.h"
#include "CAMCode.h"
#include "EnvioDatos.h"
#include "FPAA_anadigm.h"
#include "RedNeuronal.h"
#include "ArduinoAnalogico.h"

void inicilizarSistema(void);
void inicializarReconfiguracionFPAAs(void);
void limpiarSistema(int var);

void main(int argc, char** argv){
	
	int opcion;
	double *resultados = NULL;
	int inic = 0, fin = 0;
	int factdiv = 1;
	int LUTrespuesta = 1;
	
	if (establecerInfoRedNeuronal(argv[1], argv[3], argv[2], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9], argv[10], argv[11]) == 0) {
		inicilizarSistema();
		//escribirLCD("Cluster x40 FPAA", "Red neuronal 19.8.6.4");

		printf("******************************\n");
		printf("*********RED NEURONAL*********\n");
		printf("*********v.2021-03-18*********\n");

		while (1) {

			printf("******************************\n");
			printf("1 -> Clasificacion ANALOGICA unica\n");
			printf("2 -> Clasificacion DIGITAL unica\n");
			printf("3 -> Clasificacion de fichero - ANALOGICO\n");
			printf("4 -> Clasificacion de fichero - DIGITAL\n");
			printf("6 -> Leer ADC\n");
			printf("7 -> Resetear placas y volver a configurarlas\n");
			printf("8 -> Modificar pesos\n");
			printf("9 -> Modificar valores LUT\n");
			printf("0 -> Salir\n");
			printf("******************************\n");
			printf("- Marque una opcion: ");
			scanf_s("%d", &opcion);

			switch (opcion) {
			case 1:

				printf("--- Opcion clasificacion ANALOGICA especifica seleccionada.\n");
				printf("--- Marque posicion del set de entradas: ");
				scanf_s("%d", &opcion);

				realizarClasificacionAnalogico(opcion, 1, &resultados);

				printf("------------------------------\n");
				printf("--- RESULTADO: %f , %f , %f , %f\n", resultados[0], resultados[1], resultados[2], resultados[3]);
				printf("------------------------------\n");

				free(&resultados[0]);

				break;

			case 2:

				printf("--- Opcion clasificacion DIGITAL especifica seleccionada.\n");
				printf("--- Marque posicion del set de entradas: ");
				scanf_s("%d", &opcion);

				realizarClasificacionDigital(opcion, 1, &resultados);

				printf("------------------------------\n");
				printf("--- RESULTADO: %f , %f , %f , %f\n", resultados[0], resultados[1], resultados[2], resultados[3]);
				printf("------------------------------\n");

				free(&resultados[0]);

				break;

			case 3:
				
				printf("--- Opcion clasificacion de fichero - ANALOGICO seleccionada.\n");
				printf("--- Marque posicion de inicio[0-%d]: ", numClasificaciones - 1);
				scanf_s("%d", &inic);
				printf("--- Marque posicion de fin[1-%d]: ", numClasificaciones - 1);
				scanf_s("%d", &fin);
				printf("--- A realizar clasificaciones desde %d a %d. Calculando...\n", inic, fin);
				
				realizarClasificacionAnalogico(inic, fin - inic + 1, &resultados);

				char nombre[100];
				sprintf_s(nombre, (100 * sizeof(char)), "resultadosClasificacion19_8_6_4Analogico_test%d_%d_LUTZEROUNO.txt", inic, fin);

				almacenarResultadorFichero(resultados, 0, fin - inic + 1, nombre);

				printf("------------------------------\n");
				printf("--- COMPLETADO. Resultados almacenados en fichero de texto\n");
				printf("------------------------------\n");

				free(&resultados[0]);

				break;

			case 4:

				printf("--- Opcion clasificacion de fichero - DIGITAL seleccionada.\n");
				printf("--- Marque posicion de inicio[0-%d]: ", numClasificaciones - 1);
				scanf_s("%d", &inic);
				printf("--- Marque posicion de fin[1-%d]: ", numClasificaciones - 1);
				scanf_s("%d", &fin);
				printf("--- A realizar clasificaciones desde %d a %d. Calculando...\n", inic, fin);

				realizarClasificacionDigital(inic, fin - inic + 1, &resultados);
				almacenarResultadorFichero(resultados, 0, fin - inic + 1, "resultadosClasificacion19_8_6_4Digital.txt");

				printf("------------------------------\n");
				printf("--- COMPLETADO. Resultados almacenados en fichero de texto\n");
				printf("------------------------------\n");

				free(&resultados[0]);

				break;

			case 5:

				printf("--- Opcion clasificacion ANALOGICA especifica seleccionada - DEPURACION.\n");
				printf("--- Marque posicion del set de entradas: ");
				scanf_s("%d", &opcion);
				
				realizarClasificacionAnalogico(opcion, 1, &resultados);
				realizarClasificacionAnalogico(opcion, 1, &resultados);
				realizarClasificacionAnalogico(opcion, 1, &resultados);
				realizarClasificacionAnalogico(opcion, 1, &resultados);

				printf("------------------------------\n");
				printf("--- RESULTADO: %f\n", resultados[0]);
				printf("------------------------------\n");

				free(&resultados[0]);

				break;

			case 6:

				printf("--- Opcion leer del ADC seleccionada.\n");

				double ret1, ret2, ret3, ret4;
				
				calcularValoresClasificacionADC(&ret1, &ret2, &ret3, &ret4, 10);

				printf("------------------------------\n");
				printf("--- RESULTADO: %f , %f , %f , %f\n", ret1, ret2, ret3, ret4);
				printf("------------------------------\n");

				break;

			case 7:

				printf("--- Resetear placas y volver a configurarlas.\n");

				SendStringArduino("DEMUX");
				SendStringArduino("17");
				Sleep(100);
				limpiarSistema(1);
				resetearFPAAs(0);
				establecerConfiguracionPrimariaFPAAs();
				inicializarReconfiguracionFPAAs();

				break;

			case 8:
				
				printf("--- Opcion modificar pesos seleccionada.\n");
				printf("--- Marque factor de division a aplicar: ");
				scanf_s("%d", &factdiv);
				
				establecerPesos(factdiv);

				printf("------------------------------\n");
				printf("--- COMPLETADO. Pesos modificados segun el factor introducido.\n");
				printf("------------------------------\n");


				break;

			case 9:

				printf("--- Opcion modificar valores LUT seleccionada.\n");
				printf("--- ¿Sigmoide menor de -3 con valor 0.042 (por defecto): 1(si), 0(no)?: ");
				scanf_s("%d", &LUTrespuesta);

				establecerValoresTransferFunction(LUTrespuesta);

				printf("------------------------------\n");
				printf("--- COMPLETADO. Valores de la LUT modificados.\n");
				printf("------------------------------\n");

				break;

			case 10:
				establecerPesos(7);
				realizarClasificacionAnalogico(0, 10000, &resultados);
				almacenarResultadorFichero(resultados, 0, 10000, "factor7");
				free(&resultados[0]);

				establecerPesos(8);
				realizarClasificacionAnalogico(0, 10000, &resultados);
				almacenarResultadorFichero(resultados, 0, 10000, "factor8");
				free(&resultados[0]);

				establecerPesos(9);
				realizarClasificacionAnalogico(0, 10000, &resultados);
				almacenarResultadorFichero(resultados, 0, 10000, "factor9");
				free(&resultados[0]);

				establecerPesos(10);
				realizarClasificacionAnalogico(0, 10000, &resultados);
				almacenarResultadorFichero(resultados, 0, 10000, "factor10");
				free(&resultados[0]);

			case 0:
				
				limpiarSistema(1);
				exit(0);

				break;
			default:

				break;
			}
		}
	}
}

void inicilizarSistema(void) {
	seleccionarPortComInicializar();
	resetearFPAAs(0);
	establecerConfiguracionPrimariaFPAAs();
	inicializarReconfiguracionFPAAs();
	//InitPuertoSerieArduino();
}

void inicializarReconfiguracionFPAAs(void) {
	//PLACA 1
	an_1_InitializeApexReconfigData(an_1_FPAA1_1);
	an_1_InitializeApexReconfigData(an_1_FPAA1_2);
	an_1_InitializeApexReconfigData(an_1_FPAA1_3);
	an_1_InitializeApexReconfigData(an_1_FPAA1_4);

	//PLACA 2
	an_2_InitializeApexReconfigData(an_2_FPAA2_1);
	an_2_InitializeApexReconfigData(an_2_FPAA2_2);
	an_2_InitializeApexReconfigData(an_2_FPAA2_3);
	an_2_InitializeApexReconfigData(an_2_FPAA2_4);

	//PLACA 3
	an_3_InitializeApexReconfigData(an_3_FPAA3_1);
	an_3_InitializeApexReconfigData(an_3_FPAA3_2);
	an_3_InitializeApexReconfigData(an_3_FPAA3_3);
	an_3_InitializeApexReconfigData(an_3_FPAA3_4);

	//PLACA 4
	an_4_InitializeApexReconfigData(an_4_FPAA4_1);
	an_4_InitializeApexReconfigData(an_4_FPAA4_2);
	an_4_InitializeApexReconfigData(an_4_FPAA4_3);
	an_4_InitializeApexReconfigData(an_4_FPAA4_4);

	//PLACA 5
	an_5_InitializeApexReconfigData(an_5_FPAA5_1);
	an_5_InitializeApexReconfigData(an_5_FPAA5_2);
	an_5_InitializeApexReconfigData(an_5_FPAA5_3);
	an_5_InitializeApexReconfigData(an_5_FPAA5_4);

	//PLACA 6
	an_6_InitializeApexReconfigData(an_6_FPAA6_1);
	an_6_InitializeApexReconfigData(an_6_FPAA6_2);
	an_6_InitializeApexReconfigData(an_6_FPAA6_3);
	an_6_InitializeApexReconfigData(an_6_FPAA6_4);

	//PLACA 7
	an_7_InitializeApexReconfigData(an_7_FPAA7_1);
	an_7_InitializeApexReconfigData(an_7_FPAA7_2);
	an_7_InitializeApexReconfigData(an_7_FPAA7_3);
	an_7_InitializeApexReconfigData(an_7_FPAA7_4);

	//PLACA 8
	an_8_InitializeApexReconfigData(an_8_FPAA8_1);
	an_8_InitializeApexReconfigData(an_8_FPAA8_2);
	an_8_InitializeApexReconfigData(an_8_FPAA8_3);
	an_8_InitializeApexReconfigData(an_8_FPAA8_4);

	//PLACA 9
	an_9_InitializeApexReconfigData(an_9_FPAA9_1);
	an_9_InitializeApexReconfigData(an_9_FPAA9_2);
	an_9_InitializeApexReconfigData(an_9_FPAA9_3);
	an_9_InitializeApexReconfigData(an_9_FPAA9_4);

	//PLACA 10
	an_10_InitializeApexReconfigData(an_10_FPAA10_1);
	an_10_InitializeApexReconfigData(an_10_FPAA10_2);
	an_10_InitializeApexReconfigData(an_10_FPAA10_3);
	an_10_InitializeApexReconfigData(an_10_FPAA10_4);
}

void limpiarSistema(int var) {
	if(var)
		limpiarVariablesRedNeuronal();
	
	//PLACA 1
	an_1_ShutdownApexReconfigData(an_1_FPAA1_1);
	an_1_ShutdownApexReconfigData(an_1_FPAA1_2);
	an_1_ShutdownApexReconfigData(an_1_FPAA1_3);
	an_1_ShutdownApexReconfigData(an_1_FPAA1_4);

	//PLACA 2
	an_2_ShutdownApexReconfigData(an_2_FPAA2_1);
	an_2_ShutdownApexReconfigData(an_2_FPAA2_2);
	an_2_ShutdownApexReconfigData(an_2_FPAA2_3);
	an_2_ShutdownApexReconfigData(an_2_FPAA2_4);

	//PLACA 3
	an_3_ShutdownApexReconfigData(an_3_FPAA3_1);
	an_3_ShutdownApexReconfigData(an_3_FPAA3_2);
	an_3_ShutdownApexReconfigData(an_3_FPAA3_3);
	an_3_ShutdownApexReconfigData(an_3_FPAA3_4);

	//PLACA 4
	an_4_ShutdownApexReconfigData(an_4_FPAA4_1);
	an_4_ShutdownApexReconfigData(an_4_FPAA4_2);
	an_4_ShutdownApexReconfigData(an_4_FPAA4_3);
	an_4_ShutdownApexReconfigData(an_4_FPAA4_4);

	//PLACA 5
	an_5_ShutdownApexReconfigData(an_5_FPAA5_1);
	an_5_ShutdownApexReconfigData(an_5_FPAA5_2);
	an_5_ShutdownApexReconfigData(an_5_FPAA5_3);
	an_5_ShutdownApexReconfigData(an_5_FPAA5_4);

	//PLACA 6
	an_6_ShutdownApexReconfigData(an_6_FPAA6_1);
	an_6_ShutdownApexReconfigData(an_6_FPAA6_2);
	an_6_ShutdownApexReconfigData(an_6_FPAA6_3);
	an_6_ShutdownApexReconfigData(an_6_FPAA6_4);

	//PLACA 7
	an_7_ShutdownApexReconfigData(an_7_FPAA7_1);
	an_7_ShutdownApexReconfigData(an_7_FPAA7_2);
	an_7_ShutdownApexReconfigData(an_7_FPAA7_3);
	an_7_ShutdownApexReconfigData(an_7_FPAA7_4);

	//PLACA 8
	an_8_ShutdownApexReconfigData(an_8_FPAA8_1);
	an_8_ShutdownApexReconfigData(an_8_FPAA8_2);
	an_8_ShutdownApexReconfigData(an_8_FPAA8_3);
	an_8_ShutdownApexReconfigData(an_8_FPAA8_4);

	//PLACA 9
	an_9_ShutdownApexReconfigData(an_9_FPAA9_1);
	an_9_ShutdownApexReconfigData(an_9_FPAA9_2);
	an_9_ShutdownApexReconfigData(an_9_FPAA9_3);
	an_9_ShutdownApexReconfigData(an_9_FPAA9_4);

	//PLACA 10
	an_10_ShutdownApexReconfigData(an_10_FPAA10_1);
	an_10_ShutdownApexReconfigData(an_10_FPAA10_2);
	an_10_ShutdownApexReconfigData(an_10_FPAA10_3);
	an_10_ShutdownApexReconfigData(an_10_FPAA10_4);
}