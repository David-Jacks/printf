#include "main.h"

/**
 *print_str - a function to print strings to standard output
 *@pans: string to be printed
 *@count: the count of characters to be printed
 *
 *Return: returns the count value
 **/

int print_str(char *pans, int count)
{
	while (*pans)
	{
		write(1, pans, sizeof(*pans));
		count++;
		pans++;
	}
	write(1, "\n", 1);
	return (count);
}
