

#include "main.h"

/**
 * print_numbers - tiply
 * Return: a*b
 */

void print_most_numbers(void);
{
	int a;

	a = '0';
	while (a < '9' + 1)
	{
		if (a == '2' || a == '4')
			continue;
		_putchar(a++);
	}
	_putchar('\n');
}

