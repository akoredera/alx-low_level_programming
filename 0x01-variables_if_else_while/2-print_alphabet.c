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
	int n;
	char c;

	for (n = 0; n <= 26; n++)
	{
		c = getchar();
		putchar(c);
	}
	putchar('\n');
	return (0);
}
