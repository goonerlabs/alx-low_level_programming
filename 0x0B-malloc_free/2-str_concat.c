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
	unsigned int n, k;

	i = 0;
	k = 0;

	n = s1 ? strlen(s1) : 0;
	k = s2 ? strlen(s2) : 0;

	ptr = (char *) malloc((n + k + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (s1)
	{

		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);

}
