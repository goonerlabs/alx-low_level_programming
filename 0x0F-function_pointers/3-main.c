#include "3-calc.h"

/**
 * main - performs a computation on two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0))
		&& (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(a, b));
	return (0);
}

