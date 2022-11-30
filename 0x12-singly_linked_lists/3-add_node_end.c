#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node to the
 * end of a linked list
 *
 * @head: a pointer to the head node
 * @str: string value to be held by node
 * Return: the address of the head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	last = *head;

	new_node->str = strdup(str);
	new_node->len = strlen(str);
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

