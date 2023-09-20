#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 *_printf - custom printf function by Miriam and David
 *@format: format string to be considered
 *
 *Return: return the count of characters to be printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int flagged = 0;
	int *flag = &flagged;
	va_list args;

	va_start(args, format);
	while (*format)
	{

		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				write(1, "error not indicating conversion specifeir", 42);
				return (-1);
			}
			count = conv_spec(format, count, args, flag);
			if (!flagged)
				count = conv_spec2(format, count, args);
		} else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
