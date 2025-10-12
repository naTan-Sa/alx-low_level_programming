#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse followed by a new line
 * @s: pointer to the string to print
 *
 * Description: This function uses recursion to reach the end of the string
 *              and then prints each character in reverse order using _putchar.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
