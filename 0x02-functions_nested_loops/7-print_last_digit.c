#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - return something ???
 * Return: returns 1 or 0 (bool casted to int)
 * @n: the character that the function takes
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
		
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit + 48);
	return (last_digit);
}