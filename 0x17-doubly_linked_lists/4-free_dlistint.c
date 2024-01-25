#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - function that frees a dlistint_t list.
* @head: the head node of the list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
