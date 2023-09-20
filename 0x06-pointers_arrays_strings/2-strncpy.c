#include "main.h"

/**
 *_strncpy - asdasdsa
 *@dest: the string to src to
 *@src: the string to copy to dest
 *@n: probably the maximum length
 *Return: nada
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

