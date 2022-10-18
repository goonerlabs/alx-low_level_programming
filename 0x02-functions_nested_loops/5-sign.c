#include "main.h"

/**
 * print_sign- sign checker
 * Description: checs the sign of the argument and prints it
 * @n: a parameter of type int/char
 * Return: 1 if +, 0 if 0 nad -1 if negative
 */
int print_sign(int n)
{
	int x;
	char y;

	x = (n > 0) ? 1 : (n < 0) ? -1 : 0;
	y = (n > 0) ? '+' : (n < 0) ? '-' : '0';
	_putchar(y);
	return (x);
}
