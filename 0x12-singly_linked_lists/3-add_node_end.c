#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of list
 * @head: array of pointer to different nodes within the list
 * @str: string to duplicate in the new node.
 * Return: pointer to new pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;


	if (*(head) && head)
	{
		for (; *head; head++)
		{
			if (!(*(head)->next))
			{
				*(head)->next = malloc(sizeof(list_t));
				if (!(*(head)->next))
					return (NULL);
				*(head)->next->str = strdup(str);
				for (i = 0; *(head)->next->str; i++)
					;
				*(head)->next->len = i;
				*(head)->next->next = NULL;
			}
		}
	}
	return (head->next);
}
