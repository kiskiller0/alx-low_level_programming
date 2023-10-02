
#include "main.h"

/**
 *_strcmp - asdasdsa
 *@s1: the string to src to
 *@s2: the string to copy to dest
 *Return: nada
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

