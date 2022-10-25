#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = strlen(s) - 1;

	while (i < j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i++;
		j--;
	}

}
