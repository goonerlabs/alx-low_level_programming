#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if succesful 1 otherwise
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
