#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node to the
 * beginning of a linked list
 *
 * @head: a pointer to the head node
 * @str: string value to be held by node
 * Return: the address of the head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(*str);
	new_node->len = strlen(*str);
	new_node->next = (*head);
	(*head) = new_node;

	return ((*head));
}

