
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
	int j, num, money;
	int change[] = {25, 10, 5, 2, 1};

	j = 0;
	num = 0;
	money = strtol(argv[1], 0, 10);


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (money <= 0)

	{
		printf("0\n");
		return (0);
	}

	while (money)
	{
		if (change[j] > money)
		{
			j++;
		}
		else
		{
			money -= change[j];
			num++;
		}
	}

	printf("%d\n", num);

	return (0);
}

