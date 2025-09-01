#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to a char
 *
 * Return: nothing (void)
 */
void rev_string(char *s)
{
	char temp;
	int start;
	int end;

	start = 0;
	end = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
