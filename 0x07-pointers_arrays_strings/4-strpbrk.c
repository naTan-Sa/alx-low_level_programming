#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to match
 *
 * Return: pointer to the first matching byte in s,
 *         or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	char * ptr;

	while (*s)
	{
		ptr = accept;
		while(*ptr)
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}
		s++;
	}
	return (0);
}
