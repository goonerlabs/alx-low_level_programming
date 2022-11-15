#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a void pointer to allocated memory
 * @b: size of memeory to allocate
 * Return: pointer to allocated memeory if succesful
 */
void *malloc_checked(unsigned int b)
{
	*ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
