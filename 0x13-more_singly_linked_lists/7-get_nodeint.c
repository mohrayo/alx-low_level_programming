#include "lists.h"

/**
 * get_nodeint_at_index - fxn that returns the nth node of a linked list
 * @head: first node on the linked lists
 * @index: index of the node to return
 *
 * Return: if node does not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
