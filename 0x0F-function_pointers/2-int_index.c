#include "function_pointers.h"

/**
 * int_index - searches the array passed as an argument for
 * any element for which the function cmp does not return 0
 * @array: the array
 * @size: the size of the array
 * @cmp: the function pointer
 * Return: the index of first occurence element if found else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array || !size || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			return (i);
		}
	}
	return (-1);
}
