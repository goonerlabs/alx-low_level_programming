#include<stdio.h>

/**
 * main - prints all combinations of 3 base 10 integers
 * followed by a newline
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (j <= i || k <= j)
				{
					continue;
				}
				putchar((char) i);
				putchar((char) j);
				putchar((char) k);
				if (i + j + k != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
