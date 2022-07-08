#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at specific index
 * @head: address of first node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int flag;
	dlistint_t *back = NULL, *current = *head, *forward;

	if (!current)
		return (-1);
	forward = current->next;
	for (flag = 0; current; flag++)
	{
		if (flag == index)
		{
			free(current);
			if (forward)
				forward->prev = back;
			if (back)
				back->next = forward;
			else
				*head = forward;
			return (1);
		}
		back = current;
		current = forward;
		forward = forward->next;
	}
	return (-1);
}
