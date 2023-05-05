#include "main.h"

/**
 * flip_bits - checks number of bits to flip to
 * get from n to m
 * @n: the first number
 * @m: the second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;
	unsigned long int i;

	result = 0;
	i = n ^ m;

	while (i)
	{
		result += i & 1;
		i >>= 1;
	}
	return (result);
}
