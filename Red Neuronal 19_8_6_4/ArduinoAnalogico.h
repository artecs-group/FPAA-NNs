#ifndef ARDUINOANALOGICO_H
#define ARDUINOANALOGICO_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

	void InitPuertoSerieArduino();
	void SendIntegerArduino(int integer);
	void SendStringArduino(const char *s);
	void conversorDigitalAnalogico(int analog, int salida);
	void escribirLCD(const char* l1, const char *l2);

	HANDLE HdCommArduino;


#ifdef __cplusplus
}
#endif

#endif ARDUINOANALOGICO_H