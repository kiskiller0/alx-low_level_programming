#include "main.h"
#include <stdio.h>

/**
 *times_table - return something ???
 *Return: returns 1 or 0 (bool casted to int)
 */
void times_table(void)
{
	int a, b;

	a = 0;
	b = 0;

	while (a != 10)
	{
		int order;

		order = (a * b);

		if (order >= 10)
		{
			putchar(order / 10 + 48);
			putchar(order % 10 + 48);
		}
		else
		{
			putchar(' ');
			putchar(a * b + 48);
		}

		b++;
		putchar(' ');

		if (b == 10)
		{
			b = 0;
			a++;
			putchar('\n');
		}
		else
		{
			putchar(',');
		}
	}
}
