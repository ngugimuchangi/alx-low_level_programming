#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * _realloc_mem - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list
 * @size: size of the new list
 * @new_elm: new node
 * Return: pointer to the new list
 */
listint_t **_realloc_mem(listint_t **list, size_t size, listint_t *new_elm)
{
	listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
	new_list[i] = list[i];
	new_list[i] = new_elm;
	free(list);
	return (new_list);
}
/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: pointer to first element of the list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, count = 0;
	listint_t **list = 0;
	listint_t *next;

	if (!h || !*h)
		return (count);
	while (*h)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (count);
			}
		}
		count++;
		list = _realloc_mem(list, count, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (count);
}
