#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: a pointer to the string
 * Return: the length of the string
 */
int _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _puts_recursion(s + 1));
	
	}

}
