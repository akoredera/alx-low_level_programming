#include "stdio.h"

/**
 * prime_factors - accept a value to find it prime factors
 * a@: value to find it prime factor
 */
void prime_factors(int a)
{
	int b;

	while (a % 2 == 0)
	{
		a = a / 2;
	}

	for (b = 3; b * b <= a; b += 2)
	{
		while (a % b == 0)
		{
			a = a / b;
		}

	}
	printf("%d \n", b);
	if (a > 2)
		printf("%d \n", a);
}

/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	long int n = 612852475143;
	prime_factors(n);
	return (0);
}
