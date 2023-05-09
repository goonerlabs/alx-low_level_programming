#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content of the file
 * Return: 1 on success or -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fp, res;
	size_t len;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	len = strlen(text_content);
	if (len == 0)
	{
		close(fp);
		return (1);
	}
	res = write(fp, text_content, len);
	if (res == -1)
		return (-1);
	close(fp);
	return (1);
}
