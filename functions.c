#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 *print_char - function that prints the given argument
 *@ap: argument passed to the function
 *Return: Always 1
 */
int print_char(va_list ap)
{
  char c = va_arg(ap, int);
  putchar(c);
  return (1);
}
/**
 *print_string - function that prints the given string
 *@ap: argument passed to the function
 *Return: 6 for NULL or length of string passed
 */
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
      str = "(null)");
  len = 6;
  for (i = 0; i < len; i++)
    {
      putchar(str[i]);
    }
}
return (len);
}
/**
 *print_2 - function that returns 2 for wrong specifier given
 *@ap: unused input 
 *Return: 2 for characters printed
 */
int print_2(va_list ap)
{
  (void) ap;
  return (2);
}
/**
 *print_null - function that returns -1 for Null specifier
 *@ap: unused variable for function
 *Return: -1 for Error specifier
 */
int print_null(va_list ap)
{
  (void) ap;
  return (-1);
}
