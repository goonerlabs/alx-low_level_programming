#include "main.h"

/**
 * get_bit - gets the bit at a given index
 * @n: the number to check
 * @index: the index of the bit
 * Return: the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
