#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of numbers
 * @n: the argument count
 * Return: the sum of arguments or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list ptr;

	va_start(ptr, n);

	int i, sum;

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);
	
	return (sum);
}
