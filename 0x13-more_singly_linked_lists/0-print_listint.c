#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prits all elements of listint_t
 * @h: the beginning of the list to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t listing = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		listing++;
	}
	return (listing);
}
