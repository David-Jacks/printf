#include "main.h"
/**
 *conv_spec - evaluates the conversion specifies
 *@format: considers the format string
 *@count: considers the character count to be printed to the output
 *@args: takes the variable argument to be printed
 *
 *Return: returns the count
 */
int conv_spec(const char *format, int count, va_list args)
{
	char ans;
	char *pans;
	int intAns;
	int intAns1;

	switch (*format)
	{
		case 'c':
			ans = va_arg(args, int);

			write(1, &ans, 1);
			count++;
			break;
		case 's':
			pans = va_arg(args, char *);

			if (pans != NULL)
			{
				count += print_str(pans, count);
			} else
			{
				write(1, "(null)", 6);
				count += 6;
			}
			break;
		case '%':
			write(1, format, 1);
			count++;
			break;
		case 'd':
			intAns = va_arg(args, int);

			count += print_int(count, intAns);
			break;
		case 'i':
			intAns1 = va_arg(args, int);

			count += print_int(count, intAns1);
			break;
		default:
			write(1, format, 1);
			break;
	}
	return (count);
}
