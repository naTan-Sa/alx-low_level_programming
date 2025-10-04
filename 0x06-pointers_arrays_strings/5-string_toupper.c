#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (s);
}
