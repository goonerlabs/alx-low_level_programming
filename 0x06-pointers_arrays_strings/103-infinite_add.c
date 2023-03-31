#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: size of result
 *
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0;
	int sum = 0;

	while (n1[i] != '\0' || n2[j] != '\0')
	{
		sum = n1[i] - '0' + n2[j] - '0' + carry;
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}
		r[i + j] = sum + '0';
		i++;
		j++;
	}
	if (carry == 1)
	{
		r[i + j] = '1';
		i++;
		j++;
	}
	r[i + j] = '\0';
	return (r);
}
