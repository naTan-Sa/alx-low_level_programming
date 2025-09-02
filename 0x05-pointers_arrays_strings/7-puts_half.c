#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: pointer to a string
 *
 * Return: nothing (void)
 */
void puts_half(char *str)
{
	int len;
	int half;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		half = len / 2;

	else
		half = (len - 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
