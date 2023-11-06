#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 *
 *
 *
 */
int (*get_spec_func(const char *s))(va_list ap)
{
  spec_t specs[] = {
	  { 'c', print_char },
	  { 's', print_string },
	  { '\0', NULL },
          { 'd', print_digit },
          { 'i', print_integer },
  };
  int i = 0;
  if (s[i] == '\0')
    {
      return (-1);
    }
  while (specs[i].spec != '\0')
    {
      if (specs[i].spec == *s)
      {
        return (specs[i].f);
      }
	i++;
    }
  putchar('%');
  putchar(str[i]);
	  return (2);
}
