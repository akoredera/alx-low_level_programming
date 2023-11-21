#include "lists.h"
/**
 * free_listint2 - free listint_t list
 * @head: address
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	free(*head);
	*head = NULL;
}
