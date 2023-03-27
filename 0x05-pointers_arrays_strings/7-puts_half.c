#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	j = (i % 2 == 0) ? (i / 2) : ((i - 1) / 2) + 1;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

}
