#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of numbers
 * @n: the argument count
 * Return: the sum of arguments or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	
	sum = 0;
	
	va_list  list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
