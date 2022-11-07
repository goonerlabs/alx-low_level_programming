#include "main.h"

int _is_prime(int n, int i);
/**
 * is_prime_number - checks if a number is a prime number
 * @n: integer input to check
 * Return: 1 if n is a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_is_prime(n, n - 1));
	}
}

/**
 * _is_prime - checks if a number is a prime number
 * @n: integer to check
 * @i: divisor
 * Return: 1 if n is prime and 0 otherwise
 */
int _is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_is_prime(n, i - 1));
	}
}

