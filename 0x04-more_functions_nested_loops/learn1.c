#include "main.h"
#include "stdio.h"

int main (void)
{
	int a, b, c;

	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			c = a * b;
			printf("%d, ",c);
		}
		printf("\n");
	}

	return (0);
}
