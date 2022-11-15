#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatinates two strings with s1
 * and at most n bytes of s2
 * @s1: a pointer to the first input string
 * @s2: a pointer to the second input string
 * @n: the number of bytes of s2 to be added
 * Return: a pointer to the concatinated string
 * or NULL if unsuccesful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, l, m, o;

	i = 0;
	j = 0;

	l = s1 ? strlen(s1) : 0;
	k = s2 ? strlen(s2) : 0;
	m = (n >= k) ? k : n;
	o = s2 ? m : k;

	ptr = (char *) malloc((l + o + 1) * sizeof(char));

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
		while (j < m)
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);

}
