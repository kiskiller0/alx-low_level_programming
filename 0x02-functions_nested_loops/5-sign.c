#include "main.h"

/**
 * print_sign - return something ???
 * Return: returns 1 or 0 (bool casted to int)
 * @n: the character that the function takes
 */

int print_sign(int n)
{
	char sign;

	sign = n > '0' ? '+' : (n == '0' ? '0' : '-');

	_putchar(sign);
	if (sign == '+')
		return (1);

	if (sign == '-')
		return (-1);

	else
		return (0);
}
