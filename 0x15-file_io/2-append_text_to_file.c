#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to append
 * Return: 1 on success, or -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, res;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}
	res = write(fp, text_content, strlen(text_content));
	if (res == -1)
		return (-1);
	close(fp);
	return (1);
}
