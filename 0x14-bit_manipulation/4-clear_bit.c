#include "main.h"
/**
 * clear_bit - setsthe bit of n at index
 * @n: the number whose bit we want to clear
 * @index: the index of n at which the bit would be cleared
 * Return: 1 (success) -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);

	return (1);
}
