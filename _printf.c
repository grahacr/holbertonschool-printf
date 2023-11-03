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
	      i += get_spec_func(*(++format), ap);
      }
      else
	      i +=  write(1, format, 1);
      ++format;	  
    }
return (i);
}
