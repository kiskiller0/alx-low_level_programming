

#include "main.h"

/**
 * _memcpy - extract number from withing string, with its sign
 *@dest: the dest
 *@src: the source
 *@n: size to fill
 *Return: the memory location of s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *head;
	unsigned int i;

	head = dest;


	for (i = 0; i < n; i++)
	{
		*dest =  *src;
		dest++;
		src++;
	}

	return (head);
}

