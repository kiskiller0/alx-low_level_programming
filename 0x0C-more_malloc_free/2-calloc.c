
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - malloc stuff
 * @nmemb: s1
 * @size: s2
 * Return: a pointer to the newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;


	if (!nmemb || !size)
		return (NULL);

	arr = (char *) malloc(size * nmemb);

	if (!arr)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		arr[i] = 0;
	return ((void *) arr);
}

