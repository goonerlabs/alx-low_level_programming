#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			i++;
		}
		else if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
		{
			sign = -1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (num * sign);
}
