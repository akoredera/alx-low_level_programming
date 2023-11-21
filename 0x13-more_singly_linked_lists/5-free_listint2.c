#include "lists.h"
/**
 * free_listint2 - free listint_t list
 * @head: address
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = NULL;
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
