#include "main.h"

/**
 * print_times_table - prints the times table
 * Description: prints the nth times table
 * @n: parameter of type int
 * Return: void
 */
void print_single_digits(int x);
void print_tens(int x);
void print_hundreds(int x);

void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar('0' + k);
			}

			else if ((j != 0) && k < 10)
			{
				print_single_digits(k);
			}

			else if (k >= 10 && k < 100)
			{
				print_tens(k);
			}
			else
			{
				print_hundreds(k);
			}
		}
		_putchar('\n');
	}
}

/**
 * print_single_digits - prints singles
 * @x: parameter of type int
 * Return: void
 */
void print_single_digits(int x)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + x);
}

/**
 * print_tens - prints double digits
 * @x: parameter of type int
 * Return: void
 */
void print_tens(int x)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + x);
}

/**
 * print_hundreds - prints double digits
 * @x: parameter of type int
 * Return: void
 */
void print_hundreds(int x)
{
	_putchar(',');
	_putchar(' ');
	_putchar('0' + x);
}
