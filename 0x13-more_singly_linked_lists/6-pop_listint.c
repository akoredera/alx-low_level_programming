#include "lists.h"
/**
 * pop_listint - deletes the head node and return head node's data
 * @head: address of the head
 * Return: data otherwise 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (data);
}
