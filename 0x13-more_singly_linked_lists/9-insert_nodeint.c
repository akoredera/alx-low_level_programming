#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of a pointer
 * @idx: the index to add new node
 * @n: new node data
 * Return: new node address otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr, *temp;
	unsigned int counter;

	ptr = malloc(sizeof(listint_t));
	temp = *head;
	counter = 0;
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	while (temp != NULL)
	{
		if (idx == 0)
		{
			ptr->next = temp;
			*head = ptr;
			return (ptr);
		}
		counter++;
		if (counter == idx)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		temp = temp->next;
	}
	return (ptr);
}
