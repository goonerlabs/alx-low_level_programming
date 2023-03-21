#include "main.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i, j;

	i = -1024;

	j = abs((i % 10)) + '0';

	write(1, &j, 1);
	return (0);
}
