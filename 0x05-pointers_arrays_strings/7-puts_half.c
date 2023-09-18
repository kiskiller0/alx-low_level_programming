


#include "main.h"

/**
 * puts_half - print half a string
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
	int strlen, i;
	char *head;

	head = str;

	for (strlen = 0; *str != '\0'; str++)
	{
		strlen++;
	}

	if (strlen % 2 == 0)
		i = strlen / 2 - 1;
	else
		i = strlen - ((strlen - 1) / 2);
	str--;

	while (i != strlen)
	{
		i++;
		_putchar(head[i]);
	}
	_putchar('\n');
}

