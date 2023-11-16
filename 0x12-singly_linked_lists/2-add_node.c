#include "lists.h"
/**
 * add_node - add node to the beginning
 * @head: contain pointer address
 * @str: constant string
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
