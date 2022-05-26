#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete head node
 * @h: pointer to pointer with address of
 * head node
 * Return: data of head node.
 */
int pop_listint(listint_t **h)
{
	int i;
	listint_t *new;

	if (!h || !*h)
		return (0);
	new = *h;
	i = new->n;
	*h = new->next;
	free(new);
	return (i);
}
