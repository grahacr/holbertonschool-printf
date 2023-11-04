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
	write(1, &c, 1);
	return 1;
}
int print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	int len = strlen(str);
	write(1, str, len);
	return (len);
}
int print_spec(va_list ap)
{
	char a = '%';
	(void) ap;
	write(1, &a, 1);
	return (1);
}
