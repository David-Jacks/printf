#ifndef MY_PRINTF_HEADER
#define MY_PRINTF_HEADER
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_int(int, int);
int conv_spec(const char *, int, va_list, int *);
int conv_spec2(const char *, int, va_list);
int print_int2(int, unsigned int);
int print_str(char *, int);
int print_bin(int, int);
int print_octal(unsigned int, int);
int print_hexa(unsigned int, int, int);
#endif
