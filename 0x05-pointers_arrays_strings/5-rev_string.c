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

	i = 0;
	j = strlen(s) - 1;

	while (j <= 0)
	{
		s[i] = s[j - i];
	}

}
