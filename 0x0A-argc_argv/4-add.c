#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_num(char *s);
/**
 * main - prints the sum of all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	result = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

/**
 * is_num - checks if a string is a number
 * @s: string to check
 * Return: 1 if number, 0 otherwise
 */

int is_num(char *s)
{
	if (*s == '-')
		s++;

	if (!*s)
		return (0);

	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
