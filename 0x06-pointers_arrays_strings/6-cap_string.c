#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes a string
 *
 * @str: string to convert
 * Return: str updated
 */
char *cap_string(char *str)
{

	int i;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
				|| str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
				|| str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
	}
	return (str);
}
