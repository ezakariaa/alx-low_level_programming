#include "lists.h"
#include <stdio.h>

/**
* free_listint2 - Function that frees a listint_t list.
* @head: Pointer to the head of the listint_t list.
* The function sets the head to NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	if (head == NULL)
		return;

	head = NULL;
}
