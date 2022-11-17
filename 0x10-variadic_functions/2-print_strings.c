#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - prints the strings passed to it as arguments
 * @separator: the separator to be printed in between the numbers
 * @n: the argument count
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list list;

		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(list, char*) ? var_arg(list, char*) : "nil";

			if (!separator)
			{
				printf("%s", str);
			}
			else if (separator && i == 0)
			{
				printf("%s", str);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}

		va_end(list);

		printf("\n");
}
