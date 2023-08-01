#include <stdlib.h>
#include "lists.h"

/**
 *  pop_listint- function to delete the head of a node
 *
 * @head: head
 *
 * Return: data (Success)
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
