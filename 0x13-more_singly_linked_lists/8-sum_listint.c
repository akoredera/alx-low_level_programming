#include "lists.h"
/**
 * sum_listint - sum of all the data
 * @head: pointing to the first node
 * Return: sum of the data otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum_list;
	listint_t *temp = NULL;

	if (head == NULL)
		return (0);
	temp = head;
	sum_list = 0;
	while (temp != NULL)
	{
		sum_list += temp->n;
		temp = temp->next;
	}
	return (sum_list);
}
