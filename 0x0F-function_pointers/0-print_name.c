#include <stdlib.h>
#include "main.h"

/**
 * print_name - malloc stuff
 * @name: s1
 * @f: s2
 * Return: a pointer to the newly allocated memory
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

