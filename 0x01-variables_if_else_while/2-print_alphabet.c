#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - this is main, what do you expect betty ?
 * Return: returns 0 on success
 */
int main(void)
{
	char a = 'a';

	while (a != 'z' + 1)
	{
		putchar(a++);
	}

	putchar('\n');

	return (0);
}
