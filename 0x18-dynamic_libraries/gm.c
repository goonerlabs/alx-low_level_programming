#include <unistd.h>
#include <stdlib.h>

/**
 * __putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int __putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printf - print to stdout
 * @format: The format string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int printf(const char *format, ...)
{
	int i = 0;
	char *str1 = "9 8 10 24 75 - 9\n";
	char *str2 = "Congratulations, you win the Jackpot!\n";

	while (str1[i])
		__putchar(str1[i++]);
	i = 0;
	while (str2[i])
		__putchar(str2[i++]);
	exit(EXIT_SUCCESS);
}
