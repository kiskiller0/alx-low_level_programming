#include "main.h"

/**
 * more_numbers - tiply
 * Return: a*b
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 14; i++)
	{
		int a;

		a = 0;

		while (a++ < 15)
		{
			if (a < 10)
				_putchar(a + 48);
			else
			{
				_putchar(a / 10 + 48);
				_putchar(a % 10 + 48);
			}
		}

		_putchar('\n');
	}
}

