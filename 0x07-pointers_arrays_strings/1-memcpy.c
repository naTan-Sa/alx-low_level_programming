#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/*pointer arithmetic:*/

/*
 * char *_memcpy(char *dest, char *src, unsigned int n)
 * {
 *	unsigned int i;
 *	char *d = dest;
 *	char *s = src;
 *
 *	for (i = 0; i < n; i++)
 *	{
 *		*d = *s;
 *		d++;
 *		s++;
 *	}
 *	return (dest);
 * }
 */
