#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a specified index
 * @head: a pointer to the head node
 * @idx: the index at which to insert the node
 * @n: the value to insert into the node
 * Return: the adress of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp;

	i = 0;
	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return(new_node);
	}

	while (temp && (i < idx))
	{
		if (i == (idx - 1))
		{
			new_node->next  = temp->next;
			temp->next = new_node;
			return(new_node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
