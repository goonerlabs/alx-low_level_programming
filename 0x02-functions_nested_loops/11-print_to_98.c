#include "main.h"
/**
 * print_to_98 - prints numbers till 98
 * Description: prints consecutive real numbers from n to 98
 * @n: parameter of type int
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{	
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else 
	{
		for (j = n; j >= 98; j--)
		{
			if (j == 98)
			{
				printf("%d\n", j);
			}
			else
			{
				printf("%d, ", j);
			}
		}
	}
}

}
