#include "main.h"

/**
 *print_str - a function to print strings to standard output
 *@pans: string to be printed
 *@count: the count of characters to be printed
 *Return: returns the count value
 **/

int print_str(char *pans, int count)
{
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

/************************print a binary*****************/
/**
 *print_bin - prints a binary
 *@bin: binary to be printed
 *@count: the character count to be printed
 *
 *Return: returns count
 **/

int print_bin(int bin, int count)
{
	char my_binary[32];
	int index = 0;

	while (bin > 0)
	{
		my_binary[index++] = (bin % 2) + '0';
		bin /= 2;
	}
	while (index > 0)
	{
		write(1, &my_binary[--index], 1);
		count++;
	}
	return (count);
}

/****************************print an octal value************/
/**
 *print_octal - prints an octal value
 *@count: character count
 *@i: the value to print it octal
 *Return: returns count
 */

int print_octal(unsigned int i, int count)
{
	char oct[12];
	int a = 0;/*index*/

	do {
		oct[a++] = (i % 8) + '0';
		i /= 8;
	} while (i > 0);
	while (a > 0)
	{
		write(1, &oct[--a], 1);
		count++;
	}
	return (count);
}

/*****************print hexadecimal********************/
/**
 *print_hexa - prints hexadecimals
 *@i: value to be printed into hexa
 *@count: character count to be printed
 *@upper: to check for case
 *Return: returns count
 */

int print_hexa(unsigned int i, int count, int upper)
{
	char hex[12];
	int a = 0;
	char initChars[16] = "0123456789abcdef";

	if (upper)
	{
		initChars[10] = 'A';
		initChars[11] = 'B';
		initChars[12] = 'C';
		initChars[13] = 'D';
		initChars[14] = 'E';
		initChars[15] = 'F';
	}
	do {
		hex[a++] = initChars[i % 16];
		i /= 16;
	} while (i > 0);

	while (a > 0)
	{
		write(1, &hex[--a], 1);
		count++;
	}
	return (count);
}
