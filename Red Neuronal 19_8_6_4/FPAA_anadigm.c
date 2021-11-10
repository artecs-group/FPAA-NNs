#include "FPAA_anadigm.h"

extern HANDLE HdComm1;
extern HANDLE HdComm2;
extern HANDLE HdComm3;
extern HANDLE HdComm4;
extern HANDLE HdComm5;
extern HANDLE HdComm6;
extern HANDLE HdComm7;
extern HANDLE HdComm8;
extern HANDLE HdComm9;
extern HANDLE HdComm10;
extern int Num_FPAAs_1;
extern int Num_FPAAs_2;
extern int Num_FPAAs_3;
extern int Num_FPAAs_4;
extern int Num_FPAAs_5;
extern int Num_FPAAs_6;
extern int Num_FPAAs_7;
extern int Num_FPAAs_8;
extern int Num_FPAAs_9;
extern int Num_FPAAs_10;
extern int placa1Activa;
extern int placa2Activa;
extern int placa3Activa;
extern int placa4Activa;
extern int placa5Activa;
extern int placa6Activa;
extern int placa7Activa;
extern int placa8Activa;
extern int placa9Activa;
extern int placa10Activa;

/******************************************************************************
*                                                                            *
* Procedure Name : ShowAvailablePorts			                             *
*                                                                            *
* Purpose        : Shows available ports					                 *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
char ShowAvailablePorts(void) {
	int portNum;
	char portName[32];
	char ports_available = 0;
	HANDLE HdComm;
	int abreteOCobras = 0;

	/*for (portNum = 0; portNum < 13; portNum++)
	{
		sprintf_s(portName, sizeof(portName), "\\\\.\\COM%d", portNum);
		LPCTSTR pcCommPortWin32DevicePath = TEXT(portName);
		HdComm = CreateFile(portName, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", portNum);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}*/
	
	LPCTSTR pcCommPortWin32DevicePath = TEXT("\\\\.\\COM3");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 3);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM4");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 4);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM5");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 5);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM6");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 6);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM7");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 7);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM8");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 8);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM9");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 9);
			ports_available = 1;
			abreteOCobras = 9;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM10");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 10);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM11");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 11);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;

	pcCommPortWin32DevicePath = TEXT("\\\\.\\COM12");
	while (abreteOCobras == 0) {
		HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (HdComm != INVALID_HANDLE_VALUE)
		{
			printf("Serial port %d available.\n", 12);
			ports_available = 1;
			abreteOCobras = 1;
		}
		CloseHandle(HdComm);
	}
	abreteOCobras = 0;



	if (!ports_available)
		printf("No ports available.\n");
	printf("\n");
	return ports_available;
}

/******************************************************************************
*                                                                            *
* Procedure Name : seleccionarPortComInicializar                             *
*                                                                            *
* Purpose        : Stablishes the port number to each board                  *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void seleccionarPortComInicializar(void) {
	int ComPort = 0;

	if (ShowAvailablePorts())
	{
		/*while ((ComPort < 1) || (ComPort > 9))
		{
		printf("Enter com port (1 to 9):");
		//scanf_s("%d", &ComPort);
		ComPort = 3;
		printf("\nPort number 3 selected.\n");
		}*/
		placa1Activa = InitRS232(3, &HdComm1);
		placa2Activa = InitRS232(4, &HdComm2);
		placa3Activa = InitRS232(5, &HdComm3);
		placa4Activa = InitRS232(6, &HdComm4);
		placa5Activa = InitRS232(7, &HdComm5);
		placa6Activa = InitRS232(8, &HdComm6);
		placa7Activa = InitRS232(9, &HdComm7);
		placa8Activa = InitRS232(10, &HdComm8);
		placa9Activa = InitRS232(11, &HdComm9);
		placa10Activa = InitRS232(12, &HdComm10);

	}
	else {
		placa1Activa = 0;
		placa2Activa = 0;
		placa3Activa = 0;
		placa4Activa = 0;
		placa5Activa = 0;
		placa6Activa = 0;
		placa7Activa = 0;
		placa8Activa = 0;
		placa9Activa = 0;
		placa10Activa = 0;
	}

	if ((HdComm1 != INVALID_HANDLE_VALUE) && placa1Activa)
	{
		printf("Board number 1: OK ");
		detectarNumFPAA(&HdComm1, &Num_FPAAs_1);
	}
	else {
		printf("Board number 1: ERROR\n");
	}

	if ((HdComm2 != INVALID_HANDLE_VALUE) && placa2Activa)
	{
		printf("Board number 2: OK ");
		detectarNumFPAA(&HdComm2, &Num_FPAAs_2);
	}
	else {
		printf("Board number 2: ERROR\n");
	}

	if ((HdComm3 != INVALID_HANDLE_VALUE) && placa3Activa)
	{
		printf("Board number 3: OK ");
		detectarNumFPAA(&HdComm3, &Num_FPAAs_3);
	}
	else {
		printf("Board number 3: ERROR\n");
	}

	if ((HdComm4 != INVALID_HANDLE_VALUE) && placa4Activa)
	{
		printf("Board number 4: OK ");
		detectarNumFPAA(&HdComm4, &Num_FPAAs_4);
	}
	else {
		printf("Board number 4: ERROR\n");
	}

	if ((HdComm5 != INVALID_HANDLE_VALUE) && placa5Activa)
	{
		printf("Board number 5: OK ");
		detectarNumFPAA(&HdComm5, &Num_FPAAs_5);
	}
	else {
		printf("Board number 5: ERROR\n");
	}

	if ((HdComm6 != INVALID_HANDLE_VALUE) && placa6Activa)
	{
		printf("Board number 6: OK ");
		detectarNumFPAA(&HdComm6, &Num_FPAAs_6);
	}
	else {
		printf("Board number 6: ERROR\n");
	}

	if ((HdComm7 != INVALID_HANDLE_VALUE) && placa7Activa)
	{
		printf("Board number 7: OK ");
		detectarNumFPAA(&HdComm7, &Num_FPAAs_7);
	}
	else {
		printf("Board number 7: ERROR\n");
	}

	if ((HdComm8 != INVALID_HANDLE_VALUE) && placa8Activa)
	{
		printf("Board number 8: OK ");
		detectarNumFPAA(&HdComm8, &Num_FPAAs_8);
	}
	else {
		printf("Board number 8: ERROR\n");
	}

	if ((HdComm9 != INVALID_HANDLE_VALUE) && placa9Activa)
	{
		printf("Board number 9: OK ");
		detectarNumFPAA(&HdComm9, &Num_FPAAs_9);
	}
	else {
		printf("Board number 9: ERROR\n");
	}

	if ((HdComm10 != INVALID_HANDLE_VALUE) && placa10Activa)
	{
		printf("Board number 10: OK ");
		detectarNumFPAA(&HdComm10, &Num_FPAAs_10);
	}
	else {
		printf("Board number 10: ERROR\n");
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : detectarNumFPAA                                           *
*                                                                            *
* Purpose        : Initialise RS232 registers                                *
*                                                                            *
* Inputs         : HANDLE *HdComm - com port to be opened					 *
*                                                                            *
* Outputs        : int - success or failure				                     *
*                                                                            *
******************************************************************************/
void detectarNumFPAA(HANDLE *HdComm, int *Num_FPAAs) {
	char str_buff[100];
	unsigned char i = 0;
	unsigned char data;

	SendChar(0x02, *HdComm);
	SendChar('T', *HdComm);
	data = 0xFF;
	while (data)
	{
		RecvChar(&data, *HdComm);
		str_buff[i++] = data;
	}
	SendChar(0x03, *HdComm);
	i = strlen(str_buff);
	*Num_FPAAs = (i == 11) ? 0 : (i - 3) / 7;
	switch (*Num_FPAAs)
	{
	case 0:
		printf("0 FPAAs found.\n");
		break;
	case 1:
		printf("1 FPAA found.\n");
		break;
	case 2:
		printf("2 FPAAs found.\n");
		break;
	case 3:
		printf("3 FPAAs found.\n");
		break;
	case 4:
		printf("4 FPAAs found.\n");
		break;
	default:
		printf("???\n");
		break;
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : InitRS232                                                 *
*                                                                            *
* Purpose        : Initialise RS232 registers                                *
*                                                                            *
* Inputs         : int COM - com port to be opened							 *                   
*				   HANDLE *HdComm - port reference							 *
*                                                                            *
* Outputs        : int - success or failure				                     *
*                                                                            *
******************************************************************************/
int InitRS232(int portNum, HANDLE *HdComm)
{
	DCB portState;
	portState.DCBlength = sizeof(DCB);
	COMMTIMEOUTS portTimeouts;
	BOOL fSuccess;
	char portName[32];
	int abrete = 0;

	sprintf_s(portName, sizeof(portName), "\\\\.\\COM%d", portNum);
	LPCTSTR pcCommPortWin32DevicePath = TEXT(portName);
	while (abrete == 0) {
		*HdComm = CreateFile(pcCommPortWin32DevicePath, GENERIC_WRITE | GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		
		if (*HdComm == INVALID_HANDLE_VALUE)
		{
			// Handle the error.
			//printf("CreateFile failed with error %d. Board not connected to Serial Port %d\n", GetLastError(), portNum);
			//return 0;
		}
		else {
			abrete = 1;
		}

	}


	
	SetupComm(*HdComm, 1200, 1200);				// set buffer sizes

	// Get the current state, and tweak it to what we want
	GetCommState(*HdComm, &portState);

	// Setup the port how we want it
	portState.BaudRate = 57600;				   	// Baud rate at which running       
	portState.fBinary = TRUE;					   	// Binary Mode(skip EOF check)    
	portState.fParity = FALSE;					   	// Enable parity checking          
	portState.fOutxCtsFlow = TRUE;					      // CTS handshaking on output, DL set to FALSE
	portState.fOutxDsrFlow = FALSE;       			   // DSR handshaking on output   
	portState.fDtrControl = DTR_CONTROL_DISABLE;  	// DTR Flow control                
	portState.fDsrSensitivity = FALSE;				         // DSR Sensitivity              
	portState.fTXContinueOnXoff = FALSE;			            // Continue TX when Xoff sent 
	portState.fOutX = TRUE;							// Enable output X-ON/X-OFF        
	portState.fInX = TRUE;							// Enable input X-ON/X-OFF         
	portState.fErrorChar = FALSE;       			   // Enable Err Replacement     
	portState.fRtsControl = RTS_CONTROL_ENABLE;		// RTS Flow control		DL set to DISABLE
	portState.fAbortOnError = TRUE;				      	// Abort all reads and writes on Error 
	portState.ByteSize = 8;				   			// Number of bits/byte, 4-8        
	portState.Parity = NOPARITY;				   	// 0-4=None,Odd,Even,Mark,Space    
	portState.StopBits = 0;						     	// 0,1,2 = 1, 1.5, 2               
	portState.XonChar = 17;						      // Tx and Rx X-ON character     
	portState.XoffChar = 19;					         // Tx and Rx X-OFF character     

	// Try to set the new state
	fSuccess = SetCommState(*HdComm, &portState);

	if (!fSuccess)
	{
		// Handle the error.
		printf("SetCommState failed with error %d.\n", GetLastError());
		return 0;
	}

	// Get the current timouts, and tweak it to what we want
	GetCommTimeouts(*HdComm, &portTimeouts);

	portTimeouts.ReadIntervalTimeout = 0;			//  0 seconds
	portTimeouts.ReadTotalTimeoutMultiplier = 0;	      //  0 seconds
	portTimeouts.ReadTotalTimeoutConstant = 1000;	   //  1 seconds
	portTimeouts.WriteTotalTimeoutMultiplier = 0;	      //  0 seconds
	portTimeouts.WriteTotalTimeoutConstant = 1000;	   //  1 second

	// Try to set the new timeouts)
	fSuccess = SetCommTimeouts(*HdComm, &portTimeouts);

	if (!fSuccess)
	{
		// Handle the error.
		printf("SetCommTimeouts failed with error %d.\n", GetLastError());
		return 0;
	}

	printf("Serial port %d successfully configured.\n", portNum);
	return 1;
}

/******************************************************************************
*                                                                            *
* Procedure Name : leerADC							                         *
*                                                                            *
* Purpose        : Voltage values from ADC are read                          *
*                                                                            *
* Inputs         : unsigned char channel - channel to be read				 *
*				   double* adc_voltage - Variable that stores the voltage    * 
*										 value of a signal                   *                   
*                  int placa - number of board whose ADC will be used        *
* Outputs        : unsigned short - digital value read from ADC (0-1023)     *
*				   double* adc_voltage - voltage value read from ADC		 * 
*                                                                            *
******************************************************************************/
unsigned short leerADC(unsigned char channel, double* adc_voltage, int placa) {

	unsigned short adc_data;
	unsigned char data;
	HANDLE *HdComm = NULL;

	if (channel > '9')
		channel -= 55;		//subtract 55 to convert ascii A,B,C,D,E to 10,11,12,13,14,15
	else
		channel -= 48;		//subtract 48 to convert ascii to 0-9

	if (placa == 1) {
		HdComm = &HdComm1;
	}
	else if (placa == 2) {
		HdComm = &HdComm2;
	}
	else if (placa == 3) {
		HdComm = &HdComm3;
	}
	else if (placa == 4) {
		HdComm = &HdComm4;
	}
	else if (placa == 5) {
		HdComm = &HdComm5;
	}
	else if (placa == 6) {
		HdComm = &HdComm6;
	}
	else if (placa == 7) {
		HdComm = &HdComm7;
	}
	else if (placa == 8) {
		HdComm = &HdComm8;
	}
	else if (placa == 9) {
		HdComm = &HdComm9;
	}
	else if (placa == 10) {
		HdComm = &HdComm10;
	}

	SendChar(0x02, *HdComm);
	SendChar('A', *HdComm);
	SendData(channel, *HdComm);
	RecvChar(&data, *HdComm);
	adc_data = 4096 * ConvAsc2Char(data);
	RecvChar(&data, *HdComm);
	adc_data += 256 * ConvAsc2Char(data);
	RecvChar(&data, *HdComm);
	adc_data += 16 * ConvAsc2Char(data);
	RecvChar(&data, *HdComm);
	adc_data += ConvAsc2Char(data);
	RecvChar(&data, *HdComm);	//clear null terminator from pipe
	SendChar(0x03, *HdComm);

	*adc_voltage = 3.3 * (double)adc_data / 1023.0;		//calc actual voltage

	return adc_data;
}

/******************************************************************************
*                                                                            *
* Procedure Name : establecerConfiguracionPrimariaFPAAs                      *
*                                                                            *
* Purpose        : Initialise the boards	                                 *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void establecerConfiguracionPrimariaFPAAs() {

	if (placa1Activa == 1)
		configuracionPrimariaPlaca1();
	if (placa2Activa == 1)
		configuracionPrimariaPlaca2();
	if (placa3Activa == 1)
		configuracionPrimariaPlaca3();
	if (placa4Activa == 1)
		configuracionPrimariaPlaca4();
	if (placa5Activa == 1)
		configuracionPrimariaPlaca5();
	if (placa6Activa == 1)
		configuracionPrimariaPlaca6();
	if (placa7Activa == 1)
		configuracionPrimariaPlaca7();
	if (placa8Activa == 1)
		configuracionPrimariaPlaca8();
	if (placa9Activa == 1)
		configuracionPrimariaPlaca9();
	if (placa10Activa == 1)
		configuracionPrimariaPlaca10();
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca1								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 1                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca1() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_1_GetPrimaryConfigData(an_1_FPAA1_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm1);

	if (Num_FPAAs_1 > 1)
	{
		configData = an_1_GetPrimaryConfigData(an_1_FPAA1_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm1);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_1 > 2)
	{
		configData = an_1_GetPrimaryConfigData(an_1_FPAA1_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm1);

	}
	if (Num_FPAAs_1 > 3)
	{
		configData = an_1_GetPrimaryConfigData(an_1_FPAA1_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm1);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca2								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 2                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca2() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_2_GetPrimaryConfigData(an_2_FPAA2_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm2);

	if (Num_FPAAs_2 > 1)
	{
		configData = an_2_GetPrimaryConfigData(an_2_FPAA2_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm2);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_2 > 2)
	{
		configData = an_2_GetPrimaryConfigData(an_2_FPAA2_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm2);

	}
	if (Num_FPAAs_2 > 3)
	{
		configData = an_2_GetPrimaryConfigData(an_2_FPAA2_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm2);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca3								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 3                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca3() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_3_GetPrimaryConfigData(an_3_FPAA3_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm3);

	if (Num_FPAAs_3 > 1)
	{
		configData = an_3_GetPrimaryConfigData(an_3_FPAA3_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm3);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_3 > 2)
	{
		configData = an_3_GetPrimaryConfigData(an_3_FPAA3_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm3);

	}
	if (Num_FPAAs_3 > 3)
	{
		configData = an_3_GetPrimaryConfigData(an_3_FPAA3_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm3);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca4								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 4                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca4() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_4_GetPrimaryConfigData(an_4_FPAA4_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm4);

	if (Num_FPAAs_3 > 1)
	{
		configData = an_4_GetPrimaryConfigData(an_4_FPAA4_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm4);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_3 > 2)
	{
		configData = an_4_GetPrimaryConfigData(an_4_FPAA4_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm4);

	}
	if (Num_FPAAs_3 > 3)
	{
		configData = an_4_GetPrimaryConfigData(an_4_FPAA4_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm4);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca5								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 5                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca5() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_5_GetPrimaryConfigData(an_5_FPAA5_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm5);

	if (Num_FPAAs_3 > 1)
	{
		configData = an_5_GetPrimaryConfigData(an_5_FPAA5_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm5);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_3 > 2)
	{
		configData = an_5_GetPrimaryConfigData(an_5_FPAA5_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm5);

	}
	if (Num_FPAAs_3 > 3)
	{
		configData = an_5_GetPrimaryConfigData(an_5_FPAA5_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm5);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca6								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 6                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca6() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_6_GetPrimaryConfigData(an_6_FPAA6_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm6);

	if (Num_FPAAs_3 > 1)
	{
		configData = an_6_GetPrimaryConfigData(an_6_FPAA6_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm6);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_3 > 2)
	{
		configData = an_6_GetPrimaryConfigData(an_6_FPAA6_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm6);

	}
	if (Num_FPAAs_3 > 3)
	{
		configData = an_6_GetPrimaryConfigData(an_6_FPAA6_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm6);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca7								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 7                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca7() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_7_GetPrimaryConfigData(an_7_FPAA7_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm7);

	if (Num_FPAAs_3 > 1)
	{
		configData = an_7_GetPrimaryConfigData(an_7_FPAA7_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm7);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_3 > 2)
	{
		configData = an_7_GetPrimaryConfigData(an_7_FPAA7_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm7);

	}
	if (Num_FPAAs_3 > 3)
	{
		configData = an_7_GetPrimaryConfigData(an_7_FPAA7_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm7);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca8								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 8                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca8() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_8_GetPrimaryConfigData(an_8_FPAA8_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm8);

	if (Num_FPAAs_3 > 1)
	{
		configData = an_8_GetPrimaryConfigData(an_8_FPAA8_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm8);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_3 > 2)
	{
		configData = an_8_GetPrimaryConfigData(an_8_FPAA8_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm8);

	}
	if (Num_FPAAs_3 > 3)
	{
		configData = an_8_GetPrimaryConfigData(an_8_FPAA8_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm8);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca9								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 9                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca9() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_9_GetPrimaryConfigData(an_9_FPAA9_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm9);

	if (Num_FPAAs_3 > 1)
	{
		configData = an_9_GetPrimaryConfigData(an_9_FPAA9_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm9);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_3 > 2)
	{
		configData = an_9_GetPrimaryConfigData(an_9_FPAA9_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm9);

	}
	if (Num_FPAAs_3 > 3)
	{
		configData = an_9_GetPrimaryConfigData(an_9_FPAA9_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm9);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : configuracionPrimariaPlaca10								 *
*                                                                            *
* Purpose        : Initialize the FPAAs in board number 10                    *
*                                                                            *
* Inputs         : none														 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void configuracionPrimariaPlaca10() {
	const an_Byte* configData;
	int dataSize = 0;

	configData = an_10_GetPrimaryConfigData(an_10_FPAA10_1, &dataSize);
	Configure_FPAA(PRI, configData, dataSize, HdComm10);

	if (Num_FPAAs_3 > 1)
	{
		configData = an_10_GetPrimaryConfigData(an_10_FPAA10_2, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm10);		// send 2nd, 3rd & 4th as reconfigs so reset doesn't get done again
	}
	if (Num_FPAAs_3 > 2)
	{
		configData = an_10_GetPrimaryConfigData(an_10_FPAA10_3, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm10);

	}
	if (Num_FPAAs_3 > 3)
	{
		configData = an_10_GetPrimaryConfigData(an_10_FPAA10_4, &dataSize);
		Configure_FPAA(UPD, configData, dataSize, HdComm10);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : resetearFPAAs											 *
*                                                                            *
* Purpose        : All FPAAs are reset. This has to be done before a		 *
*				   primary configuration is sent.						     *
*                                                                            *
* Inputs         : int placa - number of board whose FPAAs will be reset.	 * 
*				   ''0'' resets all board connected.						 *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void resetearFPAAs(int placa) {
	if (placa == 0) {
		//Se resetean todas las placas
		SendChar(0x02, HdComm1);
		SendChar('R', HdComm1);
		SendData(0xFF, HdComm1);
		SendChar(0x03, HdComm1);

		SendChar(0x02, HdComm2);
		SendChar('R', HdComm2);
		SendData(0xFF, HdComm2);
		SendChar(0x03, HdComm2);

		SendChar(0x02, HdComm3);
		SendChar('R', HdComm3);
		SendData(0xFF, HdComm3);
		SendChar(0x03, HdComm3);

		SendChar(0x02, HdComm4);
		SendChar('R', HdComm4);
		SendData(0xFF, HdComm4);
		SendChar(0x03, HdComm4);

		SendChar(0x02, HdComm5);
		SendChar('R', HdComm5);
		SendData(0xFF, HdComm5);
		SendChar(0x03, HdComm5);

		SendChar(0x02, HdComm6);
		SendChar('R', HdComm6);
		SendData(0xFF, HdComm6);
		SendChar(0x03, HdComm6);

		SendChar(0x02, HdComm7);
		SendChar('R', HdComm7);
		SendData(0xFF, HdComm7);
		SendChar(0x03, HdComm7);

		SendChar(0x02, HdComm8);
		SendChar('R', HdComm8);
		SendData(0xFF, HdComm8);
		SendChar(0x03, HdComm8);

		SendChar(0x02, HdComm9);
		SendChar('R', HdComm9);
		SendData(0xFF, HdComm9);
		SendChar(0x03, HdComm9);

		SendChar(0x02, HdComm10);
		SendChar('R', HdComm10);
		SendData(0xFF, HdComm10);
		SendChar(0x03, HdComm10);
	}
	else if (placa == 1) {
		SendChar(0x02, HdComm1);
		SendChar('R', HdComm1);
		SendData(0xFF, HdComm1);
		SendChar(0x03, HdComm1);
	}
	else if (placa == 2) {
		SendChar(0x02, HdComm2);
		SendChar('R', HdComm2);
		SendData(0xFF, HdComm2);
		SendChar(0x03, HdComm2);
	}
	else if (placa == 3) {
		SendChar(0x02, HdComm3);
		SendChar('R', HdComm3);
		SendData(0xFF, HdComm3);
		SendChar(0x03, HdComm3);
	}
	else if (placa == 4) {
		SendChar(0x02, HdComm4);
		SendChar('R', HdComm4);
		SendData(0xFF, HdComm4);
		SendChar(0x03, HdComm4);
	}
	else if (placa == 5) {
		SendChar(0x02, HdComm5);
		SendChar('R', HdComm5);
		SendData(0xFF, HdComm5);
		SendChar(0x03, HdComm5);
	}
	else if (placa == 6) {
		SendChar(0x02, HdComm6);
		SendChar('R', HdComm6);
		SendData(0xFF, HdComm6);
		SendChar(0x03, HdComm6);
	}
	else if (placa == 7) {
		SendChar(0x02, HdComm7);
		SendChar('R', HdComm7);
		SendData(0xFF, HdComm7);
		SendChar(0x03, HdComm7);
	}
	else if (placa == 8) {
		SendChar(0x02, HdComm8);
		SendChar('R', HdComm8);
		SendData(0xFF, HdComm8);
		SendChar(0x03, HdComm8);
	}
	else if (placa == 9) {
		SendChar(0x02, HdComm9);
		SendChar('R', HdComm9);
		SendData(0xFF, HdComm9);
		SendChar(0x03, HdComm9);
	}
	else if (placa == 10) {
		SendChar(0x02, HdComm10);
		SendChar('R', HdComm10);
		SendData(0xFF, HdComm10);
		SendChar(0x03, HdComm10);
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : generarInput												 *
*                                                                            *
* Purpose        : Generates direct current signals with voltages values     *
*				   between -2.98V and 3V.								     *
*                                                                            *
* Inputs         : an_Chip FPAA - FPAA ID where is placed the CAM			 *
*				   an_CAM cam - CAM ID which will be configured				 *
*				   int numPlaca - Number of the board where FPAA is placed   *
*				   double voltOut - Desired voltage to be generated          *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void generarInput(an_Chip FPAA, an_CAM cam, int numPlaca, double voltOut) {
	double constante = 1.5f;

	const an_Byte* configData;
	int dataSize = 0;

	if (voltOut < -2.98) {
		voltOut = -2.979;
	}
	else if (voltOut > 3) {
		voltOut = 2.999;
	}
	

	if (numPlaca == 1) {
		//an_1_InitializeApexReconfigData(FPAA);
		
		/* Calculate changes to CAM parameters then use CAM C Code */
		an_1_setGainSumDiff_2in(cam, constante, (voltOut + 3) / 2);
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_1_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm1);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_1_ClearApexReconfigData(FPAA);

		//an_1_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 2) {
		//an_2_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		an_2_setGainSumDiff_2in(cam, constante, (voltOut + 3) / 2);
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_2_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm2);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_2_ClearApexReconfigData(FPAA);

		//an_2_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 3) {
		//an_3_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		an_3_setGainSumDiff_2in(cam, constante, (voltOut + 3) / 2);
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_3_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm3);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_3_ClearApexReconfigData(FPAA);

		//an_3_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 4) {
		//an_4_InitializeApexReconfigData(FPAA);
		
		/* Calculate changes to CAM parameters then use CAM C Code */
		an_4_setGainSumDiff_2in(cam, constante, (voltOut + 3) / 2);
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_4_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm4);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_4_ClearApexReconfigData(FPAA);

		//an_4_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 5) {
		//an_5_InitializeApexReconfigData(FPAA);
		
		/* Calculate changes to CAM parameters then use CAM C Code */
		an_5_setGainSumDiff_2in(cam, constante, (voltOut + 3) / 2);
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_5_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm5);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_5_ClearApexReconfigData(FPAA);

		//an_5_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 6) {
		//an_6_InitializeApexReconfigData(FPAA);
		
		/* Calculate changes to CAM parameters then use CAM C Code */
		an_6_setGainSumDiff_2in(cam, constante, (voltOut + 3) / 2);
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_6_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm6);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_6_ClearApexReconfigData(FPAA);

		//an_6_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 7) {
		//an_7_InitializeApexReconfigData(FPAA);
		
		/* Calculate changes to CAM parameters then use CAM C Code */
		an_7_setGainSumDiff_2in(cam, constante, (voltOut + 3) / 2);
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_7_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm7);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_7_ClearApexReconfigData(FPAA);

		//an_7_ShutdownApexReconfigData(FPAA);
	}

}

/******************************************************************************
*                                                                            *
* Procedure Name : modificarPeso											 *
*                                                                            *
* Purpose        : Change gains values of SumDiff modules, whichs act as     *
*                  weights in the weighted sum operations.					 *
*                                                                            *
* Inputs         : an_Chip FPAA - FPAA ID where is placed the CAM			 *
*				   an_CAM cam - CAM ID which will be configured				 *
*				   int numPlaca - Number of the board where FPAA is placed   *
*				   double peso1 - Desired weight                             *
*				   double peso2 - Desired weight                             *
*				   double peso3 - Desired weight  If it value is equal than  *
*                                 -1, the sumDiff module only has 2          *
*                                 configurable gains                         *
*				   double peso4 - Desired weight. If it value is equal than  *
*                                 -1, the sumDiff module only has 3          *
*                                 configurable gains                         *
*                                                                            *
* Outputs        : none									                     *
*                                                                            *
******************************************************************************/
void modificarPeso(an_Chip FPAA, an_CAM cam, int numPlaca, double peso1, double peso2, double peso3, double peso4) {
	
	const an_Byte* configData;
	int dataSize = 0;
	int numGanancias = 0;

	if (peso3 != -1 && peso4 == -1) {
		numGanancias = 3;
		peso1 = fabs(peso1);
		peso2 = fabs(peso2);
		peso3 = fabs(peso3);
	}
	else if (peso3 == -1 && peso4 == -1) {
		numGanancias = 2;
		peso1 = fabs(peso1);
		peso2 = fabs(peso2);
	}
	else {
		numGanancias = 4;
		peso1 = fabs(peso1);
		peso2 = fabs(peso2);
		peso3 = fabs(peso3);
		peso4 = fabs(peso4);
	}

	if (peso1 < 0.01)
		peso1 = 0.011;
	if (peso2 < 0.01)
		peso2 = 0.011;
	if (peso3 < 0.01)
		peso3 = 0.011;
	if (peso4 < 0.01)
		peso4 = 0.011;
		
	if (numPlaca == 1) {
		//an_1_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			an_1_setGainSumDiff_3in(cam,  (peso1),  (peso2),  (peso3));
		}
		else if (numGanancias == 2) {
			an_1_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4){
			an_1_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_1_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm1);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_1_ClearApexReconfigData(FPAA);

		//an_1_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 2) {
		//an_2_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			an_2_setGainSumDiff_3in(cam,  (peso1),  (peso2),  (peso3));
		}
		else if (numGanancias == 2) {
			an_2_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_2_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_2_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm2);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_2_ClearApexReconfigData(FPAA);

		//an_2_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 3) {
		//an_3_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			//an_3_setGainSumDiff_3in(cam, peso1, peso2, peso3);
		}
		else if (numGanancias == 2) {
			an_3_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_3_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_3_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm3);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_3_ClearApexReconfigData(FPAA);

		//an_3_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 4) {
		//an_4_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			an_4_setGainSumDiff_3in(cam,  (peso1),  (peso2),  (peso3));
		}
		else if (numGanancias == 2) {
			an_4_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_4_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_4_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm4);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_4_ClearApexReconfigData(FPAA);

		//an_4_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 5) {
		//an_5_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			//an_5_setGainSumDiff_3in(cam, peso1, peso2, peso3);
		}
		else if (numGanancias == 2) {
			an_5_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_5_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_5_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm5);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_5_ClearApexReconfigData(FPAA);

		//an_5_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 6) {
		//an_6_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			an_6_setGainSumDiff_3in(cam,  (peso1),  (peso2),  (peso3));
		}
		else if (numGanancias == 2) {
			an_6_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_6_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_6_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm6);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_6_ClearApexReconfigData(FPAA);

		//an_6_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 7) {
		//an_7_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			//an_7_setGainSumDiff_3in(cam, peso1, peso2, peso3);
		}
		else if (numGanancias == 2) {
			an_7_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_7_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_7_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm7);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_7_ClearApexReconfigData(FPAA);

		//an_7_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 8) {
		//an_8_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			an_8_setGainSumDiff_3in(cam,  (peso1),  (peso2),  (peso3));
		}
		else if (numGanancias == 2) {
			an_8_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_8_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_8_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm8);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_8_ClearApexReconfigData(FPAA);

		//an_8_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 9) {
		//an_9_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			an_9_setGainSumDiff_3in(cam,  (peso1),  (peso2),  (peso3));
		}
		else if (numGanancias == 2) {
			an_9_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_9_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_9_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm9);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_9_ClearApexReconfigData(FPAA);

		//an_9_ShutdownApexReconfigData(FPAA);
	}
	else if (numPlaca == 10) {
		//an_10_InitializeApexReconfigData(FPAA);

		/* Calculate changes to CAM parameters then use CAM C Code */
		if (numGanancias == 3) {
			an_10_setGainSumDiff_3in(cam,  (peso1),  (peso2),  (peso3));
		}
		else if (numGanancias == 2) {
			an_10_setGainSumDiff_2in(cam,  (peso1),  (peso2));
		}
		else if (numGanancias == 4) {
			an_10_setGainSumDiff_4in(cam,  (peso1),  (peso2),  (peso3),  (peso4));
		}
		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_10_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm10);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_10_ClearApexReconfigData(FPAA);

		//an_10_ShutdownApexReconfigData(FPAA);
	}
}

void establecerValoresLUT(an_Chip FPAA, an_CAM cam, int numPlaca, double *valores) {
	const an_Byte* configData;
	int dataSize = 0;
	
	if (numPlaca == 2) {
		an_2_setTransferFunctionTable(cam, valores);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_2_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm2);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_2_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 4) {
		an_4_setTransferFunctionTable(cam, valores);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_4_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm4);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_4_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 5) {
		an_5_setTransferFunctionTable(cam, valores);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_5_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm5);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_5_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 6) {
		an_6_setTransferFunctionTable(cam, valores);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_6_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm6);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_6_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 7) {
		an_7_setTransferFunctionTable(cam, valores);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_7_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm7);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_7_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 8) {
		an_8_setTransferFunctionTable(cam, valores);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_8_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm8);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_8_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 9) {
		an_9_setTransferFunctionTable(cam, valores);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_9_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm9);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_9_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 10) {
		an_10_setTransferFunctionTable(cam, valores);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_10_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm10);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_10_ClearApexReconfigData(FPAA);
	}
}

void modificarFactorPrevioLUT(an_Chip FPAA, an_CAM cam, int numPlaca, double factor) {
	const an_Byte* configData;
	int dataSize = 0;

	if (numPlaca == 2) {
		an_2_setGainHold(cam, factor);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_2_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm2);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_2_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 4) {
		an_4_setGainHold(cam, factor);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_4_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm4);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_4_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 5) {
		an_5_setGainHold(cam, factor);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_5_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm5);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_5_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 6) {
		an_6_setGainHold(cam, factor);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_6_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm6);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_6_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 7) {
		an_7_setGainHold(cam, factor);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_7_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm7);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_7_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 8) {
		an_8_setGainHold(cam, factor);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_8_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm8);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_8_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 9) {
		an_9_setGainHold(cam, factor);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_9_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm9);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_9_ClearApexReconfigData(FPAA);
	}
	else if (numPlaca == 10) {
		an_10_setGainHold(cam, factor);

		/* Get a pointer to the reconfiguration data */
		dataSize = 0;
		configData = an_10_GetApexReconfigData(FPAA, &dataSize);
		/* Send the data to the chip */
		Configure_FPAA(UPD, configData, dataSize, HdComm10);
		/* OK. Data sent, now clear the buffer to get ready to call some more CAM func-tions. */
		an_10_ClearApexReconfigData(FPAA);
	}
}