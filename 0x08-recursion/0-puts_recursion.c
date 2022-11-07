#include "main.h"
#include "string.h"

/**
 * _puts_recursion - prints a string folowed by a newline
 * @s: a pointer to the string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}

}
