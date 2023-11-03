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
int print_format(va_list);
int print_char(va_list);
int print_string(va_list);
int print_spec(va_list);
int print_digit(va_list);
int print_integer(va_list);
int (*get_spec_func(char *s))(va_list);
int _printf(const char *format, ...);
#endif
