#include "main.h"
/**
 * init_dog - asdsad
 * @d: asdd
 * @name: asdsad
 * @owner: sdd
 * @age: sdd
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

