#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints the data in a node withing singly linked list
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
	{
		i = 0;
		return (i);
	}
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] [%s]\n", h->len, h->str);
	if (h->next != NULL)
		print_list(h->next);
	i++;
	return (i);
}
