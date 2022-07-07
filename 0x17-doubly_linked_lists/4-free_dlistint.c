#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees dlistint_t list
 * @head: address of first node
 *
 * Description: free all nodes of a dlistint_t list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
