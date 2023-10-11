#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - asdsad
 * @age: asdd
 * @name: sdsd
 * @owner: asdd
 * Return: sdsd
 */


dog_t *new_dog(char *name, float age, char *owner)
{

	int ncount, ocount, i;
	dog_t *scooby;

	ncount = ocount = i = 0;

	while (name[ncount++])
		;

	while (owner[ocount++])
		;

	scooby = malloc(sizeof(dog_t));

	if (!scooby)
		return (NULL);

	scooby->name = malloc(sizeof(scooby->name) * ncount);
	scooby->owner = malloc(sizeof(scooby->owner) * ocount);

	if (!scooby->name)
		return (NULL);

	if (!scooby->owner)
	{
		free(scooby->name);
		return (NULL);
	}

	scooby->age = age;

	for (i = 0; i < ncount; i++)
		scooby->name[i] = name[i];

	for (i = 0; i < ocount; i++)
		scooby->owner[i] = owner[i];

	return (scooby);
}

