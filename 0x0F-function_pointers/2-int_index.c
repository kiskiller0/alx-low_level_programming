#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - malloc stuff
 * @array: s1
 * @size: s2
 * @cmp: s2
 * Return: a pointer to the newly allocated memory
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}

	return (-1);
}


