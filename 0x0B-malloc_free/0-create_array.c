#include "main.h"
#include <stdlib.h>



/**
 * create_array - asdasdsad
 * @size: ...
 * @c: the char to initialize the array to
 * Return: asdasdsad
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (0);
	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		arr[i] = c;


	return (arr);
}

