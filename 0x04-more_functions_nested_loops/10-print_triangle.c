#include "main.h"

/**
 *print_triangle - tiply
 *@size: sadasd
 *Return: a*b
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i, j, k;

	for (i = 1; i <= size; i++)
	{

		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}

		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

