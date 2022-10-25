#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string into another
 *
 * @dest: destination string
 * @src: source string
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	i = 0;
	n = strlen(src);

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
