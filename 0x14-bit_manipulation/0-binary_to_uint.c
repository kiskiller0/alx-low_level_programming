#include "main.h"

/**
 * binary_to_uint - turn bin number to an unsigned int
 * @b: the number in string form
 * Return: u_int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (!b)
		return (0);

	for (result = 0; b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result += result * 2 + (*b - '0');
	}


	return (result);
}

