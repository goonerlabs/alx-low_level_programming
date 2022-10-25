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
	int k;

	i = 0;
	j = strlen(s) - 1;
	k = strlen(s) - 1;

	while (k <= 0)
	{
		s[i] = s[j - i];
		i++;
		k--;
	}

}
