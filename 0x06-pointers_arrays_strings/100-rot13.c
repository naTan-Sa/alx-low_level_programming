#include "main.h"

/**
 * rot13 - encodes a string using ROT13
 * @s: pointer to the string
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	char *ptr = s;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[]     = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		for (i = 0; i < 52; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = rot[i];
				break;
			}
		}
		ptr++;
	}
	return (s);
}
