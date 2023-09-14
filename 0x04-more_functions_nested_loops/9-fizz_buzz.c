#include <stdio.h>

/**
 *main - tiply
 *Return: a*b
 */

int main(void)
{
	int i;
	int is_fb;

	for (i = 1; i < 101; i++)
	{
		is_fb = 0;

		if (i % 3 == 0)
		{
			printf("Fizz");
			is_fb = 1;
		}
		if (i % 5 == 0)
		{
			is_fb = 1;
			printf("Buzz");
		}

		if (!is_fb)
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}

