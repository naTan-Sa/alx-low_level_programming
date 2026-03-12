#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if success, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *delete_node;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (count == index - 1)
		{
			delete_node = temp->next;

			if (delete_node == NULL)
				return (-1);

			temp->next = delete_node->next;
			free(delete_node);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
