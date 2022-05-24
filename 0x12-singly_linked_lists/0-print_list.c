#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the data in a node withing singly linked list
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		if (temp->str)
			printf("[%u] [%s]\n", h->len, h->str);
		else
			printf("[%u] %s\n", 0, "(nil)");
		temp = temp->next;
	}
	return (i);
}
