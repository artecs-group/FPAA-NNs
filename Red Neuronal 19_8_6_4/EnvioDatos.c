#include "EnvioDatos.h"

/******************************************************************************
*                                                                            *
* Procedure Name : SendChar                                                  *
*                                                                            *
* Purpose        : This function sends an ASCII character to the serial port.*
*                                                                            *
* Inputs         : unsigned char AscChar - ASCII character to be sent        *
*                                                                            *
* Outputs        : None						                              *
*                                                                            *
******************************************************************************/
void SendChar(unsigned char AscChar, HANDLE HdComm)
{
	DWORD nwrote;

	WriteFile(HdComm, &AscChar, 1, &nwrote, NULL);
}

/******************************************************************************
*                                                                            *
* Procedure Name : SendData                                                  *
*                                                                            *
* Purpose        : This function sends a byte to the serial port as ASCII    *
*                                                                            *
* Inputs         : unsigned char ConfigData - data byte to be sent           *
*                                                                            *
* Outputs        : None						                              *
*                                                                            *
******************************************************************************/
void SendData(unsigned char ConfigData, HANDLE HdComm)
{
	SendChar(ConvChar2Asc((ConfigData >> 4) & 0x0F), HdComm);
	SendChar(ConvChar2Asc(ConfigData & 0x0F), HdComm);
}

/******************************************************************************
*                                                                            *
* Procedure Name : ConvChar2Asc                                              *
*                                                                            *
* Purpose        : This function converts a character nibble to ASCII byte	  *
*                                                                            *
* Inputs         : unsigned char data - character nibble			          *
*                                                                            *
* Outputs        : unsigned char - ASCII byte						          *
*                                                                            *
******************************************************************************/
unsigned char ConvChar2Asc(unsigned char data)
{
	if (data < 10)
		data += 48;
	else
		data += 55;
	return data;
}

/******************************************************************************
*                                                                            *
* Procedure Name : ConvAsc2Char                                              *
*                                                                            *
* Purpose        : This function converts a character nibble to ASCII byte	  *
*                                                                            *
* Inputs         : unsigned char data - ASCII character to be converted	  *
*                                                                            *
* Outputs        : unsigned char - output nibble (0-15)					  *
*                                                                            *
******************************************************************************/
unsigned char ConvAsc2Char(unsigned char data)
{
	if (data < 65)
		data -= 48;
	else
		data -= 55;
	return data;
}

/******************************************************************************
*                                                                            *
* Procedure Name : RecvChar                                                  *
*                                                                            *
* Purpose        : This function receives an ASCII character from the serial *
*                  port. It ignores XOFF & XON characters.                   *
*                                                                            *
* Inputs         : unsigned char *data - pointer to data byte                *
*                                                                            *
* Outputs        : none					                    	          *
*                                                                            *
******************************************************************************/
void RecvChar(unsigned char *data, HANDLE HdComm)
{
	DWORD nread = 0;

	while (nread == 0)
		ReadFile(HdComm, data, 1, &nread, NULL);
}

int RecvCharTEMPORIZADO(unsigned char *data, HANDLE HdComm, int temp)
{
	int tempMax = 0;
	
	DWORD nread = 0;

	DWORD dw1, dw2;
	dw1 = GetTickCount();
	dw2 = dw1;
	while (nread == 0) {
		ReadFile(HdComm, data, 1, &nread, NULL);
		dw2 = GetTickCount();

		if (dw2 - dw1 > temp) {
			tempMax = 1;
			nread = 1;

		}
		else {
			dw1 = GetTickCount();
		}
	}

	return tempMax;
}

/******************************************************************************
*                                                                            *
* Procedure Name : ConvASCII                                                 *
*                                                                            *
* Purpose        : This function converts an integer into a 4 digit ASCII    *
*                  string e.g. 9674 becomes 25CA                             *
*                                                                            *
* Inputs         : unsigned int number - integer to be converted into ASCII  *
*                  char* buffer - pointer to buffer which will hold the      *
*                  ASCII code                                                *
*                                                                            *
* Outputs        : none                                                      *
*                                                                            *
******************************************************************************/
void ConvASCII(unsigned int number, char* buffer)
{
	int i;

	_itoa_s(number, buffer, 4, 16);						//convert integer to ASCII
	for (i = 0; i < 4; i++)
	{
		if (buffer[i] > 0x60) buffer[i] -= 0x20;	//convert to upper case
	}
	if (number < 16)					//swap bytes if number < 16 e.g. turn F000 into 000F
	{
		buffer[3] = buffer[0];
		buffer[2] = '0';
		buffer[1] = '0';
		buffer[0] = '0';
	}
	else if (number < 256)				//swap bytes if number < 256 e.g. turn EF00 into 00EF
	{
		buffer[3] = buffer[1];
		buffer[2] = buffer[0];
		buffer[1] = '0';
		buffer[0] = '0';
	}
	else if (number < 4096)				//swap bytes if number < 4096 e.g. turn DEF0 into 0DEF
	{
		buffer[3] = buffer[2];
		buffer[2] = buffer[1];
		buffer[1] = buffer[0];
		buffer[0] = '0';
	}
}

/******************************************************************************
*                                                                            *
* Procedure Name : Configure_FPAA                                            *
*                                                                            *
* Purpose        : This function does a primary configuration of the FPAA    *
*                                                                            *
* Inputs         : bool Primary - 1 for primary, 0 for reconfig				 *
*		          : const anadigm_Byte* Data - pointer to the config data    *
*					int Size - size of the data								 *
*                                                                            *
* Outputs        : None														 *
*                                                                            *
******************************************************************************/
void Configure_FPAA(int Primary, const an_Byte* Data, int Size, HANDLE Hdcomm)
{
	char buffer[4];
	int i, dummy_bytes;

	if (Primary)
		dummy_bytes = 6;
	else
		dummy_bytes = 1;
	ConvASCII(2 * (Size + dummy_bytes), buffer);		//create 2 ASCII characters for ASCII stream size

	SendChar(0x02, Hdcomm);					//STX
	if (Primary)
		SendChar('0', Hdcomm);				//command code to do a primary configuration
	else if (!Primary)
		SendChar('1', Hdcomm);				//command code to do a update reconfiguration
	else if (Primary == 3)
		SendChar('C', Hdcomm);

	SendChar(buffer[0], Hdcomm);			//no. of bytes to follow
	SendChar(buffer[1], Hdcomm);			//no. of bytes to follow
	SendChar(buffer[2], Hdcomm);			//no. of bytes to follow
	SendChar(buffer[3], Hdcomm);			//no. of bytes to follow
	if (Primary)
	{
		SendData(0x00, Hdcomm);					//dummy byte
		SendData(0x00, Hdcomm);					//dummy byte
		SendData(0x00, Hdcomm);					//dummy byte
		SendData(0x00, Hdcomm);					//dummy byte
		SendData(0x00, Hdcomm);					//dummy byte
	}
	for (i = 0; i < Size; i++)
		SendData(*(Data + i), Hdcomm);		//send data
	SendData(0x00, Hdcomm);					//dummy byte
	SendChar(0x03, Hdcomm);					//ETX
	SendChar(0x03, Hdcomm);					//ETX
	SendChar(0x03, Hdcomm);					//ETX
	SendChar(0x03, Hdcomm);					//ETX
	SendChar(0x03, Hdcomm);					//ETX
	SendChar(0x03, Hdcomm);					//ETX
	SendChar(0x03, Hdcomm);					//ETX
	SendChar(0x03, Hdcomm);					//ETX
}