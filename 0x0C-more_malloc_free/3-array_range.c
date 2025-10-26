#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int i;
	int range;
	int *ptr;

	if (min > max)
		return (NULL);

	range = max - min;

	ptr = malloc(sizeof(int) * (range + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i <= range; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
