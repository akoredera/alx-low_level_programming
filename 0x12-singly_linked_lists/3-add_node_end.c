#include "lists.h"
/**
 * add_node_end - add node to the end
 * @head: contain pointer address
 * @str: constant string
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *ptr, *temp;

	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (*head);
}
