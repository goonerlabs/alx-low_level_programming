#include<stdio.h>

/**
 * main - prints all base 10 integers followed by a newline
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar((char) n);
		n++;
	}
	putchar('\n');
	return (0);
}
