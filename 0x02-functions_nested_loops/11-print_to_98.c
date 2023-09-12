#include <stdio.h>

/**
 *print_to_98 - return something ???
 *@n: sdsdsd
 *Return: returns 1 or 0 (bool casted to int)
 */
void print_to_98(int n)
{
	int step;

	step = n < 98 ? 1 : -1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += step;
	}

	printf("%d\n", n);
}
