#include "main.h"
/**
 * flip_bits - turn bin number to an unsigned int
 * @n: the number in string form
 * @m: the number in string form
 * Return: nothing
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int c = 0;

	while (xor)
	{
		if (xor & 1ul)
			c++;

		xor = xor >> 1;
	}

	return (c);
}
