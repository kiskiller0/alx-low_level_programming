#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - return something ???
 * Return: returns 1 or 0 (bool casted to int)
 * @n: the character that the function takes
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10 + 48;
	_putchar(last_digit);
	return (last_digit);
}