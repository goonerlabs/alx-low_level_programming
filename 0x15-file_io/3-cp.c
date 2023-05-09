#include "main.h"
#include <stdio.h>

/**
 * create_buff - creates a buffer
 * @file: file to be created
 * Return: pointer to the buffer
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to%s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * _close - closes a file
 * @file: file to be closed
 * Return: void
 */

void  _close(int file)
{
	int res;

	res = close(file);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(98);
	}
}

/**
 * main - implementation of cp command
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int src, dest, read_res, write_res;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	src = open(argv[1], O_RDONLY);
	read_res = read(src, buff, 1024);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (src == -1 || read_res == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		write_res = write(dest, buff, read_res);
		if (dest == -1 || write_res == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to file %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		read_res = read(src, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_res > 0);
	_close(src);
	_close(dest);
	free(buff);
	return (0);
}


























