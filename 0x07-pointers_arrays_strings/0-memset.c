
#include "main.h"

/**
 * _memset - extract number from withing string, with its sign
 *@s: the string
 *@b: the constant byte
 *@n: size to fill
 *Return: the memory location of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *head;
	int i;

	header = s;


	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}


	return (head);
}

