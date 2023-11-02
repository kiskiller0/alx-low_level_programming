#include "main.h"

/**
 * read_textfile - read_textfile
 * @filename: filename
 * @letters: num of letters to read
 * Return: the num of letters actually read
 */

size_t read_textfile(const char *filename, size_t letters)
{
	size_t b;
	int file_desc;
	char buffer[READ_BUF_SIZE * 8];

	if (!f || !letters)
		return (0);

	for (count = 0; (c = fgetc(f)) != EOF && count != letters; count++)
		_putchar(c);

	return (count);
}

