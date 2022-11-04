#include "main.h"

/**
 * _memcpy - copies the first n bytes of a memory area
 *
 * @dest: pointer to the memory area to be filled
 * @src: pointer to the memory area to be copied from
 * @n: the number of bytes of dest to be filled
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
