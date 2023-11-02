#include "string.h"
#include "stdlib.h"
#include <stddef.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number char to concatenate in s2
 * Return: NULL if ptr is NULL; otherwise ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, s1_size;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_size = strlen(s1);
	ptr = malloc(s1_size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_size; i++)
	{
		ptr[i] = s1[i];
	}
	ptr = realloc(ptr, n);
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
