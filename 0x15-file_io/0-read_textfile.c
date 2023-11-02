#include "main.h"

/**
 * read_textfile - read_textfile
 * @filename: filename
 * @letters: num of letters to read
 * Return: the num of letters actually read
 */

size_t read_textfile(const char *filename, size_t letters)
{
	FILE *f = fopen(filename, "r");
	char c;
	size_t count;

	if (!f)
		return (0);

	for (count = 0; (c = fgetc(f)) != EOF && count != letters; count++)
		putchar(c);

	return (count);
}

/* int main(void) */
/* { */
/*read_textfile("main.h", 15); */

/*return (0); */
/* } */

