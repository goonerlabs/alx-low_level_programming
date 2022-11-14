#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all aguments of argv[]
 * @ac: argument count
 * @av: double pointer to argV[]
 * Return: a pointer to the new string or NULL on fail
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *ptr;

	i = 0;
	k = 0;
	l = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			l++;
			j++;
		}
		i++;
		l++;
	}
	ptr = (char *) malloc(l * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}



