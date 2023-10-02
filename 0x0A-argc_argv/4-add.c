

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
	char *ptr;
	int i;
	long sum;

	sum = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];

		while (*ptr)
		{
			if (*ptr > '9' || *ptr < 0)
			{
				printf("Error");
				return (1);
			}

			ptr++;
		}

		sum += strtol(argv[i], 0, 10);
	}

	printf("%ld\n", sum);

	return (0);
}

