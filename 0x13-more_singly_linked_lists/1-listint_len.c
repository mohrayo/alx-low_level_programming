#include "lists.h"

/**
 * listint_len - functn that returns the no of elements in a linked lists
 * @h: heading of the list
 *
 * Return: returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t listnum = 0;

	while (h)
	{
		listnum++;
		h = h->next;
	}

	return (listnum);
}
