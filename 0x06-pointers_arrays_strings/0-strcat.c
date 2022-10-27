#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * Return: mutated destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < (strlen(src); j++)
	{
		dest[i] = src[j]
	}

	return (dest)
}
