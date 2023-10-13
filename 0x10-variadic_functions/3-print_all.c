
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print args formatted as in printf
 * @format: the format string
 * Return: nothing
 */



void print_all(const char * const format, ...)
{
	int current_letter;
	va_list args;


	va_start(args, format);

	current_letter = 0;

	if (!format)
		return;

	while (format[current_letter] != 0)
	{
		print_arg(args, format[current_letter]);

		if (format[current_letter + 1])
			printf(", ");
		current_letter++;
	}
	printf("\n");
}

/**
 * print_arg - print one arguement according to the format character
 * @args: va_list value
 * @format: a character representing the format: i, f, c, s
 * Return: nothing
 */

void print_arg(va_list args, char format)
{
	char *buffer;

		switch (format)
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%.2f", va_arg(args, double));
				break;

			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 's':
				buffer = va_arg(args, char *);

				if (buffer)
				{
					printf("%s", buffer);
					break;
				}
				printf("(nil)");

				break;

			default:
				break;
		}
}
