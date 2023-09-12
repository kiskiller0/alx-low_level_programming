#include "main.h"

/**
 * _isalpha - return something ???
 * Return: returns 1 or 0 (bool casted to int)
 * @c: the character that the function takes
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
