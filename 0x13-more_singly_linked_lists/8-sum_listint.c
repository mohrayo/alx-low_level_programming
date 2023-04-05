#include "lists.h"

/**
 * sum_listint - fxn that calc the sum of all data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum, if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nums = head;

	while (nums)
	{
		sum += nums->n;
		nums = nums->next;
	}

	return (sum);
}
