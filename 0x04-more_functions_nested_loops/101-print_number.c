#include "main.h"

/**
 * print_number - prints a number
 * Description: prints a number to standard output
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;

	i = (unsigned int) n;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else 
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar('0' + (i % 10));
}

