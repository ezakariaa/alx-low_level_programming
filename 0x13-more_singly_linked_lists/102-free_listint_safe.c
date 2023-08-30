#include "lists.h"

/**
* free_listint_safe - free a listint_t list
* @h: double pointer to head of linked list
* Description: This function can free lists with a loop
* Return: size of the list that was free
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur, *hld;
	size_t cnt;

	cnt = 0;
	cur = *h;
	while (cur != NULL)
	{
		cnt++;
		hld = cur;
		cur = cur->next;
		free(hld);

		if (hld < cur)
			break;
	}
	*h = NULL;
	return (cnt);
}
