#include "lists.h"

/**
 * sum_dlistint - calculates the sum of the numbers a doubly linked list
 * @head: head of the list
 * Return: the sum or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		res += temp->n;
		temp = temp->next;
	}
	return (res);
}


