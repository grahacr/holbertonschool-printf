#ifndef main_h
#define main_h
#include <stdarg.h>
/**
 *struct spec - structure that defines a function pointer
 *@spec: variable that helps identify the format specifier
 *Description: Structure that uses function pointers to solve code
 */
typedef struct spec
{
char spec;
int (*f)(va_list);
} spec_t;
int print_char(va_list ap);
int print_string(va_list ap);
int (*get_spec_func(const char *s))(va_list ap);
int _printf(const char *format, ...);
int print_2(va_list ap);
int print_null(va_list ap);
int print_digit(va_list ap);
#endif
