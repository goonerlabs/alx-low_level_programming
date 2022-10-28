#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: the array to be reversed
 * @n: the size of a
 * Return: void
 */
void reverse_array(int *a, int n)
{

	int i, j, k;

	for (i = 0, j = (n - 1); i < (n / 2); i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
	}


}
