#ifndef __PRINTF_LCD_H
#define __PRINTF_LCD_H

#include "eelib_port.h"

typedef struct
{
	uint8_t TotalColumn;
	uint8_t TotalRow;
	uint8_t CurrentColumn;
	uint8_t CurrentRow;
	uint8_t FontSize_Width;
	uint8_t FontSize_Height;
} _lcd_printf;

extern _lcd_printf lcdprintf;

void LCD_InitPrintf(uint8_t fontSize_Width, uint8_t fontSize_Height, uint16_t LCD_Width, uint16_t LCD_Height);
	
#endif
