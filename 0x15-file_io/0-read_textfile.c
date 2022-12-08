#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: a pointer to the file to read
 * @letters: the number of characters to read from the file
 * Return: the number of characters read and written or
 * 0 if the pointer to the file is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters * sizeof(char));

	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	r = read(o, buff, letters);

	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);
}
