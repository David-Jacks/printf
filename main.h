#ifndef MY_PRINTF_HEADER
#define MY_PRINTF_HEADER
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int conv_spec(const char *, int, va_list);
int print_int(int, int);
int print_str(char *, int);
#endif
