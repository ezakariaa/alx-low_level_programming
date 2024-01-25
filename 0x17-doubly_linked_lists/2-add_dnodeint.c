#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_dnodeint - function that adds a new node at the beginning of a list
* @head: the beginning of the linked list
* @n: to add to the new node
*
* Return: pointer to the new node, or NULL on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;
	return (newnode);
}
