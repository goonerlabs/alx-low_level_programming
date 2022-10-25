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

	i = strlen(s) - 1;
	j = 0;

	while (s[i] <= 0)
	{
		s[j] = s[i];
		j++;
		i--;
	}
}
