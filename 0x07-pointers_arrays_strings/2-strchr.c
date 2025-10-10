#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (0);
}
