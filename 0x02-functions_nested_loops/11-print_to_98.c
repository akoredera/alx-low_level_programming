#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - print out number to 98
 * @n: input number to start
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
				printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
				printf("%d, ", n);
		}
	}
}
