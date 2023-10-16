#include "main.h
#include "string.h"
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > 0; i--)
		_putchar(s[i]);
}
