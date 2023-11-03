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
    { "c", print_char },
      { "s", print_string },
      { "%", print_spec },
	    { NULL, NULL }
  };
  int i = 0;
  while (i < 4)
    {
      if (strcmp(s,specs[i].spec) == 0)
	  return (specs[i].f(va_list ap));
		  i++;
    }
  return (0);
}
