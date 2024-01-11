#include "lists.h"
/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @h: address
 * @idx: position of the node address to insert new nodes
 * @n: node's number
 * Return: the address of the node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *ptr;
	unsigned int count = 1;

	temp = malloc(sizeof(dlistint_t));
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	ptr = *h;
	while (*h != NULL)
	{
		if (count == (idx))
		{
			temp->next = (*h)->next;
			temp->prev = *h;
			if ((*h)->next != NULL)
				(*h)->next->prev = temp;
			(*h)->next = temp;
			*h = ptr;
			return (*h);
		}
		*h = (*h)->next;
		count++;
	}
	if (idx > count)
		return (NULL);
	return (add_dnodeint_end(h, n));
}
