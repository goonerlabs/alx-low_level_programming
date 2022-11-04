#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - returns the first occurence of
 * of a a character in a string
 * @s: string to check
 * @accept: reference string
 * Return: the first occurence of any byte in accept
 * or NULL if there is no ocurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
