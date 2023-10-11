
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - asdsad
 * @d: asdd
 * Return: sdsd
 */


void free_dog(dog_t *d)
{

	if (!d)
		return (NULL);

	free(d->owner);
	free(d->name);
	free(d);
}

