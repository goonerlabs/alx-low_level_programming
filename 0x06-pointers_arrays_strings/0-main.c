#include "main.h"
#include <stdio.h>

int main(void)
{
	int ptr;

	ptr = _strcmp("Hello", "Hello");
	printf("%d", ptr);
	return(0);
}
