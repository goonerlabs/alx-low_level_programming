#include "main.h"
#include <string.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: the resulting int
 */
int _atoi(char *s)
{
	int i, j, n, k, res;

	i = 0;
	j = 0;
	n = 0;
	k = 0;
	res = 0;

	while (i < strlen(s) && k == 0)
	{
		if (s[i] == '-')
		{
			++j;
		}
		
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = s[i] - '0';
			if (j % 2)
			{
				res = -res;
			}
			n = n * 10 + res;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			k = 0;
		}
		i++;
	}
	if (k == 0)
	{
		return (0);
	}
	return (n);
}

