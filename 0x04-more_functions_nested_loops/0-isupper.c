#include "main.h"

/**
 * _isupper - checks alphabet
 * Description: checks if argument is uppercase
 * @c: a parameter of type int
 * expects argument of type char
 * Return: 1 if true and 0 otherwise
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
