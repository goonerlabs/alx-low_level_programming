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

	int i, j;

	char skip[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;

			for (j = 0; j < (int) strlen(skip); j++)
				if (str[i] == skip[j])
				{
					if (str[1 + i] >= 'a' && str[1 + i] <= 'z')
					{
						str[1 + i] = str[1 + i] - 32;
					}
				}
		}
	}
	return (str);
}
