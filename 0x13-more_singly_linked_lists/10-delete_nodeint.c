#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at specified position
 * @head: pointer to address of first node
 * @index: index to delete node
 * Return: 1 on success and -1 on failure;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new_link;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (!temp || !temp->next)
		return (-1);
	new_link = temp->next->next;
	free(temp->next);
	temp->next = new_link;
	return (1);
}
