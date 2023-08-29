#include "lists.h"
#include <stdio.h>

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: head of the list
* @index: which node to stop
* Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
