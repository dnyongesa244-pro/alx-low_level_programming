#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns nth index
 *
 * @head: head
 *
 * @index: index
 *
 * Return: NULL (success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while(current != NULL)
	{
		if(count == index)
			return current;
		count++;
		current = current->next;
	}
	return (NULL);
}
