#include "main.h"

int helper_function(char *s, int l, int r);
int _len(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int l, r;

	l = 0;
	r = _len(s) - 1;

	if (r <= 1)
		return (1);
	return (helper_function(s, l, r));
}

/**
 * helper_function - checks if a string is a palindrome
 * @s: string to check
 * @l: left index
 * @r: right index
 *
 * Return: 1 if palindrome, 0 if not
 */

int helper_function(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (s[l] != s[r])
		return (0);
	return (helper_function(s, l + 1, r - 1));
}

/**
 * _len - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */

int _len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len(s + 1));
}
