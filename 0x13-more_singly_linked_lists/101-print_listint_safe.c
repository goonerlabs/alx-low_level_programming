#include "lists.h"
/**
 * list_cycle_len - checks if a list has a cycle
 * @head: head of the list
 * Return: number of unique nodes if it has a cycle, 0 otherwise
 */

unsigned int list_cycle_len(const listint_t *head)
{
	const listint_t *fast, *slow;
	unsigned int count;

	count = 0;

	if (head == NULL)
		return (0);

	fast = head;
	slow = head;

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		count++;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				count++;
			}
			return (count);
		}
	}
	return (0);

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

	nodes = list_cycle_len(head);
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
