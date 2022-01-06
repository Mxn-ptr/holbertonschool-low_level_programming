#include "lists.h"

/**
 * sum_dlistint - add the element of all the node of a list
 * @head: pointer to the head of the list
 * Return: the sum of the element
 */

int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
