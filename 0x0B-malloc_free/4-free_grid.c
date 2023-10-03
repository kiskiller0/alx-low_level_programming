
#include "main.h"
#include <stdlib.h>
/**
* free_grid - sadsadasd
* @grid: sdsdad
* @width: sdsdad
* @height: sdasdasdasd
* Return: Vasdasdsadasdasd
*/

void free_grid(int **grid, int width, int height)
{
	int x, y;

	for (x = 0; x < width; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
