#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *_printf - function that prints any given argument
 *@format: pointer to the first argument passed to function
 *@...: infinite number of variables to be passed to function
 *Return: Number of bytes printed
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
