#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Description: Separators include space, tab, newline,
 * comma, semicolon, period, exclamation mark,
 * question mark, double quote, parentheses, and braces.
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Description: Words are considered separated by spaces
 * and special punctuation characters (checked by
 * is_separator). The first letter of each word is
 * converted to uppercase if it is lowercase.
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || is_separator(str[i - 1])) &&
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
	}
	return (str);
}
