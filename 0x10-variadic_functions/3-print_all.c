#include "variadic_functions.h"

/**
 * print_all - prints arguments of differnt types
 * @format: list of types of arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *tmp, *sep;
	va_list list;

	i = 0;
	sep = "";
	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					tmp = va_arg(list, char*);
					if (!tmp)
					{
						tmp = "(nil)";
					}
					printf("%s%s", sep, tmp);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
