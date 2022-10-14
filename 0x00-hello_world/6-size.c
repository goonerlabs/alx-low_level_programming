#include<stdio.h>

/**
 * main - prints phrase to standard output
 * Return: 0 if succesful and another number otherwise
 */

int main(void)
{
	char a = 'a';
	int b = 1;
	long int c = 1000;
	long long int d = 10000;
	float e = 3.142

	printf("Size of a char: %d byte(s)\n", (int) sizeof(a));
	printf("Size of a int: %d byte(s)\n", (int) sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(d));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(e));
	return (0);
}
