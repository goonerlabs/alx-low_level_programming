#include "main.h"

/**
 * _isalpha- alphabet checker
 * Description: checks if argument is an alphabet
 * @c: a parameter of type int/char
 * Return: 1 if true and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
