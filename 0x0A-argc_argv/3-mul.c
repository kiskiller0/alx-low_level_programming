
#include <stdio.h>
#include <stdlib.h>

/**
 * main - asdasdsa
 * @argc: sdsd
 * @argv: asdsad
 * Return: sdsdsd
 */

int main(int argc, char *argv[])
{
	long a;
	long b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = strtol(argv[1], 0, 10);
	b = strtol(argv[2], 0, 10);

	printf("%ld\n", a * b);
	return (0);
}

