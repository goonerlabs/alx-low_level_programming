#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - finds the first occurence of a substring
 * in a string
 * @haystack: string to check
 * @needle: sub string
 * Return: a pointer to the begining of the substing
 * or NULL if there is no ocurrence
 */
char *_strstr(char *haystack, char *needle)
{
	static char *ptr;

	ptr = haystack;

	while (*ptr)
	{
		if (strncmp(ptr, needle, strlen(needle)) == 0)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
