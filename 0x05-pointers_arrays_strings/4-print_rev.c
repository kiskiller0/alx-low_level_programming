
#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int strlen;

	for (strlen = 0; *s != '\0'; strlen++)
	{
		s++;
	}

	s--;

	while (strlen)
	{
		_putchar(*s);
		strlen--;
		s--;
	}
	_putchar('\n');
}

