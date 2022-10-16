#include<stdio.h>

/**
 * main - prints the alphabets followed by a newline
 * it prints them in both upper and lower case
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	char n = 'a';
	char i = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
