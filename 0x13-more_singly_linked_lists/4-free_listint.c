#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free a list
 * @head: address of first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
