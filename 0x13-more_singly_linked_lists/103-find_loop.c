#include "lists.h"

/**
 * find_listint_loop - fxn that finds the loop in a linked list
 * @head: start of linked list
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *win = head;
	listint_t *lose = head;

	if (!head)
		return (NULL);

	while (win && lose && lose->next)
	{
		lose = lose->next->next;
		win = win->next;
		if (lose == win)
		{
			win = head;
			while (win != lose)
			{
				win = win->next;
				lose = lose->next;
			}
			return (lose);
		}
	}

	return (NULL);
}
