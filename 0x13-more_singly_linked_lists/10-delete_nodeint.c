#include "lists.h"
/**
 * delete_nodeint_at_index - delete nth node of a linked list
 * @head: address of the first node
 * @index: INDEX OF THE NODE
 * Return: 1 otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int counter;

	temp = *head;
	counter = 0;
	temp2 = temp;
	while (temp != NULL)
	{
		if (index == 0)
		{
			temp2->next = temp->next;
			*head = (*head)->next;
			free(temp);
			temp = NULL;
			return (1);
		}
		if ((counter) == index)
		{
			temp2->next = temp->next;
			free(temp);
			temp = NULL;
			return (1);
		}
		temp2 = temp;
		temp = temp->next;
		counter++;
	}
	return (-1);
}
