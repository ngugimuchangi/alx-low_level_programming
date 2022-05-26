#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print data of linked list
 * @h: points to the head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
