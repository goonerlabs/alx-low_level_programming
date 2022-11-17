#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - prints the numbers passed to it as arguments
 * @separator: the separator to be printed in between the numbers
 * @n: the argument count
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator != NULL)
	{

		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
		
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}

		va_end(list);
}
