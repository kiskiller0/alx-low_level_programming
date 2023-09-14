#include "main.h"

/**
 * more_numbers - tiply
 * Return: a*b
 */
void my_print(char c)
{
	_putchar(c);
}

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int a;

		a = 0;

		while (a < 15)
		{
			if (a < 10)
				my_print(a + 48);
			else
			{
				my_print(a / 10 + 48);
				my_print(a % 10 + 48);
			}
			a++;
		}

		my_print('\n');
	}
}

