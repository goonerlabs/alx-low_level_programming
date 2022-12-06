#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to a uint
 * @b: the input string of binary characters
 * Return: the decimal number or 0 if there is a character
 * that cannot the converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, exp;
	int len;


	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}


	for (result = 0, exp = 1, len--; len >= 0; len--, exp *= 2)
	{
		if (b[len] == '1')
		{
			result += exp;
		}

	}

	return (result);
}
