#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: address of the first node
 * @index: INDEX OF THE NODE
 * Return: the nth node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int counter;

	temp = head;
	counter = 0;
	while (temp != NULL)
	{
		if ((counter) == index)
		{
			return (temp);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
