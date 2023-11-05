#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *
 */
int _printf(const char *format, ...)
{
  va_list ap;
  int i = 0;
int (*written)(va_list);
  va_start(ap, format);
  while (*format != '\0')
    {
      if (*format == '%')
      {
	      format++;
	      written = get_spec_func(format);
	      i += written(ap);
	      format++;
      }
      else
	{
	      i +=  write(1, format, 1);
	}
      format++;	  
    }
va_end(ap);
return (i);
}
