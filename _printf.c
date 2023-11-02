#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "functions.c"
#include "spec_functions.c"
/**
 *
 */
int _printf(const char *format, ...)
{
  va_list ap;
  int i;
  va_start(ap, format);
  while (*format != '\0')
    {
      if (*format == '%')
      {
	      i += print_format(*(++format), ap);
      }
      else
	      i +=  write(1, format, 1);
      ++format;	  
    }
return (i);
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
    i += print_str(va_arg(ap, char *));
  else if (specifier == '%')
    i += print_spec(va_arg(ap, char));
  else if (specifier == 'd')
    i += print_digit((long)(va_arg(ap, int)), 10);
  else if (specifier == 'i')
    i += print_int((long)(va_arg(ap, int)), 10);
		   return (i);
}
