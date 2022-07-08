#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at specific index
 * @h: address of first node
 * @idx: index to add new node
 * @n: data for new node
 *
 * Return: new node's address on success, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int flag;
	dlistint_t *new, *back = NULL, *next = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	for (flag = 0; next; flag++)
	{
		if (flag == idx)
		{
			if (back)
				back->next = new;
			new->prev = back;
			new->next = next;
			next->prev = new;
			if (!back)
				*h = new;
			return (new);
		}
		back = next;
		next = next->next;
	}
	if (flag == idx)
	{
		new->prev = back;
		back->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
