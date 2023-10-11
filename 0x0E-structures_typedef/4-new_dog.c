

#include "dog.h"
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

	ncount = ocount = i = 0;

	while (name[ncount++])
		;

	while (owner[ocount++])
		;

	dog_t *scooby = malloc(sizeof(dog_t));

	if (!dog_t)
		return (NULL);

	scooby->name = malloc(sizeof(char) * ncount);
	scooby->owner = malloc(sizeof(char) * ocount);

	if (!scooby->name || !scooby->owner)
		return (NULL);

	dog_t->age = age;

	for (i = 0; i < ncount; i++)
		scooby->name[i] = name[i];

	for (i = 0; i < ocount; i++)
		scooby->owner[i] = owner[i];

	return (scooby);
}

