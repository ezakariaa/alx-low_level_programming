#include "lists.h"
#include <stdio.h>

/**
* free_listint2 - Function that frees a listint_t list.
* @head: Pointer to the head of the listint_t list.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
