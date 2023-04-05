#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numbering = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numbering++;
		h = h->next;
	}

	return (numbering);
}

