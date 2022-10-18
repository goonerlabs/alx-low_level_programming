#include "main.h"
#include <string.h>

/**
 * main - entry point function
 * Description: prints _putchar to standard output
 * Return: 0 if succesfull
 */
int main(void)
{
	int i;
	char str[] = "_putchar";
	int end = (int) strlen(str);

	for (i = 0; i < end; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
