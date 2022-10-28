#include "main.h"
#include <stdio.h>

int main(void)
{
	int ptr;

	ptr = _strcmp("Hello", "World");
	printf("%d\n", ptr);
	return(0);
}
