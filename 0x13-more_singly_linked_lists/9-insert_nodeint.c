#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index -  inserts a new node at a given position
* @head: head of the list
* @index: location to insert node
* @n: value of the inserted node
* Return: pointer to head of list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *cur, *nouv;

	cur = *head;
	nouv = malloc(sizeof(listint_t));
	if (nouv == NULL)
		return (NULL);
	nouv->n = n;
	if (index == 0)
	{
		nouv->next = cur;
		*head = nouv;
		return (*head);
	}
	while (index > 1)
	{
		cur = cur->next;
		index--;
		if (!cur)
		{
			free(nouv);
			return (NULL);
		}
	}
	nouv->next = cur->next;
	cur->next = nouv;
	return (nouv);
}
