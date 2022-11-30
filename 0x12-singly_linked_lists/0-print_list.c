#include "lists.h"
/**
 * print_list - prints the elements of a linked list
 *
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t **temp;
	size_t n;

	*temp = *h;
	n = 0;

	while (temp->next != NULL)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		n++;
	}
	return (n);
}

