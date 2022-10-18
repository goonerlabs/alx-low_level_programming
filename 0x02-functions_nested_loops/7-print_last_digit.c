#include "main.h"

/**
 * print_last_digit - prints the last digit
 * Description: prints the last digit of its argument
 * @n: a parameter of type int
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int x;

	x = (n < 0) ? (-1 * (n % 10)) : (n % 10);
	_putchar('0' + x);
	return (x);
}
