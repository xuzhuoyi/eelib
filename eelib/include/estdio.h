#ifndef __ESTDIO_H
#define __ESTDIO_H

#include <stdio.h>

#ifdef __GNUC__
  /* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
     set to 'Yes') calls __io_putchar() */
  #define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
	#define GETCHAR_PROTOTYPE int __io_getchar()
#else
  #define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
	#define GETCHAR_PROTOTYPE int fgetc(FILE *f)
#endif /* __GNUC__ */

#endif
	