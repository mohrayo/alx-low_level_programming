#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - fxn that prints the number in a looped linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *teama, *teamb;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	teama = head->next;
	teamb = (head->next)->next;

	while (teamb)
	{
		if (teama == teamb)
		{
			teama = head;
			while (teama != teamb)
			{
				nodes++;
				teama = teama->next;
				teamb = teamb->next;
			}

			teama = teama->next;
			while (teama != teamb)
			{
				nodes++;
				teama = teamb->next;
			}

			return (nodes);
		}

		teama = teama->next;
		teamb = (teamb->next)->next;
	}

	return (0);
}
