#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary number as a string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, j;
	int i;

	if (b == NULL)
		return (0);
	result = 0;
	i = (int) strlen(b) - 1;
	j = 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += (b[i] - '0') * j;
		j *= 2;
		i--;
	}
	return (result);
}
