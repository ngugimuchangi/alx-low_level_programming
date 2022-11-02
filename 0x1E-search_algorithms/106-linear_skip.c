#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - function that performs search using jump
 *		 search algorithm of skip list link
 * @list: skip list
 * @value: search value
 *
 * Return: pointer of node with value if found, else NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *prev;

	if (list)
	{
		curr = prev = list;
		while (curr->next && curr->n < value)
		{
			prev = curr;
			if (curr->express)
			{
				curr = curr->express;
				printf("Value checked at index [%lu] = [%d]\n",
						curr->index, curr->n);
			}
			else
			{
				while (curr->next)
					curr = curr->next;
			}

		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, curr->index);
		while (prev && prev->index <= curr->index)
		{
			printf("Value checked at index [%lu] = [%d]\n",
					prev->index, prev->n);
			if (prev->n == value)
				return (prev);
			prev = prev->next;
		}
	}
	return (NULL);
}
