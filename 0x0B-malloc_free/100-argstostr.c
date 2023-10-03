#include <stdlib.h>
#include <stdio.h>

/**
 *argstostr - asdasdasd
 *@ac: asdsadasd
 *@av: asdsadsad
 *Return: asdsadsad
 */
char *argstostr(int ac, char **av)
{
	int length, i, j;
	char *all_args, *head;

	length = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}

		length++;
	}

	all_args = (char *) malloc(sizeof(char) * length);
	head = all_args;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{ *all_args = av[i][j];
			all_args++;
		}

		*all_args = '\n';
		all_args++;
	}

	*(all_args - 1) = 0;
	return (head);
}

