#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* delete_nodeint_at_index - deletes the node at index of a listint_t list.
* @head: Head of list
* @index: Location of node to delete
* Return: Pointer to head of list
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nod;
	listint_t *temp, *sub;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (nod = 0; nod < (index - 1); nod++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	sub = temp->next;
	temp->next = sub->next;
	free(sub);
	return (1);
}
