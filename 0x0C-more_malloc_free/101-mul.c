#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ERROR_MSG "Error\n"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
    char *num1, *num2;
    int len1, len2, len, i, carry, digit1, digit2, has_nonzero_digit;
	int *result;

	has_nonzero_digit = 0;

    if (argc != 3) {
        printf("%s", ERROR_MSG);
        return 1;
    }
    num1 = argv[1], num2 = argv[2];
    len1 = strlen(num1), len2 = strlen(num2);
    if (!isdigit(*num1) || !isdigit(*num2)) {
        printf("%s", ERROR_MSG);
        return 98;
    }
    len = len1 + len2 + 1;
    result = malloc(sizeof(int) * len);
    if (!result)
        return 1;
    for (i = 0; i <= len1 + len2; i++)
        result[i] = 0;
    for (len1 = len1 - 1; len1 >= 0; len1--)
    {
        digit1 = num1[len1] - '0';
        carry = 0;
        for (len2 = strlen(num2) - 1; len2 >= 0; len2--)
        {
            digit2 = num2[len2] - '0';
            carry += result[len1 + len2 + 1] + (digit1 * digit2);
            result[len1 + len2 + 1] = carry % 10;
            carry /= 10;
        }
        if (carry > 0)
            result[len1 + len2 + 1] += carry;
    }
    for (i = 0; i < len - 1; i++)
    {
        if (result[i])
            has_nonzero_digit = 1;
        if (has_nonzero_digit)
            putchar(result[i] + '0');
    }
    if (!has_nonzero_digit)
        putchar('0');
    putchar('\n');
    free(result);
    return 0;
}

