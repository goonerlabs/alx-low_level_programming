#include "main.h"

/**
 * _strspn - returns the number of bytes
 * from a matching string
 * @s: string to check
 * @accept: reference string
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int  found;

		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				n++;
			}
			if (found == 0)
			{
				return (n);
			}
		}

	}
	return (0);
}
