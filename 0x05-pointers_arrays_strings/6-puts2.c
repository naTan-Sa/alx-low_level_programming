#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: pointer to the string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
