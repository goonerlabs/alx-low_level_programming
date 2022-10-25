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

	i = n / 2;
	while (i < n)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
