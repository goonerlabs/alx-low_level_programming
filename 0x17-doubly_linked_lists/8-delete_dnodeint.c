#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index
 * @head: A pointer to head.
 * @index: The index of the node to delete
 *
 * Return: 1 if it succeeded, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			(temp->next)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			prev->next = temp->next;
			if (temp->next)
				(temp->next)->prev = prev;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
