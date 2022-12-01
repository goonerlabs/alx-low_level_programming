#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at index
 * of a linked list
 * @head - a pointer to the head node
 * @index: the index to check
 * Return: the node at the index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = 0;
	temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
