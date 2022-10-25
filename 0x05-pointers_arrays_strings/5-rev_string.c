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
	char tmp[];

	i = strlen(s) - 1;
	j = 0;

	while (i <= 0)
	{
		tmp[j] = s[i];
		j++;
		i--;
	}

	while (j <= 0 )
	{
		s[i] = j[i];
	}
}
