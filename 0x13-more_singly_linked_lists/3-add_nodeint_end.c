#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the
 * end of a linked list
 *
 * @head: a pointer to the head node
 * @n: the data to insert
 * Return: a pointer to the new node or NUll
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next)
	{
		last = last->next;
	}
	last->next = new_node;

	return (new_node);
}

