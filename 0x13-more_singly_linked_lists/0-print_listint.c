#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - function to print all elemets
 *
 * @h: parameter passed
 *
 * Return:count (success)
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}


