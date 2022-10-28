#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: 0 if true or -n or n depending on which string is greater
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	for (i = 0; ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		
		int c1 = (int) s1[i];
		int c2 = (int) s2[i];

		if ( c1 > c2)
		{
			n++; 
		}
		if (c2 > c1)
		{
			n--;
		}
	}

	return (n);
}
