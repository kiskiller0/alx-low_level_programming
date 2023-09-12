#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - return something ???
 *Return: returns 1 or 0 (bool casted to int)
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	m = 0;

	while (h < 24)
	{
		putchar(h / 10 + 48);
		putchar(h % 10 + 48);
		putchar(':');
		putchar(m / 10 + 48);
		putchar(m % 10 + 48);
		putchar('\n');

		m++;

		if (m == 60)
		{
			m = 0;
			h++;
		}
	}
}
