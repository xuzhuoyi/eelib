#include "estdio.h"
#include "eelib_port.h"

/**
  * @brief  Retargets the C library printf function to the USART.
  * @param  None
  * @retval None
  */
PUTCHAR_PROTOTYPE
{
	uint8_t entered = 0;
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART */
	EELib_UART_Transmit((uint8_t*) &ch, sizeof(ch));
    //huart1.Instance->DR = (uint8_t) ch;

  /* Loop until the end of transmission */
  return ch;
}
