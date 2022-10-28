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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;

			for (j = 0; skip[j] != '\0'; j++)
			{
				if (str[i] == skip[j])
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					{
						str[i + 1] = str[i + 1] - 32;
					}
				}
			}
		}
	}
	return (str);
}
