

#include "main.h"
#include <stdio.h>

/**
 * *_sqrt_recursion - find the square root of a natural number
 * @n: the number
 * Return: nada!
 */
int _sqrt_recursion(int n)
{
	int root;

	root = 1;
	while (root != n)
	{
		if (root * root == n)
			return (root);
		root++;
	}

	return (-1);
}

