#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds node to dlistint_t list
 * @head: pointer to pointer of address of first node
 * @n: data for new node
 *
 * Description: adds a new node at the end of dlistint_t
 * list
 *
 * Return: address of new node on success, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!temp)
	{
		*head = new;
		return (new);
	}
	while (temp)
	{
		if (!temp->next)
			break;
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}
