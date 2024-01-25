#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
*
* @h: the beginning of the linked list
* @idx: index for insert the new node
* @n: to enter into new node
*
* Return : the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trav, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));
	trav = *h;

	for (; idx != 1; idx--)
	{
		trav = trav->next;
		if (trav == NULL)
			return (NULL);
	}
	if (trav->next == NULL)
		return (add_dnodeint_end(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = trav;
	newnode->next = trav->next;
	trav->next->prev = newnode;
	trav->next = newnode;
	return (newnode);

}
