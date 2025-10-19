#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int len = 0;
	char *arr;
	unsigned int i;
	char *ptr = str;

	if (str == NULL)
		return (NULL);

	while (*ptr)
	{
		ptr++;
		len++;
	}

	arr = malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[len] = '\0';
	return (arr);
}
