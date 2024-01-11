#include "lists.h"
/**
 * add_dnodeint_end - function adds a new node at the
 * end of a dlistint_t list.
 * @head: address
 * @n: number to add to the node
 * Return: the address of the first node, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->next = NULL;
	temp->n = n;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (*head != NULL)
		{
			if ((*head)->next == NULL)
				break;
			*head = (*head)->next;
		}
		(*head)->next = temp;
		temp->prev = (*head);
		*head = ptr;
	}
	return (*head);
}
