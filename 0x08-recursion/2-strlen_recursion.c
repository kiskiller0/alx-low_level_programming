


#include "main.h"
#include <stdio.h>

/**
 * *_strlen_recursion - print a string using recurstion
 * @s: the src
 * Return: nada!
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(++s));
}

