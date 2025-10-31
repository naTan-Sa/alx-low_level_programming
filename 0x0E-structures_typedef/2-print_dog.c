#include "dog.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_dog - prints the details of a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: If an element of the struct is NULL, this function prints
 * (nil) instead of that element. If the pointer d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name:(nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
