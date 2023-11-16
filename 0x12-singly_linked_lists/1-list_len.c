#include "lists.h"
#include <string.h>
/**
 * print_list - prints all the element
 * @h: struct element to print
 * Return: unsigned integer
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	unsigned int count = 0;

	if (h == NULL)
		exit(98);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
