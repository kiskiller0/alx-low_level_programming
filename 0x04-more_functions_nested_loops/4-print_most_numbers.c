

#include "main.h"

/**
 * print_most_numbers - tiply
 * Return: a*b
 */

void print_most_numbers(void)
{
	int a;

	a = '0';
	while (a < '9' + 1)
	{
		if (a == '2' || a == '4')
		{
			a++;
			continue;
		}
		_putchar(a++);
	}
	_putchar('\n');
}

