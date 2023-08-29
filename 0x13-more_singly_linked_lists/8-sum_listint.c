#include "lists.h"
#include <stdio.h>

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
* @head: Pointer to the head of the list
* Return: sum of all elements.if the list is empty, return 0.
*/
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
	;
	return (sum);
}
