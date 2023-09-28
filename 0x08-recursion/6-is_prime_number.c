
#include "main.h"
#include <stdio.h>

/**
 * isprime - check if prime
 * @n: the number
 * @i: the first possible dividant
 * Return: nada!
 */
int isprime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i <= 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (isprime(n, --i));
}
/**
 * is_prime_number - check if a number is prime
 * @n: the number
 * Return: nada!
 */

int is_prime_number(int n)
{
	return (isprime(n, n - 1));
}

