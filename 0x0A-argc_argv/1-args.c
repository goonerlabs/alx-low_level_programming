#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of
 * command line arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if succesful 1 otherwise
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
