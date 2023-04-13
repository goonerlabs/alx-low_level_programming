#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **split(char *string, char *seperators);

/**
 * strtow - split a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	char *sep;

	sep = " \t\n\r\f\v";
	return (split(str, sep));
}

/**
 * split - split a string into words
 * @string: string to split
 * @seperators: string of seperators
 *
 * Return: pointer to array of strings
 */

char **split(char *string, char *seperators)
{
	int i, j, len, old_i, string_index, to_allocate, count;
	char **strings;
	char buffer[16384];

	len = strlen(string);
	count = 0;
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (strchr(seperators, string[i]) == NULL)
				break;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (strchr(seperators, string[i]) != NULL)
				break;
			i++;
		}
		if (i > old_i)
			count++;
	}
		strings = malloc(sizeof(char *) * count);
		i = 0;
		string_index = 0;
		while (i < len)
		{
			while (i < len)
			{
				if (strchr(seperators, string[i]) == NULL)
					break;
				i++;
			}
			j = 0;
			while (i < len)
			{
				if (strchr(seperators, string[i]) != NULL)
					break;
				buffer[j] = string[i];
				i++;
				j++;
			}
			if (j > 0)
			{
				buffer[j] = '\0';
				to_allocate = sizeof(char) * (strlen(buffer) + 1);
				strings[string_index] = malloc(to_allocate);
				strcpy(strings[string_index], buffer);
				string_index++;
			}
		}
		return (strings);
}
