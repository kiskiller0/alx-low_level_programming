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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m = n;
	/* your code goes there */
	if (n < 0)
	{
		n = -n;
	}

	printf("Last digit of %d is %d\n", m, n % 10);


	return (0);
}
