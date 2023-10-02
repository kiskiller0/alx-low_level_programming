

#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: the string (ptr to a char with which the string begin)
 * Return: void
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}

	return (counter);
}

