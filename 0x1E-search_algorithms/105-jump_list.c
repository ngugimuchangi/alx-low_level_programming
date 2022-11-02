#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * jump_list - function to search a linked list using jump function
 * @list: head of the list
 * @size: total nodes on the list
 * @value: search key
 *
 * Return: pointer to the node containing the value if found, else NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t last_idx, jump, square_root;
	listint_t *curr = NULL, *prev = NULL;

	if (list)
	{
		jump = square_root = (size_t) sqrt(size);
		prev = curr = list;
		while (curr)
		{
			if (curr->index == jump)
			{
				printf("Value checked at index [%lu] = [%d]\n",
						curr->index, curr->n);
				if (curr->n >= value)
					break;
				jump += square_root;
				prev = curr;
			}

			if (!curr->next)
				printf("Value checked at index [%lu] = [%d]\n",
						curr->index, curr->n);
			curr = curr->next;
		}

		last_idx = (jump < size - 1) ? jump : size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, last_idx);

		while (prev && prev->index <= last_idx)
		{
			printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
			if (prev->n == value)
				return (prev);
			prev = prev->next;
		}

	}
	return (NULL);
}
