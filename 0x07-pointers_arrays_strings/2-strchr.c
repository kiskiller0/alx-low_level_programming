#include "main.h"
#include <stdio.h>

/**
 * *_strchr - find a char
 * @s: string to where to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int a;


	while (1)
	{
		a = *s++;

		if (a == c)
		{
			return (s - 1);
		}

		if (a == '\0')
		{
			return (NULL);
		}
	}
}

