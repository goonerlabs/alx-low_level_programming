#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size 
 * and fills it with char c
 * @size: the intended size of the array
 * @c: the charachter to fill up the array with
 * Return: a pointer to the array or NULL if unsuccesful 
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));
	
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[i] = '\0';

	return (ptr);

}
