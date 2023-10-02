#include <stdio.h>
#include <math.h>

/**
 * _atoi - extract number from withing string, with its sign
 *@s: the string presumebly containing the number
 *Return: the number (int)
 */

int _atoi(char *s)
{
	int current_letter, length, number, offset_to_number, i;

	length = 0;
	number = 0;
	offset_to_number = 0;

	while ((*s < '0' || *s > '9' ) && *s != '\0')
	{
		current_letter = *s;
		s++;
		offset_to_number++;
	}

	/*now we have numbers:*/

	while ((*s >= '0' && *s <= '9') && *s != '\0')
	{
		length++;
		s++;
	}

	for (i = length; i > 0; i--)
	{
		number += (*(s - i) - '0') * pow(10, i - 1);
	}
	if (current_letter == '-')
		number = -number;
	return (number);
}

