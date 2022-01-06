#include "lists.h"

/**
 * get_dnodeint_at_index - displays the node at the index
 * @head: pointer to the head of the list
 * @index: index of the node wanted to be display
 * Return: if the node does not exist, return NULL
 */
 
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int rm;

	for (rm = 0; rm < index; rm++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
