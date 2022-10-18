#include "main.h"

/**
 * _abs - absolute values
 * Description: converts an int to its absolute value
 * @n: a parameter of type int
 * Return: absolute value of n
 */
int _abs(int n)
{
	return ((n < 0) ? ((int)(n * -1)) : n);
}
