#include "lists.h"

/**
 * pop_listint - fxn that deletes the head node of a linked list
 * @head: pointer to the first element
 *
 * Return: the heads node data
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temps;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temps = (*head)->next;
	free(*head);
	*head = temps;

	return (num);
}
