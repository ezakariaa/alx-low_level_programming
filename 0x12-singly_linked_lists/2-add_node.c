#include "lists.h"
#include <string.h>
/**
* add_node - Add new node at beginning of a list_t.
* @head: pointer to head of linked list.
* @str: string needs to be duplicated.
*
* Return: NULL - If function fails.
* Otherwise, address of the new element.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nouv;
	int leng;

	if (head == NULL || str == NULL)
		return (NULL);
	nouv = malloc(sizeof(list_t));
	if (nouv == NULL)
		return (NULL);
	nouv->str = strdup(str);
	if (!nouv->str)
	{
		free(nouv);
		return (NULL);
	}
	for (leng = 0; str[leng];)
		leng++;
	nouv->len = leng;
	nouv->next = *head;
	*head = nouv;
	return (nouv);
}
