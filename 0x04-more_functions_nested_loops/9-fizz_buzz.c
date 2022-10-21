#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * Description: prints fizz, buzz, fizzbuzz
 * or a number between 1 & 100 depending on
 * what multiple of 15 i is
 * Return: void
 */
void main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", fb);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
