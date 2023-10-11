#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - malloc stuff
 * @array: s1
 * @size: s2
 * @action: s2
 * Return: a pointer to the newly allocated memory
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;


	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}

}


