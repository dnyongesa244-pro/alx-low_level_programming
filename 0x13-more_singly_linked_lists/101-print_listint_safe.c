#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe -function to print listint_t
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
		count++;
	}
	if (fast != NULL && fast->next == NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	if (fast != NULL && fast->next != NULL)
	{
		head = head->next;
		count++;
	}
	while (head != slow)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}

