#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - adds the data in linked list
 * @head: address of the first element
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
