#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using Insertion sort
 * @list: Pointer to the head of the linked list
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;

	while (current != NULL)
	{
		listint_t *temp = current;
		listint_t *prev = current->prev;

		while (prev != NULL && prev->n > temp->n)
		{
			/* Swap the nodes */
			if (prev->prev != NULL)
				prev->prev->next = temp;
			if (temp->next != NULL)
				temp->next->prev = prev;

			prev->next = temp->next;
			temp->prev = prev->prev;
			prev->prev = temp;
			temp->next = prev;

			/* If the node becomes the new head, update the list pointer */
			if (temp->prev == NULL)
				*list = temp;

			/* Print the list after the swap */
			print_list(*list);

			prev = temp->prev;
		}

		current = current->next;
	}
}
