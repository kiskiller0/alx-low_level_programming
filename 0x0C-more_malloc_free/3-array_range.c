#include <stdlib.h>
#include "main.h"

/**
 * array_range - malloc stuff
 * @min: s1
 * @max: s2
 * Return: a pointer to the newly allocated memory
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min >= max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min) + 1);

	if (!arr)
		return (NULL);

	for (i = min; i < max + 1; i++)
		arr[i - min] = i;

	return (arr);
}

