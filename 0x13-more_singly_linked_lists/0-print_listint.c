#include "lists.h"
/**
 * print_listint - prints the elements of a linked list
 *
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t print_listint(const list_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		n++;
	}
	return (n);
}

