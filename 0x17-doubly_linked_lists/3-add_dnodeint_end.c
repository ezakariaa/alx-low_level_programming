#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: the beginning of the linked list
* @n: to add to new node
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}
