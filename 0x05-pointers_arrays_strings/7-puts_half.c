#include "stdio.h"
#include "string.h"
/**
 * puts_half - print half of the str provided
 * @str: str variable to print half of it
 */
void puts_half(char *str)
{
	unsigned int i;

	for (i = (strlen(str)) / 2; i < strlen(str); i++)
		printf("%c", str[i]);
	printf("\n");
}
