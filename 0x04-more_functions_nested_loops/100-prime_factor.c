#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			printf("%li ", i);
			n = n / i;
		}
	}
	printf("\n");
	return (0);
}
