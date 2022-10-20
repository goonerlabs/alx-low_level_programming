#include <stdio.h>

int fibonacci(int n);

/**
 * main - entry point
 * Description: prints the first 50 fibonacci numbers
 * Return: 0 if succesful
 */
int main(void)
{
	int i, tmp;

	for (i = 1; i <= 50; i++)
	{
		tmp = fibonacci(i);
		printf("%d", tmp);
		printf(",");
		printf(" ");
	}
	printf("\n");
	return (0);
}

/**
 * fibonacci- prints number
 * Description: prints a  fibonacci number
 * @n: type int. input number
 * Return: fibonacci number of given input
 */
int fibonacci(int n)
{
	if (n == 2 || n == 1)
	{
		return (1);
	}
	else
	{
		return ((fibonacci(n - 1) + fibonacci(n - 2)));
	}
}
