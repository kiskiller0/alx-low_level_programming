#include "main.h"
#include <stdio.h>

/**
 *print_buffer - print a buffer
 *@b: the buffer
 *@size: how many bytes to print
 *Return: nada
 */

void print_buffer(char *b, int size)
{
	int prints;

	for (prints = 0; prints < size; prints++)
	{
		if ((prints) % 10 == 0)
			putchar('\n');

		printf("%p: ", b);
		b++;
	}
}

