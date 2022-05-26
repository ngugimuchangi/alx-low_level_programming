#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses the order of a list
 * @head: pointer to the address of first node
 * Return: new head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !*head)
		return (NULL);
	prev = 0;
	next = *head;
	while (next)
	{
		next = next->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
