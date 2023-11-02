#include "string.h"
#include "stdlib.h"
#include <stddef.h>
/**
 * string_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of char to concat
 * Return: NULL if ptr is NULL; otherwise ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size, s1_size, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_size = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
		n = s2_len;
	size = s1_size + n + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_size; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; i++,j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
