#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	char letter;

	for (i = 0; i <= 10; i++)
	{
		for (j = i; j < 9; j++)
		{
			putchar('0' + i);
			putchar('1' + j);
			if (i == 8 && j == 8)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
