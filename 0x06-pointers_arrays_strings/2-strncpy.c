#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters from n to add
 * Return: copy of src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && i < (int) strlen(src)); i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
