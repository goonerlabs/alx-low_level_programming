#include <stdio.h>

/**
 * main - entry point
 * Description: prints sum of multiples of 3 and 5 below 1024
 * Return: 0 if succesful
 */
int main(void)
{
	int res;
	int i;

	res = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			res += i;
		}
	}
	printf("%d\n", res);
}

