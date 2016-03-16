#ifndef __EELIB_PORT_H
#define __EELIB_PORT_H

    /* exact-width signed integer types */
typedef   signed          char int8_t;
typedef   signed short     int int16_t;
typedef   signed           int int32_t;

    /* exact-width unsigned integer types */
typedef unsigned          char uint8_t;
typedef unsigned short     int uint16_t;
typedef unsigned           int uint32_t;

int EELib_UART_Transmit(uint8_t *pData, uint16_t Size);
int EELib_UART_Receive(uint8_t *pData, uint16_t Size);
int EELib_LCD_ShowChar(uint16_t x, uint16_t y, uint8_t size, uint8_t mode, uint16_t PointColor);

#endif