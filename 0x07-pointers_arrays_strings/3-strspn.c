#include <stdlib.h>
#include "string.h"
/**
 * _strspn - length of a prefix substring
 * @s: string to check
 * @accept: the char
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
