#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function to free listint_t
 *
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
