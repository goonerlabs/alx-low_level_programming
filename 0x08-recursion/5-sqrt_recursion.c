#include "main.h"

int helper_function(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (helper_function(n, 1));
}

/**
 * helper_function - returns the natural square root of a number
 * @n: number to find the square root of
 * @i: counter
 *
 * Return: square root of n
 */

int helper_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (helper_function(n, i + 1));
}
