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

	i = 48;
	j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (j < 103)
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);
}

