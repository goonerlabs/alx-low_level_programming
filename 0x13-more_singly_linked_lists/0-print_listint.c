#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */

size_t  print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
