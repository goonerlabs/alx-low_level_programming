#include "main.h"

/**
 * print_triangle - prints a triangle
 * Description: prints a triangle of # with n steps
 * @n: determines how many steps the triangle would have
 * Return: void
 */
void print_triangle(int n)
{
	int i, j, z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j =  n - i - 2; j >=  0; j--)
			{
				_putchar(' ');
			}

			for (z = 0; z <= i; z++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
