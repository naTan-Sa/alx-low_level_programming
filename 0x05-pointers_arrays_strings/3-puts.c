#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line,
 * to stdout.
 * @str: pointer to char
 *
 * Return: nothing (void)
 */
void _puts(char *str)
{
	char c;

	while (*str != '\0')
	{
		c = *str;
		_putchar(c);
		str++;
	}
	_putchar('\n');
}
