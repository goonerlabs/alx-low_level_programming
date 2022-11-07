#include "main.h"
#include "string.h"

/**
 * _puts_recursion - prints a string folowed by a newline
 * @s: a pointer to the string to be printed
 * Return: a non negative integer if succesfull
 */
void _puts_recursion(char *s)
{
	int i; 
	
	i = 0;
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return (i);
	}
	else 
	{
		_putchar(s[0]);
		i++;
		return (_puts_recursion(s + 1));
	}

			
}
