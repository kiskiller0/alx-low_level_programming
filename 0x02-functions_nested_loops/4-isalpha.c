#include "main.h"

/**
 * print_sign - return something ???
 * Return: returns 1 or 0 (bool casted to int)
 * @c: the character that the function takes
 */

int print_sign(int n)
{
	return (n > 0? '+' : (n == 0? '0' : '-'));
}
