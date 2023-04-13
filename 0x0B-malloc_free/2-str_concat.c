#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the resulting string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	s = malloc(sizeof(char) * (len1 + len2) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[i + len1] = s2[i];

	s[len1 + len2] = '\0';

	return (s);
}
