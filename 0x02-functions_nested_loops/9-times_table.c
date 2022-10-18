#include "main.h"

/**
 * times_table - prints the times table
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar('0' + k);
			}

			else if (j != 0 && k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}

			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
