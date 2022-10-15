#include<stdio.h>

/**
 * main - prints the alphabets followed by a newline
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
