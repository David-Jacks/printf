#include "main.h"

/**
 *print_str - a function to print strings to standard output
 *@pans: string to be printed
 *@count: the count of characters to be printed
 *@args: argument to be considered
 *Return: returns the count value
 **/

int print_str(char *pans, int count, va_list args)
{
	pans = va_arg(args, char *);

	if (pans != NULL)
	{
		while (*pans)
		{
			write(1, pans, 1);
			count++;
			pans++;
		}
	} else
	{
		write(1, "(null)", 6);
		count += 6;
	}
	return (count);
}
