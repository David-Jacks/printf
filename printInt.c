#include "main.h"


int print_int(int a, int i)
{
	int ans, j, m = 1, k, count = 0;
	int new, flag = 0;
	
	if (i < 0)
	{
		flag = 1;
		i = (i * -1);
	}
	new = i;
	while (new != 0)
	{
		new = new / 10;
		count++;
	}

	for (k = 1; k < count; k++)
	{
		m = m * 10;
	}
	if (flag)
	{
		write(1, "-", 1);
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
