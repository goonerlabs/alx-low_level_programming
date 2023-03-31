#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: pointer to the result
 * @size_r: size of the result
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum;

	i = strlen(n1) - 1;
	j = strlen(n2) - 1;
	k = 0;
	carry = 0;
	sum = 0;


	if (strlen(n1) + strlen(n2) >= size_r)
		return (0);

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';

		if (j >= 0)
			sum += n2[j--] - '0';

		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	r[k] = '\0';
	return (r);
}
