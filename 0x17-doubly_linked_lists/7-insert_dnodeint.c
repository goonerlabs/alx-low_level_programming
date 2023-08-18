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
	dlistint_t *new_node = NULL, *temp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = temp;
		if (temp != NULL)
			temp->prev = new_node;
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
		if (temp->next == NULL && i == idx + 1)
		{
			new_node->prev = temp;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
