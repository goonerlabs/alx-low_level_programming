#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters from n to add
 * Return: mutated destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if ((int) strlen(src) < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
