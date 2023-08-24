#include "lists.h"

/**
* list_len - Gets number of elements in a linked list_t list.
* @h: member of the structure
*
* Return: number of elements in a linked list_t.
*/
size_t list_len(const list_t *h)
{
	size_t e = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		e++;
		h = h->next;
	}
	return (e);
}
