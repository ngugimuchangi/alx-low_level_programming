#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds node to dlistint_t list
 * @head: address of pointer to first node
 * @n: data for new node
 *
 * Description: adds a new node at the beginning
 * of a dlistint_t list
 *
 * Return: new node's address on success, NULL
 * of failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
