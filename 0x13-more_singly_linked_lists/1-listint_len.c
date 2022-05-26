#include <stdio.h>
#include "lists.h"
/**
 * listint_len - finds the number of elements in a linked list
 * @h: points to the head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
