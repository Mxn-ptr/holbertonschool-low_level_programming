#include "lists.h"

/**
 * free_dlistint - free a listint
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}

}
