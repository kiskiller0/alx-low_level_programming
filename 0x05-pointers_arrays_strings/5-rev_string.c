

#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int strlen, i, swapper;
	char *head;

	head = s;

	for (strlen = 0; *s != '\0'; s++)
	{
		strlen++;
	}

	i = 0;
	s--;

	while (i != strlen / 2)
	{
		swapper = head[i];
		head[i] = *s;
		*s = swapper;
		i++;
		s--;
	}

}

