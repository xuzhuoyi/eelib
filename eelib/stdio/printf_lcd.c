#include "estdio_lcd.h"

_lcd_printf lcdprintf;

void LCD_InitPrintf(uint8_t fontSize_Width, uint8_t fontSize_Height, uint16_t LCD_Width, uint16_t LCD_Height)
{
	lcdprintf.FontSize_Height = fontSize_Height;
	lcdprintf.FontSize_Width = fontSize_Width;
	lcdprintf.TotalColumn = LCD_Width / fontSize_Width;
	lcdprintf.TotalRow = LCD_Height / fontSize_Height;
	lcdprintf.CurrentColumn = 0;
	lcdprintf.CurrentRow = 0;
}
