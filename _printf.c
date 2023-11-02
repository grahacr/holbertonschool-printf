#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 */
int _printf(const char *format)
{
  va_list ap;
  int i;
  va_start(ap, format);
  while (*format != '\0')
    {
      if (*format == '%')
	i += spec_spec(*++format)), ap);
 else
  i +=  write(1, format, 1);
++format;
	  
    }
return i;
}
/**
 *
 *
 */
int print_format(char specifier, va_list ap)
{
  int i;
  i = 0;
  if (specifier == 'c')
   i = print_char(va_arg(ap, int));
  else if (specifier == 's')
    i = print_str(va_arg
