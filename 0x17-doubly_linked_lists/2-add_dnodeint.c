#include "lists.h"
/**
 * add_dnodeint - function adds a new node at the
 * beginning of a dlistint_t list.
 * @head: address
 * @n: number to add to the node
 * Return: the address of the first node, otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->next = NULL;
	temp->n = n;

	if (*head == NULL)
	{
		*head = temp;
	}

	else
	{
		temp->next = *head;
		temp->n = n;
		(*head)->prev = temp;
		*head = temp;
	}
	return (*head);
}
