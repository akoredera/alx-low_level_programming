#include "lists.h"
/**
 * print_listint - print list of integer
 * @h: contain address of node
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
