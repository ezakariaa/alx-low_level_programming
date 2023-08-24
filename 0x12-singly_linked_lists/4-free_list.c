#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees list_t.
* @head: Pointer to first node.
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
