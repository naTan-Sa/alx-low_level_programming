#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_digit(char *s);
void error(void);

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, j, carry, n1, n2, *result, start = 0;

	if (argc != 3)
		error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		error();

	for (len1 = 0; num1[len1]; len1++)
		;
	for (len2 = 0; num2[len2]; len2++)
		;

	len  = len1 + len2;
	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);

	for (i = 0; i < len; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry)
			result[i + j + 1] += carry;
	}
	while (start < len && result[start] == 0)
		start++;
	if (start == len)
		_putchar('0');
	for (; start < len; start++)
		_putchar(result[start] + '0');
	_putchar('\n');

	free(result);
	return (0);
}

/**
 * is_digit - checks if a string contains only digits (0–9)
 * @s: pointer to the string to check
 *
 * Return: 1 if the string contains only digits,
 *         0 if any non-digit character is found
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * error - prints "Error" and exits the program with status 98
 *
 * Return: Nothing (program terminates)
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}
