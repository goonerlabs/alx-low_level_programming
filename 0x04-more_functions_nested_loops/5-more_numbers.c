#include "main.h"
/**
 * more_numbers - prints 0-9
 * Description: prints 0-9 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
