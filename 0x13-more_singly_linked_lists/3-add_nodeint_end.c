#include "lists.h"

/**
 * add_nodeint_end - functn that adds node at the end part of linked list
 * @head: points to the first element on the list
 * @n: data to insert the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addsnewN;
	listint_t *temp = *head;

	addsnewN = malloc(sizeof(listint_t));
	if (!addsnewN)
		return (NULL);

	addsnewN->n = n;
	addsnewN->next = NULL;

	if (*head == NULL)
	{
		*head = addsnewN;
		return (addsnewN);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = addsnewN;

	return (addsnewN);
}
