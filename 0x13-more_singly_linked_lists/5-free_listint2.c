#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head : pointer to a pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	head = NULL;
}
