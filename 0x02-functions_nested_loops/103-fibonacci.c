#include <stdio.h>

/**
 * main - entry point
 * Description: prints the sum of first 28 even fibonacci numbers
 * Return: 0 if succesful
 */
int main(void)
{
	long int j, k, l;
	int i;
	long int res;

	j = 1;
	k = 2;
	l = 3;
	res = 2;

	for (i = 3; i <= 28; i++)
	{
		if (l % 2 == 0)
		{
			res += l;
		}
		j = k;
		k = l;
		l = j + k;
	}
	printf("%ld\n", res);
	return (0);
}
