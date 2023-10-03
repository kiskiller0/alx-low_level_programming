
#include "main.h"
#include <stdlib.h>



/**
 * _strdup - cp a string to a new location n return a pointer
 * @str: the string to copy
 * Return: a ptr
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int size_str;
	char *head;

	head = str;
	size_str = 0;

	while (*head)
	{
		size_str++;
		head++;
	}

	arr = (char *) malloc(sizeof(char) * size_str + 1);
	head = arr;

	if (!arr)
		return (arr);
	if (!str)
		return (str);

	while (*str)
	{
		*head = *str;
		str++;
		head++;
	}

	*head = *str;

	return (arr);
}

