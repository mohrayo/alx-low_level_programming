#include "lists.h"

/**
 * add_nodeint - functn that adds new node at the beginning of linked list
 * @head: points to the first node on the list
 * @n: data to insert in that new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnew;

	addnew = malloc(sizeof(listint_t));
	if (!addnew)
		return (NULL);

	addnew->n = n;
	addnew->next = *head;
	*head = addnew;

	return (addnew);
}
