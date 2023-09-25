


#include "main.h"

/**
 * _strchr - look for c in s
 *@s: the string
 *@c: the char
 *Return: the memory location of s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (s);
}

