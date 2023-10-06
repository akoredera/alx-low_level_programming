#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 10; i++)
	{
		for (j = i; j < 9; j++)
		{
			for (k = j; k < 8; k++)
			{
				putchar('0' + i);
				putchar('1' + j);
				putchar('2' + k);
				if ((i == 7 && j == 7) && k == 7)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
