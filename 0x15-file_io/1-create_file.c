#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content to write to file
 *
 * Return: 1 on success, -1 otherwisee
 */

int create_file(const char *filename, char *text_content)
{
	int fp, res;
	size_t len;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}

	len = strlen(text_content);
	if (len == 0)
	{
		close(fp);
		return (1);
	}

	res = write(fp, text_content, len);
	if (res == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
