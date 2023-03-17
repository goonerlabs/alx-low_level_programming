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

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	
	putchar('\n');
	
	return (0);
}

