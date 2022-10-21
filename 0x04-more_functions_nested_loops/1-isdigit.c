#include "main.h"

/**
 * _isdigit- digit checker
 * Description: checks if argument is a digit
 * @c: a parameter of type int/ char
 * Return: 1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
