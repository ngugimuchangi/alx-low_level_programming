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
	unsigned int j;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		for (j = 0; j < h->len; j++)
			printf("%c", h->str[j]);
		printf("\n");
	}

	if (h->next != NULL)
		print_list(h->next);
	i++;
	return (i);
}
