#include "lists.h"

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
