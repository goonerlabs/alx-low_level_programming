#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to set
 * @to: char to be pointed at
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

