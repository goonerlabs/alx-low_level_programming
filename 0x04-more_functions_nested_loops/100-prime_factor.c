#include <stdio.h>
#include <math.h>

long int get_largest_prime(long long int n);

/**
 * main - entry point function
 * Description: prints the largets prime factor of 612852475143
 * Return: 0 if succesful
 */
int main(void)
{
	long int res;

	res = get_largest_prime(612852475143);

	printf("%ld\n", res);

	return (0);
}

/**
 * get_largest_prime - returns prime number
 * Description: rturns the largest prime number of a given input
 * @n: input of type long long integer
 * Return: the largest prime number
 */
long int get_largest_prime(long long int n)
{
	int i, j;

	j = -1;

	while (n % 2 == 0)
	{
		j = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			j = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		j = n;
	}
	return (j);
}
