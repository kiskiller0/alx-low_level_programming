#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - sadsadasd
* @width: sdsdad
* @height: sdasdasdasd
* Return: Vasdasdsadasdasd
*/

int **alloc_grid(int width, int height)
{
	int **arrrrr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrrrr = malloc(sizeof(int *) * height);
	if (arrrrr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arrrrr[x] = malloc(sizeof(int) * width);
		if (arrrrr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(arrrrr[x]);
			free(arrrrr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arrrrr[x][y] = 0;
	}
	return (arrrrr);
}

