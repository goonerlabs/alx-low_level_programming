#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: a pointer to the input string
 * Return: a pointer to the duplicated string
 * or NULL if unsuccesful
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned long int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *) malloc(strlen(str) + 1 * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);

}
