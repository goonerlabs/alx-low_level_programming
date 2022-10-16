#include<stdio.h>

/**
 * main - prints the alphabets in reverse
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
