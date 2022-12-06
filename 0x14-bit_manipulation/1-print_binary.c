#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of n
 * @n: the input number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int mask;

	mask = 128;

	for (; mask != 0; mask >>= 1)
	{
		printf("%c", n & mask ? '1' : '0');
	}
}
