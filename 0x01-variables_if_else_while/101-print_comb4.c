#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{

		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);


				if (i != 55 || j != 56)
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

