#include "string.h"
#include "stdlib.h"
#include <stddef.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if ptr is NULL; otherwise ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, size, s1_size, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_size = strlen(s1);
	s2_len = strlen(s2);
	size = s1_size + s2_len + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_size; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
