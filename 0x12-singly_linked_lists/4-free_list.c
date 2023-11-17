#include "lists.h"
/**
 * free_list - free_list
 * @head: address value
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(temp);

}
