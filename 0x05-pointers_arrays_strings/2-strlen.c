#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a char.
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
