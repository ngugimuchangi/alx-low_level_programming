#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at specified position
 * @head: pointer to address of first node
 * @idx: index to insert new node
 * @n: data of new node
 * Return: pointer to new node;
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (!head)
		return (NULL);
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
	for (i = 0; temp && i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (!temp || !temp->next)
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	return (new);
}
