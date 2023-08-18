#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: Pointer to the head node
 * @n: the value of the new node
 *
 * Return: the address of the new node, or NULL on fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}

