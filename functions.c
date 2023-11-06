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
	int len = strlen(str);
	int i;
	if (*str != '\0' && str != NULL)
	  {
	for (i = 0; i < len; i++)
		{
			putchar(str[i]);
		}
	return (len);
	  }
 else
   {
     putchar('(');
	putchar('n');
	putchar('u');
putchar('l');
	putchar('l');
	putchar(')');
	return (6);
}
}
