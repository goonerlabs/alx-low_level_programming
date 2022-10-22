#include "main.h"

/**
 * print_number - prints a number
 * Description: prints a number to standard output
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	int i;

	i = (unsigned int) n;

	if (n < 0)
	{
		_putchar('-');
	}
	_putchar('i');
	_putchar('\n');
}

