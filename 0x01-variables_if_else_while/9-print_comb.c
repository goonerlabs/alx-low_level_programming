#include<stdio.h>

/**
 * main - prints all base 10 integers followed by a newline
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar((char) n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
