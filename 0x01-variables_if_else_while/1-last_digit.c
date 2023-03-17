#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	res = n % 10;
	
	if (res > 5)
	{
		printf("Last digit of %d is and is %d greater than 5\n", n, res);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, res););
	}
	else if (res < 6 && res != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
	}

	return (0);
}
