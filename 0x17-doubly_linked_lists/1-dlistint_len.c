#include "lists.h"
/**
 * dlistint_len - function returns the number of elements in a
 * linked  dlistint_t list.
 * @h: address
 * Return: number of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		++count;
		h = h->next;
	}
	return (count);
}
