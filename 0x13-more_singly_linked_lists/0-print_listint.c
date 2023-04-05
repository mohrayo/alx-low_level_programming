#include "lists.h"

/**
 * print_listint - to print the elements of a linked list.
 * @h: the linked list of listint_t to print.
 * Return: the number of nodes (counting).
 */

size_t print_listint(const listint_t *h)
{
	size_t counting = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counting++;
		h = h->next;
	}

	return (counting);
}
