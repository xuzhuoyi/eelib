#include "eelib_port.h"
#include "stm32f4xx_hal.h"
#include "lcd.h"


extern UART_HandleTypeDef huart1;

int EELib_UART_Transmit(uint8_t *pData, uint16_t Size)
{
	HAL_UART_Transmit_DMA(&huart1, pData, Size);
	while(__HAL_UART_GET_FLAG(&huart1, UART_FLAG_TC) == RESET){}
}

int EELib_UART_Receive(uint8_t *pData, uint16_t Size)
{
	while(!(__HAL_UART_GET_FLAG(&huart1, UART_FLAG_RXNE) == SET)){}
	HAL_UART_Receive_DMA(&huart1, pData, Size);
}

int EELib_LCD_ShowChar(uint16_t x, uint16_t y, uint8_t Char, uint8_t Size, uint8_t Mode, uint16_t PointColor)
{
	POINT_COLOR = PointColor;
	LCD_ShowChar(x, y, Char, Size, Mode);
}

void exit(int status)
{

}
