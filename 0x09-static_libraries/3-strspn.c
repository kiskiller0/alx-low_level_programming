
#include "main.h"
#include <stdio.h>

/**
 * *_strspn - length of prefix of s that is composed of chars in accept
 * @s: string to where to search
 * @accept: set of allowed chars
 *
 * Return: a pointer to the first occurrence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int matches;
	char *i;
	int found;

	for (matches = 0; *s != '\0'; s++)
	{
		found = 0;
		for (i = accept; *i != '\0'; i++)
		{
			if (*s == *i)
			{
				matches++;
				found = 1;
				continue;
			}
		}

		if (!found)
			return (matches);
	}

	return (matches);
}

