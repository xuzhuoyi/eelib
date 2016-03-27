#include "estdio.h"
#include "eelib_port.h"

#include "estdio_lcd.h"



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

  if(lcdprintf.CurrentColumn >= lcdprintf.TotalColumn)
	{
		lcdprintf.CurrentRow++;
		lcdprintf.CurrentColumn = 0;
		entered = 1;
	}	
	if(lcdprintf.CurrentRow >= lcdprintf.TotalRow)
		lcdprintf.CurrentRow = 0;	
  if(!entered && ch == '\n')
	{
		lcdprintf.CurrentRow++;
		lcdprintf.CurrentColumn = 0;
		return ch;
	}
	
	EELib_LCD_ShowChar(lcdprintf.CurrentColumn * lcdprintf.FontSize_Width, lcdprintf.CurrentRow * lcdprintf.FontSize_Height, ch, lcdprintf.FontSize_Height, 0, 0x0000);
	lcdprintf.CurrentColumn++;
  return ch;
}
