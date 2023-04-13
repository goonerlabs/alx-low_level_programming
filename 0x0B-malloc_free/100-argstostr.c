#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the resulting string
 */

char *argstostr(int ac, char **av)
{
	unsigned int i, j, k, len, x;
	char *str;

	k = 0;
	len = 0;
	x = (unsigned int) ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		len += strlen(av[i]);

	str = malloc((sizeof(char) * len) + 1 + x);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}

		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
