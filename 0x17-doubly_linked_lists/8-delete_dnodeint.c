#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted (starting from 0)
 * Return: 1 if the node was successfully deleted, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL && i < index)
	{
	prev = current;
	current = current->next;
	i++;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = prev;

	free(current);
	return (1);
}
