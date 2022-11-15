#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realocates a block of memory
 * @ptr: a pointer to the old block of memory
 * @old_size: the size of the old block of memory
 * @new_size: the size to be allocated to the new block of memory
 * Return: a pointer to the new block of memory or NULL on fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;
	char *old_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	free(ptr);
	return (new_ptr);
}

