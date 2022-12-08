#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 (succes) -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
		{
			len++;
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(o, text_content, len);

	if (w == -1 || 0 == -1)
		return (-1);

	close(o);
	return (1);
}
