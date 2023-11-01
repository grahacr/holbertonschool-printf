#ifndef main_h
#define main_h

int _putchar(char c);
typedef struct spec
{
  char *spec;
			  char (*f)(char a, ...);
} spec_t
char Spec_c(const char *format, unsigned int n)
 char Spec_s(const char *format, ...);
int Spec_%(const char *format, ...);
Spec_d(const char *format, ...); 
Spec_i(const char *format, ...);
#endif
