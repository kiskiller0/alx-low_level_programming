


#include "main.h"

/**
 * puts2 - print every other char of a str
 * @str: the string to print alternatively
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 1; *str != '\0'; str++)
	{
		if (i > 0)
		{
			_putchar(*str);
		}
		i = -i;
	}
	_putchar('\n');
}

