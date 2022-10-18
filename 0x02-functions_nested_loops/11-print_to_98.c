#include "main.h"
/**
 * print_to_98 - prints numbers till 98
 * Description: prints consecutive real numbers from n to 98
 * @n: parameter of type int
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar('0' + i);
	}
}
