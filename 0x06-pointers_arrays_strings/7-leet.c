#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	char *ptr = s;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;


	while (*ptr)
	{
		
		for (i = 0;i < 10; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = numbers[i];
				break;
			}
		}
		ptr++;
	}
	return (s);
}
