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
	int success;
	int (*written)(va_list);
	int i = 0;
	if (format)
	{
		va_start(ap, format);
		while (*format != '\0')
		{
			if (*format == '%')
			{
				format++;
				if (*format == '%')
				{
					i++;
					putchar('%');
				}
				else if (*format == '0')
				{
					break;
				}
				else
				{
					written = get_spec_func(format);
					if (written != NULL)
					{
						success = written(ap);
						if (success == -1)
						{
							va_end(ap);
							return (-1);
						}
						i += success;
					}
				}
			}
			else
			{
				putchar(*format);
				i++;
			}
			format++;
		}
	va_end(ap);
	return (i);
	}
	return (-1);
}
