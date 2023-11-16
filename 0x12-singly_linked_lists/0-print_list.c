#include "lists.h"
#include <string.h>
/**
 * print_list - prints all the element
 * @h: struct element to print
 * Return: unsigned integer
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("[%u] %s\n", len_str(ptr->str), str_result(ptr->str));
		ptr = ptr->next;
	}
	return (count);
}
/**
 * len_str - return length of str
 * @str: string value
 * Return: success length otherwise 0
 */
unsigned int len_str(char *str)
{
	if (str == NULL)
		return (0);
	return (strlen(str));
}
/**
 * str_result - return string
 * @str: string value
 * Return: (success) str, otherwise nil
 */
char *str_result(char *str)
{
	if (str == NULL)
		return ("(nil)");
	return (str);
}
