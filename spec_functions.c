#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "functions.c"
/**
 *
 *
 *
 */
int (*get_spec_func(char *s))(void *, void *)
{
  spec_t specs[] = {
    { "c", print_char },
      { "s", print_string },
      { "%", print_spec },
	{ "d", print_digit },
	  { "i", print_int },
	    { NULL, NULL }
  };
  int i = 0;
  while (i < 5)
    {
      if (strcmp(s,specs[i].spec) == 0)
	  return (specs[i].f);
		  i++;
    }
  return (0);
}
