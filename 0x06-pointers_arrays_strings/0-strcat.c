#include "main.h"

/**
 * _strcat - concatnates two strings
 * @dest: destination string; must have enough space to hold result
 * @src: source string to append
 *
 * Deascription: this func appends the string pointed to by @src
 * to the end of the string pointed to by @dest. the terminating null
 * byte of @dest is overwritten,
 * and the resulting string is null-terminated.
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';

	return (dest);
}
