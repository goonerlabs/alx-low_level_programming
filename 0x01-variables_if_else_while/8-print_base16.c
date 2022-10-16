#include<stdio.h>

/**
 * main - prints all base16 single digits followed by a newline
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	int n;
	char i;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
