#include "sort.h"
/**
 * insertion_sort_list - Function that sort a list with insertion algorithm
 * @list: List to be sorted
 * Return: Nothing
 **/


void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	current = (*list)->next;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		temp = current->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;

			current->next = current->prev;
			current->prev = current->prev->prev;

			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;

			if (current->next != NULL)
				current->next->prev = current;
			print_list(*list);
		}
	current = temp;
	}
}
