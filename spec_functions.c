#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 *get_spec_func - function pointer that gathers which function to print
 *@s: format specifier input that seeks the corresponding function
 *Return: function that corresponds with the specifier
 */
int (*get_spec_func(const char *s))(va_list ap)
{
  spec_t specs[] = {
		    { 'c', print_char },
		    { 's', print_string },
		    { '\0', print_null },
		    { 'i', print_digit },
		    { 'd', print_digit }
  };
  int i = 0;
  while (i < 5)
    {
      if (specs[i].spec == *s)
	{
	  return (specs[i].f);
	}
      i++;
    }
  putchar('%');
  putchar(*s);
  return (print_2);
}
