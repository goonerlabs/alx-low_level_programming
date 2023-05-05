#include "main.h"

/**
 * set_bit - sets the bit at an index
 * @n: the nnumber whose bit is to be set
 * @index: the index of the bit to set
 * Return: 1 success or -1 fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
