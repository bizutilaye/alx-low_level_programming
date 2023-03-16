#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (h == NULL) /* Check for NULL head pointer */
        return (NULL);

    /* Create a new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;

    /* Handle special case when idx == 0 */
    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    /* Traverse the list to the position where the new node should be inserted */
    current = *h;
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    /* If current is NULL, we have reached the end of the list and cannot insert */
    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Insert the new node */
    new_node->prev = current;
    new_node->next = current->next;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}
