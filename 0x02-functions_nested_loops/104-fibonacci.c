#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 98 fibonacci numbers
 * Return: 0 if succesful
 */
int main(void)
{
	unsigned long int j, k, l;
	int i;

	j = 1;
	k = 2;
	l = j + k;

	printf("%lu, %lu, ", j, k);
	for (i = 3; i <= 98; i++)
	{
		if (i == 98)
		{
			printf("%lu", l);
		}
		else
		{
			printf("%lu, ", l);
		}
		j = k;
		k = l;
		l = j + k;
	}
	printf("\n");
	return (0);
}
