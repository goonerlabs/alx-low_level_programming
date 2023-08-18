#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the index index
 * @head: head of list
 * @index: index of node to get
 * Return: the node at index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}


