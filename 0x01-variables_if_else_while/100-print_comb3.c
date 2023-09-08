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
	int p = '0';
	int s = p + 1;

	while (p < '9')
	{


		putchar(p);
		putchar(s++);

		if (s == '9' + 1)
		{
			p++;
			s = p + 1;
		}

		if (p == '9')
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
