#include "main.h"

/**
 * print_alphabet_x10 - return something ???
 * Return - none of your business
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i;

	i = 0;

	while (i++ < 10)
	{
		while (a != 'z' + 1)
			_putchar(a++);

		_putchar('\n');
		a = 'a';
	}
}
