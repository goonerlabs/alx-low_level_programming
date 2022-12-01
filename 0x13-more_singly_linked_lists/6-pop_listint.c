#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the data inside the node that was popped,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if (!head || !*head)
	{
		return (0);
	}

	res = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (res);
}
