#include "main.h"
#include <string.h>

int _is_palindrome(char *s, int l, int r);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a and 0 otherwise
 */

int is_palindrome(char *s)
{
	return (_is_palindrome(s, 1, strlen(s) - 1));
}

/**
 * _is_palindrome - helper function to 
 * recursively check if s is a palindrome
 * @s: string to check
 * @l: left index iterator
 * @r: right index iterator
 * Return: 1 if string is a palindrome and o otherwise
 */
int _is_palindrome(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1);
	}
	if (s[l] != s[r])
	{
		return (0);
	}
	return (_is_palindrome(s, l + 1, r - 1));
}

