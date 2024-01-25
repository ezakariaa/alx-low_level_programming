#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a linked list.
* @head: the head node of the list.
* @index: Index of the node, starting from 0.
*
* Return: Pointer to the nth node, or NULL if it does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		n++;
	}

	return (head);
}
