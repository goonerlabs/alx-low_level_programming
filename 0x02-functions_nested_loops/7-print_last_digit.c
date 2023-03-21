#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print
 *
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int i;
	i = _abs(n % 10);
	_putchar(i + '0');
	return (i);
}
