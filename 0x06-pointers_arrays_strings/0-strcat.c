#include "main.h"

/**
 *_strcat - asdasdsa
 *Return: nada
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
	}
	*dest = *src;
	return (dest);
}

