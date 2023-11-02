#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
*
*
*
*/
char spec_c(unsigned int n,...)
{
  va_list ap;
  va_start(ap, n);
  char *str = va_arg(ap, char *);
  putchar(*str)
