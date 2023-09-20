#include "main.h"
/**
 *print_int - prints integers to standard output
 *@i: takes in the integer to be printed to standard output
 *@a: the count of the printed integers to standard output
 *
 *Return: returns the count of integer value to be pinted
 **/

int print_int(int a, int i)
{
	int ans, j, m = 1, k, count = 0, new1, flag = 0;

	if (i < 0)
	{
		flag = 1;
		i = (i * -1);
	}
	new1 = i;
	while (new1 != 0)
	{
		new1 = new1 / 10;
		count++;
	}

	for (k = 1; k < count; k++)
	{
		m = m * 10;
	}
	if (flag)
	{
		write(1, "-", 1);
		a++;
	}
	for (j = 0; j < count; j++)
	{
		ans = (i / m) % 10 + '0';
		write(1, &ans, 1);
		a++;
		m = m / 10;
	}
	return (a);
}

/****************print unsigned int*************************/

int print_int2(int count, unsigned int un)
{
	char buf[12];
	int a = 0;

	do {
		buf[a++] = (un % 10) + '0';
		un /= 10;
	} while (un > 0);

	while (a > 0)
	{
		write(1, &buf[--a], 1);
		count++;
	}
	return (count);
}
