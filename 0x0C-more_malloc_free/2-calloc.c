
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
	void *arr;


	if (!nmemb || !size)
		return (NULL);

	arr = malloc(size * nmemb);

	if (!arr)
		return (NULL);

	return (arr);
}

