#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listin_t list
 * @head: pointer to pointer to the head of the list
 * @index: node's index to delete
 * Return: 1 on Succes, 0 in Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int i;

	if (copy == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
