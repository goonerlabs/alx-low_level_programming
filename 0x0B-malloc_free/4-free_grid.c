#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up the memory allocated to grid
 * @grid: matrix whose memory is to be freed
 * @height: the depth of the matrix
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
