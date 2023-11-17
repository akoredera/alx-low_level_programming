#include "lists.h"
#include <string.h>
/**
 * print_list - prints all the element
 * @h: struct element to print
 * Return: unsigned integer
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
