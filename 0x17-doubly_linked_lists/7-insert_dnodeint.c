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
	dlistint_t *temp, *temp2, *new_ptr;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
		return (add_dnodeint_end(h, n));
	temp2 = temp->next;
	new_ptr = malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
		return (NULL);
	new_ptr->n = n;
	new_ptr->prev = temp;
	new_ptr->next = temp2;
	temp2->prev = new_ptr;
	temp->next = new_ptr;
	return (*h);
}
