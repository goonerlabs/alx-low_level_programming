#include<stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints true if the random number is postive, false if its negative
 * otherwise it prints Zero
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
