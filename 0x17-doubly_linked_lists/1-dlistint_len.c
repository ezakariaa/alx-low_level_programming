#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len - function that returns the number of elements in a linked dlistint_t list.
* @h: the beginning of a linked list
*
* Return: nodes number
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t leng;

	for (leng = 0; h != NULL; leng++)
		h = h->next;
	return (leng);
}
