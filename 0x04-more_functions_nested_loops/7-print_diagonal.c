

#include "main.h"

/**
 *print_diagonal - tiply
 *@n: arg
 *Return: a*b
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
}
