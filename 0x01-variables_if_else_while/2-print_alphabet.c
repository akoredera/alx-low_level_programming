#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i;
	char c;
	char str[26];

	while ((c = getchar()) != EOF && n < 27)
		str[n++];

	for (i = 0; i <= n; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
