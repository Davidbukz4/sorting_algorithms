#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly-ll of integers in ascending order
 * @list: pointer to doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *n_swap;

	if (list == NULL || *list == NULL)
		return;
	node = (*list)->next;
	while (node != NULL)
	{
		n_swap = node->next;
		while (node->prev != NULL && node->prev->n > node->n)
		{
			node->prev->next = node->next;
			if (node->next != NULL)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = node->next->prev;
			node->next->prev = node;
			if (node->prev == NULL)
				*list = node;
			else
				node->prev->next = node;
			print_list(*list);
		}
		node = n_swap;
	}
}
