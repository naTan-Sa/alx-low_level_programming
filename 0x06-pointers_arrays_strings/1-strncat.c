#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: a pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && i < n)
	{
		*ptr = *src;
		src++;
		ptr++;
		i++;
	}
	*ptr = '\0';

	return (dest);
}
