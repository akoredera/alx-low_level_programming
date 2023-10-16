#include "stdio.h"
#include "string.h"
/**
 * rev_string - print string in reverse
 * @s: variable contain value to print
 */
void rev_string(char *s)
{
	int i, j;
	char storeChar;

	for (j = strlen(s) - 1, i = 0; i < j; i++, j--)
	{
		storeChar = s[i];
		s[i] = s[j];
		s[j] = storeChar;
	}
}
