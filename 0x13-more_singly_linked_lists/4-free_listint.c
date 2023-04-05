#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: beginning of the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head)
	{
		frees = head->next;
		free(head);
		head = frees;
	}
}
