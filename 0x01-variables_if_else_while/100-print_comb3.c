#include<stdio.h>

/**
 * main - prints all combinations of base 10 integers
 * followed by a newline
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j <= i)
			{
				continue;
			}
			putchar((char) i);
			putchar((char) j);
			if (i + j != 113)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
