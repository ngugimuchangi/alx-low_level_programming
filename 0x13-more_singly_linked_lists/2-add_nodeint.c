#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a listint_t
 * @head: pointer to the head of the list
 * @n: data to store in new node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
