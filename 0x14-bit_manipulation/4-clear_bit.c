#include "main.h"

/**
 * clear_bit - unsets the value of a bit (to 0)
 * @n: the number to be changed
 * @index: the bit to unset/ clear
 * Return: 1 success otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
