#include "lists.h"

/**
 * free_list - frees up memory allocated to
 * a linked list
 * @head: the head node of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
