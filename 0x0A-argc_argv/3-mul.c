#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of
 * command line arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if succesful 1 otherwise
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
}
