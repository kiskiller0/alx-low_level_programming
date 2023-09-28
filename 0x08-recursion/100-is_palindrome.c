#include "main.h"
#include <stdio.h>

/**
 * get_last_char - sdsdsd
 * @s: the number
 * Return: the last char
 */

char *get_last_char(char *s)
{
	if (*s)
		return (get_last_char(++s));
	return (s - 1);
}

/**
 * ispalin - check if prime
 * @i: ptr to the beginning of str
 * @j: ptr to the end of str
 * Return: 1 if palindrome, otherwise 0
 */
int ispalin(char *i, char *j)
{
	if (i == j)
		return (1);

	if (*i == *j)
	{
		if (i == j - 1)
			return (1);
		else
			return (ispalin(++i, --j));
	}

	return (0);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: the string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	return (ispalin(s, get_last_char(s)));
}

