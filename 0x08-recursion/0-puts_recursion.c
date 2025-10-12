#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to print
 *
 * Description: This function prints each character of the string s
 *              recursively using _putchar, until it reaches the
 *              null terminator. After printing all characters,
 *              it returns to the previous call frames.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
