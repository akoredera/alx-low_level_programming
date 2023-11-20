#include "lists.h"
/**
 * print_listint - print list of integer
 * @h: contain address of node
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
