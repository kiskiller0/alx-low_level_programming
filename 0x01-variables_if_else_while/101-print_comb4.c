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
	int s1 = s + 1;

	while (p < '8')
	{

		putchar(p);
		putchar(s);
		putchar(s1++);

		if (s1 == '9' + 1)
		{
			s++;
			s1 = s + 1;

		}

		if (s == '9')
		{
			p++;
			s = p + 1;
			s1 = s + 1;
		}


		if (p == '8')
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
