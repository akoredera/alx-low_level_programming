#include "stdio.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a == 100)
		{
			if (a % 3 == 0)
			{
				printf("Fizz");
			}
			else if (a % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
