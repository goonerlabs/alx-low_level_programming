#include "lists.h"
/**
 * add_nodeint - adds a new node to the
 * beginning of a linked list
 *
 * @head: a pointer to the head node
 * @n: the data to insert
 * Return: a pointer to the new node
 */
listint_t *add_node(list_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

