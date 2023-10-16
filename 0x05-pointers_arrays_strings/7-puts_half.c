#include "stdio.h"
/**
 * puts_half - print half of the str provided
 * @str: str variable to print half of it
 */
void puts_half(char *str)
{
	int i;

	for (i = (strlen(str) - 1) / 2; i < strlen(str); i++)
		printf("%d", str[i]);
	printf("\n");
}
