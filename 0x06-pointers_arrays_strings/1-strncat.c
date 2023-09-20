
#include "main.h"

/**
 *_strncat - asdasdsa
 *@dest: the string to src to
 *@src: the string to add
 *@n: probably the maximum length
 *Return: nada
 */

char *_strncat(char *dest, char *src, int n)
{
	char *head;
	int i;

	i = 0;

	head = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i != n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (head);
}

