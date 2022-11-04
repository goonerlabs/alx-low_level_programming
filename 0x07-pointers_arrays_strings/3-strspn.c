#include "main.h"
#include <stdbool.h>

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
		bool found;

		found = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = true;
				break;
			}
			if (!found)
			{
				break;
			}
			else
			{
				n++;
			}
		}

	}
	return (n);
}
