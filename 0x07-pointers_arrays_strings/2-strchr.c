#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a pointer to the first
 * occurence of a character in a string
 * @s: the string to check
 * @c: the character to check for
 * Return: a pointer to the character or NULL
 */
char *_strchr(char *s, char c)
{
	for (;; ++s)
	{
		if (*s == c)
		{
			return ((char *) s);
		}

		if (*s == '\0')
		{
			return (NULL);
		}
	}
}
