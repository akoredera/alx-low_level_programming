#include "lists.h"
/**
 * sum_dlistint - function returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: address
 * Return: sum of the node value, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
