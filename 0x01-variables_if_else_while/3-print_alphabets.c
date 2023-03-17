#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	char n;

	c = 'a';
	n = 'A';

	while (c <= 'z' && n <= 'Z')
	{
		putchar(c);
		putchar(n);
		c++;

	}

	putchar('\n');

	return (0);
}

