#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals
 * of a square matrix
 * @a: the square matrix
 * @size: the dimensions of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int j, k;

	j = 0;
	k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[(size * i) + i];
		k += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%ld, %ld\n", j, k);
}
