#include "ArduinoAnalogico.h"

void InitPuertoSerieArduino() {
	int abrete = 0;

	while (abrete == 0) {
		HdCommArduino = CreateFile("\\\\.\\COM14", GENERIC_WRITE | GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL); //"\\\\.\\COM14"

		if (HdCommArduino == INVALID_HANDLE_VALUE)
		{
			// Handle the error.
			//printf("CreateFile failed with error %d. Board not connected to Serial Port %d\n", GetLastError(), portNum);
			//return 0;
			// Handle the error.
			printf("CreateFile failed with error %d. Board not connected to Serial Port 14\n", GetLastError());
		}
		else {
			abrete = 1;
		}

	}

	DCB dcb; //Estructura de datos configuracion del puerto
	dcb.DCBlength = sizeof(DCB);
	GetCommState(HdCommArduino, &dcb);
	//Recuperamos la configuracion actual
	dcb.BaudRate = CBR_9600; //Velocidad
	dcb.ByteSize = 8;
	//num. bits
	dcb.Parity = EVENPARITY;
	//Paridad par
	dcb.fParity = TRUE;
	//Habilitamos la paridad
	dcb.StopBits = ONESTOPBIT; //1 Bit de stop
	dcb.fBinary = TRUE;
	SetCommState(HdCommArduino, &dcb);
}

void SendIntegerArduino(int integer) {
	
	int count = 0;
	int aux = integer;

	while (aux != 0) {
		count++;
		aux /= 10;
	}

	if (integer == 0) {
		count = 1;
	}

	DWORD nBytes;
	unsigned char *temp = malloc(count + 2);

	//itoa(integer, temp, 10);
	snprintf(temp, 20, "%d\n", integer);

	BOOL b = WriteFile(HdCommArduino, temp, strlen(temp), &nBytes, NULL);

	if (!b) {
		printf("Envio de integer al arduino FALLADO\n");
	}

	free(temp);
}

void SendStringArduino(const char *s) {
	
	DWORD nBytes;
	unsigned char *temp = malloc(strlen(s) + 2);

	snprintf(temp, 20, "%s\n", s);

	BOOL b = WriteFile(HdCommArduino, temp, strlen(temp), &nBytes, NULL);

	if (!b) {
		printf("Envio de string al arduino FALLADO\n");
	}

	free(temp);
}

void conversorDigitalAnalogico(int analog, int salida) {
	
	//1- Comando
	SendStringArduino("DAC");
	//2- Valor analogico a convertir
	SendIntegerArduino(abs(analog));

	//3- Eleccion del DEMULTIPLEXOR adecuado
	if (analog < 0) {
		SendStringArduino("NEG");
	}
	else {
		SendStringArduino("POS");
	}
	
	//4- Activar la salida X del DEMULTIPLEXOR
	SendIntegerArduino(salida);

	//5- Esperar el resultado de la conversion
	DWORD nread = 0;
	unsigned char ok;

	while (nread == 0) {
		ReadFile(HdCommArduino, &ok, sizeof(unsigned char), &nread, NULL);
	}

	if (ok) {
		printf("Conversion finalizada correctamente.\n");
	}
	else {
		printf("Conversion finalizada con errores!.\n");
	}
}

void escribirLCD(const char* l1, const char *l2) {
	SendStringArduino("LCD");
	SendStringArduino(l1);
	SendStringArduino(l2);
}