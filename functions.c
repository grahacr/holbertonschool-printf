#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 *
 *
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);
	putchar(c);
	return (1);
}
int print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	int len = 0;
	int i;

	if (str != NULL)
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		str = "(null)";
		len = 6;
		for (i = 0; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	return (len);
}
