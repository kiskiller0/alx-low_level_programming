
#include "main.h"
#include <stdio.h>

/**
 * *_pow_recursion - raise a number to a power
 * @x: the number
 * @y: the power
 * Return: nada!
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

