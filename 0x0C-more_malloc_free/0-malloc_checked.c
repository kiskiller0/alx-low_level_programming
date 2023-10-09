#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - malloc stuff
 * @b: the size
 * Return: a void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}

