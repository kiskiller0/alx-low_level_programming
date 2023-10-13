#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all args (int)
 * @separator: the string to print between each number
 * @n: the number of args, kinda defeats the purpose
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *current;
	va_list args;

	va_start(args, n);

	if (!n)
		return;

	for (i = 0; i < n; i++)
	{
		current = va_arg(args, char*);

		if (current)
			printf("%s", current);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

