#include "main.h"

/**
 * print_square - prints #
 * Description: prints n lines of length n
 * @n: determines how long and how many the lines would be
 * Return: void
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
