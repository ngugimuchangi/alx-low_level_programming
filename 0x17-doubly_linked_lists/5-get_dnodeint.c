#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of dlistint_t linked list
 * @head: address of first node
 * @index: search node's index
 *
 * Return: search node's address if present, NULL if nodes
 * does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int flag;
	dlistint_t *temp = head;

	for (flag = 0; temp; flag++)
	{
		if (flag == index)
			break;
		temp = temp->next;
	}
	return (temp);
}
