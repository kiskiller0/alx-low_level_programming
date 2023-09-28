#include "main.h"
#include <stdio.h>

/**
 * square - find the square root of a natural number
 * @n: the number
 * @i: the number
 * Return: nada!
 */
int square(int n, int i)
{
	if (i == n)
		return (-1);
	if (i * i == n)
		return (i);
	else if (i * i > n)
	{
		return (-1);
	}

	return (square(n, ++i));
}
/**
 * _sqrt_recursion - find the square root of a natural number
 * @n: the number
 * Return: nada!
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}



