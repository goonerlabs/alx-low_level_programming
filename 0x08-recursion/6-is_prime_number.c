#include "main.h"

int helper_function(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_function(n, n - 1));
}

/**
 * helper_function - checks if a number is a prime number
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if prime, 0 if not
 */

int helper_function(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper_function(n, i - 1));
}
