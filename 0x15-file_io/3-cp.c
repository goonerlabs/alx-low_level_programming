#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the file the buffer stores strings for
 * Return: a pointer to the buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s/n",
				file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes a file
 * @fd: the file descriptor to be closed
 * Return: void
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == 1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n",
				fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: the argument count
 * @argv: an array of pointers to arguments fed to main
 *
 * Return: 0 (success)
 *
 * Description:
 * exit code 97 (argument count is incorrect)
 * exit code 98 (the source file cannot be read or doesn't exist
 * exit code 99 (destination file cannot be created or written to)
 * exit code 100 (either file cannot be closed)
 */
int main(int argc, char **argv)
{
	int src, dest, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
					argv[1]);
			free(buffer);
			exit(99);
		}

		w = write(dest, buffer, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n",
					argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(src, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(src);
	close_file(dest);

	return (0);
}
