#include "estdio.h"
#include "eelib_port.h"

GETCHAR_PROTOTYPE
{
	uint8_t data;
	 /* Loop until received a char */
  

	EELib_UART_Receive(&data, sizeof(data));

    /* Read a character from the USART and RETURN */
  return (data);
}
