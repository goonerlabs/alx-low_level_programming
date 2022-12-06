#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to a uint
 * @b: the input string of binary characters
 * Return: the decimal number or 0 if there is a character
 * that cannot the converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, exp;
	int i, j, len;

	len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	result = 0;
	exp = 1;

	for (j = (len - 1); j >= 0; j--, exp *= 2)
	{
		if (b[j] == '1')
		{
			result += exp;
		}

	}

	return (result);
}


