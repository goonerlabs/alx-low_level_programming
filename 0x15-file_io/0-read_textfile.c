#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the STDOUT
 * @filename: name of the file to read
 * @letters: number of characters to read
 *
 * Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buf;
	ssize_t res;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	res = read(fp, buf, letters);
	if (res == -1)
	{
		free(buf);
		return (0);
	}

	res = write(STDOUT_FILENO, buf, res);
	free(buf);
	close(fp);
	return (res);
}


