#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints the first n numbers of an array
 *
 * @a: input array
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
		i++;
	}
	printf("\n");
}
