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
	int i, j, n;
	bool found;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = true;
				n++;
			}
		}
		if (!found)
		{
			return (n);
		}
	}
	return (0);
}
