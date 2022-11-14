#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a matrix of integers
 * @width: the width of the matrix
 * @height: the depth of the matrix
 * Return: a pointer to the matrix if succesful
 * or NUll if unsuccessful
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			free(ptr);

			for (j = 0; j <= i; j++)
			{
				free(ptr[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
