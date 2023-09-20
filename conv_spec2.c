#include "main.h"
/**
 *conv_spec2 - evaluates the conversion specifies
 *@format: considers the format string
 *@count: considers the character count to be printed to the output
 *@args: takes the variable argument to be printed
 *
 *Return: returns the count
 */
int conv_spec2(const char *format, int count, va_list args)
{
	unsigned int intAns1, intAns2, intAns3, intAns4;

	switch (*format)
	{
		case 'u':
			intAns1 = va_arg(args, unsigned int);
			count = print_int2(count, intAns1);
			break;
		case 'o':
			intAns2 = va_arg(args, unsigned int);
			count = print_octal(intAns2, count);
			break;
		case 'x':
			intAns3 = va_arg(args, unsigned int);
			count = print_hexa(intAns3, count, 0);
			break;
		case 'X':
			intAns4 = va_arg(args, unsigned int);
			count = print_hexa(intAns4, count, 1);
			break;
		default:
			write(1, "%", 1);
			write(1, format, 1);
			count += 2;
			break;
	}
	return (count);
}
