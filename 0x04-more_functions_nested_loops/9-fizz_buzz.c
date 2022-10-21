#include <stdio.h>

/**
 * main - function
 * Description: prints fizz, buzz, fizzbuzz
 * or a number between 1 & 100 depending on
 * what multiple of 15 i is
 * Return: 0 if succesful
 */
int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" %s", fb);
		}
		else if (i % 3 == 0)
		{
			printf(" %s", fizz);
		}
		else if (i % 5 == 0)
		{
			printf(" %s", buzz);
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
