#include "main.h"

/**
 * _strncpy - copies a string using pointers
 * @dest: destination buffer to copy to
 * @src: source string to copy from
 * @n: maximum number of bytes to copy
 *
 * Description: This function copies up to n characters
 * from src to dest. If src is shorter than n characters,
 * the remainder of dest is padded with '\0'. Works like
 * the standard strncpy function.
 *
 * Return: pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	while (i < n)
	{
		*ptr = '\0';
		ptr++;
		i++;
	}
	return (dest);
}
