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
	int a = '0';

	while (a != '9' + 1)
	{
		putchar(a++);
		if (a == '9' + 1)
		{
			a = 'a';
			while (a != 'f' + 1)
			{
				putchar(a++);
			}
			a = '9' + 1;
		}
	}

	putchar('\n');

	return (0);
}
