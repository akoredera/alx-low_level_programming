#include "stdio.h"
#include "string.h"
int _atoi(char *s)
{
	int i, value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		value = value * 10 + (s[i] - 48);
	}
/*	printf("%d", value);*/
	return (value);
}
