

#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - first char of s that is in accept
 * @s: string to where to search
 * @accept: set of allowed chars
 *
 * Return: a pointer to the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	char *i;

	for (; *s != '\0'; s++)
	{
		for (i = accept; *i != '\0'; i++)
		{
			if (*s == *i)
			{
				return (s);
			}
		}
	}

	return (NULL);
}

