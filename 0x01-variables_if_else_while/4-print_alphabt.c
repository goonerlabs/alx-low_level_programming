#include<stdio.h>

/**
 * main - prints the alphabets excluding q and e
 * followed by a newline
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
