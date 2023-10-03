

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - cp a string to a new location n return a pointer
 * @width: the string to copy
 * @height: the string to copy
 * Return: a ptr
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, *ptr_to_arr;

	arr = (int **) malloc(sizeof(int **));

	*arr = (int *) malloc(sizeof(int) * width * height);

	for (i = 0; i < width * height; i++)
		*
		arr[i] = 0;

	return (arr);
}

