#include "main.h"
/**
 * is_palindrome - return a string if is palindrome or not
 * @s: string to check
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (comp(s, 0, len(s)));
}
/**
 * len - return len of string
 * @a: string
 * Return: value or 0
 */
int len(char *a)
{
	if (*a == '\0')
		return (0);
	return (1 + len(a + 1));
}
/**
 * comp - return compare value
 * @s: string
 * @i: first integer
 * @len: second integer length
 * Return: 0 or 1
 */
int comp(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (comp(s, i + 1, len - 1));
}
