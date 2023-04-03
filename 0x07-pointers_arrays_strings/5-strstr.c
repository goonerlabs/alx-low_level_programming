#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched
 *
 * Return: pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 0

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
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
