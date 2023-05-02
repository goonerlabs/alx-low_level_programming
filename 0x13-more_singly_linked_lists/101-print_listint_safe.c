#include "lists.h"
/**
 * uniq_nodes - checks if a list has a cycle
 * @head: head of the list
 * Return: number of unique nodes if it has a cycle, 0 otherwise
 */

unsigned int uniq_nodes(const listint_t *head)
{
	const listint_t *fast, *slow;
	unsigned int count, has_loop;

	count = 2;
	has_loop = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	fast = head;
	slow = head;


	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			has_loop = 1;
			break;
		}
	}
	if (!has_loop)
		return (0);

	do {
		slow = slow->next;
		count++;
	} while (slow != fast);
	return (count);
}

/**
 * print_listint_safe - prints all elements of a list_t list safely
 * @head: head of the list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i;
	const listint_t *tmp;

	nodes = uniq_nodes(head);
	tmp = head;

	if (!nodes)
	{
		while (tmp)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
			nodes++;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
		}
		printf("-> [%p] %d\n", (void *)tmp, tmp->n);
	}
	return (nodes);
}



















