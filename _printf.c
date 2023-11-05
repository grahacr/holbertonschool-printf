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
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				i += write(1, "%", 1);
			}
			else
			{
				int (*written)(va_list);
				written = get_spec_func(format);
				if (written != NULL)
				{
					i += written(ap);
				}
			}
		}
		else
		{
			i += write(1, *format, 1);
		}
		format++;
	}
	va_end(ap);
	return (i);
}
