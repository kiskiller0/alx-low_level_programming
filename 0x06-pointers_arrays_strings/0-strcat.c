#include "main.h"

/**
 *_strcat - asdasdsa
 *@dest: the string to src to
 *@src: the string to add
 *Return: nada
 */

char *_strcat(char *dest, char *src)
{
	char *head;

	head = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (head);
}

