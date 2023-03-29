#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates random characters 
 * to crack the crackme password
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	time_t t;
	

	srand((unsigned int) time(&t));

	while (j < 2772)
	{
		i = rand() % 128;

		if ((j + i) > 2772)
		{
			break;
		}
		else
		{
			printf("%c", i);
			j += i;
		}
	}
	printf("%c\n", (2772 - j));
	return (0);
}
