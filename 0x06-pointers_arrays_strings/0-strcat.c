#include "main.h"

/**
 *_strcat - asdasdsa
 *Return: nada
 */

char *_strcat(char *dest, char *src)
{
	char* head;

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

