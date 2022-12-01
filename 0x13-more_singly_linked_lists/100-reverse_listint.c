#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head node
 * Return: pointer to the head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while(head*)
	{
		next = (*nead)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
