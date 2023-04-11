#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, ammount, change_num;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}


	i = 0;
	change_num = 0;
	ammount = atoi(argv[1]);

	for (i = 0; i < 5 && ammount >= 0; i++)
	{
		while (ammount >= coins[i])
		{
			ammount -= coins[i];
			change_num++;
		}
	}
	printf("%d\n", change_num);
	return (0);
}
