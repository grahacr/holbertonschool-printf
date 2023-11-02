#ifndef main_h
#define main_h
/**
 *
 *
 */
typedef struct spec
{
char *spec;
char (*f)(char a, ...);
} spec_t;
int spec_ch(const char *format, ...)
int spec_s(const char *format, ...);
int spec_spec(const char *format, ...);
int spec_d(const char *format, ...); 
int spec_i(const char *format, ...);
int (*get_spec_func(char *s))(const char *format, ...)
int _printf(const char *format, ...);
#endif
