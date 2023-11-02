#include <stdio.h>
#include "main.h"
/**
 *
 *
 */
int print_char(int c);
{
	return write(1, &c, 1);
}
int print_string(char *str)
{
	int i = 0;
	while (*str != '\0')
	{
		print_char((int)*str);
		++i;
		++str;
	}
	return (i);
}
int print_spec(char c)
{
	char c = "%";
	write(1, &c, 1);
	return (0);
}
int print_digit(int c); 
