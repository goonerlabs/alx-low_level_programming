#include "main.h"

/**
 * get_endianness - check the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	return (*c & 1);
}
