#include "main.h"
#include <string.h>

/**
 * leet - encodes a string
 *
 * @str: string to encode
 * Return: str updated
 */
char *leet(char *str)
{
	int i, j;

	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	for (i = 0; i < strlen(str); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}
	return (str);
}
