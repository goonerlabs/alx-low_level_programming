#include<stdio.h>

/**
 * main - prints all base 10 numbers followed by a newline
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
