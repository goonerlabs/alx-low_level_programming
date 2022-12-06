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
	int i, len;

	len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
	}

	result = 0;
	exp = 1;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == 1)
		{
			result += exp;
		}

		exp *= 2;
	}
	
	return (result);
}


