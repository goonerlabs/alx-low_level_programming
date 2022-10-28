#include "main.h"
#include <string.h>

/**
 * string_toupper - converts characters of a string to uppercase
 *
 * @str: string to convert
 * Return: str updated
 */
char *string_toupper(char *str)
{

	int i;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		return (str);
	}


}
