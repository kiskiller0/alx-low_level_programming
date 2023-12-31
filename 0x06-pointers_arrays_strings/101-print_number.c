
#include "main.h"

/**
 *print_number - print a number
 *@n: the number
 *Return: nada
 */

void print_number(int n)
{
	int order, number, current_digit, divisor;

	if (n < 0)
		_putchar('-');

	n = n < 0 ? -n : n;
	number = n;
	order = 0;
	divisor = 1;

	while (n >= 10)
	{
		n /= 10;
		order++;
		divisor *= 10;
	}

	while (order > -1)
	{
		current_digit = number / divisor;
		if (number)
			number -= current_digit * divisor;
		else
		{
			_putchar('0');
			break;
		}

		_putchar(current_digit + '0');

		divisor /= 10;
		order--;
	}
}

