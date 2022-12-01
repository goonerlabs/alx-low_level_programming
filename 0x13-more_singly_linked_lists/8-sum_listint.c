#include "lists.h"
/**
 * sum_listint - returns the sum of the data
 * in a linked list
 *
 * @head: a pointer to the head node
 * Return: the sum of the data or 0
 */
int sum_listint(listint_t *head)
{
	int res;

	res = 0;


	while (head)
	{
		res += head->n;

		head = head->next;
	}
	return (res);
}

