#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "world!\n";
	char *ptr;

	ptr = _strncat(s1, s2, 5);
	printf("%s", ptr);
	return(0);
}
