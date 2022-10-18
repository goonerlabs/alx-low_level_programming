#include "main.h"
/**
 * print_alphabet_x10 - prints a-z
 * Description: prints a-z in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
