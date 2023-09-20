

#include "main.h"

/**
 *reverse_array - asdasdsa
 *@a: the array
 *@n: its length
 *Return: nada
 */

void reverse_array(int *a, int n)
{
	int i, swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
	}
}

