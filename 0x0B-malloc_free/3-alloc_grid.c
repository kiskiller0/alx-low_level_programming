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
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * width);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * height);
		if (!arr[i])
		{
			free(arr[i]);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

