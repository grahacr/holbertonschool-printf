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
int print_char(va_list ap);
int print_string(va_list ap);
int print_spec(va_list ap);
int (*get_spec_func(const char *s))(va_list ap);
int _printf(const char *format, ...);
#endif
