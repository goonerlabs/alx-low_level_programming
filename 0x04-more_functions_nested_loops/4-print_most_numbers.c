#include "main.h"

/**
 * print_most_numbers - prints 0-9
 * Description: prints all single digits other than 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
