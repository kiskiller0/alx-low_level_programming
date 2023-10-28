#include "main.h"
/**
 * clear_bit - turn bin number to an unsigned int
 * @n: the number in string form
 * @index: the number in string form
 * Return: nothing
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
