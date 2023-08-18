#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at index index
 * @h: the head of the doubly linked list
 * @idx: the index
 * @n: data for the new node
 * Return: the address of the new node, or NULL on fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp)
	{
		if (i == idx)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
