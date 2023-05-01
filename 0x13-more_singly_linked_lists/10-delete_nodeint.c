#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the first node
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *to_del;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	to_del = tmp->next;
	tmp->next = to_del->next;
	free(to_del);
	return (1);
}
