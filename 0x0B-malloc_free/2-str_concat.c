#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *arr;


	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1]; len1++)
		;
	}

	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2]; len2++)
		;
	}


	arr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (arr == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		arr[i] = s1[i];

	for (j = 0; j < len2; j++)
		arr[i + j] = s2[j];

	arr[i + j] = '\0';

	return (arr);
}
