#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at an index
 * @head: a pointer to the head node
 * @index: the index of the node to delete
 * Return: 1 if succesful or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	unsigned int i;

	temp = head*;
	prev = NULL;
	i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	prev = temp->next;
	temp->next = prev->next;
	free(prev);
	return (1);
}

