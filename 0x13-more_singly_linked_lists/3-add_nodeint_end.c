#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of the list
 * @head: address of head of list
 * @n: data to add to new list
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
return (new);
}
