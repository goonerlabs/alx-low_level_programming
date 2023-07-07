#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number to convert (represented as a string)
 *
 * Return: the usingned int (decimal number)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, j = 1;
	int i;

	if (b == NULL)
		return (0);
	i = (int)strlen(b) - 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res += (b[i] - '0') * j;
		j *= 2;
		i--;
	}
	return (res);
}
