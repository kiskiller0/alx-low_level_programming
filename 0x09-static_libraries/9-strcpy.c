
#include "main.h"
#include <stdio.h>

/**
 * _strcpy - print an array of integers
 * @dest: the destinaion string (char *)
 * @src: the source string
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}

	dest[i] = '\0';
	return (dest);
}


