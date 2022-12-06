#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets the bit at the index index of n
 * @n: the input integer to check
 * @index: the index of the bit to get
 * Return: the bit found or -1 if error
 */
get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (index > 64)
	{
		return (-1);
	}
	res = (n >> index) & 1;
	return (res);
}
