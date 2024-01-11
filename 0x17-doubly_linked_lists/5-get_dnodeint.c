#include "lists.h"
/**
 * get_dnodeint_at_index - function returns the nth node
 * of a dlistint_t linked list
 * @head: address
 * @index: position of the address to return
 * Return: the address of the node, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
