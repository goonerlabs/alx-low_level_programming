#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of n
 * @n: the input number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
	{
	}

	for (; shifts >= 0; shifts--)
	{
		printf("%c", ((n >> shifts) & 1) ? '1' : '0')
	}
}
