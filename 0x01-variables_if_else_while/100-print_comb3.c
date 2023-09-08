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
	int a = '1';
	int b = '0';

	while (b != '9' + 1)
	{
		putchar(b);
		if (a == b)
		{
			a++;
		}
		else
		{
			putchar(a++);
		}

		if (a == '9' + 1)
		{
			b += 1;
			/* a = '0';*/
			a = b;
		}

		if (b == '9' + 1)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
