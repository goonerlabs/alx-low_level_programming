#include "main.h"

/**
 * create_buff - creates a buffer
 * @file: file to be created
 * Return: pointer to buffer
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to%s\n", file);
		exit(98);
	}
	return (buff);
}

/**
 * _close - closes a file
 * @file: file to be closed
 * Return: void
 */

void _close(int file)
{
	int res;

	res = close(file);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - cp command
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int src, dest, res_r, res_w;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(av[2]);
	src = open(av[1], O_RDONLY);
	res_r = read(src, buff, 1024);
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (src == -1 || res_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}
		res_w = write(dest, buff, res_r);
		if (dest == -1 || res_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}
		res_r = read(src, buff, 1024);
		dest = open(av[2], O_WRONLY | O_APPEND);
	} while (res_r > 0);
	_close(src);
	_close(dest);
	free(buff);
	return (0);
}
