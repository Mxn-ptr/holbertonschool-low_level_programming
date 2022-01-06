#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a dlistint list
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
