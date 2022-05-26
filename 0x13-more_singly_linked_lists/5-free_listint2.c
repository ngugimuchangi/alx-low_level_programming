#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free list and sets head to NULL
 * @head: pointer to the pointer containing the first element
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
