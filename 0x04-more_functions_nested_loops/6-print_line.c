#include "main.h"

/**
 * print_line - prints a line
 * Description: prints a line of length n
 * @n: determines how long the line would be
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
