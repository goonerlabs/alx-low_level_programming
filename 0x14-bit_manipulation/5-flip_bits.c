#include "main.h"

/**
 * flip_bits - checks the number of bits to flip to get from n to m
 * @n: the first num
 * @m: the second num
 * Return: the number of bits we need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;
	unsigned long int i;

	i = n ^ m;
	while (i)
	{
		res += i & 1;
		i >>= 1;
	}
	return (res);
}
