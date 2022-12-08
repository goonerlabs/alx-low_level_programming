#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: pointer to the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 (succes) -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND, 0600);

	w = write(o, text_content, len);

	if (w == -1 || 0 == -1)
		return (-1);

	close(o);
	return (1);
}
