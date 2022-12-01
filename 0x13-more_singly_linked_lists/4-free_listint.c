#include "lists.h"

/**
 * free_listint - frees up memory allocated to
 * a linked list
 * @head: the head node of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
