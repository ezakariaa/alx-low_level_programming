#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - Counts the number of nodes in a looped listint_t linked.
* @head: A pointer to the head of the listint_t to check.
* Return: the number of nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortue, *lievre;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortue = head->next;
	lievre = (head->next)->next;
	while (lievre)
	{
		if (tortue == lievre)
		{
			tortue = head;
			while (tortue != lievre)
			{
				node++;
				tortue = tortue->next;
				lievre = lievre->next;
			}
			tortue = tortue->next;
			while (tortue != lievre)
			{
				node++;
				tortue = tortue->next;
			}
			return (node);
		}
		tortue = tortue->next;
		lievre = (lievre->next)->next;
	}
	return (0);
}

/**
* print_listint_safe - Prints a listint_t list.
* @head: A pointer to the head of the listint_t list.
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);
	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
