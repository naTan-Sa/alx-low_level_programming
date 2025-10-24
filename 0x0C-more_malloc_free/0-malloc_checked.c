#include "main.h"
#include <stdlib>


/**
 * malloc_checked - allocates memory using malloc
 * @b: numbeer of bytes to allocate
 *
 * Return: pointer to the allocated memory
 * if malloc fails, terminate with status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
