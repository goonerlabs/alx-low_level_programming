#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the list.
 * @str: string to be added.
 * Return: address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t len;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	len = strlen(str);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (temp);
}
