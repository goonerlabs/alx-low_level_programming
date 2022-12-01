#include "lists.h"
/**
 * sum_listint - returns the sum of the data
 * in a linked list
 *
 * @head: a pointer to the head node
 * Return: the sum of the data or 0
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		len++;
	}
	return (len);
}

