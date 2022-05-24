#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}

