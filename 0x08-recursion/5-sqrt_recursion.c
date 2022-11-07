#include "main.h"

int _sqrt(int n, int min, int max);

/**
 * _sqrt_recursion - returns the square root of n
 * @n: integer input
 * Return: square root of n  or -1 if n is negative
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0, n));
	}

}

/**
 * _sqrt - returns the sqare root of a number
 * @n: integer input
 * @min: min guess
 * @max: max guess
 * Return: square root of n
 */
int _sqrt(int n, int min, int max)
{
	long int guess;

	guess = (min + max) / 2;

	if ((guess * guess) == (long int) n)
	{
		return ((int) guess);
	}
	else if ((guess * guess) < (long int) n)
	{
		return (_sqrt(n, guess + 1, max));
	}
	else
	{
		return (_sqrt(n, min, guess - 1));
	}
}

