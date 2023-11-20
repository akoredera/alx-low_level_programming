#include "lists.h"
/**
 * listint_len - return the number of element in a linked
 * @h: contain address of node
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
