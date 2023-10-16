#include "main.h"
#include "string.h"
/**
 * print_rev - print string in reverse
 * @s: variable contain value to print
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
