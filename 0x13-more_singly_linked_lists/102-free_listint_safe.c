#include "lists.h"
/**
 * list_cycle_len2 - checks if a list has a cycle
 * @head: head of the list
 * Return: number of unique nodes if it has a cycle, 0 otherwise
 */

unsigned int list_cycle_len2(listint_t *head)
{
	listint_t *fast, *slow;
	unsigned int count;

	count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	fast = (head->next)->next;
	slow = head->next;

	while (fast != NULL)
	{
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				count++;
			}
			slow = slow->next;
			while (slow != fast)
			{
				slow = slow->next;
				count++;
			}
			return (count);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list even if witha a cycle
 * @h: head of the list
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count, i;
	listint_t *temp, *next;

	if (h == NULL || *h == NULL)
		return (0);

	count = list_cycle_len2(*h);
	temp = *h;
	next = *h;

	if (!count)
	{
		while (temp != NULL && temp->next != NULL)
		{
			temp = next;
			next = next->next;
			free(temp);
			count++;
		}
		*h = NULL;
		h = NULL;
		return (count);
	}

	for (i = 0; i < count; i++)
	{
		temp = next;
		next = next->next;
		free(temp);
	}
	*h = NULL;
	h = NULL;
	return (count);
}



















