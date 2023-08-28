#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list.
* @head: A pointer to the address of the head of the listint_t list.
* @n: Integer for the new node to contain.
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nouv;

	nouv = malloc(sizeof(listint_t));
	if (nouv == NULL)
		return (NULL);

	nouv->n = n;
	nouv->next = *head;

	*head = nouv;

	return (nouv);
}
