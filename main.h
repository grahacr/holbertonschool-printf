#ifndef main_h
#define main_h
#include <stdarg.h>
/**
 *
 *
 */
typedef struct spec
{
char *spec;
int (*f)(va_list);
} spec_t;
int print_char(int c);
int print_string(char *str);
int print_spec(char c);
int print_digit(long n, int base);
int print_integer(int c);
int (*get_spec_func(char *s))(va_list);
int _printf(const char *format, ...);
#endif
