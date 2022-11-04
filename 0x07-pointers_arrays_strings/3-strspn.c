#include "main.h"

/**
 * _strpsn - returns the number of bytes 
 * in the initial segment of s
 * which only consists of bytes from accept
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
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}
	return (f);
}
