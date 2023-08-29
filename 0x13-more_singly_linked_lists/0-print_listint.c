#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of list_t list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
