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

	arr = (int **) malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * height);
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

