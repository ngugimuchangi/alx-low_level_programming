#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: address of first element
 *
 * Return: pointer to loop node, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev, *temp;

	prev = head;
	temp = head;
	while (prev && temp && temp->next)
	{
		prev = prev->next;
		temp = temp->next->next;
		if (prev == temp)
		{
			prev = head;
			break;
		}
	}
	if (!prev || !temp || !temp->next)
	return (NULL);
	while (prev != temp)
	{
		prev = prev->next;
		temp = temp->next;
	}
	return (temp);
}
