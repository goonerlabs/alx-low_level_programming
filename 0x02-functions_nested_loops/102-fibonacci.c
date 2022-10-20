#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 50 fibonacci numbers
 * Return: 0 if succesful
 */
int main(void)
{
	long int j, k, l;
	int i;

	j = 1;
	k = 2;
	l = 3;

	printf("%ld, %ld, ", j, k);
	for (i = 3; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%ld", l);
		}
		else
		{
			printf("%ld, ", l);
		}
		j = k;
		k = l;
		l = j + k;
	}
	printf("\n");
	return (0);
}
