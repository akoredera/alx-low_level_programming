#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = j; l < 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('1' + l);
					if ((i == 9 && j == 8) && (k == 9 && l == 8))
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
