#include <unistd.h>

/**
 * _putchar - prints a character to standard output
 * Description: prints the character given as an argument
 * @x: argument of type char
 * Return: 1 on success and -1 on error
 */

int _putchar(char x)
{
	return (write(1, &x, 1));
}
