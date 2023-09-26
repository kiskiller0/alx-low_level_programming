

#include "main.h"
#include <stdio.h>

/**
 * *print_diagsums - print the sum of diagonals
 * @a: the board
 * @size: the size of each dimension of the array
 * Return: a pointer to the first occurrence
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;


	sum1 = 0;
	j = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + j);
		j++;
	}

	sum2 = 0;
	j = size - 1;
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + j);
		j--;
	}

	printf("%d, %d\n", sum1, sum2);
}

