#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a node at the beginning of a list
 * @head: pointer to the beginning of the list
 * @str: string to copy to new node;
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; new->str[i]; i++)
		;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
