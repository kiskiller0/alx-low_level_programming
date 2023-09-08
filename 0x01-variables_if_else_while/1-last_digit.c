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
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n;
	/* your code goes there */
	if (n < 0)
	{
		n = -n;
	}

	n %= 10;
	printf("Last digit of %d is %d", m, n);

	if (n == 0)
	{
		printf(" and is 0\n");
	}
	else if (n > 5)
	{
		printf(" and is greater than 5\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
