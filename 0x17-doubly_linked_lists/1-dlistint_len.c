#include <stddef.h>
#include "lists.h"
/**
 * dlistint_len - determines number of elements in dlistint_t
 * @h: first node of list
 *
 * Return: number of elements in dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;
	const dlistint_t *temp = h;

	for (; temp; elements++)
		temp = temp->next;
	return (elements);
}

