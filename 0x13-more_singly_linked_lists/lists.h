#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  /* for size_t */
#include <stdlib.h>  /* for malloc, free */
#include <string.h>  /* for strdup */
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif /* LISTS.H*/
