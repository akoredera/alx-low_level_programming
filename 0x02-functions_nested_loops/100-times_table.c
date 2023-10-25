#include "main.h"
#include "stdio.h"

/**
 * times_table - print out multiplication 0 to 9
 */
void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a < n; a++)
	{
		if (n == 0 || n > 15)
			break;
		for (b = 0; b < n; b++)
		{
			c = a * b;
			if (b == n)
				printf("%d\n", c);
			else
				printf("%d,   ",c);
		}
	}
}
