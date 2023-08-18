#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head of the doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t res = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		res++;
	}
	return (res);
}
