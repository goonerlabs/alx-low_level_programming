#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to the number to be changed
 * @index: index of the bit to clear
 * Return: 1 success or -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
