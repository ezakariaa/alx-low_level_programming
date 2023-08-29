#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* reverse_listint - reverses a listint_t linked list.
* @head: describe argument
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *normal, *reverse;

	if (head == NULL || *head == NULL)
		return (NULL);
	reverse = NULL;
	while ((*head)->next != NULL)
	{
		normal = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = normal;
	}
	(*head)->next = reverse;
	return (*head);
}
