#include "main.h"

/**
 * print_numbers - prints 0-9
 * Description: prints all single digits
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
