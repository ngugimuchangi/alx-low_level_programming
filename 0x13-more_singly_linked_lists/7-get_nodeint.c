#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets the address of the a
 * specified node
 * @head: pointer to the head element
 * @index: elements index;
 * Return: elements address on success, NULL
 * if element does not exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (!temp)
			break;
	}
	if (!temp && i < index)
		return (NULL);
	return (temp);
}
