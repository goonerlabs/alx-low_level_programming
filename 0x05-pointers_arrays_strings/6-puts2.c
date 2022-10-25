#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character string to stdout
 *
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (i < ((int) strlen(str)))
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
