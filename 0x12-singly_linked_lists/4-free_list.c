#include "lists.h"
/**
 * free_list - free_list
 * @head: address value
 */
void free_list(list_t *head)
{
	if (head != NULL)
		free(head);
}
