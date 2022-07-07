#include "lists.h"
/**
 * sum_dlistint - adds up all data in dlistint_t liked list
 * @head: address of first node
 *
 * Return: sum of all data, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
