#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: address of the first element
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i;
	const listint_t *temp;

	if (!head)
		exit(98);
	temp = head;
	for (i = 0; temp; i++)
	{
		printf("[%p] [%d]\n", (void *)temp, temp->n);
		temp = temp->next;
	}
	return (i);
}
