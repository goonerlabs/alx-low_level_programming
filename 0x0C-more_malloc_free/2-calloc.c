#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a block of memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of each element of the array
 * Return: a poter to the array or null on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
