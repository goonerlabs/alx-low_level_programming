#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int calc_change(int tmp);
/**
 * main - calculates the number of coins
 * for a predetermined amount of change
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if succesful 1 otherwise
 */
int main(int argc, char **argv)
{
	int coin_count, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	coin_count = calc_change(change);
	printf("%d\n", coin_count);
	return (0);
}
/**
 * calc_change - calculates change in cents
 * @tmp: change to calculate
 * Return: the number of coins to collect
 */
int calc_change(int tmp)
{
	int res;

	res = 0;

	while (tmp)
	{
		if (tmp >= 25)
		{
			tmp -= 25;
		}
		else if (tmp >= 10)
		{
			tmp -= 10;
		}
		else if (tmp >= 5)
		{
			tmp -= 5;
		}
		else if (tmp >= 2)
		{
			tmp -= 2;
		}
		else
		{
			tmp -= 1;
		}
		res++;
	}
	return (res);
}

