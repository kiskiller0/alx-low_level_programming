#include "main.h"

/**
 *rot13 - shift every char 13 position
 *@str: the string
 *Return: nada
 */

char *rot13(char *str)
{
	char *head, *s;
	char *arr1, *arr2;
	int i;

	arr1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	arr2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	head = str;
	s = str;

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (arr1[i] == *str)
			{
				*str = arr2[i];
				break;
			}
		}

		s++;
	}

	return (head);
}
