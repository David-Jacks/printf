#include "main.h"
/**
 *conv_spec - evaluates the conversion specifies
 *@format: considers the format string
 *@count: considers the character count to be printed to the output
 *@args: takes the variable argument to be printed
 *
 *Return: returns the count
 */
int conv_spec(const char *format, int count, va_list args, int *flag)
{
	char ans, *pans;
	int intAns;

	switch (*format)
	{
		case 'c':
			ans = va_arg(args, int);
			write(1, &ans, 1);
			count++;
			*flag = 1;
			break;
		case 's':
			pans = va_arg(args, char *);
			count += print_str(pans, count);
			*flag = 1;
			break;
		case '%':
			write(1, "%", 1);
			count++;
			*flag = 1;
			break;
		case 'd':
		case 'i':
			intAns = va_arg(args, int);
			count = print_int(count, intAns);
			*flag = 1;
			break;
		default:
			break;
	}
	return (count);
}
