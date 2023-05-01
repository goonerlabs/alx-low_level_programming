#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head of the list
 * Return: the head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head == NULL || *head == NULL)
		return (NULL);

	ptr = *head;

	if (ptr->next == NULL)
	{
		*head = ptr;
		return (*head);
	}

	reverse_listint(&ptr->next);
	temp = ptr->next;
	temp->next = ptr;
	ptr->next = NULL;
}
