#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates and array
 * and fills it from min to max
 * @min - starting number in the array
 * @max: the ending number of the array
 * Return: a poter to the array or null on fail
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;

	ptr = malloc(j * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}

