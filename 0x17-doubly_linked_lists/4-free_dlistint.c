#include "lists.h"
/**
 * free_dlistint - function frees a dlistint_t list.
 * @head: address
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head;
		head = (head)->next;
		free(ptr);
	}
}
