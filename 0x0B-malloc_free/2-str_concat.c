#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinates two strings
 * @s1: a pointer to the first input string
 * @s2: a pointer to the second input string
 * Return: a pointer to the concatinated string
 * or NULL if unsuccesful
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned long int i, j;

	ptr = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);

}
