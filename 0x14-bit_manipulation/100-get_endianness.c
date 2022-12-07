#include "main.h"
/**
 * get_endianness - checks the endianess of a number
 *
 * Return: 0 if big endian and 1 otherwise
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;

	c = (char *) &i;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
