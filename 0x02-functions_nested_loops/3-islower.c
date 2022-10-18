#include "main.h"

/**
 * _islower- checks alphabet
 * Description: checks if argument is lowercase
 * @c: a parameter of type int
 * expects argument of type char
 * Return: 1 if true and 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
