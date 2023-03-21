#include "main.h"
#include <stdio.h>

/**
 * main - print the sum of all even fibonacci numbbers up to 4,000,000
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	unsigned long int j, k, temp, sum;

	j = 1;

	k = 2;

	sum = 0;

	while (j <= 4000000)
	{
		if (j % 2 == 0)
		{
			sum += j;
		}


		temp = j + k;
		j = k;
		k = temp;
	}
	printf("%lu\n", sum);

	return (0);
}
