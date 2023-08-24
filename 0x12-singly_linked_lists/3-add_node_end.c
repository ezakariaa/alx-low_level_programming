#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add new node at the end of a list_t.
 * @head: Pointer to head of linked list.
 * @str: String needs to be duplicated.
 *
 * Return: NULL - If the function fails.
 * Otherwise, the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *nouv;
	list_t *tail;

	if (head == NULL || str == NULL)
		return (NULL);

	nouv = malloc(sizeof(list_t));
	if (nouv == NULL)
		return (NULL);

	nouv->str = strdup(str);
	if (nouv->str == NULL)
	{
		free(nouv);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	nouv->len = length;
	nouv->next = NULL;

	if (*head == NULL)
		*head = nouv;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = nouv;
	}

	return (*head);
}
