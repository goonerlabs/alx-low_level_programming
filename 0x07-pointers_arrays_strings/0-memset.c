#include "main.h"

/**
 * _memset - fills the first n bytes of a memory area
 *
 * @s: pointer to the memory area to be filled
 * @b: the character that would be used to fill the memory area
 * @n: the number of bytes to be filled with b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
