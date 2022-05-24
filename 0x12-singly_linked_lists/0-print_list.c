#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the data in a node withing singly linked list
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 1, j;

	if (!h)
		--i;
	else
	{
	if (h->str)
	{
		printf("[%u] ", h->len);
		for (j = 0; j < h->len; j++)
			printf("%c", h->str[j]);
		printf("\n");
	}
	else
		printf("[%u] %s\n", 0, "(nil)");
	if (h->next)
		print_list(h->next);
	++i;
	}
	return (i);
}
