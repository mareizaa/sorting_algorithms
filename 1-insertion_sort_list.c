#include "sort.h"
/**
 * insertion_sort_list - sorts an array whit insertion sort algorithm
 * @list: Double pointer linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *copy = NULL, *aux = NULL;

	if (!list || !*list)
		return;

	copy = (*list)->next;
	while (copy != NULL)
	{
		aux = copy;
		copy = copy->next;
		while (aux && aux->prev)
		{
			if (aux->prev->n > aux->n)
			{
				node_swap(aux->prev, aux);
				if (!aux->prev)
					*list = aux;
				print_list(*list);
			}
			else
				aux = aux->prev;
		}
	}
}

/**
 * node_swap - exchanges nodes
 * @previous: Nodo previous
 * @act: Nodo current
 */

void node_swap(listint_t *previous, listint_t *act)
{
	if (previous->prev)
		previous->prev->next = act;
	if (act->next)
		act->next->prev = previous;
	previous->next = act->next;
	act->prev = previous->prev;
	previous->prev = act;
	act->next = previous;
}
