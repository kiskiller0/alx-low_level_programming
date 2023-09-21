#include "main.h"

/**
 *rot13 - shift every char 13 position
 *@str: the string
 *Return: nada
 */

char *rot13(char *str)
{
	char *head;

	head = str;

	while (*str != '\0')
	{
		if (*str + 13 > 'z' || (*str < 'a' && *str + 13 > 'Z'))
			*str -= 13;
		else
			*str += 13;

		str++;
	}

	return (head);
}
