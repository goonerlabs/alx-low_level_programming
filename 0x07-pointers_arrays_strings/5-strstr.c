#include "main.h"
#include <stddef.h>
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
	int i, j, flag;
	
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 0;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
