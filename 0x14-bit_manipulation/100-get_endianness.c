#include "main.h"


/**
 * get_endianness - check the endianness of a machine
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c;

	c = (char *) &a;

	return (*c & 1);
}
