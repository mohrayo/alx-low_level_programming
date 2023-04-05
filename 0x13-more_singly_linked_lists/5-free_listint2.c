#include "lists.h"

/**
 * free_listint2 - a fxn that frees a linked list
 * @head: the pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *func;

	if (head == NULL)
		return;

	while (*head)
	{
		func = (*head)->next;
		free(*head);
		*head = func;
	}

	*head = NULL;
}
