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

	scooby->name = malloc(sizeof(char) * ncount);
	scooby->owner = malloc(sizeof(char) * ocount);

	if (!scooby->name || !scooby->owner)
		return (NULL);

	scooby->age = age;

	for (i = 0; i < ncount; i++)
		scooby->name[i] = name[i];

	for (i = 0; i < ocount; i++)
		scooby->owner[i] = owner[i];

	return (scooby);
}

