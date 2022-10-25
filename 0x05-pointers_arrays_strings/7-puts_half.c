#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 *
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;

	n = strlen(str);

	if (n % 2 == 0)
	{
		i = n / 2;
	}
	else
	{
		i = (n + 1) / 2;
	}
	while (i < n)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
