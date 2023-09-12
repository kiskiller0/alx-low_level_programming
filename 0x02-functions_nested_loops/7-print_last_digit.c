#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - return something ???
 * Return: returns 1 or 0 (bool casted to int)
 * @n: the character that the function takes
 */

int print_last_digit(int n)
{
	long last_digit;

	last_digit = n;

	if (last_digit < 0)
		last_digit *= -1;

	last_digit = n % 10;
	_putchar(last_digit + 48);
	return (last_digit);
}
