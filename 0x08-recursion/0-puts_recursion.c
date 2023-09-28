
#include "main.h"
#include <stdio.h>

/**
 * *_puts_recursion - print a string using recurstion
 * @s: the src
 * Return: nada!
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_puthar('\0');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}

