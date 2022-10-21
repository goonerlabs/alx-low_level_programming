#include "main.h"

/**
 * print_line - prints a line
 * Description: prints a line of length n
 * @n: determines how long the line would be
 * Return: void
 */
void print_line(int n)
{
	int i, k;
	
	k = n;
	for (i = 0; i < k; i++)
	{
		if (k > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
