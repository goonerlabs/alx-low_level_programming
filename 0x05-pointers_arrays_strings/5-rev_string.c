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
	int x;

	x = strlen(s) - 1;
	i = x;
	j = 0;
	char tmp[];

	while (i <= 0)
	{
		tmp[j] = s[i];
		j++;
		i--;
	}

	while (j <= 0 )
	{
		s[i] = tmp[i];
	}
}
