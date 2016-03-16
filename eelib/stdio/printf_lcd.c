#include "estdio_lcd.h"

_lcd_printf lcdprintf;

void LCD_InitPrintf(uint8_t fontSize, uint16_t LCD_Width, uint16_t LCD_Height)
{
	lcdprintf.FontSize = fontSize;
	lcdprintf.TotalColumn = LCD_Width / fontSize * 2;
	lcdprintf.TotalRow = LCD_Height / fontSize;
	lcdprintf.CurrentColumn = 0;
	lcdprintf.CurrentRow = 0;
}
