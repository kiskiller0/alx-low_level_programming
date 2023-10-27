#include "main.h"

/**
 * print_binary - turn bin number to an unsigned int
 * @b: the number in string form
 * Return: u_int
 */

void print_binary(unsigned long int n)
{
	unsigned int index;

	for (index = 0; pow(2, index) <= n; index ++)
		;


	index--;

	while (index)
	{
		if (pow(2, index) > n)
		{
			index--;
			putchar('0');
			continue;
		}

		_putchar('1');
		n -= pow(2, index);
		index--;
	}

	if (n == 1)
		_putchar('1');
	else
		_putchar('0');
}
