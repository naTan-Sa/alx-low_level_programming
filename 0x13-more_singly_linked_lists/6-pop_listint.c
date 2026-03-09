#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to pointer of the head node
 *
 * Return: the data (n) of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	value = temp->n;
	*head = temp->next;
	free(temp);

	return (value);
}
