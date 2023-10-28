#include "main.h"
/**
 * set_bit - turn bin number to an unsigned int
 * @n: the number in string form
 * @index: the number in string form
 * Return: nothing
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
