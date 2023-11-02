#include "main.h"

/**
 * read_textfile - read_textfile
 * @filename: filename
 * @letters: num of letters to read
 * Return: the num of letters actually read
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t b;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	b = read(file, buffer, letters);
	b = write(STDOUT_FILENO, buffer, b);
	close(fd);	

	return (b);
}

