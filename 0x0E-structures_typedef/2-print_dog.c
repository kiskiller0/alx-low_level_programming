
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - asdsad
 * @d: asdd
 */


void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}

	d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
	printf("Age: %f\n", d->age);
	d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));

}
