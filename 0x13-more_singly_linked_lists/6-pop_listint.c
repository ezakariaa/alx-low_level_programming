#include "lists.h"
#include <stdlib.h>

/**
* pop_listint: pops off the head of the list and returns its contents.
* @head: head of the list
* Return: contents of head
*/
int pop_listint(listint_t **head)
{
	int d;
	listint_t *cur, *temp;

	if (head == NULL)
		return (0);
	temp = cur = *head;
	if (*head)
	{
		d = cur->n;
		*head = cur->next;
		free(temp);
	}
	else
		d = 0;
	return (d);
}
