#ifndef main_h
#define main_h
/**
 *
 *
 */
typedef struct spec
{
char *spec;
int (*f)(const char *format, ...);
} spec_t;
int print_char(int c);
int print_string(int c);
int print_spec(int c);
int print_digit(int c);
int print_digit(int c);
int (*get_spec_func(char *s))(const char *format, ...);
int _printf(const char *format, ...);
#endif
