#include "lists.h"
#include <stdio.h>

/**
* find_listint_loop - finds the loop in a linked list.
* @head: head of linked list.
* Return: Address of node where loop starts, or NULL if no loop found.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curnts, *curntf;

	if (head == NULL)
		return (NULL);
	curnts = curntf = head;
	do {
		if (curnts->next)
			curnts = curnts->next;
		else
			return (NULL);

		if (curntf->next->next)
			curntf = curntf->next->next;
		else
			return (NULL);
	} while (curntf != curnts);

	curnts = head;
	while (curntf != curnts)
	{
		curntf = curntf->next;
		curnts = curnts->next;
	}
	return (curnts);
}
