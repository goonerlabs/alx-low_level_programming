#include "main.h"

/**
 * get_bit - gets the bit ata given index
 * @n: the numbr to check
 * @index: the index of the bit to check
 * Return: the value of the bit at the index or -1 if out of bounds
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
