#include "main.h"
/**
 * print_binary - turn bin number to an unsigned int
 * @n: the number in string form
 * Return: nothing
 */


void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, done = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			done++;
		}
		else if (done)
			_putchar('0');
	}

	if (!done)
	{
		_putchar('0');
	}
}
