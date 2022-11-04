#include "main.h"

/**
 * strchr - returns a pointer to the first occurence of a character * in a string
 * @s: the string to check
 * @c: the character to check for
 * Return: a pointer to the character or NULL
 */
char *_strchr(char *s, char c)
{
	char **ptr;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];

			return (ptr);
		}
	}
	return (NULL);
}

