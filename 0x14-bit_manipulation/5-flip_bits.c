#include "main.h"
/**
 * flip_bits - checks how many bits we have to filp
 * to change n to m
 * @n: first input int
 * @m: second input int
 * Return: the number of bits needed to be flipped
 * (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	unsigned int res;

	tmp = n ^ m;
	res = 0;

	while (tmp)
	{
		if (tmp & 1)
		{
			res++;
		}
		tmp = (tmp >> 1);
	}
	return (res);
}
