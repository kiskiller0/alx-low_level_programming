#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all args
 * @n: the number of args, kinda defeats the purpose
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (!n)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}

